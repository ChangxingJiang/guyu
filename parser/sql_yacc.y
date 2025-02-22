%{
#include "lex_yystype.h"
#include <stdio.h>
#include <stdlib.h>
%}

%define api.pure

/**
解析器系统符号
*/
%token  SYSTEM_ABORT                           /* INTERNAL : 词法解析器解析异常 */
%token  SYSTEM_END_OF_INPUT                    /* INTERNAL : 词法解析器解析结束 */

/**
运算符
*/
%token  OPERATOR_AND_AND                          /* OPERATOR : && */
%token  OPERATOR_EQ                               /* OPERATOR : = */
%token  OPERATOR_EQUAL                            /* OPERATOR : <=> */
%token  OPERATOR_GE                               /* OPERATOR : >= */
%token  OPERATOR_GT                               /* OPERATOR : > */
%token  OPERATOR_LE                               /* OPERATOR : <= */
%token  OPERATOR_LT                               /* OPERATOR : < */
%token  OPERATOR_NE                               /* OPERATOR : <> 或 != */
%token  OPERATOR_NEG                              /* OPERATOR : - (一元表达式) */
%token  OPERATOR_OR_OR                            /* OPERATOR : || */
%token  OPERATOR_SHIFT_LEFT                       /* OPERATOR : << */
%token  OPERATOR_SHIFT_RIGHT                      /* OPERATOR : >> */
%token  OPERATOR_JSON_SEPARATOR                   /* OPERATOR: -> */
%token  OPERATOR_JSON_UNQUOTED_SEPARATOR          /* OPERATOR: ->> */
%token  OPERATOR_SET_VAR                          /* OPERATOR: := */

/**
字面值
*/
%token  LITERAL_BIN_NUM                     /* 二进制字面值（仅包含二进制数部分） */
%token  LITERAL_HEX_NUM                     /* 十六进制字面值（仅包含十六进制数部分） */
%token  LITERAL_DECIMAL_NUM                 /* 不包含 e 或 E 的小数字面值 */
%token  LITERAL_FLOAT_NUM                   /* 包含 e 或 E 的浮点数字面值 */
%token  LITERAL_NUM                         /* 整数字面值 */
%token  LITERAL_LONG_NUM                    /* 长整数字面值 */
%token  LITERAL_ULONGLONG_NUM               /* 无符号长整数字面值 */
%token  LITERAL_NCHAR_STRING                /* unicode 字符串字面值 */
%token  LITERAL_TEXT_STRING                 /* 字符串字面值 */
%token  LITERAL_UNDERSCORE_CHARSET          /* 下划线开头的字符集名称 */

/**
标识符
*/
%token  IDENT                               /* 标识符 */
%token  IDENT_QUOTED                        /* 包含括号的标识符 */

/**
特殊元素
*/
%token  LEX_HOSTNAME                        /* @ 之后的 Token */
%token  PARAM_MARKER                        /* ? 开头的参数值 */

