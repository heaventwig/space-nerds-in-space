/*
	Copyright (C) 2018 Stephen M. Cameron
	Author: Stephen M. Cameron

	This file is part of Spacenerds In Space.

	Spacenerds in Space is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Spacenerds in Space is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Spacenerds in Space; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include <stdio.h>
#include <stdlib.h>

#include "corporations.h"
#include "arraysize.h"

struct corporation {
	char *name;
	char *type;
};

static struct corporation corp[] = {
	{ "GALACTIC JURISBOTICS INC", "LAW ENFORCEMENT", },

	{ "GALACTIC ASTRONAUTICS", "SPACECRAFT MANUFACTURER", },
	{ "HEAVYTHRUST PROPULSION", "SPACECRAFT MANUFACTURER", },
	{ "CORONA PROPULSION", "SPACECRAFT MANUFACTURER", },
	{ "HEAVISIDE NUCLEAR", "SPACECRAFT MANUFACTURER", },
	{ "MACDUGLASS DONALD", "SPACECRAFT MANUFACTURER" },
	{ "ZENABI SPACECRAFT", "SPACECRAFT MANUFACTURER" },
#define NUM_SPACECRAFT_MANUFACTURERS 6

	{ "DIAMONDFIRE MINING CORPORATION", "MINERAL EXTRACTION AND PROCESSING"},
	{ "CYGNUS EXPLORATION INC", "MINERAL EXTRACTION AND PROCESSING"},
	{ "ASTERION FREIGHT INC", "SHIPPING"},
	{ "ENERGIA INTERGALACTICA", "MINERAL EXTRACTION AND PROCESSING"},
	{ "LIGHTSPEED HEAVY TRANSPORT", "SHIPPING"},
	{ "OUTSPACE COLONIAL", "REAL ESTATE BROKER"},
	{ "NORTHERN PANCAKES", "PANCAKE COMPANY"},
	{ "MIFFLER DUNDIN", "PAPER GOODS"},
	{ "INCOGNITRO BLASTING", "MINERAL EXTRACTION AND PROCESSING"},
	{ "FARGONE HOTSIDE SALVAGE", "SALVAGE"},
	{ "FALCON SHIPPING", "SHIPPING"},
	{ "RIPLEY'S PEST CONTROL", "PEST CONTROL"},
	{ "PEGASI HEAVY INDUSTRIES", "CONSTRUCTION", },
	{ "SPUCHS LLC", "INFORMATION BROKERAGE", },
	{ "KATON VORNADICO", "MUNITIONS AND ARMAMENTS", },
	{ "KORO LARRY AND PHOR-MOOLA", "APPLIED MATHEMATICS", },
	{ "SCHUTAM ANTIETAM", "HUNTING FISHING AND SPORTING GOODS", },
	{ "TASTY VICTUALS", "GROCERS AND DELI", },
	{ "SIRIUS EATS", "SIRIUS STYLE FOOD SHIP", },
	{ "DENEB DISTILLING", "DISTILLERY", },
	{ "ZARON WHISKEY", "DISTILLERY", },
	{ "VEGA TEXTILES", "TEXTILES", },
	{ "KHRONOSTRA TIME MACHINES", "TEMPORAL ANOMALY CONTROLLERS AND WRISTWATCHES", },
	{ "KURBO BONZA", "TOWEL MANUFACTURER", },
	{ "NORKALBA YARIA", "PLANETARY CLIMATE STABILIZERS AND CONDITIONERS", },
	{ "CYBERTRONICAL GIZMOBIONICAL", "SUBHARMONIC TRAUMAPHONE MANUFACTURER" },
	{ "LIGHTSPEED DREAMLINE", "PASSENGER SPACELINE" },
	{ "OUTER RIM SPACEFLIGHT", "PASSENGER SPACELINE" },
	{ "PANGALACTIC SPACELINES", "PASSENGER SPACELINE" },
	{ "SPACEWARD INTERGALACTIC", "PASSENGER SPACELINE" },
	{ "TRANSGALACTIC HYPERSPEED", "PASSENGER SPACELINE" },
	{ "FAITH INC", "SELF REPLICATING AUTOMATIC BELIEVING MACHINES", },
	{ "APPLIED TECTONICS", "TERRAFORMING", },
	{ "SKEETERS SPACESHIP REPAIR", "SPACECRAFT REPAIR", },
	{ "MARTIAL AMPLIFICATION", "MUSICAL WEAPONS AND BAGPIPE MANUFACTURER", },
	{ "BANANA", "COMPUTER AND COMMUNICATIONS SYSTEM MANUFACTURER", },
	{ "BIGNUM", "INFORMATION BROKER AND COMPUTATIONAL SERVICES", },
	{ "KUBEFACE", "INFORMATION BROKER AND COMPUTATIONAL SERVICES", },
	{ "NANOWAREZ INC", "INFORMATION BROKER AND COMPUTATIONAL SERVICES", },
	{ "GURUBOT", "INFORMATION BROKER AND COMPUTATIONAL SERVICES", },
	{ "I CAN'T BELIEVE IT'S NOT BURGER", "ARTIFICIAL MEAT MANUFACTURER", },
	{ "URSA MAJOR FURS AND HIDES", "TRAPPER AND FURRIER", },
	{ "PLEIADES SPICE", "PURVEYOR OF FINE SPICES", },
	{ "OMEGA NEBULA CONSTRUCTION", "CONSTRUCTION", },
	{ "ORION ONION", "VEGETABLES", },
};

int ncorporations(void)
{
	return ARRAYSIZE(corp);
}

const char *corporation_get_name(int i)
{
	if (i < 0 || (size_t) i >= ARRAYSIZE(corp))
		return NULL;
	return corp[i].name;
}

int num_spacecraft_manufacturers(void)
{
	return NUM_SPACECRAFT_MANUFACTURERS;
}
