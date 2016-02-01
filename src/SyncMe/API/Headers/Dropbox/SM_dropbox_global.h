#ifndef SM_DROPBOX_GLOBAL_H
#define SM_DROPBOX_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SM_DROPBOX_LIBRARY)
#  define SM_DROPBOXSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SM_DROPBOXSHARED_EXPORT Q_DECL_IMPORT
#endif

#ifndef SM_DROPBOX_HTTP_ERROR_CODES
#define SM_DROPBOX_HTTP_ERROR_CODES
const qint32 SM_DROPBOX_ERROR_BAD_INPUT           = 400;
const qint32 SM_DROPBOX_ERROR_EXPIRED_TOKEN       = 401;
const qint32 SM_DROPBOX_ERROR_BAD_OAUTH_REQUEST   = 403;
const qint32 SM_DROPBOX_ERROR_FILE_NOT_FOUND      = 404;
const qint32 SM_DROPBOX_ERROR_WRONG_METHOD        = 405;
const qint32 SM_DROPBOX_ERROR_REQUEST_CAP         = 503;
const qint32 SM_DROPBOX_ERROR_USER_OVER_QUOTA     = 507;
#endif

#endif // SM_DROPBOX_GLOBAL_H
