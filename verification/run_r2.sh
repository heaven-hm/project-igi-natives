#!/bin/bash
r2 -q -e bin.relocs.apply=true -e scr.color=0 -c "aaa; aflj" /Users/haseeb-mir/Downloads/IGI/IGI.EXE > afl.json 2>/dev/null
echo "exit=$?"
