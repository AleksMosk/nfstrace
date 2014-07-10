//------------------------------------------------------------------------------
// Author: Alexey Costroma
// Description: All RFC3530 declared structures.
// Copyright (c) 2014 EPAM Systems
//------------------------------------------------------------------------------
/*
    This file is part of Nfstrace.

    Nfstrace is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, version 2 of the License.

    Nfstrace is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Nfstrace.  If not, see <http://www.gnu.org/licenses/>.
*/
//------------------------------------------------------------------------------
#ifndef NFS4_TYPES_RPCGEN_H
#define NFS4_TYPES_RPCGEN_H
//------------------------------------------------------------------------------
#include <rpc/rpc.h>
//------------------------------------------------------------------------------
namespace rpcgen
{

extern "C" {

#define RPCSEC_GSS 6
/* rm
#define FALSE 0
#define TRUE 1
*/

typedef int int32_t;

typedef u_int uint32_t;

typedef quad_t int64_t;

typedef u_quad_t uint64_t;
#define NFS4_FHSIZE 128
#define NFS4_VERIFIER_SIZE 8
#define NFS4_OPAQUE_LIMIT 1024

enum nfs_ftype4 {
	NF4REG = 1,
	NF4DIR = 2,
	NF4BLK = 3,
	NF4CHR = 4,
	NF4LNK = 5,
	NF4SOCK = 6,
	NF4FIFO = 7,
	NF4ATTRDIR = 8,
	NF4NAMEDATTR = 9,
};
typedef enum nfs_ftype4 nfs_ftype4;

enum nfsstat4 {
	NFS4_OK = 0,
	NFS4ERR_PERM = 1,
	NFS4ERR_NOENT = 2,
	NFS4ERR_IO = 5,
	NFS4ERR_NXIO = 6,
	NFS4ERR_ACCESS = 13,
	NFS4ERR_EXIST = 17,
	NFS4ERR_XDEV = 18,
	NFS4ERR_NOTDIR = 20,
	NFS4ERR_ISDIR = 21,
	NFS4ERR_INVAL = 22,
	NFS4ERR_FBIG = 27,
	NFS4ERR_NOSPC = 28,
	NFS4ERR_ROFS = 30,
	NFS4ERR_MLINK = 31,
	NFS4ERR_NAMETOOLONG = 63,
	NFS4ERR_NOTEMPTY = 66,
	NFS4ERR_DQUOT = 69,
	NFS4ERR_STALE = 70,
	NFS4ERR_BADHANDLE = 10001,
	NFS4ERR_BAD_COOKIE = 10003,
	NFS4ERR_NOTSUPP = 10004,
	NFS4ERR_TOOSMALL = 10005,
	NFS4ERR_SERVERFAULT = 10006,
	NFS4ERR_BADTYPE = 10007,
	NFS4ERR_DELAY = 10008,
	NFS4ERR_SAME = 10009,
	NFS4ERR_DENIED = 10010,
	NFS4ERR_EXPIRED = 10011,
	NFS4ERR_LOCKED = 10012,
	NFS4ERR_GRACE = 10013,
	NFS4ERR_FHEXPIRED = 10014,
	NFS4ERR_SHARE_DENIED = 10015,
	NFS4ERR_WRONGSEC = 10016,
	NFS4ERR_CLID_INUSE = 10017,
	NFS4ERR_RESOURCE = 10018,
	NFS4ERR_MOVED = 10019,
	NFS4ERR_NOFILEHANDLE = 10020,
	NFS4ERR_MINOR_VERS_MISMATCH = 10021,
	NFS4ERR_STALE_CLIENTID = 10022,
	NFS4ERR_STALE_STATEID = 10023,
	NFS4ERR_OLD_STATEID = 10024,
	NFS4ERR_BAD_STATEID = 10025,
	NFS4ERR_BAD_SEQID = 10026,
	NFS4ERR_NOT_SAME = 10027,
	NFS4ERR_LOCK_RANGE = 10028,
	NFS4ERR_SYMLINK = 10029,
	NFS4ERR_RESTOREFH = 10030,
	NFS4ERR_LEASE_MOVED = 10031,
	NFS4ERR_ATTRNOTSUPP = 10032,
	NFS4ERR_NO_GRACE = 10033,
	NFS4ERR_RECLAIM_BAD = 10034,
	NFS4ERR_RECLAIM_CONFLICT = 10035,
	NFS4ERR_BADXDR = 10036,
	NFS4ERR_LOCKS_HELD = 10037,
	NFS4ERR_OPENMODE = 10038,
	NFS4ERR_BADOWNER = 10039,
	NFS4ERR_BADCHAR = 10040,
	NFS4ERR_BADNAME = 10041,
	NFS4ERR_BAD_RANGE = 10042,
	NFS4ERR_LOCK_NOTSUPP = 10043,
	NFS4ERR_OP_ILLEGAL = 10044,
	NFS4ERR_DEADLOCK = 10045,
	NFS4ERR_FILE_OPEN = 10046,
	NFS4ERR_ADMIN_REVOKED = 10047,
	NFS4ERR_CB_PATH_DOWN = 10048,
};
typedef enum nfsstat4 nfsstat4;

typedef struct {
	u_int bitmap4_len;
	uint32_t *bitmap4_val;
} bitmap4;

typedef uint64_t offset4;

typedef uint32_t count4;

typedef uint64_t length4;

typedef uint64_t clientid4;

typedef uint32_t seqid4;

typedef struct {
	u_int utf8string_len;
	char *utf8string_val;
} utf8string;

typedef utf8string utf8str_cis;

typedef utf8string utf8str_cs;

typedef utf8string utf8str_mixed;

typedef utf8str_cs component4;

typedef struct {
	u_int pathname4_len;
	component4 *pathname4_val;
} pathname4;

typedef uint64_t nfs_lockid4;

typedef uint64_t nfs_cookie4;

typedef utf8str_cs linktext4;

typedef struct {
	u_int sec_oid4_len;
	char *sec_oid4_val;
} sec_oid4;

typedef uint32_t qop4;

typedef uint32_t mode4;

typedef uint64_t changeid4;

typedef char verifier4[NFS4_VERIFIER_SIZE];

struct nfstime4 {
	int64_t seconds;
	uint32_t nseconds;
};
typedef struct nfstime4 nfstime4;

enum time_how4 {
	SET_TO_SERVER_TIME4 = 0,
	SET_TO_CLIENT_TIME4 = 1,
};
typedef enum time_how4 time_how4;

struct settime4 {
	time_how4 set_it;
	union {
		nfstime4 time;
	} settime4_u;
};
typedef struct settime4 settime4;

typedef struct {
	u_int nfs_fh4_len;
	char *nfs_fh4_val;
} nfs_fh4;

struct fsid4 {
	uint64_t major;
	uint64_t minor;
};
typedef struct fsid4 fsid4;

struct fs_location4 {
	struct {
		u_int server_len;
		utf8str_cis *server_val;
	} server;
	pathname4 rootpath;
};
typedef struct fs_location4 fs_location4;

struct fs_locations4 {
	pathname4 fs_root;
	struct {
		u_int locations_len;
		fs_location4 *locations_val;
	} locations;
};
typedef struct fs_locations4 fs_locations4;
#define ACL4_SUPPORT_ALLOW_ACL 0x00000001
#define ACL4_SUPPORT_DENY_ACL 0x00000002
#define ACL4_SUPPORT_AUDIT_ACL 0x00000004
#define ACL4_SUPPORT_ALARM_ACL 0x00000008

typedef uint32_t acetype4;
#define ACE4_ACCESS_ALLOWED_ACE_TYPE 0x00000000
#define ACE4_ACCESS_DENIED_ACE_TYPE 0x00000001
#define ACE4_SYSTEM_AUDIT_ACE_TYPE 0x00000002
#define ACE4_SYSTEM_ALARM_ACE_TYPE 0x00000003

typedef uint32_t aceflag4;
#define ACE4_FILE_INHERIT_ACE 0x00000001
#define ACE4_DIRECTORY_INHERIT_ACE 0x00000002
#define ACE4_NO_PROPAGATE_INHERIT_ACE 0x00000004
#define ACE4_INHERIT_ONLY_ACE 0x00000008
#define ACE4_SUCCESSFUL_ACCESS_ACE_FLAG 0x00000010
#define ACE4_FAILED_ACCESS_ACE_FLAG 0x00000020
#define ACE4_IDENTIFIER_GROUP 0x00000040

typedef uint32_t acemask4;
#define ACE4_READ_DATA 0x00000001
#define ACE4_LIST_DIRECTORY 0x00000001
#define ACE4_WRITE_DATA 0x00000002
#define ACE4_ADD_FILE 0x00000002
#define ACE4_APPEND_DATA 0x00000004
#define ACE4_ADD_SUBDIRECTORY 0x00000004
#define ACE4_READ_NAMED_ATTRS 0x00000008
#define ACE4_WRITE_NAMED_ATTRS 0x00000010
#define ACE4_EXECUTE 0x00000020
#define ACE4_DELETE_CHILD 0x00000040
#define ACE4_READ_ATTRIBUTES 0x00000080
#define ACE4_WRITE_ATTRIBUTES 0x00000100
#define ACE4_DELETE 0x00010000
#define ACE4_READ_ACL 0x00020000
#define ACE4_WRITE_ACL 0x00040000
#define ACE4_WRITE_OWNER 0x00080000
#define ACE4_SYNCHRONIZE 0x00100000
#define ACE4_GENERIC_READ 0x00120081
#define ACE4_GENERIC_WRITE 0x00160106
#define ACE4_GENERIC_EXECUTE 0x001200A0

struct nfsace4 {
	acetype4 type;
	aceflag4 flag;
	acemask4 access_mask;
	utf8str_mixed who;
};
typedef struct nfsace4 nfsace4;
#define MODE4_SUID 0x800
#define MODE4_SGID 0x400
#define MODE4_SVTX 0x200
#define MODE4_RUSR 0x100
#define MODE4_WUSR 0x080
#define MODE4_XUSR 0x040
#define MODE4_RGRP 0x020
#define MODE4_WGRP 0x010
#define MODE4_XGRP 0x008
#define MODE4_ROTH 0x004
#define MODE4_WOTH 0x002
#define MODE4_XOTH 0x001

struct specdata4 {
	uint32_t specdata1;
	uint32_t specdata2;
};
typedef struct specdata4 specdata4;
#define FH4_PERSISTENT 0x00000000
#define FH4_NOEXPIRE_WITH_OPEN 0x00000001
#define FH4_VOLATILE_ANY 0x00000002
#define FH4_VOL_MIGRATION 0x00000004
#define FH4_VOL_RENAME 0x00000008

typedef bitmap4 fattr4_supported_attrs;

typedef nfs_ftype4 fattr4_type;

typedef uint32_t fattr4_fh_expire_type;

typedef changeid4 fattr4_change;

typedef uint64_t fattr4_size;

typedef bool_t fattr4_link_support;

typedef bool_t fattr4_symlink_support;

typedef bool_t fattr4_named_attr;

typedef fsid4 fattr4_fsid;

typedef bool_t fattr4_unique_handles;

typedef uint32_t fattr4_lease_time;

typedef nfsstat4 fattr4_rdattr_error;

typedef struct {
	u_int fattr4_acl_len;
	nfsace4 *fattr4_acl_val;
} fattr4_acl;

typedef uint32_t fattr4_aclsupport;

typedef bool_t fattr4_archive;

typedef bool_t fattr4_cansettime;

typedef bool_t fattr4_case_insensitive;

typedef bool_t fattr4_case_preserving;

typedef bool_t fattr4_chown_restricted;

typedef uint64_t fattr4_fileid;

typedef uint64_t fattr4_files_avail;

typedef nfs_fh4 fattr4_filehandle;

typedef uint64_t fattr4_files_free;

typedef uint64_t fattr4_files_total;

typedef fs_locations4 fattr4_fs_locations;

typedef bool_t fattr4_hidden;

typedef bool_t fattr4_homogeneous;

typedef uint64_t fattr4_maxfilesize;

typedef uint32_t fattr4_maxlink;

typedef uint32_t fattr4_maxname;

typedef uint64_t fattr4_maxread;

typedef uint64_t fattr4_maxwrite;

typedef utf8str_cs fattr4_mimetype;

typedef mode4 fattr4_mode;

typedef uint64_t fattr4_mounted_on_fileid;

typedef bool_t fattr4_no_trunc;

typedef uint32_t fattr4_numlinks;

typedef utf8str_mixed fattr4_owner;

typedef utf8str_mixed fattr4_owner_group;

typedef uint64_t fattr4_quota_avail_hard;

typedef uint64_t fattr4_quota_avail_soft;

typedef uint64_t fattr4_quota_used;

typedef specdata4 fattr4_rawdev;

typedef uint64_t fattr4_space_avail;

typedef uint64_t fattr4_space_free;

typedef uint64_t fattr4_space_total;

typedef uint64_t fattr4_space_used;

typedef bool_t fattr4_system;

typedef nfstime4 fattr4_time_access;

typedef settime4 fattr4_time_access_set;

typedef nfstime4 fattr4_time_backup;

typedef nfstime4 fattr4_time_create;

typedef nfstime4 fattr4_time_delta;

typedef nfstime4 fattr4_time_metadata;

typedef nfstime4 fattr4_time_modify;

typedef settime4 fattr4_time_modify_set;
#define FATTR4_SUPPORTED_ATTRS 0
#define FATTR4_TYPE 1
#define FATTR4_FH_EXPIRE_TYPE 2
#define FATTR4_CHANGE 3
#define FATTR4_SIZE 4
#define FATTR4_LINK_SUPPORT 5
#define FATTR4_SYMLINK_SUPPORT 6
#define FATTR4_NAMED_ATTR 7
#define FATTR4_FSID 8
#define FATTR4_UNIQUE_HANDLES 9
#define FATTR4_LEASE_TIME 10
#define FATTR4_RDATTR_ERROR 11
#define FATTR4_FILEHANDLE 19
#define FATTR4_ACL 12
#define FATTR4_ACLSUPPORT 13
#define FATTR4_ARCHIVE 14
#define FATTR4_CANSETTIME 15
#define FATTR4_CASE_INSENSITIVE 16
#define FATTR4_CASE_PRESERVING 17
#define FATTR4_CHOWN_RESTRICTED 18
#define FATTR4_FILEID 20
#define FATTR4_FILES_AVAIL 21
#define FATTR4_FILES_FREE 22
#define FATTR4_FILES_TOTAL 23
#define FATTR4_FS_LOCATIONS 24
#define FATTR4_HIDDEN 25
#define FATTR4_HOMOGENEOUS 26
#define FATTR4_MAXFILESIZE 27
#define FATTR4_MAXLINK 28
#define FATTR4_MAXNAME 29
#define FATTR4_MAXREAD 30
#define FATTR4_MAXWRITE 31
#define FATTR4_MIMETYPE 32
#define FATTR4_MODE 33
#define FATTR4_NO_TRUNC 34
#define FATTR4_NUMLINKS 35
#define FATTR4_OWNER 36
#define FATTR4_OWNER_GROUP 37
#define FATTR4_QUOTA_AVAIL_HARD 38
#define FATTR4_QUOTA_AVAIL_SOFT 39
#define FATTR4_QUOTA_USED 40
#define FATTR4_RAWDEV 41
#define FATTR4_SPACE_AVAIL 42
#define FATTR4_SPACE_FREE 43
#define FATTR4_SPACE_TOTAL 44
#define FATTR4_SPACE_USED 45
#define FATTR4_SYSTEM 46
#define FATTR4_TIME_ACCESS 47
#define FATTR4_TIME_ACCESS_SET 48
#define FATTR4_TIME_BACKUP 49
#define FATTR4_TIME_CREATE 50
#define FATTR4_TIME_DELTA 51
#define FATTR4_TIME_METADATA 52
#define FATTR4_TIME_MODIFY 53
#define FATTR4_TIME_MODIFY_SET 54
#define FATTR4_MOUNTED_ON_FILEID 55

typedef struct {
	u_int attrlist4_len;
	char *attrlist4_val;
} attrlist4;

struct fattr4 {
	bitmap4 attrmask;
	attrlist4 attr_vals;
};
typedef struct fattr4 fattr4;

struct change_info4 {
	bool_t atomic;
	changeid4 before;
	changeid4 after;
};
typedef struct change_info4 change_info4;

struct clientaddr4 {
	char *r_netid;
	char *r_addr;
};
typedef struct clientaddr4 clientaddr4;

struct cb_client4 {
	uint32_t cb_program;
	clientaddr4 cb_location;
};
typedef struct cb_client4 cb_client4;

struct stateid4 {
	uint32_t seqid;
	char other[12];
};
typedef struct stateid4 stateid4;

struct nfs_client_id4 {
	verifier4 verifier;
	struct {
		u_int id_len;
		char *id_val;
	} id;
};
typedef struct nfs_client_id4 nfs_client_id4;

struct open_owner4 {
	clientid4 clientid;
	struct {
		u_int owner_len;
		char *owner_val;
	} owner;
};
typedef struct open_owner4 open_owner4;

struct lock_owner4 {
	clientid4 clientid;
	struct {
		u_int owner_len;
		char *owner_val;
	} owner;
};
typedef struct lock_owner4 lock_owner4;

enum nfs_lock_type4 {
	READ_LT = 1,
	WRITE_LT = 2,
	READW_LT = 3,
	WRITEW_LT = 4,
};
typedef enum nfs_lock_type4 nfs_lock_type4;
#define ACCESS4_READ 0x00000001
#define ACCESS4_LOOKUP 0x00000002
#define ACCESS4_MODIFY 0x00000004
#define ACCESS4_EXTEND 0x00000008
#define ACCESS4_DELETE 0x00000010
#define ACCESS4_EXECUTE 0x00000020

struct ACCESS4args {
	uint32_t access;
};
typedef struct ACCESS4args ACCESS4args;

struct ACCESS4resok {
	uint32_t supported;
	uint32_t access;
};
typedef struct ACCESS4resok ACCESS4resok;

struct ACCESS4res {
	nfsstat4 status;
	union {
		ACCESS4resok resok4;
	} ACCESS4res_u;
};
typedef struct ACCESS4res ACCESS4res;

struct CLOSE4args {
	seqid4 seqid;
	stateid4 open_stateid;
};
typedef struct CLOSE4args CLOSE4args;

struct CLOSE4res {
	nfsstat4 status;
	union {
		stateid4 open_stateid;
	} CLOSE4res_u;
};
typedef struct CLOSE4res CLOSE4res;

struct COMMIT4args {
	offset4 offset;
	count4 count;
};
typedef struct COMMIT4args COMMIT4args;

struct COMMIT4resok {
	verifier4 writeverf;
};
typedef struct COMMIT4resok COMMIT4resok;

struct COMMIT4res {
	nfsstat4 status;
	union {
		COMMIT4resok resok4;
	} COMMIT4res_u;
};
typedef struct COMMIT4res COMMIT4res;

struct createtype4 {
	nfs_ftype4 type;
	union {
		linktext4 linkdata;
		specdata4 devdata;
	} createtype4_u;
};
typedef struct createtype4 createtype4;

struct CREATE4args {
	createtype4 objtype;
	component4 objname;
	fattr4 createattrs;
};
typedef struct CREATE4args CREATE4args;

struct CREATE4resok {
	change_info4 cinfo;
	bitmap4 attrset;
};
typedef struct CREATE4resok CREATE4resok;

struct CREATE4res {
	nfsstat4 status;
	union {
		CREATE4resok resok4;
	} CREATE4res_u;
};
typedef struct CREATE4res CREATE4res;

struct DELEGPURGE4args {
	clientid4 clientid;
};
typedef struct DELEGPURGE4args DELEGPURGE4args;

struct DELEGPURGE4res {
	nfsstat4 status;
};
typedef struct DELEGPURGE4res DELEGPURGE4res;

struct DELEGRETURN4args {
	stateid4 deleg_stateid;
};
typedef struct DELEGRETURN4args DELEGRETURN4args;

struct DELEGRETURN4res {
	nfsstat4 status;
};
typedef struct DELEGRETURN4res DELEGRETURN4res;

struct GETATTR4args {
	bitmap4 attr_request;
};
typedef struct GETATTR4args GETATTR4args;

struct GETATTR4resok {
	fattr4 obj_attributes;
};
typedef struct GETATTR4resok GETATTR4resok;

struct GETATTR4res {
	nfsstat4 status;
	union {
		GETATTR4resok resok4;
	} GETATTR4res_u;
};
typedef struct GETATTR4res GETATTR4res;
#define DIR_NOTIFICATION_NONE 0x00000000
#define DIR_NOTIFICATION_CHANGE_ENTRY_ATTRIBUTES 0x00000001
#define DIR_NOTIFICATION_CHANGE_DIR_ATTRIBUTES 0x00000002
#define DIR_NOTIFICATION_REMOVE_ENTRY 0x00000004
#define DIR_NOTIFICATION_ADD_ENTRY 0x00000008
#define DIR_NOTIFICATION_RENAME_ENTRY 0x00000010
#define DIR_NOTIFICATION_CHANGE_COOKIE_VERIFIER 0x00000020

typedef bitmap4 notification_types4;

typedef nfstime4 notification_delay4;

enum dir_delegation_status4 {
	NFS4_DIR_DELEGATION_NONE = 0,
	NFS4_DIR_DELEGATION_READ = 1,
	NFS4_DIR_DELEGATION_DENIED = 2,
	NFS4_DIR_DELEGATION_UNAVAIL = 3,
};
typedef enum dir_delegation_status4 dir_delegation_status4;

struct GET_DIR_DELEGATION4args {
	clientid4 clientid;
	notification_types4 notif_types;
	notification_delay4 dir_notif_delay;
	notification_delay4 dir_entry_notif_delay;
};
typedef struct GET_DIR_DELEGATION4args GET_DIR_DELEGATION4args;

struct GET_DIR_DELEGATION4resok {
	stateid4 stateid;
	dir_delegation_status4 status;
	notification_types4 notif_types;
	bitmap4 dir_notif_attrs;
	bitmap4 dir_entry_notif_attrs;
};
typedef struct GET_DIR_DELEGATION4resok GET_DIR_DELEGATION4resok;

struct GET_DIR_DELEGATION4res {
	nfsstat4 status;
	union {
		GET_DIR_DELEGATION4resok resok4;
	} GET_DIR_DELEGATION4res_u;
};
typedef struct GET_DIR_DELEGATION4res GET_DIR_DELEGATION4res;

struct GETFH4resok {
	nfs_fh4 object;
};
typedef struct GETFH4resok GETFH4resok;

struct GETFH4res {
	nfsstat4 status;
	union {
		GETFH4resok resok4;
	} GETFH4res_u;
};
typedef struct GETFH4res GETFH4res;

struct LINK4args {
	component4 newname;
};
typedef struct LINK4args LINK4args;

struct LINK4resok {
	change_info4 cinfo;
};
typedef struct LINK4resok LINK4resok;

struct LINK4res {
	nfsstat4 status;
	union {
		LINK4resok resok4;
	} LINK4res_u;
};
typedef struct LINK4res LINK4res;

struct open_to_lock_owner4 {
	seqid4 open_seqid;
	stateid4 open_stateid;
	seqid4 lock_seqid;
	lock_owner4 lock_owner;
};
typedef struct open_to_lock_owner4 open_to_lock_owner4;

struct exist_lock_owner4 {
	stateid4 lock_stateid;
	seqid4 lock_seqid;
};
typedef struct exist_lock_owner4 exist_lock_owner4;

struct locker4 {
	bool_t new_lock_owner;
	union {
		open_to_lock_owner4 open_owner;
		exist_lock_owner4 lock_owner;
	} locker4_u;
};
typedef struct locker4 locker4;

struct LOCK4args {
	nfs_lock_type4 locktype;
	bool_t reclaim;
	offset4 offset;
	length4 length;
	locker4 locker;
};
typedef struct LOCK4args LOCK4args;

struct LOCK4denied {
	offset4 offset;
	length4 length;
	nfs_lock_type4 locktype;
	lock_owner4 owner;
};
typedef struct LOCK4denied LOCK4denied;

struct LOCK4resok {
	stateid4 lock_stateid;
};
typedef struct LOCK4resok LOCK4resok;

struct LOCK4res {
	nfsstat4 status;
	union {
		LOCK4resok resok4;
		LOCK4denied denied;
	} LOCK4res_u;
};
typedef struct LOCK4res LOCK4res;

struct LOCKT4args {
	nfs_lock_type4 locktype;
	offset4 offset;
	length4 length;
	lock_owner4 owner;
};
typedef struct LOCKT4args LOCKT4args;

struct LOCKT4res {
	nfsstat4 status;
	union {
		LOCK4denied denied;
	} LOCKT4res_u;
};
typedef struct LOCKT4res LOCKT4res;

struct LOCKU4args {
	nfs_lock_type4 locktype;
	seqid4 seqid;
	stateid4 lock_stateid;
	offset4 offset;
	length4 length;
};
typedef struct LOCKU4args LOCKU4args;

struct LOCKU4res {
	nfsstat4 status;
	union {
		stateid4 lock_stateid;
	} LOCKU4res_u;
};
typedef struct LOCKU4res LOCKU4res;

struct LOOKUP4args {
	component4 objname;
};
typedef struct LOOKUP4args LOOKUP4args;

struct LOOKUP4res {
	nfsstat4 status;
};
typedef struct LOOKUP4res LOOKUP4res;

struct LOOKUPP4res {
	nfsstat4 status;
};
typedef struct LOOKUPP4res LOOKUPP4res;

struct NVERIFY4args {
	fattr4 obj_attributes;
};
typedef struct NVERIFY4args NVERIFY4args;

struct NVERIFY4res {
	nfsstat4 status;
};
typedef struct NVERIFY4res NVERIFY4res;

enum createmode4 {
	UNCHECKED4 = 0,
	GUARDED4 = 1,
	EXCLUSIVE4 = 2,
};
typedef enum createmode4 createmode4;

struct createhow4 {
	createmode4 mode;
	union {
		fattr4 createattrs;
		verifier4 createverf;
	} createhow4_u;
};
typedef struct createhow4 createhow4;

enum opentype4 {
	OPEN4_NOCREATE = 0,
	OPEN4_CREATE = 1,
};
typedef enum opentype4 opentype4;

struct openflag4 {
	opentype4 opentype;
	union {
		createhow4 how;
	} openflag4_u;
};
typedef struct openflag4 openflag4;

enum limit_by4 {
	NFS_LIMIT_SIZE = 1,
	NFS_LIMIT_BLOCKS = 2,
};
typedef enum limit_by4 limit_by4;

struct nfs_modified_limit4 {
	uint32_t num_blocks;
	uint32_t bytes_per_block;
};
typedef struct nfs_modified_limit4 nfs_modified_limit4;

struct nfs_space_limit4 {
	limit_by4 limitby;
	union {
		uint64_t filesize;
		nfs_modified_limit4 mod_blocks;
	} nfs_space_limit4_u;
};
typedef struct nfs_space_limit4 nfs_space_limit4;
#define OPEN4_SHARE_ACCESS_READ 0x00000001
#define OPEN4_SHARE_ACCESS_WRITE 0x00000002
#define OPEN4_SHARE_ACCESS_BOTH 0x00000003
#define OPEN4_SHARE_DENY_NONE 0x00000000
#define OPEN4_SHARE_DENY_READ 0x00000001
#define OPEN4_SHARE_DENY_WRITE 0x00000002
#define OPEN4_SHARE_DENY_BOTH 0x00000003

enum open_delegation_type4 {
	OPEN_DELEGATE_NONE = 0,
	OPEN_DELEGATE_READ = 1,
	OPEN_DELEGATE_WRITE = 2,
};
typedef enum open_delegation_type4 open_delegation_type4;

enum open_claim_type4 {
	CLAIM_NULL = 0,
	CLAIM_PREVIOUS = 1,
	CLAIM_DELEGATE_CUR = 2,
	CLAIM_DELEGATE_PREV = 3,
};
typedef enum open_claim_type4 open_claim_type4;

struct open_claim_delegate_cur4 {
	stateid4 delegate_stateid;
	component4 file;
};
typedef struct open_claim_delegate_cur4 open_claim_delegate_cur4;

struct open_claim4 {
	open_claim_type4 claim;
	union {
		component4 file;
		open_delegation_type4 delegate_type;
		open_claim_delegate_cur4 delegate_cur_info;
		component4 file_delegate_prev;
	} open_claim4_u;
};
typedef struct open_claim4 open_claim4;

struct OPEN4args {
	seqid4 seqid;
	uint32_t share_access;
	uint32_t share_deny;
	open_owner4 owner;
	openflag4 openhow;
	open_claim4 claim;
};
typedef struct OPEN4args OPEN4args;

struct open_read_delegation4 {
	stateid4 stateid;
	bool_t recall;
	nfsace4 permissions;
};
typedef struct open_read_delegation4 open_read_delegation4;

struct open_write_delegation4 {
	stateid4 stateid;
	bool_t recall;
	nfs_space_limit4 space_limit;
	nfsace4 permissions;
};
typedef struct open_write_delegation4 open_write_delegation4;

struct open_delegation4 {
	open_delegation_type4 delegation_type;
	union {
		open_read_delegation4 read;
		open_write_delegation4 write;
	} open_delegation4_u;
};
typedef struct open_delegation4 open_delegation4;
#define OPEN4_RESULT_CONFIRM 0x00000002
#define OPEN4_RESULT_LOCKTYPE_POSIX 0x00000004

struct OPEN4resok {
	stateid4 stateid;
	change_info4 cinfo;
	uint32_t rflags;
	bitmap4 attrset;
	open_delegation4 delegation;
};
typedef struct OPEN4resok OPEN4resok;

struct OPEN4res {
	nfsstat4 status;
	union {
		OPEN4resok resok4;
	} OPEN4res_u;
};
typedef struct OPEN4res OPEN4res;

struct OPENATTR4args {
	bool_t createdir;
};
typedef struct OPENATTR4args OPENATTR4args;

struct OPENATTR4res {
	nfsstat4 status;
};
typedef struct OPENATTR4res OPENATTR4res;

struct OPEN_CONFIRM4args {
	stateid4 open_stateid;
	seqid4 seqid;
};
typedef struct OPEN_CONFIRM4args OPEN_CONFIRM4args;

struct OPEN_CONFIRM4resok {
	stateid4 open_stateid;
};
typedef struct OPEN_CONFIRM4resok OPEN_CONFIRM4resok;

struct OPEN_CONFIRM4res {
	nfsstat4 status;
	union {
		OPEN_CONFIRM4resok resok4;
	} OPEN_CONFIRM4res_u;
};
typedef struct OPEN_CONFIRM4res OPEN_CONFIRM4res;

struct OPEN_DOWNGRADE4args {
	stateid4 open_stateid;
	seqid4 seqid;
	uint32_t share_access;
	uint32_t share_deny;
};
typedef struct OPEN_DOWNGRADE4args OPEN_DOWNGRADE4args;

struct OPEN_DOWNGRADE4resok {
	stateid4 open_stateid;
};
typedef struct OPEN_DOWNGRADE4resok OPEN_DOWNGRADE4resok;

struct OPEN_DOWNGRADE4res {
	nfsstat4 status;
	union {
		OPEN_DOWNGRADE4resok resok4;
	} OPEN_DOWNGRADE4res_u;
};
typedef struct OPEN_DOWNGRADE4res OPEN_DOWNGRADE4res;

struct PUTFH4args {
	nfs_fh4 object;
};
typedef struct PUTFH4args PUTFH4args;

struct PUTFH4res {
	nfsstat4 status;
};
typedef struct PUTFH4res PUTFH4res;

struct PUTPUBFH4res {
	nfsstat4 status;
};
typedef struct PUTPUBFH4res PUTPUBFH4res;

struct PUTROOTFH4res {
	nfsstat4 status;
};
typedef struct PUTROOTFH4res PUTROOTFH4res;

struct READ4args {
	stateid4 stateid;
	offset4 offset;
	count4 count;
};
typedef struct READ4args READ4args;

struct READ4resok {
	bool_t eof;
	struct {
		u_int data_len;
		char *data_val;
	} data;
};
typedef struct READ4resok READ4resok;

struct READ4res {
	nfsstat4 status;
	union {
		READ4resok resok4;
	} READ4res_u;
};
typedef struct READ4res READ4res;

struct READDIR4args {
	nfs_cookie4 cookie;
	verifier4 cookieverf;
	count4 dircount;
	count4 maxcount;
	bitmap4 attr_request;
};
typedef struct READDIR4args READDIR4args;

struct entry4 {
	nfs_cookie4 cookie;
	component4 name;
	fattr4 attrs;
	struct entry4 *nextentry;
};
typedef struct entry4 entry4;

struct dirlist4 {
	entry4 *entries;
	bool_t eof;
};
typedef struct dirlist4 dirlist4;

struct READDIR4resok {
	verifier4 cookieverf;
	dirlist4 reply;
};
typedef struct READDIR4resok READDIR4resok;

struct READDIR4res {
	nfsstat4 status;
	union {
		READDIR4resok resok4;
	} READDIR4res_u;
};
typedef struct READDIR4res READDIR4res;

struct READLINK4resok {
	linktext4 link;
};
typedef struct READLINK4resok READLINK4resok;

struct READLINK4res {
	nfsstat4 status;
	union {
		READLINK4resok resok4;
	} READLINK4res_u;
};
typedef struct READLINK4res READLINK4res;

struct REMOVE4args {
	component4 target;
};
typedef struct REMOVE4args REMOVE4args;

struct REMOVE4resok {
	change_info4 cinfo;
};
typedef struct REMOVE4resok REMOVE4resok;

struct REMOVE4res {
	nfsstat4 status;
	union {
		REMOVE4resok resok4;
	} REMOVE4res_u;
};
typedef struct REMOVE4res REMOVE4res;

struct RENAME4args {
	component4 oldname;
	component4 newname;
};
typedef struct RENAME4args RENAME4args;

struct RENAME4resok {
	change_info4 source_cinfo;
	change_info4 target_cinfo;
};
typedef struct RENAME4resok RENAME4resok;

struct RENAME4res {
	nfsstat4 status;
	union {
		RENAME4resok resok4;
	} RENAME4res_u;
};
typedef struct RENAME4res RENAME4res;

struct RENEW4args {
	clientid4 clientid;
};
typedef struct RENEW4args RENEW4args;

struct RENEW4res {
	nfsstat4 status;
};
typedef struct RENEW4res RENEW4res;

struct RESTOREFH4res {
	nfsstat4 status;
};
typedef struct RESTOREFH4res RESTOREFH4res;

struct SAVEFH4res {
	nfsstat4 status;
};
typedef struct SAVEFH4res SAVEFH4res;

struct SECINFO4args {
	component4 name;
};
typedef struct SECINFO4args SECINFO4args;

enum rpc_gss_svc_t {
	RPC_GSS_SVC_NONE = 1,
	RPC_GSS_SVC_INTEGRITY = 2,
	RPC_GSS_SVC_PRIVACY = 3,
};
typedef enum rpc_gss_svc_t rpc_gss_svc_t;

struct rpcsec_gss_info {
	sec_oid4 oid;
	qop4 qop;
	rpc_gss_svc_t service;
};
typedef struct rpcsec_gss_info rpcsec_gss_info;

struct secinfo4 {
	uint32_t flavor;
	union {
		rpcsec_gss_info flavor_info;
	} secinfo4_u;
};
typedef struct secinfo4 secinfo4;

typedef struct {
	u_int SECINFO4resok_len;
	secinfo4 *SECINFO4resok_val;
} SECINFO4resok;

struct SECINFO4res {
	nfsstat4 status;
	union {
		SECINFO4resok resok4;
	} SECINFO4res_u;
};
typedef struct SECINFO4res SECINFO4res;

struct SETATTR4args {
	stateid4 stateid;
	fattr4 obj_attributes;
};
typedef struct SETATTR4args SETATTR4args;

struct SETATTR4res {
	nfsstat4 status;
	bitmap4 attrsset;
};
typedef struct SETATTR4res SETATTR4res;

struct SETCLIENTID4args {
	nfs_client_id4 client;
	cb_client4 callback;
	uint32_t callback_ident;
};
typedef struct SETCLIENTID4args SETCLIENTID4args;

struct SETCLIENTID4resok {
	clientid4 clientid;
	verifier4 setclientid_confirm;
};
typedef struct SETCLIENTID4resok SETCLIENTID4resok;

struct SETCLIENTID4res {
	nfsstat4 status;
	union {
		SETCLIENTID4resok resok4;
		clientaddr4 client_using;
	} SETCLIENTID4res_u;
};
typedef struct SETCLIENTID4res SETCLIENTID4res;

struct SETCLIENTID_CONFIRM4args {
	clientid4 clientid;
	verifier4 setclientid_confirm;
};
typedef struct SETCLIENTID_CONFIRM4args SETCLIENTID_CONFIRM4args;

struct SETCLIENTID_CONFIRM4res {
	nfsstat4 status;
};
typedef struct SETCLIENTID_CONFIRM4res SETCLIENTID_CONFIRM4res;

struct VERIFY4args {
	fattr4 obj_attributes;
};
typedef struct VERIFY4args VERIFY4args;

struct VERIFY4res {
	nfsstat4 status;
};
typedef struct VERIFY4res VERIFY4res;

enum stable_how4 {
	UNSTABLE4 = 0,
	DATA_SYNC4 = 1,
	FILE_SYNC4 = 2,
};
typedef enum stable_how4 stable_how4;

struct WRITE4args {
	stateid4 stateid;
	offset4 offset;
	stable_how4 stable;
	struct {
		u_int data_len;
		char *data_val;
	} data;
};
typedef struct WRITE4args WRITE4args;

struct WRITE4resok {
	count4 count;
	stable_how4 committed;
	verifier4 writeverf;
};
typedef struct WRITE4resok WRITE4resok;

struct WRITE4res {
	nfsstat4 status;
	union {
		WRITE4resok resok4;
	} WRITE4res_u;
};
typedef struct WRITE4res WRITE4res;

struct RELEASE_LOCKOWNER4args {
	lock_owner4 lock_owner;
};
typedef struct RELEASE_LOCKOWNER4args RELEASE_LOCKOWNER4args;

struct RELEASE_LOCKOWNER4res {
	nfsstat4 status;
};
typedef struct RELEASE_LOCKOWNER4res RELEASE_LOCKOWNER4res;

struct ILLEGAL4res {
	nfsstat4 status;
};
typedef struct ILLEGAL4res ILLEGAL4res;

enum nfs_opnum4 {
	OP_ACCESS = 3,
	OP_CLOSE = 4,
	OP_COMMIT = 5,
	OP_CREATE = 6,
	OP_DELEGPURGE = 7,
	OP_DELEGRETURN = 8,
	OP_GETATTR = 9,
	OP_GETFH = 10,
	OP_LINK = 11,
	OP_LOCK = 12,
	OP_LOCKT = 13,
	OP_LOCKU = 14,
	OP_LOOKUP = 15,
	OP_LOOKUPP = 16,
	OP_NVERIFY = 17,
	OP_OPEN = 18,
	OP_OPENATTR = 19,
	OP_OPEN_CONFIRM = 20,
	OP_OPEN_DOWNGRADE = 21,
	OP_PUTFH = 22,
	OP_PUTPUBFH = 23,
	OP_PUTROOTFH = 24,
	OP_READ = 25,
	OP_READDIR = 26,
	OP_READLINK = 27,
	OP_REMOVE = 28,
	OP_RENAME = 29,
	OP_RENEW = 30,
	OP_RESTOREFH = 31,
	OP_SAVEFH = 32,
	OP_SECINFO = 33,
	OP_SETATTR = 34,
	OP_SETCLIENTID = 35,
	OP_SETCLIENTID_CONFIRM = 36,
	OP_VERIFY = 37,
	OP_WRITE = 38,
	OP_RELEASE_LOCKOWNER = 39,
	OP_GET_DIR_DELEGATION = 40,
	OP_ILLEGAL = 10044,
};
typedef enum nfs_opnum4 nfs_opnum4;

struct nfs_argop4 {
	nfs_opnum4 argop;
	union {
		ACCESS4args opaccess;
		CLOSE4args opclose;
		COMMIT4args opcommit;
		CREATE4args opcreate;
		DELEGPURGE4args opdelegpurge;
		DELEGRETURN4args opdelegreturn;
		GETATTR4args opgetattr;
		LINK4args oplink;
		LOCK4args oplock;
		LOCKT4args oplockt;
		LOCKU4args oplocku;
		LOOKUP4args oplookup;
		NVERIFY4args opnverify;
		OPEN4args opopen;
		OPENATTR4args opopenattr;
		OPEN_CONFIRM4args opopen_confirm;
		OPEN_DOWNGRADE4args opopen_downgrade;
		PUTFH4args opputfh;
		READ4args opread;
		READDIR4args opreaddir;
		REMOVE4args opremove;
		RENAME4args oprename;
		RENEW4args oprenew;
		SECINFO4args opsecinfo;
		SETATTR4args opsetattr;
		SETCLIENTID4args opsetclientid;
		SETCLIENTID_CONFIRM4args opsetclientid_confirm;
		VERIFY4args opverify;
		WRITE4args opwrite;
		RELEASE_LOCKOWNER4args oprelease_lockowner;
		GET_DIR_DELEGATION4args opget_dir_delegation;
	} nfs_argop4_u;
};
typedef struct nfs_argop4 nfs_argop4;

struct nfs_resop4 {
	nfs_opnum4 resop;
	union {
		ACCESS4res opaccess;
		CLOSE4res opclose;
		COMMIT4res opcommit;
		CREATE4res opcreate;
		DELEGPURGE4res opdelegpurge;
		DELEGRETURN4res opdelegreturn;
		GETATTR4res opgetattr;
		GETFH4res opgetfh;
		LINK4res oplink;
		LOCK4res oplock;
		LOCKT4res oplockt;
		LOCKU4res oplocku;
		LOOKUP4res oplookup;
		LOOKUPP4res oplookupp;
		NVERIFY4res opnverify;
		OPEN4res opopen;
		OPENATTR4res opopenattr;
		OPEN_CONFIRM4res opopen_confirm;
		OPEN_DOWNGRADE4res opopen_downgrade;
		PUTFH4res opputfh;
		PUTPUBFH4res opputpubfh;
		PUTROOTFH4res opputrootfh;
		READ4res opread;
		READDIR4res opreaddir;
		READLINK4res opreadlink;
		REMOVE4res opremove;
		RENAME4res oprename;
		RENEW4res oprenew;
		RESTOREFH4res oprestorefh;
		SAVEFH4res opsavefh;
		SECINFO4res opsecinfo;
		SETATTR4res opsetattr;
		SETCLIENTID4res opsetclientid;
		SETCLIENTID_CONFIRM4res opsetclientid_confirm;
		VERIFY4res opverify;
		WRITE4res opwrite;
		RELEASE_LOCKOWNER4res oprelease_lockowner;
		GET_DIR_DELEGATION4res opget_dir_delegation;
		ILLEGAL4res opillegal;
	} nfs_resop4_u;
};
typedef struct nfs_resop4 nfs_resop4;

struct COMPOUND4args {
	utf8str_cs tag;
	uint32_t minorversion;
	struct {
		u_int argarray_len;
		nfs_argop4 *argarray_val;
	} argarray;
};
typedef struct COMPOUND4args COMPOUND4args;

struct COMPOUND4res {
	nfsstat4 status;
	utf8str_cs tag;
	struct {
		u_int resarray_len;
		nfs_resop4 *resarray_val;
	} resarray;
};
typedef struct COMPOUND4res COMPOUND4res;

struct CB_GETATTR4args {
	nfs_fh4 fh;
	bitmap4 attr_request;
};
typedef struct CB_GETATTR4args CB_GETATTR4args;

struct CB_GETATTR4resok {
	fattr4 obj_attributes;
};
typedef struct CB_GETATTR4resok CB_GETATTR4resok;

struct CB_GETATTR4res {
	nfsstat4 status;
	union {
		CB_GETATTR4resok resok4;
	} CB_GETATTR4res_u;
};
typedef struct CB_GETATTR4res CB_GETATTR4res;

struct CB_RECALL4args {
	stateid4 stateid;
	bool_t truncate;
	nfs_fh4 fh;
};
typedef struct CB_RECALL4args CB_RECALL4args;

struct CB_RECALL4res {
	nfsstat4 status;
};
typedef struct CB_RECALL4res CB_RECALL4res;

struct CB_ILLEGAL4res {
	nfsstat4 status;
};
typedef struct CB_ILLEGAL4res CB_ILLEGAL4res;

enum nfs_cb_opnum4 {
	OP_CB_GETATTR = 3,
	OP_CB_RECALL = 4,
	OP_CB_ILLEGAL = 10044,
};
typedef enum nfs_cb_opnum4 nfs_cb_opnum4;

struct nfs_cb_argop4 {
	u_int argop;
	union {
		CB_GETATTR4args opcbgetattr;
		CB_RECALL4args opcbrecall;
	} nfs_cb_argop4_u;
};
typedef struct nfs_cb_argop4 nfs_cb_argop4;

struct nfs_cb_resop4 {
	u_int resop;
	union {
		CB_GETATTR4res opcbgetattr;
		CB_RECALL4res opcbrecall;
		CB_ILLEGAL4res opcbillegal;
	} nfs_cb_resop4_u;
};
typedef struct nfs_cb_resop4 nfs_cb_resop4;

struct CB_COMPOUND4args {
	utf8str_cs tag;
	uint32_t minorversion;
	uint32_t callback_ident;
	struct {
		u_int argarray_len;
		nfs_cb_argop4 *argarray_val;
	} argarray;
};
typedef struct CB_COMPOUND4args CB_COMPOUND4args;

struct CB_COMPOUND4res {
	nfsstat4 status;
	utf8str_cs tag;
	struct {
		u_int resarray_len;
		nfs_cb_resop4 *resarray_val;
	} resarray;
};
typedef struct CB_COMPOUND4res CB_COMPOUND4res;

#define NFS4_PROGRAM 100003
#define NFS_V4 4

#define NFSPROC4_NULL 0
extern  void * nfsproc4_null_4(void *, CLIENT *);
extern  void * nfsproc4_null_4_svc(void *, struct svc_req *);
#define NFSPROC4_COMPOUND 1
extern  COMPOUND4res * nfsproc4_compound_4(COMPOUND4args *, CLIENT *);
extern  COMPOUND4res * nfsproc4_compound_4_svc(COMPOUND4args *, struct svc_req *);
extern int nfs4_program_4_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#define NFS4_CALLBACK 0x40000000
#define NFS_CB 1

#define CB_NULL 0
extern  void * cb_null_1(void *, CLIENT *);
extern  void * cb_null_1_svc(void *, struct svc_req *);
#define CB_COMPOUND 1
extern  CB_COMPOUND4res * cb_compound_1(CB_COMPOUND4args *, CLIENT *);
extern  CB_COMPOUND4res * cb_compound_1_svc(CB_COMPOUND4args *, struct svc_req *);
extern int nfs4_callback_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

extern  bool_t xdr_int32_t (XDR *, int32_t*);
extern  bool_t xdr_uint32_t (XDR *, uint32_t*);
extern  bool_t xdr_int64_t (XDR *, int64_t*);
extern  bool_t xdr_uint64_t (XDR *, uint64_t*);
extern  bool_t xdr_nfs_ftype4 (XDR *, nfs_ftype4*);
extern  bool_t xdr_nfsstat4 (XDR *, nfsstat4*);
extern  bool_t xdr_bitmap4 (XDR *, bitmap4*);
extern  bool_t xdr_offset4 (XDR *, offset4*);
extern  bool_t xdr_count4 (XDR *, count4*);
extern  bool_t xdr_length4 (XDR *, length4*);
extern  bool_t xdr_clientid4 (XDR *, clientid4*);
extern  bool_t xdr_seqid4 (XDR *, seqid4*);
extern  bool_t xdr_utf8string (XDR *, utf8string*);
extern  bool_t xdr_utf8str_cis (XDR *, utf8str_cis*);
extern  bool_t xdr_utf8str_cs (XDR *, utf8str_cs*);
extern  bool_t xdr_utf8str_mixed (XDR *, utf8str_mixed*);
extern  bool_t xdr_component4 (XDR *, component4*);
extern  bool_t xdr_pathname4 (XDR *, pathname4*);
extern  bool_t xdr_nfs_lockid4 (XDR *, nfs_lockid4*);
extern  bool_t xdr_nfs_cookie4 (XDR *, nfs_cookie4*);
extern  bool_t xdr_linktext4 (XDR *, linktext4*);
extern  bool_t xdr_sec_oid4 (XDR *, sec_oid4*);
extern  bool_t xdr_qop4 (XDR *, qop4*);
extern  bool_t xdr_mode4 (XDR *, mode4*);
extern  bool_t xdr_changeid4 (XDR *, changeid4*);
extern  bool_t xdr_verifier4 (XDR *, verifier4);
extern  bool_t xdr_nfstime4 (XDR *, nfstime4*);
extern  bool_t xdr_time_how4 (XDR *, time_how4*);
extern  bool_t xdr_settime4 (XDR *, settime4*);
extern  bool_t xdr_nfs_fh4 (XDR *, nfs_fh4*);
extern  bool_t xdr_fsid4 (XDR *, fsid4*);
extern  bool_t xdr_fs_location4 (XDR *, fs_location4*);
extern  bool_t xdr_fs_locations4 (XDR *, fs_locations4*);
extern  bool_t xdr_acetype4 (XDR *, acetype4*);
extern  bool_t xdr_aceflag4 (XDR *, aceflag4*);
extern  bool_t xdr_acemask4 (XDR *, acemask4*);
extern  bool_t xdr_nfsace4 (XDR *, nfsace4*);
extern  bool_t xdr_specdata4 (XDR *, specdata4*);
extern  bool_t xdr_fattr4_supported_attrs (XDR *, fattr4_supported_attrs*);
extern  bool_t xdr_fattr4_type (XDR *, fattr4_type*);
extern  bool_t xdr_fattr4_fh_expire_type (XDR *, fattr4_fh_expire_type*);
extern  bool_t xdr_fattr4_change (XDR *, fattr4_change*);
extern  bool_t xdr_fattr4_size (XDR *, fattr4_size*);
extern  bool_t xdr_fattr4_link_support (XDR *, fattr4_link_support*);
extern  bool_t xdr_fattr4_symlink_support (XDR *, fattr4_symlink_support*);
extern  bool_t xdr_fattr4_named_attr (XDR *, fattr4_named_attr*);
extern  bool_t xdr_fattr4_fsid (XDR *, fattr4_fsid*);
extern  bool_t xdr_fattr4_unique_handles (XDR *, fattr4_unique_handles*);
extern  bool_t xdr_fattr4_lease_time (XDR *, fattr4_lease_time*);
extern  bool_t xdr_fattr4_rdattr_error (XDR *, fattr4_rdattr_error*);
extern  bool_t xdr_fattr4_acl (XDR *, fattr4_acl*);
extern  bool_t xdr_fattr4_aclsupport (XDR *, fattr4_aclsupport*);
extern  bool_t xdr_fattr4_archive (XDR *, fattr4_archive*);
extern  bool_t xdr_fattr4_cansettime (XDR *, fattr4_cansettime*);
extern  bool_t xdr_fattr4_case_insensitive (XDR *, fattr4_case_insensitive*);
extern  bool_t xdr_fattr4_case_preserving (XDR *, fattr4_case_preserving*);
extern  bool_t xdr_fattr4_chown_restricted (XDR *, fattr4_chown_restricted*);
extern  bool_t xdr_fattr4_fileid (XDR *, fattr4_fileid*);
extern  bool_t xdr_fattr4_files_avail (XDR *, fattr4_files_avail*);
extern  bool_t xdr_fattr4_filehandle (XDR *, fattr4_filehandle*);
extern  bool_t xdr_fattr4_files_free (XDR *, fattr4_files_free*);
extern  bool_t xdr_fattr4_files_total (XDR *, fattr4_files_total*);
extern  bool_t xdr_fattr4_fs_locations (XDR *, fattr4_fs_locations*);
extern  bool_t xdr_fattr4_hidden (XDR *, fattr4_hidden*);
extern  bool_t xdr_fattr4_homogeneous (XDR *, fattr4_homogeneous*);
extern  bool_t xdr_fattr4_maxfilesize (XDR *, fattr4_maxfilesize*);
extern  bool_t xdr_fattr4_maxlink (XDR *, fattr4_maxlink*);
extern  bool_t xdr_fattr4_maxname (XDR *, fattr4_maxname*);
extern  bool_t xdr_fattr4_maxread (XDR *, fattr4_maxread*);
extern  bool_t xdr_fattr4_maxwrite (XDR *, fattr4_maxwrite*);
extern  bool_t xdr_fattr4_mimetype (XDR *, fattr4_mimetype*);
extern  bool_t xdr_fattr4_mode (XDR *, fattr4_mode*);
extern  bool_t xdr_fattr4_mounted_on_fileid (XDR *, fattr4_mounted_on_fileid*);
extern  bool_t xdr_fattr4_no_trunc (XDR *, fattr4_no_trunc*);
extern  bool_t xdr_fattr4_numlinks (XDR *, fattr4_numlinks*);
extern  bool_t xdr_fattr4_owner (XDR *, fattr4_owner*);
extern  bool_t xdr_fattr4_owner_group (XDR *, fattr4_owner_group*);
extern  bool_t xdr_fattr4_quota_avail_hard (XDR *, fattr4_quota_avail_hard*);
extern  bool_t xdr_fattr4_quota_avail_soft (XDR *, fattr4_quota_avail_soft*);
extern  bool_t xdr_fattr4_quota_used (XDR *, fattr4_quota_used*);
extern  bool_t xdr_fattr4_rawdev (XDR *, fattr4_rawdev*);
extern  bool_t xdr_fattr4_space_avail (XDR *, fattr4_space_avail*);
extern  bool_t xdr_fattr4_space_free (XDR *, fattr4_space_free*);
extern  bool_t xdr_fattr4_space_total (XDR *, fattr4_space_total*);
extern  bool_t xdr_fattr4_space_used (XDR *, fattr4_space_used*);
extern  bool_t xdr_fattr4_system (XDR *, fattr4_system*);
extern  bool_t xdr_fattr4_time_access (XDR *, fattr4_time_access*);
extern  bool_t xdr_fattr4_time_access_set (XDR *, fattr4_time_access_set*);
extern  bool_t xdr_fattr4_time_backup (XDR *, fattr4_time_backup*);
extern  bool_t xdr_fattr4_time_create (XDR *, fattr4_time_create*);
extern  bool_t xdr_fattr4_time_delta (XDR *, fattr4_time_delta*);
extern  bool_t xdr_fattr4_time_metadata (XDR *, fattr4_time_metadata*);
extern  bool_t xdr_fattr4_time_modify (XDR *, fattr4_time_modify*);
extern  bool_t xdr_fattr4_time_modify_set (XDR *, fattr4_time_modify_set*);
extern  bool_t xdr_attrlist4 (XDR *, attrlist4*);
extern  bool_t xdr_fattr4 (XDR *, fattr4*);
extern  bool_t xdr_change_info4 (XDR *, change_info4*);
extern  bool_t xdr_clientaddr4 (XDR *, clientaddr4*);
extern  bool_t xdr_cb_client4 (XDR *, cb_client4*);
extern  bool_t xdr_stateid4 (XDR *, stateid4*);
extern  bool_t xdr_nfs_client_id4 (XDR *, nfs_client_id4*);
extern  bool_t xdr_open_owner4 (XDR *, open_owner4*);
extern  bool_t xdr_lock_owner4 (XDR *, lock_owner4*);
extern  bool_t xdr_nfs_lock_type4 (XDR *, nfs_lock_type4*);
extern  bool_t xdr_ACCESS4args (XDR *, ACCESS4args*);
extern  bool_t xdr_ACCESS4resok (XDR *, ACCESS4resok*);
extern  bool_t xdr_ACCESS4res (XDR *, ACCESS4res*);
extern  bool_t xdr_CLOSE4args (XDR *, CLOSE4args*);
extern  bool_t xdr_CLOSE4res (XDR *, CLOSE4res*);
extern  bool_t xdr_COMMIT4args (XDR *, COMMIT4args*);
extern  bool_t xdr_COMMIT4resok (XDR *, COMMIT4resok*);
extern  bool_t xdr_COMMIT4res (XDR *, COMMIT4res*);
extern  bool_t xdr_createtype4 (XDR *, createtype4*);
extern  bool_t xdr_CREATE4args (XDR *, CREATE4args*);
extern  bool_t xdr_CREATE4resok (XDR *, CREATE4resok*);
extern  bool_t xdr_CREATE4res (XDR *, CREATE4res*);
extern  bool_t xdr_DELEGPURGE4args (XDR *, DELEGPURGE4args*);
extern  bool_t xdr_DELEGPURGE4res (XDR *, DELEGPURGE4res*);
extern  bool_t xdr_DELEGRETURN4args (XDR *, DELEGRETURN4args*);
extern  bool_t xdr_DELEGRETURN4res (XDR *, DELEGRETURN4res*);
extern  bool_t xdr_GETATTR4args (XDR *, GETATTR4args*);
extern  bool_t xdr_GETATTR4resok (XDR *, GETATTR4resok*);
extern  bool_t xdr_GETATTR4res (XDR *, GETATTR4res*);
extern  bool_t xdr_notification_types4 (XDR *, notification_types4*);
extern  bool_t xdr_notification_delay4 (XDR *, notification_delay4*);
extern  bool_t xdr_dir_delegation_status4 (XDR *, dir_delegation_status4*);
extern  bool_t xdr_GET_DIR_DELEGATION4args (XDR *, GET_DIR_DELEGATION4args*);
extern  bool_t xdr_GET_DIR_DELEGATION4resok (XDR *, GET_DIR_DELEGATION4resok*);
extern  bool_t xdr_GET_DIR_DELEGATION4res (XDR *, GET_DIR_DELEGATION4res*);
extern  bool_t xdr_GETFH4resok (XDR *, GETFH4resok*);
extern  bool_t xdr_GETFH4res (XDR *, GETFH4res*);
extern  bool_t xdr_LINK4args (XDR *, LINK4args*);
extern  bool_t xdr_LINK4resok (XDR *, LINK4resok*);
extern  bool_t xdr_LINK4res (XDR *, LINK4res*);
extern  bool_t xdr_open_to_lock_owner4 (XDR *, open_to_lock_owner4*);
extern  bool_t xdr_exist_lock_owner4 (XDR *, exist_lock_owner4*);
extern  bool_t xdr_locker4 (XDR *, locker4*);
extern  bool_t xdr_LOCK4args (XDR *, LOCK4args*);
extern  bool_t xdr_LOCK4denied (XDR *, LOCK4denied*);
extern  bool_t xdr_LOCK4resok (XDR *, LOCK4resok*);
extern  bool_t xdr_LOCK4res (XDR *, LOCK4res*);
extern  bool_t xdr_LOCKT4args (XDR *, LOCKT4args*);
extern  bool_t xdr_LOCKT4res (XDR *, LOCKT4res*);
extern  bool_t xdr_LOCKU4args (XDR *, LOCKU4args*);
extern  bool_t xdr_LOCKU4res (XDR *, LOCKU4res*);
extern  bool_t xdr_LOOKUP4args (XDR *, LOOKUP4args*);
extern  bool_t xdr_LOOKUP4res (XDR *, LOOKUP4res*);
extern  bool_t xdr_LOOKUPP4res (XDR *, LOOKUPP4res*);
extern  bool_t xdr_NVERIFY4args (XDR *, NVERIFY4args*);
extern  bool_t xdr_NVERIFY4res (XDR *, NVERIFY4res*);
extern  bool_t xdr_createmode4 (XDR *, createmode4*);
extern  bool_t xdr_createhow4 (XDR *, createhow4*);
extern  bool_t xdr_opentype4 (XDR *, opentype4*);
extern  bool_t xdr_openflag4 (XDR *, openflag4*);
extern  bool_t xdr_limit_by4 (XDR *, limit_by4*);
extern  bool_t xdr_nfs_modified_limit4 (XDR *, nfs_modified_limit4*);
extern  bool_t xdr_nfs_space_limit4 (XDR *, nfs_space_limit4*);
extern  bool_t xdr_open_delegation_type4 (XDR *, open_delegation_type4*);
extern  bool_t xdr_open_claim_type4 (XDR *, open_claim_type4*);
extern  bool_t xdr_open_claim_delegate_cur4 (XDR *, open_claim_delegate_cur4*);
extern  bool_t xdr_open_claim4 (XDR *, open_claim4*);
extern  bool_t xdr_OPEN4args (XDR *, OPEN4args*);
extern  bool_t xdr_open_read_delegation4 (XDR *, open_read_delegation4*);
extern  bool_t xdr_open_write_delegation4 (XDR *, open_write_delegation4*);
extern  bool_t xdr_open_delegation4 (XDR *, open_delegation4*);
extern  bool_t xdr_OPEN4resok (XDR *, OPEN4resok*);
extern  bool_t xdr_OPEN4res (XDR *, OPEN4res*);
extern  bool_t xdr_OPENATTR4args (XDR *, OPENATTR4args*);
extern  bool_t xdr_OPENATTR4res (XDR *, OPENATTR4res*);
extern  bool_t xdr_OPEN_CONFIRM4args (XDR *, OPEN_CONFIRM4args*);
extern  bool_t xdr_OPEN_CONFIRM4resok (XDR *, OPEN_CONFIRM4resok*);
extern  bool_t xdr_OPEN_CONFIRM4res (XDR *, OPEN_CONFIRM4res*);
extern  bool_t xdr_OPEN_DOWNGRADE4args (XDR *, OPEN_DOWNGRADE4args*);
extern  bool_t xdr_OPEN_DOWNGRADE4resok (XDR *, OPEN_DOWNGRADE4resok*);
extern  bool_t xdr_OPEN_DOWNGRADE4res (XDR *, OPEN_DOWNGRADE4res*);
extern  bool_t xdr_PUTFH4args (XDR *, PUTFH4args*);
extern  bool_t xdr_PUTFH4res (XDR *, PUTFH4res*);
extern  bool_t xdr_PUTPUBFH4res (XDR *, PUTPUBFH4res*);
extern  bool_t xdr_PUTROOTFH4res (XDR *, PUTROOTFH4res*);
extern  bool_t xdr_READ4args (XDR *, READ4args*);
extern  bool_t xdr_READ4resok (XDR *, READ4resok*);
extern  bool_t xdr_READ4res (XDR *, READ4res*);
extern  bool_t xdr_READDIR4args (XDR *, READDIR4args*);
extern  bool_t xdr_entry4 (XDR *, entry4*);
extern  bool_t xdr_dirlist4 (XDR *, dirlist4*);
extern  bool_t xdr_READDIR4resok (XDR *, READDIR4resok*);
extern  bool_t xdr_READDIR4res (XDR *, READDIR4res*);
extern  bool_t xdr_READLINK4resok (XDR *, READLINK4resok*);
extern  bool_t xdr_READLINK4res (XDR *, READLINK4res*);
extern  bool_t xdr_REMOVE4args (XDR *, REMOVE4args*);
extern  bool_t xdr_REMOVE4resok (XDR *, REMOVE4resok*);
extern  bool_t xdr_REMOVE4res (XDR *, REMOVE4res*);
extern  bool_t xdr_RENAME4args (XDR *, RENAME4args*);
extern  bool_t xdr_RENAME4resok (XDR *, RENAME4resok*);
extern  bool_t xdr_RENAME4res (XDR *, RENAME4res*);
extern  bool_t xdr_RENEW4args (XDR *, RENEW4args*);
extern  bool_t xdr_RENEW4res (XDR *, RENEW4res*);
extern  bool_t xdr_RESTOREFH4res (XDR *, RESTOREFH4res*);
extern  bool_t xdr_SAVEFH4res (XDR *, SAVEFH4res*);
extern  bool_t xdr_SECINFO4args (XDR *, SECINFO4args*);
extern  bool_t xdr_rpc_gss_svc_t (XDR *, rpc_gss_svc_t*);
extern  bool_t xdr_rpcsec_gss_info (XDR *, rpcsec_gss_info*);
extern  bool_t xdr_secinfo4 (XDR *, secinfo4*);
extern  bool_t xdr_SECINFO4resok (XDR *, SECINFO4resok*);
extern  bool_t xdr_SECINFO4res (XDR *, SECINFO4res*);
extern  bool_t xdr_SETATTR4args (XDR *, SETATTR4args*);
extern  bool_t xdr_SETATTR4res (XDR *, SETATTR4res*);
extern  bool_t xdr_SETCLIENTID4args (XDR *, SETCLIENTID4args*);
extern  bool_t xdr_SETCLIENTID4resok (XDR *, SETCLIENTID4resok*);
extern  bool_t xdr_SETCLIENTID4res (XDR *, SETCLIENTID4res*);
extern  bool_t xdr_SETCLIENTID_CONFIRM4args (XDR *, SETCLIENTID_CONFIRM4args*);
extern  bool_t xdr_SETCLIENTID_CONFIRM4res (XDR *, SETCLIENTID_CONFIRM4res*);
extern  bool_t xdr_VERIFY4args (XDR *, VERIFY4args*);
extern  bool_t xdr_VERIFY4res (XDR *, VERIFY4res*);
extern  bool_t xdr_stable_how4 (XDR *, stable_how4*);
extern  bool_t xdr_WRITE4args (XDR *, WRITE4args*);
extern  bool_t xdr_WRITE4resok (XDR *, WRITE4resok*);
extern  bool_t xdr_WRITE4res (XDR *, WRITE4res*);
extern  bool_t xdr_RELEASE_LOCKOWNER4args (XDR *, RELEASE_LOCKOWNER4args*);
extern  bool_t xdr_RELEASE_LOCKOWNER4res (XDR *, RELEASE_LOCKOWNER4res*);
extern  bool_t xdr_ILLEGAL4res (XDR *, ILLEGAL4res*);
extern  bool_t xdr_nfs_opnum4 (XDR *, nfs_opnum4*);
extern  bool_t xdr_nfs_argop4 (XDR *, nfs_argop4*);
extern  bool_t xdr_nfs_resop4 (XDR *, nfs_resop4*);
extern  bool_t xdr_COMPOUND4args (XDR *, COMPOUND4args*);
extern  bool_t xdr_COMPOUND4res (XDR *, COMPOUND4res*);
extern  bool_t xdr_CB_GETATTR4args (XDR *, CB_GETATTR4args*);
extern  bool_t xdr_CB_GETATTR4resok (XDR *, CB_GETATTR4resok*);
extern  bool_t xdr_CB_GETATTR4res (XDR *, CB_GETATTR4res*);
extern  bool_t xdr_CB_RECALL4args (XDR *, CB_RECALL4args*);
extern  bool_t xdr_CB_RECALL4res (XDR *, CB_RECALL4res*);
extern  bool_t xdr_CB_ILLEGAL4res (XDR *, CB_ILLEGAL4res*);
extern  bool_t xdr_nfs_cb_opnum4 (XDR *, nfs_cb_opnum4*);
extern  bool_t xdr_nfs_cb_argop4 (XDR *, nfs_cb_argop4*);
extern  bool_t xdr_nfs_cb_resop4 (XDR *, nfs_cb_resop4*);
extern  bool_t xdr_CB_COMPOUND4args (XDR *, CB_COMPOUND4args*);
extern  bool_t xdr_CB_COMPOUND4res (XDR *, CB_COMPOUND4res*);
}

} // namespace rpcgen
//------------------------------------------------------------------------------
#endif //NFS4_TYPES_RPCGEN_H
//------------------------------------------------------------------------------