/**
关键字
*/
%token  KEYWORD_ACCESSIBLE                        /* reserved keyword */
%token  KEYWORD_ACCOUNT                           /* keyword */
%token  KEYWORD_ACTION                            /* keyword : SQL-2003-N */
%token  KEYWORD_ACTIVE                            /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_ADD                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ADMIN                             /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_AFTER                             /* keyword : SQL-2003-N */
%token  KEYWORD_AGAINST                           /* keyword */
%token  KEYWORD_AGGREGATE                         /* keyword */
%token  KEYWORD_ALGORITHM                         /* keyword */
%token  KEYWORD_ALL                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ALTER                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ALWAYS                            /* keyword */
%token  KEYWORD_ANALYZE                           /* keyword */
%token  KEYWORD_AND                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ANY                               /* keyword : SQL-2003-R */
%token  KEYWORD_ARRAY                             /* keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_AS                                /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ASC                               /* reserved keyword : SQL-2003-N */
%token  KEYWORD_ASCII                             /* keyword : MYSQL-FUNC */
%token  KEYWORD_ASENSITIVE                        /* reserved keyword : FUTURE-USE */
%token  KEYWORD_AT                                /* keyword : SQL-2003-R */
%token  KEYWORD_ATTRIBUTE                         /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_AUTHENTICATION                    /* keyword (MySQL 8.0) */
%token  KEYWORD_AUTO_INC                          /* keyword */
%token  KEYWORD_AUTOEXTEND_SIZE                   /* keyword */
%token  KEYWORD_AUTO_INCREMENT                    /* keyword */
%token  KEYWORD_AVG                               /* keyword : SQL-2003-N */
%token  KEYWORD_AVG_ROW_LENGTH                    /* keyword */
%token  KEYWORD_BACKUP                            /* keyword */
%token  KEYWORD_BEFORE                            /* reserved keyword : SQL-2003-N */
%token  KEYWORD_BEGIN                             /* keyword : SQL-2003-R */
%token  KEYWORD_BERNOULLI                         /* keyword */
%token  KEYWORD_BETWEEN                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_BIGINT                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_BINARY                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_BINLOG                            /* keyword */
%token  KEYWORD_BIT                               /* keyword : MYSQL-FUNC */
%token  KEYWORD_BLOB                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_BLOCK                             /* keyword */
%token  KEYWORD_BOOL                              /* keyword */
%token  KEYWORD_BOOLEAN                           /* keyword : SQL-2003-R */
%token  KEYWORD_BOTH                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_BTREE                             /* keyword */
%token  KEYWORD_BUCKETS                           /* keyword (MySQL 8.0) */
%token  KEYWORD_BULK                              /* keyword (MySQL 8.0) */
%token  KEYWORD_BY                                /* reserved keyword : SQL-2003-R */
%token  KEYWORD_BYTE                              /* keyword */
%token  KEYWORD_CACHE                             /* keyword */
%token  KEYWORD_CALL                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CASCADE                           /* reserved keyword : SQL-2003-N */
%token  KEYWORD_CASCADED                          /* keyword : SQL-2003-R */
%token  KEYWORD_CASE                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CATALOG_NAME                      /* keyword : SQL-2003-N */
%token  KEYWORD_CHAIN                             /* keyword : SQL-2003-N */
%token  KEYWORD_CHALLENGE_RESPONSE                /* keyword (MySQL 8.0) */
%token  KEYWORD_CHANGE                            /* reserved keyword */
%token  KEYWORD_CHANGED                           /* keyword */
%token  KEYWORD_CHANNEL                           /* keyword */
%token  KEYWORD_CHAR                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CHARACTER                         /* reserved keyword */
%token  KEYWORD_CHARSET                           /* keyword */
%token  KEYWORD_CHECK                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CHECKSUM                          /* keyword */
%token  KEYWORD_CIPHER                            /* keyword */
%token  KEYWORD_CLASS_ORIGIN                      /* keyword : SQL-2003-N */
%token  KEYWORD_CLIENT                            /* keyword */
%token  KEYWORD_CLONE                             /* keyword (MySQL 8.0) */
%token  KEYWORD_CLOSE                             /* keywrod : SQL-2003-R */
%token  KEYWORD_COALESCE                          /* keyword : SQL-2003-N */
%token  KEYWORD_CODE                              /* keyword */
%token  KEYWORD_COLLATE                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_COLLATION                         /* keyword : SQL-2003-N */
%token  KEYWORD_COLUMN                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_COLUMNS                           /* keyword */
%token  KEYWORD_COLUMN_FORMAT                     /* keyword */
%token  KEYWORD_COLUMN_NAME                       /* keyword : SQL-2003-N */
%token  KEYWORD_COMMENT                           /* keyword */
%token  KEYWORD_COMMIT                            /* keyowrd : SQL-2003-R */
%token  KEYWORD_COMMITTED                         /* keyword : SQL-2003-N */
%token  KEYWORD_COMPACT                           /* keyword */
%token  KEYWORD_COMPLETION                        /* keyword */
%token  KEYWORD_COMPONENT                         /* keyword (MySQL 8.0) */
%token  KEYWORD_COMPRESSED                        /* keyword */
%token  KEYWORD_COMPRESSION                       /* keyword */
%token  KEYWORD_CONCURRENT                        /* keyword */
%token  KEYWORD_CONDITION                         /* reserved keyword : SQL-2003-R, SQL-2008-R */
%token  KEYWORD_CONNECTION                        /* keyword */
%token  KEYWORD_CONSISTENT                        /* keyword */
%token  KEYWORD_CONSTRAINT                        /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CONSTRAINT_CATALOG                /* keyword : SQL-2003-N */
%token  KEYWORD_CONSTRAINT_NAME                   /* keyword : SQL-2003-N */
%token  KEYWORD_CONSTRAINT_SCHEMA                 /* keyword : SQL-2003-N */
%token  KEYWORD_CONTAINS                          /* keyword : SQL-2003-N */
%token  KEYWORD_CONTEXT                           /* keyword */
%token  KEYWORD_CONTINUE                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CONVERT                           /* reserved keyword : SQL-2003-N */
%token  KEYWORD_CPU                               /* keyword */
%token  KEYWORD_CREATE                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CROSS                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CUBE                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CUME_DIST                         /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_CURRENT                           /* keyword : SQL-2003-R */
%token  KEYWORD_CURRENT_DATE                      /* reserved keyword */
%token  KEYWORD_CURRENT_TIME                      /* reserved keyword */
%token  KEYWORD_CURRENT_TIMESTAMP                 /* reserved keyword */
%token  KEYWORD_CURRENT_USER                      /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CURSOR                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_CURSOR_NAME                       /* keyword : SQL-2003-N */
%token  KEYWORD_DATA                              /* keyword : SQL-2003-N */
%token  KEYWORD_DATABASE                          /* reserved keyword */
%token  KEYWORD_DATABASES                         /* reserved keyword */
%token  KEYWORD_DATAFILE                          /* keyword */
%token  KEYWORD_DATE                              /* keyword : SQL-2003-R */
%token  KEYWORD_DATETIME                          /* keyword */
%token  KEYWORD_DAY                               /* keyword : SQL-2003-R */
%token  KEYWORD_DAY_HOUR                          /* reserved keyword */
%token  KEYWORD_DAY_MICROSECOND                   /* reserved keyword */
%token  KEYWORD_DAY_MINUTE                        /* reserved keyword */
%token  KEYWORD_DAY_SECOND                        /* reserved keyword */
%token  KEYWORD_DEALLOCATE                        /* keyword : SQL-2003-R */
%token  KEYWORD_DEC                               /* reserved keyword */
%token  KEYWORD_DECIMAL                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_DECLARE                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_DEFAULT                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_DEFAULT_AUTH                      /* keyword : INTERNAL */
%token  KEYWORD_DEFINER                           /* keyword */
%token  KEYWORD_DEFINITION                        /* keyword (MySQL 8.0) */
%token  KEYWORD_DELAYED                           /* reserved keyword */
%token  KEYWORD_DELAY_KEY_WRITE                   /* keyword */
%token  KEYWORD_DELETE                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_DENSE_RANK                        /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_DESC                              /* reserved keyword : SQL-2003-N */
%token  KEYWORD_DESCRIBE                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_DESCRIPTION                       /* keyword (MySQL 8.0) */
%token  KEYWORD_DETERMINISTIC                     /* reserved keyword : SQL-2003-R */
%token  KEYWORD_DIAGNOSTICS                       /* keyword : SQL-2003-N */
%token  KEYWORD_DIRECTORY                         /* keyword */
%token  KEYWORD_DISABLE                           /* keyword */
%token  KEYWORD_DISCARD                           /* keyword : MYSQL */
%token  KEYWORD_DISK                              /* keyword */
%token  KEYWORD_DISTINCT                          /* reserved keyowrd : SQL-2003-R */
%token  KEYWORD_DISTINCTROW                       /* reserved keyowrd */
%token  KEYWORD_DIV                               /* reserved keyword */
%token  KEYWORD_DO                                /* keyword */
%token  KEYWORD_DOUBLE                            /* reserved keyowrd : SQL-2003-R */
%token  KEYWORD_DROP                              /* reserved keyowrd : SQL-2003-R */
%token  KEYWORD_DUAL                              /* reserved keyword */
%token  KEYWORD_DUMPFILE                          /* keyword */
%token  KEYWORD_DUPLICATE                         /* keyword */
%token  KEYWORD_DYNAMIC                           /* keyword : SQL-2003-R */
%token  KEYWORD_EACH                              /* reserved keyword: SQL-2003-R */
%token  KEYWORD_ELSE                              /* reserved keyword: SQL-2003-R */
%token  KEYWORD_ELSEIF                            /* reserved keyword */
%token  KEYWORD_EMPTY                             /* reserved keyword: SQL-2016-R (MySQL 8.0) */
%token  KEYWORD_ENABLE                            /* keyword */
%token  KEYWORD_ENCLOSED                          /* reserved keyword */
%token  KEYWORD_ENCRYPTION                        /* keyword */
%token  KEYWORD_END                               /* keyword : SQL-2003-R */
%token  KEYWORD_ENDS                              /* keyword */
%token  KEYWORD_ENFORCED                          /* keyword : SQL-2015-N (MySQL 8.0) */
%token  KEYWORD_ENGINE                            /* keyword */
%token  KEYWORD_ENGINES                           /* keyword */
%token  KEYWORD_ENGINE_ATTRIBUTE                  /* Keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_ENUM                              /* keyword : MYSQL */
%token  KEYWORD_ERROR                             /* keyword */
%token  KEYWORD_ERRORS                            /* keyword */
%token  KEYWORD_ESCAPE                            /* keyword : SQL-2003-R */
%token  KEYWORD_ESCAPED                           /* reserved keyword */
%token  KEYWORD_EVENT                             /* keyword */
%token  KEYWORD_EVENTS                            /* keyword */
%token  KEYWORD_EVERY                             /* keyword : SQL-2003-N */
%token  KEYWORD_EXCEPT                            /* reserved keyword : SQL-1999-R (MySQL 8.0) */
%token  KEYWORD_EXCHANGE                          /* keyword */
%token  KEYWORD_EXCLUDE                           /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_EXECUTE                           /* keyword : SQL-2003-R */
%token  KEYWORD_EXISTS                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_EXIT                              /* reserved keyword */
%token  KEYWORD_EXPANSION                         /* keyword */
%token  KEYWORD_EXPIRE                            /* keyword */
%token  KEYWORD_EXPLAIN                           /* reserved keyword */
%token  KEYWORD_EXPORT                            /* keyword */
%token  KEYWORD_EXTENDED                          /* keyword */
%token  KEYWORD_EXTENT_SIZE                       /* keyword */
%token  KEYWORD_FACTOR                            /* keyword (MySQL 8.0) */
%token  KEYWORD_FAILED_LOGIN_ATTEMPTS             /* keyword (MySQL 8.0) */
%token  KEYWORD_FALSE                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_FAST                              /* keyword */
%token  KEYWORD_FAULTS                            /* keyword */
%token  KEYWORD_FETCH                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_FIELDS                            /* keyword */
%token  KEYWORD_FILE                              /* keyword */
%token  KEYWORD_FILE_BLOCKEYWORD_SIZE                   /* keyword */
%token  KEYWORD_FILTER                            /* keyword */
%token  KEYWORD_FINISH                            /* keyword : SQL-2016-N (MySQL 8.0) */
%token  KEYWORD_FIRST                             /* keyword : SQL-2003-N */
%token  KEYWORD_FIRST_VALUE                       /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_FIXED                             /* keyword */
%token  KEYWORD_FLOAT                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_FLOAT4                            /* reserved keyword */
%token  KEYWORD_FLOAT8                            /* reserved keyword */
%token  KEYWORD_FLUSH                             /* keyword */
%token  KEYWORD_FOLLOWING                         /* keyowrd : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_FOLLOWS                           /* keyword : MYSQL */
%token  KEYWORD_FOR                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_FORCE                             /* reserved keyword */
%token  KEYWORD_FOREIGN                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_FORMAT                            /* keyword */
%token  KEYWORD_FOUND                             /* keyword : SQL-2003-R */
%token  KEYWORD_FROM                              /* reserved keyword */
%token  KEYWORD_FULL                              /* keyword : SQL-2003-R */
%token  KEYWORD_FULLTEXT                          /* reserved keyword */
%token  KEYWORD_FUNCTION                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_GENERAL                           /* keyword */
%token  KEYWORD_GENERATE                          /* keyword (MySQL 8.0) */
%token  KEYWORD_GENERATED                         /* keyword */
%token  KEYWORD_GEOMCOLLECTION                    /* reserved keyword */
%token  KEYWORD_GEOMETRY                          /* keyword */
%token  KEYWORD_GEOMETRYCOLLECTION                /* keyword : MYSQL */
%token  KEYWORD_GET                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_GET_MASTER_PUBLIC_KEY             /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_GET_FORMAT                        /* keyword : MYSQL-FUNC */
%token  KEYWORD_GET_SOURCE_PUBLIC_KEY             /* keyword (MySQL 8.0) */
%token  KEYWORD_GLOBAL                            /* keyword : SQL-2003-R */
%token  KEYWORD_GRANT                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_GRANTS                            /* keyword */
%token  KEYWORD_GROUP                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_GROUPING                          /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_GROUPS                            /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_GROUP_REPLICATION                 /* keyword */
%token  KEYWORD_GTIDS                             /* keyword (MySQL 8.0) */
%token  KEYWORD_GTID_ONLY                         /* keyword (MySQL 8.0) */
%token  KEYWORD_HANDLER                           /* keyword */
%token  KEYWORD_HASH                              /* keyword */
%token  KEYWORD_HAVING                            /* reserved keyowrd : SQL-2003-R */
%token  KEYWORD_HELP                              /* keyword */
%token  KEYWORD_HIGH_PRIORITY                     /* reserved keyword */
%token  KEYWORD_HISTOGRAM                         /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_HISTORY                           /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_HOST                              /* keyword */
%token  KEYWORD_HOSTS                             /* keyword */
%token  KEYWORD_HOUR                              /* keyword : SQL-2003-R */
%token  KEYWORD_HOUR_MICROSECOND                  /* reserved keyword */
%token  KEYWORD_HOUR_MINUTE                       /* reserved keyword */
%token  KEYWORD_HOUR_SECOND                       /* reserved keyword */
%token  KEYWORD_IDENTIFIED                        /* keyword */
%token  KEYWORD_IF                                /* reserved keyword */
%token  KEYWORD_IGNORE                            /* reserved keyword */
%token  KEYWORD_IGNORE_SERVER_IDS                 /* keyword */
%token  KEYWORD_IMPORT                            /* keyword */
%token  KEYWORD_IN                                /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INACTIVE                          /* keyword (MySQL 8.0) */
%token  KEYWORD_INDEX                             /* reserved keyword */
%token  KEYWORD_INDEXES                           /* keyword */
%token  KEYWORD_INFILE                            /* reserved keyword */
%token  KEYWORD_INITIAL                           /* keyword : SQL-2016-R (MySQL 8.0) */
%token  KEYWORD_INITIAL_SIZE                      /* keyword */
%token  KEYWORD_INITIATE                          /* keyowrd (MySQL 8.0) */
%token  KEYWORD_INNER                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INOUT                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INSENSITIVE                       /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INSERT                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INSERT_METHOD                     /* keyword */
%token  KEYWORD_INSTALL                           /* keyword */
%token  KEYWORD_INSTANCE                          /* keyword */
%token  KEYWORD_INT                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INT1                              /* reserved keyword */
%token  KEYWORD_INT2                              /* reserved keyword */
%token  KEYWORD_INT3                              /* reserved keyword */
%token  KEYWORD_INT4                              /* reserved keyword */
%token  KEYWORD_INT8                              /* reserved keyword */
%token  KEYWORD_INTEGER                           /* reserved keyword */
%token  KEYWORD_INTERSECT                         /* reserved keyowrd : SQL-1992-R (MySQL 8.0) */
%token  KEYWORD_INTERVAL                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INTO                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_INVISIBLE                         /* keyword */
%token  KEYWORD_INVOKER                           /* keyword */
%token  KEYWORD_IO                                /* keyword */
%token  KEYWORD_IO_AFTER_GTIDS                    /* reserved keyword : MYSQL, FUTURE-USE */
%token  KEYWORD_IO_BEFORE_GTIDS                   /* reserved keyword : MYSQL, FUTURE-USE */
%token  KEYWORD_IO_THREAD                         /* reserved keyword */
%token  KEYWORD_IPC                               /* keyword */
%token  KEYWORD_IS                                /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ISOLATION                         /* keyword : SQL-2003-R */
%token  KEYWORD_ISSUER                            /* keyword */
%token  KEYWORD_ITERATE                           /* reserved keyword */
%token  KEYWORD_JOIN                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_JSON                              /* keyword : MYSQL */
%token  KEYWORD_JSON_TABLE                        /* reserved keyword : SQL-2016-R (MySQL 8.0) */
%token  KEYWORD_JSON_VALUE                        /* keyword : SQL-2016-R (MySQL 8.0) */
%token  KEYWORD_KEY                               /* reserved keyword : SQL-2003-N */
%token  KEYWORD_KEYRING                           /* keyword (MySQL 8.0) */
%token  KEYWORD_KEYS                              /* reserved keyword */
%token  KEYWORD_KEY_BLOCKEYWORD_SIZE                    /* keyword */
%token  KEYWORD_KILL                              /* reserved keyword */
%token  KEYWORD_LAG                               /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_LANGUAGE                          /* keyword : SQL-2003-R */
%token  KEYWORD_LAST                              /* keyword : SQL-2003-N */
%token  KEYWORD_LAST_VALUE                        /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_LATERAL                           /* reserved keyword : SQL-1999-R (MySQL 8.0) */
%token  KEYWORD_LEAD                              /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_LEADING                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_LEAVE                             /* reserved keyword */
%token  KEYWORD_LEAVES                            /* keyword */
%token  KEYWORD_LEFT                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_LESS                              /* keyword */
%token  KEYWORD_LEVEL                             /* keyword */
%token  KEYWORD_LIKE                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_LIMIT                             /* reserved keyword */
%token  KEYWORD_LINEAR                            /* reserved keyword */
%token  KEYWORD_LINES                             /* reserved keyword */
%token  KEYWORD_LINESTRING                        /* keyword : MYSQL */
%token  KEYWORD_LIST                              /* keyword */
%token  KEYWORD_LOAD                              /* reserved keyword */
%token  KEYWORD_LOCAL                             /* keyword : SQL-2003-R */
%token  KEYWORD_LOCALTIME                         /* reserved keyword */
%token  KEYWORD_LOCALTIMESTAMP                    /* reserved keyword */
%token  KEYWORD_LOCK                              /* reserved keyword */
%token  KEYWORD_LOCKED                            /* keyword (MySQL 8.0) */
%token  KEYWORD_LOCKS                             /* keyword */
%token  KEYWORD_LOG                               /* keyword (MySQL 8.0) */
%token  KEYWORD_LOGFILE                           /* keyword */
%token  KEYWORD_LOGS                              /* keyword */
%token  KEYWORD_LONG                              /* reserved keyword */
%token  KEYWORD_LONGBLOB                          /* reserved keyword : MYSQL */
%token  KEYWORD_LONGTEXT                          /* reserved keyword : MYSQL */
%token  KEYWORD_LOOP                              /* reserved keyword */
%token  KEYWORD_LOW_PRIORITY                      /* reserved keyword */
%token  KEYWORD_MANUAL                            /* reserved keyword */
%token  KEYWORD_MASTER                            /* keyword */
%token  KEYWORD_MASTER_AUTO_POSITION              /* keyword */
%token  KEYWORD_MASTER_BIND                       /* reserved keyword */
%token  KEYWORD_MASTER_COMPRESSION_ALGORITHM      /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_MASTER_CONNECT_RETRY              /* keyword */
%token  KEYWORD_MASTER_DELAY                      /* keyword */
%token  KEYWORD_MASTER_HEARTBEAT_PERIOD           /* keyword */
%token  KEYWORD_MASTER_HOST                       /* keyword */
%token  KEYWORD_MASTER_LOG_FILE                   /* keyword */
%token  KEYWORD_MASTER_LOG_POS                    /* keyword */
%token  KEYWORD_MASTER_PASSWORD                   /* keyword */
%token  KEYWORD_MASTER_PORT                       /* keyword */
%token  KEYWORD_MASTER_PUBLIC_KEY_PATH            /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_MASTER_RETRY_COUNT                /* keyword */
%token  KEYWORD_MASTER_SSL                        /* keyword */
%token  KEYWORD_MASTER_SSL_CA                     /* keyword */
%token  KEYWORD_MASTER_SSL_CAPATH                 /* keyword */
%token  KEYWORD_MASTER_SSL_CERT                   /* keyword */
%token  KEYWORD_MASTER_SSL_CIPHER                 /* keyword */
%token  KEYWORD_MASTER_SSL_CRL                    /* keyword */
%token  KEYWORD_MASTER_SSL_CRLPATH                /* keyword */
%token  KEYWORD_MASTER_SSL_KEY                    /* keyword */
%token  KEYWORD_MASTER_SSL_VERIFY_SERVER_CERT     /* reserved keyword */
%token  KEYWORD_MASTER_TLS_CIPHERSUITES           /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_MASTER_TLS_VERSION                /* keyword */
%token  KEYWORD_MASTER_USER                       /* keyword */
%token  KEYWORD_MASTER_ZSTD_COMPRESSION_LEVEL     /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_MATCH                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_MAX_VALUE                         /* reserved keyword : SQL-2003-N */
%token  KEYWORD_MAX_CONNECTIONS_PER_HOUR          /* keyword */
%token  KEYWORD_MAX_QUERIES_PER_HOUR              /* keyword */
%token  KEYWORD_MAX_ROWS                          /* keyword */
%token  KEYWORD_MAX_SIZE                          /* keyword */
%token  KEYWORD_MAX_UPDATES_PER_HOUR              /* keyword */
%token  KEYWORD_MAX_USER_CONNECTIONS              /* keyword */
%token  KEYWORD_MEDIUM                            /* keyword */
%token  KEYWORD_MEDIUMBLOB                        /* reserved keyword : MYSQL */
%token  KEYWORD_MEDIUMINT                         /* reserved keyword : MYSQL */
%token  KEYWORD_MEDIUMTEXT                        /* reserved keyword : MYSQL */
%token  KEYWORD_MEMBER                            /* keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_MEMORY                            /* keyword */
%token  KEYWORD_MERGE                             /* keyword : SQL-2003-R */
%token  KEYWORD_MESSAGE_TEXT                      /* keyword : SQL-2003-N */
%token  KEYWORD_MICROSECOND                       /* keyword : MYSQL-FUNC */
%token  KEYWORD_MIDDLEINT                         /* reserved keyword */
%token  KEYWORD_MIGRATE                           /* keyword */
%token  KEYWORD_MINUTE                            /* keyword : SQL-2003-R */
%token  KEYWORD_MINUTE_MICROSECOND                /* reserved keyword */
%token  KEYWORD_MINUTE_SECOND                     /* reserved keyword */
%token  KEYWORD_MIN_ROWS                          /* keyword */
%token  KEYWORD_MOD                               /* reserved keyword : SQL-2003-N */
%token  KEYWORD_MODE                              /* keyword */
%token  KEYWORD_MODIFIES                          /* keyword : SQL-2003-R */
%token  KEYWORD_MODIFY                            /* keyword */
%token  KEYWORD_MONTH                             /* keyword : SQL-2003-R */
%token  KEYWORD_MULTILINESTRING                   /* keyword : MYSQL */
%token  KEYWORD_MULTIPOINT                        /* keyword : MYSQL */
%token  KEYWORD_MULTIPOLYGON                      /* keyword : MYSQL */
%token  KEYWORD_MUTEX                             /* keyword */
%token  KEYWORD_MYSQL_ERRNO                       /* keyword */
%token  KEYWORD_NAME                              /* keyword : SQL-2003-N */
%token  KEYWORD_NAMES                             /* keyword : SQL-2003-N */
%token  KEYWORD_NATIONAL                          /* keyword : SQL-2003-R */
%token  KEYWORD_NATURAL                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_NCHAR                             /* keyword : SQL-2003-R */
%token  KEYWORD_NDB                               /* reserved keyword */
%token  KEYWORD_NDBCLUSTER                        /* keyword */
%token  KEYWORD_NESTED                            /* keyword : SQL-2016-N (MySQL 8.0) */
%token  KEYWORD_NETWORKEYWORD_NAMESPACE                 /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_NEVER                             /* keyword */
%token  KEYWORD_NEW                               /* keyword : SQL-2003-R */
%token  KEYWORD_NEXT                              /* keyword : SQL-2003-N */
%token  KEYWORD_NO                                /* keyword : SQL-2003-R */
%token  KEYWORD_NODEGROUP                         /* keyword */
%token  KEYWORD_NONE                              /* keyword : SQL-2003-R */
%token  KEYWORD_NOT                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_NOT2                              /* reserved keyword : SQL-2003-R (sql_mode & MODE_HIGH_NOT_PRECEDENCE) */
%token  KEYWORD_NOWAIT                            /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_NO_WAIT                           /* keyword */
%token  KEYWORD_NO_WRITE_TO_BINLOG                /* reserved keyword */
%token  KEYWORD_NTH_VALUE                         /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_NTILE                             /* reserved keyword : SQL-2011-R (MySQL 8.0) */
%token  KEYWORD_NULL                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_NULLS                             /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_NUMBER                            /* keyword : SQL-2003-N */
%token  KEYWORD_NUMERIC                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_NVARCHAR                          /* keyword */
%token  KEYWORD_OF                                /* reserved keyword : SQL-1999-R (MySQL 8.0) */
%token  KEYWORD_OFF                               /* keyword : SQL-1999-R (MySQL 8.0) */
%token  KEYWORD_OFFSET                            /* keyword */
%token  KEYWORD_OJ                                /* keyword : ODBC (MySQL 8.0) */
%token  KEYWORD_OLD                               /* keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_ON                                /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ONE                               /* keyword */
%token  KEYWORD_ONLY                              /* keyword : SQL-2003-R */
%token  KEYWORD_OPEN                              /* keyword : SQL-2003-R */
%token  KEYWORD_OPTIMIZE                          /* reserved keyword */
%token  KEYWORD_OPTIMIZER_COSTS                   /* reserved keyword */
%token  KEYWORD_OPTION                            /* reserved keyword : SQL-2003-N */
%token  KEYWORD_OPTIONAL                          /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_OPTIONALLY                        /* reserved keyowrd */
%token  KEYWORD_OPTIONS                           /* keyword */
%token  KEYWORD_OR                                /* reserved keyowrd : SQL-2003-R */
%token  KEYWORD_OR2                               /* reserved keyowrd : SQL-2003-R (sql_mode & MODE_PIPES_AS_CONCAT) */
%token  KEYWORD_ORDER                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ORDINALITY                        /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_ORGANIZATION                      /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_OTHERS                            /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_OUT                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_OUTER                             /* reserved keyowrd */
%token  KEYWORD_OUTFILE                           /* reserved keyowrd */
%token  KEYWORD_OVER                              /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_OWNER                             /* keyword */
%token  KEYWORD_PACKEYWORD_KEYS                         /* keyword */
%token  KEYWORD_PAGE                              /* keyword */
%token  KEYWORD_PARALLEL                          /* reserved keyword (MySQL 8.0) */
%token  KEYWORD_PARSER                            /* keyword */
%token  KEYWORD_PARSE_TREE                        /* keyword (MySQL 8.0) */
%token  KEYWORD_PARTIAL                           /* keyword : SQL-2003-N */
%token  KEYWORD_PARTITION                         /* reserved keyword : SQL-2003-R */
%token  KEYWORD_PARTITIONING                      /* keyword */
%token  KEYWORD_PARTITIONS                        /* keyword */
%token  KEYWORD_PASSWORD                          /* keyword */
%token  KEYWORD_PASSWORD_LOCKEYWORD_TIME                /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_PATH                              /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_PERCENT_RANK                      /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_PERSIST                           /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_PERSIST_ONLY                      /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_PHASE                             /* keyword */
%token  KEYWORD_PLUGIN                            /* keyword */
%token  KEYWORD_PLUGINS                           /* keyword */
%token  KEYWORD_PLUGIN_DIR                        /* keyword : INTERNAL */
%token  KEYWORD_POINT                             /* keyword */
%token  KEYWORD_POLYGON                           /* keyword : MYSQL */
%token  KEYWORD_PORT                              /* keyword */
%token  KEYWORD_PRECEDES                          /* keyword : MYSQL */
%token  KEYWORD_PRECEDING                         /* keyword ； SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_PRECISION                         /* reserved keyword : SQL-2003-R */
%token  KEYWORD_PREPARE                           /* keyword : SQL-2003-R */
%token  KEYWORD_PRESERVE                          /* keyword */
%token  KEYWORD_PREV                              /* keyword */
%token  KEYWORD_PRIMARY                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_PRIVILEGES                        /* keyword : SQL-2003-N */
%token  KEYWORD_PRIVILEGE_CHECKS_USER             /* Keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_PROCEDURE                         /* reserved keyword : SQL-2003-R */
%token  KEYWORD_PROCESS                           /* keyword */
%token  KEYWORD_PROCESSLIST                       /* keyword */
%token  KEYWORD_PROFILE                           /* keyword */
%token  KEYWORD_PROFILES                          /* keyword */
%token  KEYWORD_PROXY                             /* keyword */
%token  KEYWORD_PURGE                             /* reserved keyword */
%token  KEYWORD_QUALIFY                           /* reserved keyword (MySQL 8.0) */
%token  KEYWORD_QUARTER                           /* keyword */
%token  KEYWORD_QUERY                             /* keyword */
%token  KEYWORD_QUICK                             /* keyword */
%token  KEYWORD_RANDOM                            /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_RANGE                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_RANK                              /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_READ                              /* reserved keyword : SQL-2003-N */
%token  KEYWORD_READS                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_READ_ONLY                         /* keyword */
%token  KEYWORD_READ_WRITE                        /* reserved keyword */
%token  KEYWORD_REAL                              /* reserved keyowrd : SQL-2003-R */
%token  KEYWORD_REBUILD                           /* keyword */
%token  KEYWORD_RECOVER                           /* keyword */
%token  KEYWORD_RECURSIVE                         /* reserved keyword : SQL-1999-R (MySQL 8.0) */
%token  KEYWORD_REDO_BUFFER_SIZE                  /* keyword */
%token  KEYWORD_REDUNDANT                         /* keyword */
%token  KEYWORD_REFERENCE                         /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_REFERENCES                        /* reserved keyword : SQL-2003-R */
%token  KEYWORD_REGEXP                            /* reserved keyword */
%token  KEYWORD_REGISTRATION                      /* keyword (MySQL 8.0) */
%token  KEYWORD_RELAY                             /* keyword */
%token  KEYWORD_RELAYLOG                          /* keyword */
%token  KEYWORD_RELAY_LOG_FILE                    /* keyword */
%token  KEYWORD_RELAY_LOG_POS                     /* keyword */
%token  KEYWORD_RELAY_THREAD                      /* keyword */
%token  KEYWORD_RELEASE                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_RELOAD                            /* keyowrd */
%token  KEYWORD_REMOVE                            /* keyowrd */
%token  KEYWORD_RENAME                            /* reserved keyword */
%token  KEYWORD_REORGANIZE                        /* keyword */
%token  KEYWORD_REPAIR                            /* keyword */
%token  KEYWORD_REPEAT                            /* reserved keyword : MYSQL-FUNC */
%token  KEYWORD_REPEATABLE                        /* keyword : SQL-2003-N */
%token  KEYWORD_REPLACE                           /* reserved keyword : MYSQL-FUNC */
%token  KEYWORD_REPLICA                           /* keyword */
%token  KEYWORD_REPLICAS                          /* keyword */
%token  KEYWORD_REPLICATE_DO_DB                   /* keyword */
%token  KEYWORD_REPLICATE_DO_TABLE                /* keyword */
%token  KEYWORD_REPLICATE_IGNORE_DB               /* keyword */
%token  KEYWORD_REPLICATE_IGNORE_TABLE            /* keyword */
%token  KEYWORD_REPLICATE_REWRITE_DB              /* keyword */
%token  KEYWORD_REPLICATE_WILD_DO_TABLE           /* keyword */
%token  KEYWORD_REPLICATE_WILD_IGNORE_TABLE       /* keyword */
%token  KEYWORD_REPLICATION                       /* keyword */
%token  KEYWORD_REQUIRE                           /* reserved keyword */
%token  KEYWORD_REQUIRE_ROW_FORMAT                /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_RESET                             /* keyword */
%token  KEYWORD_RESIGNAL                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_RESOURCE                          /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_RESPECT                           /* keyword : SQL_2011-N (MySQL 8.0) */
%token  KEYWORD_RESTART                           /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_RESTORE                           /* keyword */
%token  KEYWORD_RESTRICT                          /* reserved keyword */
%token  KEYWORD_RESUME                            /* keyword */
%token  KEYWORD_RETAIN                            /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_RETURN                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_RETURNED_SQLSTATE                 /* keyword : SQL-2003-N */
%token  KEYWORD_RETURNING                         /* keyword : SQL-2016-N (MySQL 8.0) */
%token  KEYWORD_RETURNS                           /* keyword : SQL-2003-R */
%token  KEYWORD_REUSE                             /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_REVERSE                           /* keyword */
%token  KEYWORD_REVOKE                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_RIGHT                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_RLIKE                             /* reserved keyword */
%token  KEYWORD_ROLE                              /* keyword : SQL-1999-R (MySQL 8.0) */
%token  KEYWORD_ROLLBACK                          /* keyword : SQL-2003-R */
%token  KEYWORD_ROLLUP                            /* keyword : SQL-2003-R */
%token  KEYWORD_ROTATE                            /* keyword */
%token  KEYWORD_ROUTINE                           /* keyword : SQL-2003-N */
%token  KEYWORD_ROW                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ROWS                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_ROW_COUNT                         /* keyword : SQL-2003-N */
%token  KEYWORD_ROW_FORMAT                        /* keyword */
%token  KEYWORD_ROW_NUMBER                        /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_RTREE                             /* keyword */
%token  KEYWORD_S3                                /* keyword (MySQL 8.0) */
%token  KEYWORD_SAVEPOINT                         /* keyword : SQL-2003-R */
%token  KEYWORD_SCHEDULE                          /* keyword */
%token  KEYWORD_SCHEMA                            /* reserved keyword */
%token  KEYWORD_SCHEMAS                           /* reserved keyword */
%token  KEYWORD_SCHEMA_NAME                       /* keyword : SQL-2003-N */
%token  KEYWORD_SECOND                            /* keyword : SQL-2003-R */
%token  KEYWORD_SECONDARY                         /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SECONDARY_ENGINE                  /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SECONDARY_ENGINE_ATTRIBUTE        /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SECONDARY_LOAD                    /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SECONDARY_UNLOAD                  /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SECOND_MICROSECOND                /* reserved keyword */
%token  KEYWORD_SECURITY                          /* keyword : SQL-2003-N */
%token  KEYWORD_SELECT                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SENSITIVE                         /* reserved keyword : FUTURE-USE */
%token  KEYWORD_SEPARATOR                         /* reserved keyword */
%token  KEYWORD_SERIAL                            /* keyword */
%token  KEYWORD_SERIALIZABLE                      /* keyword : SQL-2003-N */
%token  KEYWORD_SERVER                            /* keyword */
%token  KEYWORD_SESSION                           /* keyword : SQL-2003-N */
%token  KEYWORD_SET                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SHARE                             /* keyword */
%token  KEYWORD_SHOW                              /* reserved keyword */
%token  KEYWORD_SHUTDOWN                          /* keyword */
%token  KEYWORD_SIGNAL                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SIGNED                            /* keyword */
%token  KEYWORD_SIMPLE                            /* keyword : SQL-2003-N */
%token  KEYWORD_SKIP                              /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SLAVE                             /* keyword */
%token  KEYWORD_SLOW                              /* keyword */
%token  KEYWORD_SMALLINT                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SNAPSHOT                          /* keyword */
%token  KEYWORD_SOCKET                            /* keyword */
%token  KEYWORD_SOME                              /* reserved keyword */
%token  KEYWORD_SONAME                            /* keyword */
%token  KEYWORD_SOUNDS                            /* keyword */
%token  KEYWORD_SOURCE                            /* keyword */
%token  KEYWORD_SOURCE_AUTO_POSITION              /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_BIND                       /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_COMPRESSION_ALGORITHM      /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_CONNECT_RETRY              /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_DELAY                      /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_HEARTBEAT_PERIOD           /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_HOST                       /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_LOG_FILE                   /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_LOG_POS                    /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_PASSWORD                   /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_PORT                       /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_PUBLIC_KEY_PATH            /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_RETRY_COUNT                /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL                        /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_CA                     /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_CAPATH                 /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_CERT                   /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_CIPHER                 /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_CRL                    /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_CRLPATH                /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_KEY                    /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_SSL_VERIFY_SERVER_CERT     /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_TLS_CIPHERSUITES           /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_TLS_VERSION                /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_USER                       /* keyword (MySQL 8.0) */
%token  KEYWORD_SOURCE_ZSTD_COMPRESSION_LEVEL     /* keyword (MySQL 8.0) */
%token  KEYWORD_SPATIAL                           /* reserved keyword */
%token  KEYWORD_SPECIFIC                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SQL                               /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SQLEXCEPTION                      /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SQLSTATE                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SQLWARNING                        /* reserved keyword : SQL-2003-R */
%token  KEYWORD_SQL_AFTER_GTIDS                   /* keyword : MYSQL */
%token  KEYWORD_SQL_AFTER_MTS_GAPS                /* keyword : MYSQL */
%token  KEYWORD_SQL_BEFORE_GTIDS                  /* keyword : MYSQL */
%token  KEYWORD_SQL_BIG_RESULT                    /* reserved keyword */
%token  KEYWORD_SQL_BUFFER_RESULT                 /* keyword */
%token  KEYWORD_SQL_CALC_FOUND_ROWS               /* reserved keyword */
%token  KEYWORD_SQL_NO_CACHE                      /* keyword */
%token  KEYWORD_SQL_SMALL_RESULT                  /* reserved keyword */
%token  KEYWORD_SQL_THREAD                        /* keyword */
%token  KEYWORD_SQL_TSI_DAY                       /* keyword */
%token  KEYWORD_SQL_TSI_HOUR                      /* keyword */
%token  KEYWORD_SQL_TSI_MINUTE                    /* keyword */
%token  KEYWORD_SQL_TSI_MONTH                     /* keyword */
%token  KEYWORD_SQL_TSI_QUARTER                   /* keyword */
%token  KEYWORD_SQL_TSI_SECOND                    /* keyword */
%token  KEYWORD_SQL_TSI_WEEK                      /* keyword */
%token  KEYWORD_SQL_TSI_YEAR                      /* keyword */
%token  KEYWORD_SRID                              /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_SSL                               /* reserved keyword */
%token  KEYWORD_STACKED                           /* keyword : SQL-2003-N */
%token  KEYWORD_START                             /* keyword : SQL-2003-R */
%token  KEYWORD_STARTING                          /* reserved keyword */
%token  KEYWORD_STARTS                            /* keyword */
%token  KEYWORD_STATS_AUTO_RECALC                 /* keyword */
%token  KEYWORD_STATS_PERSISTENT                  /* keyword */
%token  KEYWORD_STATS_SAMPLE_PAGES                /* keyword */
%token  KEYWORD_STATUS                            /* keyword */
%token  KEYWORD_STOP                              /* keyword */
%token  KEYWORD_STORAGE                           /* keyword */
%token  KEYWORD_STORED                            /* reserved keyword */
%token  KEYWORD_STRAIGHT_JOIN                     /* reserved keyword */
%token  KEYWORD_STREAM                            /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_STRING                            /* keyword */
%token  KEYWORD_SUBCLASS_ORIGIN                   /* keyword : SQL-2003-N */
%token  KEYWORD_SUBJECT                           /* keyword */
%token  KEYWORD_SUBPARTITION                      /* keyword */
%token  KEYWORD_SUBPARTITIONS                     /* keyword */
%token  KEYWORD_SUPER                             /* keyword */
%token  KEYWORD_SUSPEND                           /* keyword */
%token  KEYWORD_SWAPS                             /* keyword */
%token  KEYWORD_SWITCHES                          /* keyword */
%token  KEYWORD_SYSTEM                            /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_TABLE                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_TABLES                            /* keyword */
%token  KEYWORD_TABLESAMPLE                       /* reserved keyword */
%token  KEYWORD_TABLESPACE                        /* keyword */
%token  KEYWORD_TABLE_CHECKSUM                    /* keyword */
%token  KEYWORD_TABLE_NAME                        /* keyword : SQL-2003-N */
%token  KEYWORD_TEMPORARY                         /* keyword : SQL-2003-N */
%token  KEYWORD_TEMPTABLE                         /* keyword */
%token  KEYWORD_TERMINATED                        /* reserved keyword */
%token  KEYWORD_TEXT                              /* keyword */
%token  KEYWORD_THAN                              /* keyword */
%token  KEYWORD_THEN                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_THREAD_PRIORITY                   /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_TIES                              /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_TIME                              /* keyword : SQL-2003-R */
%token  KEYWORD_TIMESTAMP                         /* keyword : SQL-2003-R */
%token  KEYWORD_TIMESTAMP_ADD                     /* keyword */
%token  KEYWORD_TIMESTAMP_DIFF                    /* keyword */
%token  KEYWORD_TINYBLOB                          /* reserved keyword : MYSQL */
%token  KEYWORD_TINYINT                           /* reserved keyword : MYSQL */
%token  KEYWORD_TINYTEXT_SYN                      /* reserved keyword : MYSQL */
%token  KEYWORD_TLS                               /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_TO                                /* reserved keyword : SQL-2003-R */
%token  KEYWORD_TRAILING                          /* reserved keyword : SQL-2003-R */
%token  KEYWORD_TRANSACTION                       /* keyword */
%token  KEYWORD_TRIGGER                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_TRIGGERS                          /* keyword */
%token  KEYWORD_TRUE                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_TRUNCATE                          /* keyword */
%token  KEYWORD_TYPE                              /* keyword : SQL-2003-N */
%token  KEYWORD_TYPES                             /* keyword */
%token  KEYWORD_UNBOUNDED                         /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_UNCOMMITTED                       /* keyword : SQL-2003-N */
%token  KEYWORD_UNDEFINED                         /* keyword */
%token  KEYWORD_UNDO                              /* reserved keyword : FUTURE-USE */
%token  KEYWORD_UNDOFILE                          /* keyword */
%token  KEYWORD_UNDO_BUFFER_SIZE                  /* keyword */
%token  KEYWORD_UNICODE                           /* keyword */
%token  KEYWORD_UNINSTALL                         /* keyword */
%token  KEYWORD_UNION                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_UNIQUE                            /* reserved keyword */
%token  KEYWORD_UNKNOWN                           /* keyword : SQL-2003-R */
%token  KEYWORD_UNLOCK                            /* reserved keyword */
%token  KEYWORD_UNREGISTER                        /* keyword (MySQL 8.0) */
%token  KEYWORD_UNSIGNED                          /* reserved keyword : MYSQL */
%token  KEYWORD_UNTIL                             /* keyword */
%token  KEYWORD_UPDATE                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_UPGRADE                           /* keyword */
%token  KEYWORD_URL                               /* keyword (MySQL 8.0) */
%token  KEYWORD_USAGE                             /* reserved keyword : SQL-2003-N */
%token  KEYWORD_USE                               /* reserved keyword */
%token  KEYWORD_USER                              /* keyword : SQL-2003-R */
%token  KEYWORD_USER_RESOURCES                    /* reserved keyword */
%token  KEYWORD_USE_FRM                           /* keyword */
%token  KEYWORD_USING                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_UTC_DATE                          /* reserved keyword */
%token  KEYWORD_UTC_TIME                          /* reserved keyword */
%token  KEYWORD_UTC_TIMESTAMP                     /* reserved keyword */
%token  KEYWORD_VALIDATION                        /* keyword : MYSQL */
%token  KEYWORD_VALUE                             /* keyword : SQL-2003-R */
%token  KEYWORD_VALUES                            /* reserved keyword : SQL-2003-R */
%token  KEYWORD_VARBINARY                         /* reserved keyword : SQL-2008-R */
%token  KEYWORD_VARCHAR                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_VARCHARACTER                      /* reserved keyword */
%token  KEYWORD_VARIABLES                         /* keyword */
%token  KEYWORD_VARYING                           /* reserved keyword : SQL-2003-R */
%token  KEYWORD_VCPU                              /* keyword : MYSQL (MySQL 8.0) */
%token  KEYWORD_VIEW                              /* keyword : SQL-2003-N */
%token  KEYWORD_VIRTUAL                           /* reserved keyword */
%token  KEYWORD_VISIBLE                           /* keyword */
%token  KEYWORD_WAIT                              /* keyword */
%token  KEYWORD_WARNINGS                          /* keyword */
%token  KEYWORD_WEEK                              /* keyword */
%token  KEYWORD_WEIGHT_STRING                     /* keyword */
%token  KEYWORD_WHEN                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_WHERE                             /* reserved keyword : SQL-2003-R */
%token  KEYWORD_WHILE                             /* reserved keyword */
%token  KEYWORD_WINDOW                            /* reserved keyword : SQL-2003-R (MySQL 8.0) */
%token  KEYWORD_WITH                              /* reserved keyword : SQL-2003-R */
%token  KEYWORD_WITHOUT                           /* keyword : SQL-2003-R */
%token  KEYWORD_WORK                              /* keyword : SQL-2003-N */
%token  KEYWORD_WRAPPER                           /* keyword */
%token  KEYWORD_WRITE                             /* reserved keyword : SQL-2003-N */
%token  KEYWORD_X509                              /* keyword */
%token  KEYWORD_XA                                /* keyword */
%token  KEYWORD_XID                               /* keyword : MYSQL */
%token  KEYWORD_XML                               /* keyword */
%token  KEYWORD_XOR                               /* reserved keyword */
%token  KEYWORD_YEAR                              /* keyword : SQL-2003-R */
%token  KEYWORD_YEAR_MONTH                        /* reserved keyword */
%token  KEYWORD_ZEROFILL                          /* reserved keyword : MYSQL */
%token  KEYWORD_ZONE                              /* keyword : SQL-2003-N (MySQL 8.0) */
%token  KEYWORD_WITH_ROLLUP                       /* INTERNAL */

