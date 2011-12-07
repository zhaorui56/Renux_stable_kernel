#--------------------------------------------------------------------------
# Name         : content.mak
# Title        : Makefile to build content files
# Author       : Auto-generated
#
# Copyright    : 2007 by Imagination Technologies.  All rights reserved.
#              : No part of this software, either material or conceptual 
#              : may be copied or distributed, transmitted, transcribed,
#              : stored in a retrieval system or translated into any 
#              : human or computer language in any form by any means,
#              : electronic, mechanical, manual or other-wise, or 
#              : disclosed to third parties without the express written
#              : permission of VideoLogic Limited, Unit 8, HomePark
#              : Industrial Estate, King's Langley, Hertfordshire,
#              : WD4 8LZ, U.K.
#
# Description  : Makefile to build content files for demos in the PowerVR SDK
#
# Platform     :
#
# $Revision: 1.3 $
#--------------------------------------------------------------------------

#############################################################################
## Variables
#############################################################################

PVRTEXTOOL 	= ..\..\..\Utilities\PVRTexTool\PVRTexToolCL\Win32\PVRTexTool.exe
FILEWRAP 	= ..\..\..\Utilities\Filewrap\Win32\Filewrap.exe

MEDIAPATH = ../Media
CONTENTDIR = Content

#############################################################################
## Instructions
#############################################################################

RESOURCES = \
	$(CONTENTDIR)/Font.cpp \
	$(CONTENTDIR)/ImageFont.cpp

TEXTURES = \
	ImageFont.pvr

all: resources textures
	
help:
	@echo Valid targets are:
	@echo resources, textures, clean
	@echo FILEWRAP and PVRTEXTOOL can be used to override the 
	@echo default paths to these utilities.

clean:
	-rm $(RESOURCES)
	
resources: 		$(CONTENTDIR) $(RESOURCES)
textures: 		$(TEXTURES)


$(CONTENTDIR):
	-mkdir $@

############################################################################
# Create textures
############################################################################

ImageFont.pvr: $(MEDIAPATH)/ImageFont.bmp
	$(PVRTEXTOOL) -nt -fOVG_A_8 -i$(MEDIAPATH)/ImageFont.bmp -o$@

############################################################################
# Create content files
############################################################################

$(CONTENTDIR)/Font.cpp: Font.pvg
	$(FILEWRAP)  -o $@ Font.pvg

$(CONTENTDIR)/ImageFont.cpp: ImageFont.pvr
	$(FILEWRAP)  -o $@ ImageFont.pvr

############################################################################
# End of file (content.mak)
############################################################################