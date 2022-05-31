/*
 * drivers/video/tegra/host/gk20a/hw_pri_ringstation_fbp_gk20a.h
 *
 * Copyright (c) 2012-2013, NVIDIA Corporation. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

 /*
  * Function naming determines intended use:
  *
  *     <x>_r(void) : Returns the offset for register <x>.
  *
  *     <x>_w(void) : Returns the word offset for word (4 byte) element <x>.
  *
  *     <x>_<y>_s(void) : Returns size of field <y> of register <x> in bits.
  *
  *     <x>_<y>_f(u32 v) : Returns a value based on 'v' which has been shifted
  *         and masked to place it at field <y> of register <x>.  This value
  *         can be |'d with others to produce a full register value for
  *         register <x>.
  *
  *     <x>_<y>_m(void) : Returns a mask for field <y> of register <x>.  This
  *         value can be ~'d and then &'d to clear the value of field <y> for
  *         register <x>.
  *
  *     <x>_<y>_<z>_f(void) : Returns the constant value <z> after being shifted
  *         to place it at field <y> of register <x>.  This value can be |'d
  *         with others to produce a full register value for <x>.
  *
  *     <x>_<y>_v(u32 r) : Returns the value of field <y> from a full register
  *         <x> value 'r' after being shifted to place its LSB at bit 0.
  *         This value is suitable for direct comparison with other unshifted
  *         values appropriate for use in field <y> of register <x>.
  *
  *     <x>_<y>_<z>_v(void) : Returns the constant value for <z> defined for
  *         field <y> of register <x>.  This value is suitable for direct
  *         comparison with unshifted values appropriate for use in field <y>
  *         of register <x>.
  */

#ifndef __hw_pri_ringstation_fbp_gk20a_h__
#define __hw_pri_ringstation_fbp_gk20a_h__
/*This file is autogenerated.  Do not edit. */

static inline u32 pri_ringstation_fbp_master_config_r(u32 i)
{
	return 0x00124300+((i)*4);
}
static inline u32 pri_ringstation_fbp_master_config__size_1_v(void)
{
	return 64;
}
static inline u32 pri_ringstation_fbp_master_config_timeout_s(void)
{
	return 18;
}
static inline u32 pri_ringstation_fbp_master_config_timeout_f(u32 v)
{
	return (v & 0x3ffff) << 0;
}
static inline u32 pri_ringstation_fbp_master_config_timeout_m(void)
{
	return 0x3ffff << 0;
}
static inline u32 pri_ringstation_fbp_master_config_timeout_v(u32 r)
{
	return (r >> 0) & 0x3ffff;
}
static inline u32 pri_ringstation_fbp_master_config_timeout_i_v(void)
{
	return 0x00000064;
}
static inline u32 pri_ringstation_fbp_master_config_timeout_i_f(void)
{
	return 0x64;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_s(void)
{
	return 1;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_f(u32 v)
{
	return (v & 0x1) << 30;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_m(void)
{
	return 0x1 << 30;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_v(u32 r)
{
	return (r >> 30) & 0x1;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_error_v(void)
{
	return 0x00000000;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_error_f(void)
{
	return 0x0;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_soldier_on_v(void)
{
	return 0x00000001;
}
static inline u32 pri_ringstation_fbp_master_config_fs_action_soldier_on_f(void)
{
	return 0x40000000;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_s(void)
{
	return 1;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_m(void)
{
	return 0x1 << 31;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_error_v(void)
{
	return 0x00000000;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_error_f(void)
{
	return 0x0;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_soldier_on_v(void)
{
	return 0x00000001;
}
static inline u32 pri_ringstation_fbp_master_config_reset_action_soldier_on_f(void)
{
	return 0x80000000;
}
static inline u32 pri_ringstation_fbp_master_config_setup_clocks_s(void)
{
	return 3;
}
static inline u32 pri_ringstation_fbp_master_config_setup_clocks_f(u32 v)
{
	return (v & 0x7) << 20;
}
static inline u32 pri_ringstation_fbp_master_config_setup_clocks_m(void)
{
	return 0x7 << 20;
}
static inline u32 pri_ringstation_fbp_master_config_setup_clocks_v(u32 r)
{
	return (r >> 20) & 0x7;
}
static inline u32 pri_ringstation_fbp_master_config_setup_clocks_i_v(void)
{
	return 0x00000000;
}
static inline u32 pri_ringstation_fbp_master_config_setup_clocks_i_f(void)
{
	return 0x0;
}
static inline u32 pri_ringstation_fbp_master_config_wait_clocks_s(void)
{
	return 3;
}
static inline u32 pri_ringstation_fbp_master_config_wait_clocks_f(u32 v)
{
	return (v & 0x7) << 24;
}
static inline u32 pri_ringstation_fbp_master_config_wait_clocks_m(void)
{
	return 0x7 << 24;
}
static inline u32 pri_ringstation_fbp_master_config_wait_clocks_v(u32 r)
{
	return (r >> 24) & 0x7;
}
static inline u32 pri_ringstation_fbp_master_config_wait_clocks_i_v(void)
{
	return 0x00000000;
}
static inline u32 pri_ringstation_fbp_master_config_wait_clocks_i_f(void)
{
	return 0x0;
}
static inline u32 pri_ringstation_fbp_master_config_hold_clocks_s(void)
{
	return 3;
}
static inline u32 pri_ringstation_fbp_master_config_hold_clocks_f(u32 v)
{
	return (v & 0x7) << 27;
}
static inline u32 pri_ringstation_fbp_master_config_hold_clocks_m(void)
{
	return 0x7 << 27;
}
static inline u32 pri_ringstation_fbp_master_config_hold_clocks_v(u32 r)
{
	return (r >> 27) & 0x7;
}
static inline u32 pri_ringstation_fbp_master_config_hold_clocks_i_v(void)
{
	return 0x00000000;
}
static inline u32 pri_ringstation_fbp_master_config_hold_clocks_i_f(void)
{
	return 0x0;
}

#endif /* __hw_pri_ringstation_fbp_gk20a_h__ */
