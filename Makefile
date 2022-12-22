#*******************************************************************
#		Makefile For Application
#
#			bomberman 64
#
#
#
#******************************************************************

# @head -n 21 $(TOTAL_PROG_SVG) | tail -n 1 | head -c -8 | tail -c +32 | xargs -i sed -i "/# banjo*/c\# banjo ({})" $(README)
# @touch $(README_TEMP)

README_TEMP  :=  README.md
TOTAL_PROG_SVG	:=  progress/progress_total.svg

 writemd:
	@head -n 21 $(TOTAL_PROG_SVG) | tail -n 1 | head -c -8 | tail -c +32 | xargs -i sed -i "/# Bomberman64*/c\# Bomberman64 ({})" $(README_TEMP)
	
	
 	

 

### Settings
.SECONDARY:
## .PHONY: all clean default
SHELL = /bin/bash -e -o pipefail
