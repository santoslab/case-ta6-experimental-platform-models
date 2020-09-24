#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd ${SCRIPT_HOME}
mkdir -p macOS-build
mkdir -p ${SCRIPT_HOME}/../src/c/nix/macOS-build
cd ${SCRIPT_HOME}/../src/c/nix/macOS-build
cmake -DCMAKE_BUILD_TYPE=Release ..
make $MAKE_ARGS
mv *_App ${SCRIPT_HOME}/macOS-build/

mv Main ${SCRIPT_HOME}/macOS-build/