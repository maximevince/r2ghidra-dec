/* radare - LGPL - Copyright 2019 - thestr4ng3r */

#ifndef R2GHIDRA_R2LOADIMAGE_H
#define R2GHIDRA_R2LOADIMAGE_H

#include "loadimage.hh"

#include <r_core.h>

class R2LoadImage : public LoadImage
{
	private:
		RCore *core;

	public:
		explicit R2LoadImage(RCore *core);

		void loadFill(uint1 *ptr, int4 size, const Address &addr) override;
		string getArchType() const override;
		void adjustVma(long adjust) override;
};

#endif //R2GHIDRA_R2LOADIMAGE_H