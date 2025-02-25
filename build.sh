#!/bin/bash

ShowError() {
  code="$1"
  msg="${*:2}"
  printf "\033[1;31m[ ERROR ]:\033[91m $msg\033[0m\n"
  exit "$code"
}

InvalidDataErrorExit=1
CompilationCppErrorExit=2
LinkingErrorExit=3
ErrorExit=4

SRC="src"
OBJECTS="objects"
OUT="bin/flow.elf"

mkdir -p bin || ShowError $ErrorExit "There was a problem while creating the bin directory"

CXX="g++"
CXXFLAGS="-Wall -Wextra -std=c++17 -I$(readlink -f Include/) -c"
echo "CXXFLAGS: $CXXFLAGS"

if [ ! -d "$SRC" ]; then
    ShowError $InvalidDataErrorExit "Can't find the src directory, you are probably running this script from the wrong place, go to the root directory where you have betterFlowPU and run ./build.sh"
fi

mkdir -p "$OBJECTS" || ShowError $ErrorExit "There was a problem while creating the objects directory"

mapfile -t files < <(find "$SRC" -name "*.cpp")

for f in "${files[@]}"; do
    g++ $CXXFLAGS -c "$f" -o "$OBJECTS/$(basename "${f%.cpp}.o")" || ShowError $CompilationCppErrorExit "There was a problem while compiling file $f!"
done

$CXX "$OBJECTS"/*.o -o "$OUT" || ShowError $LinkingErrorExit "There was a problem when linking objects"