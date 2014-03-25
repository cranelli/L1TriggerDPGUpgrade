#!/bin/bash
# Here we check out any dependencies we need for the package itself
pushd $CMSSW_BASE/src

git cms-addpkg CommonTools/Utils

#cvs co -rV-1-07-05 CommonTools/Utils
popd
