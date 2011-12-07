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
# $Revision: 1.2 $
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

TEXTURES = \
	Album1.pvr \
	Album2.pvr \
	Album3.pvr \
	Album4.pvr \
	Album5.pvr \
	Album6.pvr \
	Album7.pvr \
	Album8.pvr \
	Album9.pvr \
	Album10.pvr \
	Album11.pvr \
	Album12.pvr \
	Album13.pvr \
	Album14.pvr \
	Album15.pvr \
	Album16.pvr

	

RESOURCES = \
	$(CONTENTDIR)/Album1.cpp \
	$(CONTENTDIR)/Album2.cpp \
	$(CONTENTDIR)/Album3.cpp \
	$(CONTENTDIR)/Album4.cpp \
	$(CONTENTDIR)/Album5.cpp \
	$(CONTENTDIR)/Album6.cpp \
	$(CONTENTDIR)/Album7.cpp \
	$(CONTENTDIR)/Album8.cpp \
	$(CONTENTDIR)/Album9.cpp \
	$(CONTENTDIR)/Album10.cpp \
	$(CONTENTDIR)/Album11.cpp \
	$(CONTENTDIR)/Album12.cpp \
	$(CONTENTDIR)/Album13.cpp \
	$(CONTENTDIR)/Album14.cpp \
	$(CONTENTDIR)/Album15.cpp \
	$(CONTENTDIR)/Album16.cpp

all: resources 
	
help:
	@echo Valid targets are:
	@echo resources, textures, binary_shaders, clean
	@echo PVRTEXTOOL, FILEWRAP and VGPCOMPILER can be used to override the 
	@echo default paths to these utilities.

clean:
	-rm $(TEXTURES)
	-rm $(RESOURCES)
	
	
resources: 		$(CONTENTDIR) $(RESOURCES)
textures: 		$(TEXTURES)


$(CONTENTDIR):
	-mkdir $@

############################################################################
# Create textures
############################################################################

Album1.pvr: $(MEDIAPATH)/Album1.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album1.png -o$@

Album2.pvr: $(MEDIAPATH)/Album2.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album2.png -o$@

Album3.pvr: $(MEDIAPATH)/Album3.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album3.png -o$@

Album4.pvr: $(MEDIAPATH)/Album4.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album4.png -o$@

Album5.pvr: $(MEDIAPATH)/Album5.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album5.png -o$@

Album6.pvr: $(MEDIAPATH)/Album6.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album6.png -o$@

Album7.pvr: $(MEDIAPATH)/Album7.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album7.png -o$@

Album8.pvr: $(MEDIAPATH)/Album8.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album8.png -o$@

Album9.pvr: $(MEDIAPATH)/Album9.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album9.png -o$@

Album10.pvr: $(MEDIAPATH)/Album10.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album10.png -o$@

Album11.pvr: $(MEDIAPATH)/Album11.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album11.png -o$@

Album12.pvr: $(MEDIAPATH)/Album12.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album12.png -o$@

Album13.pvr: $(MEDIAPATH)/Album13.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album13.png -o$@

Album14.pvr: $(MEDIAPATH)/Album14.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album14.png -o$@

Album15.pvr: $(MEDIAPATH)/Album15.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album15.png -o$@

Album16.pvr: $(MEDIAPATH)/Album16.png
	$(PVRTEXTOOL) -m -fOGLPVRTC4 -i$(MEDIAPATH)/Album16.png -o$@

############################################################################
# Create content files
############################################################################

$(CONTENTDIR)/Album1.cpp: Album1.pvr
	$(FILEWRAP)  -o $@ Album1.pvr

$(CONTENTDIR)/Album2.cpp: Album2.pvr
	$(FILEWRAP)  -o $@ Album2.pvr

$(CONTENTDIR)/Album3.cpp: Album3.pvr
	$(FILEWRAP)  -o $@ Album3.pvr

$(CONTENTDIR)/Album4.cpp: Album4.pvr
	$(FILEWRAP)  -o $@ Album4.pvr

$(CONTENTDIR)/Album5.cpp: Album5.pvr
	$(FILEWRAP)  -o $@ Album5.pvr

$(CONTENTDIR)/Album6.cpp: Album6.pvr
	$(FILEWRAP)  -o $@ Album6.pvr

$(CONTENTDIR)/Album7.cpp: Album7.pvr
	$(FILEWRAP)  -o $@ Album7.pvr

$(CONTENTDIR)/Album8.cpp: Album8.pvr
	$(FILEWRAP)  -o $@ Album8.pvr

$(CONTENTDIR)/Album9.cpp: Album9.pvr
	$(FILEWRAP)  -o $@ Album9.pvr

$(CONTENTDIR)/Album10.cpp: Album10.pvr
	$(FILEWRAP)  -o $@ Album10.pvr

$(CONTENTDIR)/Album11.cpp: Album11.pvr
	$(FILEWRAP)  -o $@ Album11.pvr

$(CONTENTDIR)/Album12.cpp: Album12.pvr
	$(FILEWRAP)  -o $@ Album12.pvr

$(CONTENTDIR)/Album13.cpp: Album13.pvr
	$(FILEWRAP)  -o $@ Album13.pvr

$(CONTENTDIR)/Album14.cpp: Album14.pvr
	$(FILEWRAP)  -o $@ Album14.pvr

$(CONTENTDIR)/Album15.cpp: Album15.pvr
	$(FILEWRAP)  -o $@ Album15.pvr

$(CONTENTDIR)/Album16.cpp: Album16.pvr
	$(FILEWRAP)  -o $@ Album16.pvr


############################################################################
# End of file (content.mak)
############################################################################