/**
非关键字函数
*/
%token  ADDDATE_SYM                               /* MYSQL-FUNC */
%token  CURDATE                                   /* MYSQL-FUNC */
%token  CURTIME                                   /* MYSQL-FUNC */
%token  DATE_ADD_INTERVAL                         /* MYSQL-FUNC */
%token  DATE_SUB_INTERVAL                         /* MYSQL-FUNC */
%token  EXTRACT_SYM                               /* SQL-2003-N */
%token  NOW_SYM
%token  SUBDATE_SYM
%token  SYSDATE
%token  BIT_AND_SYM                               /* MYSQL-FUNC */
%token  BIT_OR_SYM                                /* MYSQL-FUNC */
%token  BIT_XOR_SYM                               /* MYSQL-FUNC */
%token  COUNT_SYM                                 /* SQL-2003-N */
%token  GROUP_CONCAT_SYM
%token  JSON_ARRAYAGG                             /* SQL-2015-R (MySQL 8.0) */
%token  JSON_OBJECTAGG                            /* SQL-2015-R (MySQL 8.0) */
%token  MAX_SYM                                   /* SQL-2003-N */
%token  MIN_SYM                                   /* SQL-2003-N */
%token  STD_SYM
%token  STDDEV_SAMP_SYM                           /* SQL-2003-N */
%token  SUM_SYM                                   /* SQL-2003-N */
%token  VAR_SAMP_SYM
%token  VARIANCE_SYM
%token  SUBSTRING                                 /* SQL-2003-N */
%token  TRIM                                      /* SQL-2003-N */
%token  CAST_SYM                                  /* SQL-2003-R */
%token  ST_COLLECT_SYM                            /* (MySQL 8.0) */

%type <num> res

%%
res : TRIM;
%%

int main(){
	yyparse();
	return 0;
}

void yyerror(char *e){
    fprintf(stderr, "%s\n", e);
}