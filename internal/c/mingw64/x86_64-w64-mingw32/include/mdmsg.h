/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _MDMSG_H_
#define _MDMSG_H_

#define MD_ERROR_NOT_INITIALIZED __MSABI_LONG(0x800CC800)
#define MD_ERROR_DATA_NOT_FOUND __MSABI_LONG(0x800CC801)
#define MD_ERROR_INVALID_VERSION __MSABI_LONG(0x800CC802)

#define MD_WARNING_PATH_NOT_FOUND __MSABI_LONG(0x000CC803)
#define MD_WARNING_DUP_NAME __MSABI_LONG(0x000CC804)
#define MD_WARNING_INVALID_DATA __MSABI_LONG(0x000CC805)

#define MD_ERROR_SECURE_CHANNEL_FAILURE __MSABI_LONG(0x800CC806)

#define MD_WARNING_PATH_NOT_INSERTED __MSABI_LONG(0x000CC807)

#define MD_ERROR_CANNOT_REMOVE_SECURE_ATTRIBUTE __MSABI_LONG(0x800CC808)

#define MD_WARNING_SAVE_FAILED __MSABI_LONG(0x000CC809)

#define MD_ERROR_IISAO_INVALID_SCHEMA __MSABI_LONG(0x800CC810)
#define MD_ERROR_READ_METABASE_FILE __MSABI_LONG(0x800CC819)
#define MD_ERROR_NO_SESSION_KEY __MSABI_LONG(0x800CC81D)

#endif