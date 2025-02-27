#include <iostream>

#include "gtest/gtest.h"
#include "objects/thd_class.h"
#include "test/lexical_base.h"


TEST(lexical_one_token, keyword_accessible) {
    EXPECT_EQ(KEYWORD_ACCESSIBLE, parse_one_token(std::string("ACCESSIBLE")));
    EXPECT_EQ(KEYWORD_ACCESSIBLE, parse_one_token(std::string("accessible")));
}

TEST(lexical_one_token, keyword_account) {
    EXPECT_EQ(KEYWORD_ACCOUNT, parse_one_token(std::string("ACCOUNT")));
    EXPECT_EQ(KEYWORD_ACCOUNT, parse_one_token(std::string("account")));
}

TEST(lexical_one_token, keyword_action) {
    EXPECT_EQ(KEYWORD_ACTION, parse_one_token(std::string("ACTION")));
    EXPECT_EQ(KEYWORD_ACTION, parse_one_token(std::string("action")));
}

TEST(lexical_one_token, keyword_active) {
    EXPECT_EQ(KEYWORD_ACTIVE, parse_one_token(std::string("ACTIVE")));
    EXPECT_EQ(KEYWORD_ACTIVE, parse_one_token(std::string("active")));
}

TEST(lexical_one_token, keyword_add) {
    EXPECT_EQ(KEYWORD_ADD, parse_one_token(std::string("ADD")));
    EXPECT_EQ(KEYWORD_ADD, parse_one_token(std::string("add")));
}

TEST(lexical_one_token, keyword_admin) {
    EXPECT_EQ(KEYWORD_ADMIN, parse_one_token(std::string("ADMIN")));
    EXPECT_EQ(KEYWORD_ADMIN, parse_one_token(std::string("admin")));
}

TEST(lexical_one_token, keyword_after) {
    EXPECT_EQ(KEYWORD_AFTER, parse_one_token(std::string("AFTER")));
    EXPECT_EQ(KEYWORD_AFTER, parse_one_token(std::string("after")));
}

TEST(lexical_one_token, keyword_against) {
    EXPECT_EQ(KEYWORD_AGAINST, parse_one_token(std::string("AGAINST")));
    EXPECT_EQ(KEYWORD_AGAINST, parse_one_token(std::string("against")));
}

TEST(lexical_one_token, keyword_aggregate) {
    EXPECT_EQ(KEYWORD_AGGREGATE, parse_one_token(std::string("AGGREGATE")));
    EXPECT_EQ(KEYWORD_AGGREGATE, parse_one_token(std::string("aggregate")));
}

TEST(lexical_one_token, keyword_algorithm) {
    EXPECT_EQ(KEYWORD_ALGORITHM, parse_one_token(std::string("ALGORITHM")));
    EXPECT_EQ(KEYWORD_ALGORITHM, parse_one_token(std::string("algorithm")));
}

TEST(lexical_one_token, keyword_all) {
    EXPECT_EQ(KEYWORD_ALL, parse_one_token(std::string("ALL")));
    EXPECT_EQ(KEYWORD_ALL, parse_one_token(std::string("all")));
}

TEST(lexical_one_token, keyword_alter) {
    EXPECT_EQ(KEYWORD_ALTER, parse_one_token(std::string("ALTER")));
    EXPECT_EQ(KEYWORD_ALTER, parse_one_token(std::string("alter")));
}

TEST(lexical_one_token, keyword_always) {
    EXPECT_EQ(KEYWORD_ALWAYS, parse_one_token(std::string("ALWAYS")));
    EXPECT_EQ(KEYWORD_ALWAYS, parse_one_token(std::string("always")));
}

TEST(lexical_one_token, keyword_analyze) {
    EXPECT_EQ(KEYWORD_ANALYZE, parse_one_token(std::string("ANALYZE")));
    EXPECT_EQ(KEYWORD_ANALYZE, parse_one_token(std::string("analyze")));
}

TEST(lexical_one_token, keyword_and) {
    EXPECT_EQ(KEYWORD_AND, parse_one_token(std::string("AND")));
    EXPECT_EQ(KEYWORD_AND, parse_one_token(std::string("and")));
}

TEST(lexical_one_token, keyword_any) {
    EXPECT_EQ(KEYWORD_ANY, parse_one_token(std::string("ANY")));
    EXPECT_EQ(KEYWORD_ANY, parse_one_token(std::string("any")));
}

TEST(lexical_one_token, keyword_array) {
    EXPECT_EQ(KEYWORD_ARRAY, parse_one_token(std::string("ARRAY")));
    EXPECT_EQ(KEYWORD_ARRAY, parse_one_token(std::string("array")));
}

TEST(lexical_one_token, keyword_as) {
    EXPECT_EQ(KEYWORD_AS, parse_one_token(std::string("AS")));
    EXPECT_EQ(KEYWORD_AS, parse_one_token(std::string("as")));
}

TEST(lexical_one_token, keyword_asc) {
    EXPECT_EQ(KEYWORD_ASC, parse_one_token(std::string("ASC")));
    EXPECT_EQ(KEYWORD_ASC, parse_one_token(std::string("asc")));
}

TEST(lexical_one_token, keyword_ascii) {
    EXPECT_EQ(KEYWORD_ASCII, parse_one_token(std::string("ASCII")));
    EXPECT_EQ(KEYWORD_ASCII, parse_one_token(std::string("ascii")));
}

TEST(lexical_one_token, keyword_asensitive) {
    EXPECT_EQ(KEYWORD_ASENSITIVE, parse_one_token(std::string("ASENSITIVE")));
    EXPECT_EQ(KEYWORD_ASENSITIVE, parse_one_token(std::string("asensitive")));
}

TEST(lexical_one_token, keyword_at) {
    EXPECT_EQ(KEYWORD_AT, parse_one_token(std::string("AT")));
    EXPECT_EQ(KEYWORD_AT, parse_one_token(std::string("at")));
}

TEST(lexical_one_token, keyword_attribute) {
    EXPECT_EQ(KEYWORD_ATTRIBUTE, parse_one_token(std::string("ATTRIBUTE")));
    EXPECT_EQ(KEYWORD_ATTRIBUTE, parse_one_token(std::string("attribute")));
}

TEST(lexical_one_token, keyword_authentication) {
    EXPECT_EQ(KEYWORD_AUTHENTICATION, parse_one_token(std::string("AUTHENTICATION")));
    EXPECT_EQ(KEYWORD_AUTHENTICATION, parse_one_token(std::string("authentication")));
}

TEST(lexical_one_token, keyword_auto_inc) {
    EXPECT_EQ(KEYWORD_AUTO_INC, parse_one_token(std::string("AUTO_INC")));
    EXPECT_EQ(KEYWORD_AUTO_INC, parse_one_token(std::string("auto_inc")));
}

TEST(lexical_one_token, keyword_autoextend_size) {
    EXPECT_EQ(KEYWORD_AUTOEXTEND_SIZE, parse_one_token(std::string("AUTOEXTEND_SIZE")));
    EXPECT_EQ(KEYWORD_AUTOEXTEND_SIZE, parse_one_token(std::string("autoextend_size")));
}

TEST(lexical_one_token, keyword_auto_increment) {
    EXPECT_EQ(KEYWORD_AUTO_INCREMENT, parse_one_token(std::string("AUTO_INCREMENT")));
    EXPECT_EQ(KEYWORD_AUTO_INCREMENT, parse_one_token(std::string("auto_increment")));
}

TEST(lexical_one_token, keyword_avg) {
    EXPECT_EQ(KEYWORD_AVG, parse_one_token(std::string("AVG")));
    EXPECT_EQ(KEYWORD_AVG, parse_one_token(std::string("avg")));
}

TEST(lexical_one_token, keyword_avg_row_length) {
    EXPECT_EQ(KEYWORD_AVG_ROW_LENGTH, parse_one_token(std::string("AVG_ROW_LENGTH")));
    EXPECT_EQ(KEYWORD_AVG_ROW_LENGTH, parse_one_token(std::string("avg_row_length")));
}

TEST(lexical_one_token, keyword_backup) {
    EXPECT_EQ(KEYWORD_BACKUP, parse_one_token(std::string("BACKUP")));
    EXPECT_EQ(KEYWORD_BACKUP, parse_one_token(std::string("backup")));
}

TEST(lexical_one_token, keyword_before) {
    EXPECT_EQ(KEYWORD_BEFORE, parse_one_token(std::string("BEFORE")));
    EXPECT_EQ(KEYWORD_BEFORE, parse_one_token(std::string("before")));
}

TEST(lexical_one_token, keyword_begin) {
    EXPECT_EQ(KEYWORD_BEGIN, parse_one_token(std::string("BEGIN")));
    EXPECT_EQ(KEYWORD_BEGIN, parse_one_token(std::string("begin")));
}

TEST(lexical_one_token, keyword_bernoulli) {
    EXPECT_EQ(KEYWORD_BERNOULLI, parse_one_token(std::string("BERNOULLI")));
    EXPECT_EQ(KEYWORD_BERNOULLI, parse_one_token(std::string("bernoulli")));
}

TEST(lexical_one_token, keyword_between) {
    EXPECT_EQ(KEYWORD_BETWEEN, parse_one_token(std::string("BETWEEN")));
    EXPECT_EQ(KEYWORD_BETWEEN, parse_one_token(std::string("between")));
}

TEST(lexical_one_token, keyword_bigint) {
    EXPECT_EQ(KEYWORD_BIGINT, parse_one_token(std::string("BIGINT")));
    EXPECT_EQ(KEYWORD_BIGINT, parse_one_token(std::string("bigint")));
}

TEST(lexical_one_token, keyword_binary) {
    EXPECT_EQ(KEYWORD_BINARY, parse_one_token(std::string("BINARY")));
    EXPECT_EQ(KEYWORD_BINARY, parse_one_token(std::string("binary")));
}

TEST(lexical_one_token, keyword_binlog) {
    EXPECT_EQ(KEYWORD_BINLOG, parse_one_token(std::string("BINLOG")));
    EXPECT_EQ(KEYWORD_BINLOG, parse_one_token(std::string("binlog")));
}

TEST(lexical_one_token, keyword_bit) {
    EXPECT_EQ(KEYWORD_BIT, parse_one_token(std::string("BIT")));
    EXPECT_EQ(KEYWORD_BIT, parse_one_token(std::string("bit")));
}

TEST(lexical_one_token, keyword_blob) {
    EXPECT_EQ(KEYWORD_BLOB, parse_one_token(std::string("BLOB")));
    EXPECT_EQ(KEYWORD_BLOB, parse_one_token(std::string("blob")));
}

TEST(lexical_one_token, keyword_block) {
    EXPECT_EQ(KEYWORD_BLOCK, parse_one_token(std::string("BLOCK")));
    EXPECT_EQ(KEYWORD_BLOCK, parse_one_token(std::string("block")));
}

TEST(lexical_one_token, keyword_bool) {
    EXPECT_EQ(KEYWORD_BOOL, parse_one_token(std::string("BOOL")));
    EXPECT_EQ(KEYWORD_BOOL, parse_one_token(std::string("bool")));
}

TEST(lexical_one_token, keyword_boolean) {
    EXPECT_EQ(KEYWORD_BOOLEAN, parse_one_token(std::string("BOOLEAN")));
    EXPECT_EQ(KEYWORD_BOOLEAN, parse_one_token(std::string("boolean")));
}

TEST(lexical_one_token, keyword_both) {
    EXPECT_EQ(KEYWORD_BOTH, parse_one_token(std::string("BOTH")));
    EXPECT_EQ(KEYWORD_BOTH, parse_one_token(std::string("both")));
}

TEST(lexical_one_token, keyword_btree) {
    EXPECT_EQ(KEYWORD_BTREE, parse_one_token(std::string("BTREE")));
    EXPECT_EQ(KEYWORD_BTREE, parse_one_token(std::string("btree")));
}

TEST(lexical_one_token, keyword_buckets) {
    EXPECT_EQ(KEYWORD_BUCKETS, parse_one_token(std::string("BUCKETS")));
    EXPECT_EQ(KEYWORD_BUCKETS, parse_one_token(std::string("buckets")));
}

TEST(lexical_one_token, keyword_bulk) {
    EXPECT_EQ(KEYWORD_BULK, parse_one_token(std::string("BULK")));
    EXPECT_EQ(KEYWORD_BULK, parse_one_token(std::string("bulk")));
}

TEST(lexical_one_token, keyword_by) {
    EXPECT_EQ(KEYWORD_BY, parse_one_token(std::string("BY")));
    EXPECT_EQ(KEYWORD_BY, parse_one_token(std::string("by")));
}

TEST(lexical_one_token, keyword_byte) {
    EXPECT_EQ(KEYWORD_BYTE, parse_one_token(std::string("BYTE")));
    EXPECT_EQ(KEYWORD_BYTE, parse_one_token(std::string("byte")));
}

TEST(lexical_one_token, keyword_cache) {
    EXPECT_EQ(KEYWORD_CACHE, parse_one_token(std::string("CACHE")));
    EXPECT_EQ(KEYWORD_CACHE, parse_one_token(std::string("cache")));
}

TEST(lexical_one_token, keyword_call) {
    EXPECT_EQ(KEYWORD_CALL, parse_one_token(std::string("CALL")));
    EXPECT_EQ(KEYWORD_CALL, parse_one_token(std::string("call")));
}

TEST(lexical_one_token, keyword_cascade) {
    EXPECT_EQ(KEYWORD_CASCADE, parse_one_token(std::string("CASCADE")));
    EXPECT_EQ(KEYWORD_CASCADE, parse_one_token(std::string("cascade")));
}

TEST(lexical_one_token, keyword_cascaded) {
    EXPECT_EQ(KEYWORD_CASCADED, parse_one_token(std::string("CASCADED")));
    EXPECT_EQ(KEYWORD_CASCADED, parse_one_token(std::string("cascaded")));
}

TEST(lexical_one_token, keyword_case) {
    EXPECT_EQ(KEYWORD_CASE, parse_one_token(std::string("CASE")));
    EXPECT_EQ(KEYWORD_CASE, parse_one_token(std::string("case")));
}

TEST(lexical_one_token, keyword_catalog_name) {
    EXPECT_EQ(KEYWORD_CATALOG_NAME, parse_one_token(std::string("CATALOG_NAME")));
    EXPECT_EQ(KEYWORD_CATALOG_NAME, parse_one_token(std::string("catalog_name")));
}

TEST(lexical_one_token, keyword_chain) {
    EXPECT_EQ(KEYWORD_CHAIN, parse_one_token(std::string("CHAIN")));
    EXPECT_EQ(KEYWORD_CHAIN, parse_one_token(std::string("chain")));
}

TEST(lexical_one_token, keyword_challenge_response) {
    EXPECT_EQ(KEYWORD_CHALLENGE_RESPONSE, parse_one_token(std::string("CHALLENGE_RESPONSE")));
    EXPECT_EQ(KEYWORD_CHALLENGE_RESPONSE, parse_one_token(std::string("challenge_response")));
}

TEST(lexical_one_token, keyword_change) {
    EXPECT_EQ(KEYWORD_CHANGE, parse_one_token(std::string("CHANGE")));
    EXPECT_EQ(KEYWORD_CHANGE, parse_one_token(std::string("change")));
}

TEST(lexical_one_token, keyword_changed) {
    EXPECT_EQ(KEYWORD_CHANGED, parse_one_token(std::string("CHANGED")));
    EXPECT_EQ(KEYWORD_CHANGED, parse_one_token(std::string("changed")));
}

TEST(lexical_one_token, keyword_channel) {
    EXPECT_EQ(KEYWORD_CHANNEL, parse_one_token(std::string("CHANNEL")));
    EXPECT_EQ(KEYWORD_CHANNEL, parse_one_token(std::string("channel")));
}

TEST(lexical_one_token, keyword_char) {
    EXPECT_EQ(KEYWORD_CHAR, parse_one_token(std::string("CHAR")));
    EXPECT_EQ(KEYWORD_CHAR, parse_one_token(std::string("char")));
}

TEST(lexical_one_token, keyword_character) {
    EXPECT_EQ(KEYWORD_CHARACTER, parse_one_token(std::string("CHARACTER")));
    EXPECT_EQ(KEYWORD_CHARACTER, parse_one_token(std::string("character")));
}

TEST(lexical_one_token, keyword_charset) {
    EXPECT_EQ(KEYWORD_CHARSET, parse_one_token(std::string("CHARSET")));
    EXPECT_EQ(KEYWORD_CHARSET, parse_one_token(std::string("charset")));
}

TEST(lexical_one_token, keyword_check) {
    EXPECT_EQ(KEYWORD_CHECK, parse_one_token(std::string("CHECK")));
    EXPECT_EQ(KEYWORD_CHECK, parse_one_token(std::string("check")));
}

TEST(lexical_one_token, keyword_checksum) {
    EXPECT_EQ(KEYWORD_CHECKSUM, parse_one_token(std::string("CHECKSUM")));
    EXPECT_EQ(KEYWORD_CHECKSUM, parse_one_token(std::string("checksum")));
}

TEST(lexical_one_token, keyword_cipher) {
    EXPECT_EQ(KEYWORD_CIPHER, parse_one_token(std::string("CIPHER")));
    EXPECT_EQ(KEYWORD_CIPHER, parse_one_token(std::string("cipher")));
}

TEST(lexical_one_token, keyword_class_origin) {
    EXPECT_EQ(KEYWORD_CLASS_ORIGIN, parse_one_token(std::string("CLASS_ORIGIN")));
    EXPECT_EQ(KEYWORD_CLASS_ORIGIN, parse_one_token(std::string("class_origin")));
}

TEST(lexical_one_token, keyword_client) {
    EXPECT_EQ(KEYWORD_CLIENT, parse_one_token(std::string("CLIENT")));
    EXPECT_EQ(KEYWORD_CLIENT, parse_one_token(std::string("client")));
}

TEST(lexical_one_token, keyword_clone) {
    EXPECT_EQ(KEYWORD_CLONE, parse_one_token(std::string("CLONE")));
    EXPECT_EQ(KEYWORD_CLONE, parse_one_token(std::string("clone")));
}

TEST(lexical_one_token, keyword_close) {
    EXPECT_EQ(KEYWORD_CLOSE, parse_one_token(std::string("CLOSE")));
    EXPECT_EQ(KEYWORD_CLOSE, parse_one_token(std::string("close")));
}

TEST(lexical_one_token, keyword_coalesce) {
    EXPECT_EQ(KEYWORD_COALESCE, parse_one_token(std::string("COALESCE")));
    EXPECT_EQ(KEYWORD_COALESCE, parse_one_token(std::string("coalesce")));
}

TEST(lexical_one_token, keyword_code) {
    EXPECT_EQ(KEYWORD_CODE, parse_one_token(std::string("CODE")));
    EXPECT_EQ(KEYWORD_CODE, parse_one_token(std::string("code")));
}

TEST(lexical_one_token, keyword_collate) {
    EXPECT_EQ(KEYWORD_COLLATE, parse_one_token(std::string("COLLATE")));
    EXPECT_EQ(KEYWORD_COLLATE, parse_one_token(std::string("collate")));
}

TEST(lexical_one_token, keyword_collation) {
    EXPECT_EQ(KEYWORD_COLLATION, parse_one_token(std::string("COLLATION")));
    EXPECT_EQ(KEYWORD_COLLATION, parse_one_token(std::string("collation")));
}

TEST(lexical_one_token, keyword_column) {
    EXPECT_EQ(KEYWORD_COLUMN, parse_one_token(std::string("COLUMN")));
    EXPECT_EQ(KEYWORD_COLUMN, parse_one_token(std::string("column")));
}

TEST(lexical_one_token, keyword_columns) {
    EXPECT_EQ(KEYWORD_COLUMNS, parse_one_token(std::string("COLUMNS")));
    EXPECT_EQ(KEYWORD_COLUMNS, parse_one_token(std::string("columns")));
}

TEST(lexical_one_token, keyword_column_format) {
    EXPECT_EQ(KEYWORD_COLUMN_FORMAT, parse_one_token(std::string("COLUMN_FORMAT")));
    EXPECT_EQ(KEYWORD_COLUMN_FORMAT, parse_one_token(std::string("column_format")));
}

TEST(lexical_one_token, keyword_column_name) {
    EXPECT_EQ(KEYWORD_COLUMN_NAME, parse_one_token(std::string("COLUMN_NAME")));
    EXPECT_EQ(KEYWORD_COLUMN_NAME, parse_one_token(std::string("column_name")));
}

TEST(lexical_one_token, keyword_comment) {
    EXPECT_EQ(KEYWORD_COMMENT, parse_one_token(std::string("COMMENT")));
    EXPECT_EQ(KEYWORD_COMMENT, parse_one_token(std::string("comment")));
}

TEST(lexical_one_token, keyword_commit) {
    EXPECT_EQ(KEYWORD_COMMIT, parse_one_token(std::string("COMMIT")));
    EXPECT_EQ(KEYWORD_COMMIT, parse_one_token(std::string("commit")));
}

TEST(lexical_one_token, keyword_committed) {
    EXPECT_EQ(KEYWORD_COMMITTED, parse_one_token(std::string("COMMITTED")));
    EXPECT_EQ(KEYWORD_COMMITTED, parse_one_token(std::string("committed")));
}

TEST(lexical_one_token, keyword_compact) {
    EXPECT_EQ(KEYWORD_COMPACT, parse_one_token(std::string("COMPACT")));
    EXPECT_EQ(KEYWORD_COMPACT, parse_one_token(std::string("compact")));
}

TEST(lexical_one_token, keyword_completion) {
    EXPECT_EQ(KEYWORD_COMPLETION, parse_one_token(std::string("COMPLETION")));
    EXPECT_EQ(KEYWORD_COMPLETION, parse_one_token(std::string("completion")));
}

TEST(lexical_one_token, keyword_component) {
    EXPECT_EQ(KEYWORD_COMPONENT, parse_one_token(std::string("COMPONENT")));
    EXPECT_EQ(KEYWORD_COMPONENT, parse_one_token(std::string("component")));
}

TEST(lexical_one_token, keyword_compressed) {
    EXPECT_EQ(KEYWORD_COMPRESSED, parse_one_token(std::string("COMPRESSED")));
    EXPECT_EQ(KEYWORD_COMPRESSED, parse_one_token(std::string("compressed")));
}

TEST(lexical_one_token, keyword_compression) {
    EXPECT_EQ(KEYWORD_COMPRESSION, parse_one_token(std::string("COMPRESSION")));
    EXPECT_EQ(KEYWORD_COMPRESSION, parse_one_token(std::string("compression")));
}

TEST(lexical_one_token, keyword_concurrent) {
    EXPECT_EQ(KEYWORD_CONCURRENT, parse_one_token(std::string("CONCURRENT")));
    EXPECT_EQ(KEYWORD_CONCURRENT, parse_one_token(std::string("concurrent")));
}

TEST(lexical_one_token, keyword_condition) {
    EXPECT_EQ(KEYWORD_CONDITION, parse_one_token(std::string("CONDITION")));
    EXPECT_EQ(KEYWORD_CONDITION, parse_one_token(std::string("condition")));
}

TEST(lexical_one_token, keyword_connection) {
    EXPECT_EQ(KEYWORD_CONNECTION, parse_one_token(std::string("CONNECTION")));
    EXPECT_EQ(KEYWORD_CONNECTION, parse_one_token(std::string("connection")));
}

TEST(lexical_one_token, keyword_consistent) {
    EXPECT_EQ(KEYWORD_CONSISTENT, parse_one_token(std::string("CONSISTENT")));
    EXPECT_EQ(KEYWORD_CONSISTENT, parse_one_token(std::string("consistent")));
}

TEST(lexical_one_token, keyword_constraint) {
    EXPECT_EQ(KEYWORD_CONSTRAINT, parse_one_token(std::string("CONSTRAINT")));
    EXPECT_EQ(KEYWORD_CONSTRAINT, parse_one_token(std::string("constraint")));
}

TEST(lexical_one_token, keyword_constraint_catalog) {
    EXPECT_EQ(KEYWORD_CONSTRAINT_CATALOG, parse_one_token(std::string("CONSTRAINT_CATALOG")));
    EXPECT_EQ(KEYWORD_CONSTRAINT_CATALOG, parse_one_token(std::string("constraint_catalog")));
}

TEST(lexical_one_token, keyword_constraint_name) {
    EXPECT_EQ(KEYWORD_CONSTRAINT_NAME, parse_one_token(std::string("CONSTRAINT_NAME")));
    EXPECT_EQ(KEYWORD_CONSTRAINT_NAME, parse_one_token(std::string("constraint_name")));
}

TEST(lexical_one_token, keyword_constraint_schema) {
    EXPECT_EQ(KEYWORD_CONSTRAINT_SCHEMA, parse_one_token(std::string("CONSTRAINT_SCHEMA")));
    EXPECT_EQ(KEYWORD_CONSTRAINT_SCHEMA, parse_one_token(std::string("constraint_schema")));
}

TEST(lexical_one_token, keyword_contains) {
    EXPECT_EQ(KEYWORD_CONTAINS, parse_one_token(std::string("CONTAINS")));
    EXPECT_EQ(KEYWORD_CONTAINS, parse_one_token(std::string("contains")));
}

TEST(lexical_one_token, keyword_context) {
    EXPECT_EQ(KEYWORD_CONTEXT, parse_one_token(std::string("CONTEXT")));
    EXPECT_EQ(KEYWORD_CONTEXT, parse_one_token(std::string("context")));
}

TEST(lexical_one_token, keyword_continue) {
    EXPECT_EQ(KEYWORD_CONTINUE, parse_one_token(std::string("CONTINUE")));
    EXPECT_EQ(KEYWORD_CONTINUE, parse_one_token(std::string("continue")));
}

TEST(lexical_one_token, keyword_convert) {
    EXPECT_EQ(KEYWORD_CONVERT, parse_one_token(std::string("CONVERT")));
    EXPECT_EQ(KEYWORD_CONVERT, parse_one_token(std::string("convert")));
}

TEST(lexical_one_token, keyword_cpu) {
    EXPECT_EQ(KEYWORD_CPU, parse_one_token(std::string("CPU")));
    EXPECT_EQ(KEYWORD_CPU, parse_one_token(std::string("cpu")));
}

TEST(lexical_one_token, keyword_create) {
    EXPECT_EQ(KEYWORD_CREATE, parse_one_token(std::string("CREATE")));
    EXPECT_EQ(KEYWORD_CREATE, parse_one_token(std::string("create")));
}

TEST(lexical_one_token, keyword_cross) {
    EXPECT_EQ(KEYWORD_CROSS, parse_one_token(std::string("CROSS")));
    EXPECT_EQ(KEYWORD_CROSS, parse_one_token(std::string("cross")));
}

TEST(lexical_one_token, keyword_cube) {
    EXPECT_EQ(KEYWORD_CUBE, parse_one_token(std::string("CUBE")));
    EXPECT_EQ(KEYWORD_CUBE, parse_one_token(std::string("cube")));
}

TEST(lexical_one_token, keyword_cume_dist) {
    EXPECT_EQ(KEYWORD_CUME_DIST, parse_one_token(std::string("CUME_DIST")));
    EXPECT_EQ(KEYWORD_CUME_DIST, parse_one_token(std::string("cume_dist")));
}

TEST(lexical_one_token, keyword_current) {
    EXPECT_EQ(KEYWORD_CURRENT, parse_one_token(std::string("CURRENT")));
    EXPECT_EQ(KEYWORD_CURRENT, parse_one_token(std::string("current")));
}

TEST(lexical_one_token, keyword_current_date) {
    EXPECT_EQ(KEYWORD_CURRENT_DATE, parse_one_token(std::string("CURRENT_DATE")));
    EXPECT_EQ(KEYWORD_CURRENT_DATE, parse_one_token(std::string("current_date")));
}

TEST(lexical_one_token, keyword_current_time) {
    EXPECT_EQ(KEYWORD_CURRENT_TIME, parse_one_token(std::string("CURRENT_TIME")));
    EXPECT_EQ(KEYWORD_CURRENT_TIME, parse_one_token(std::string("current_time")));
}

TEST(lexical_one_token, keyword_current_timestamp) {
    EXPECT_EQ(KEYWORD_CURRENT_TIMESTAMP, parse_one_token(std::string("CURRENT_TIMESTAMP")));
    EXPECT_EQ(KEYWORD_CURRENT_TIMESTAMP, parse_one_token(std::string("current_timestamp")));
}

TEST(lexical_one_token, keyword_current_user) {
    EXPECT_EQ(KEYWORD_CURRENT_USER, parse_one_token(std::string("CURRENT_USER")));
    EXPECT_EQ(KEYWORD_CURRENT_USER, parse_one_token(std::string("current_user")));
}

TEST(lexical_one_token, keyword_cursor) {
    EXPECT_EQ(KEYWORD_CURSOR, parse_one_token(std::string("CURSOR")));
    EXPECT_EQ(KEYWORD_CURSOR, parse_one_token(std::string("cursor")));
}

TEST(lexical_one_token, keyword_cursor_name) {
    EXPECT_EQ(KEYWORD_CURSOR_NAME, parse_one_token(std::string("CURSOR_NAME")));
    EXPECT_EQ(KEYWORD_CURSOR_NAME, parse_one_token(std::string("cursor_name")));
}

TEST(lexical_one_token, keyword_data) {
    EXPECT_EQ(KEYWORD_DATA, parse_one_token(std::string("DATA")));
    EXPECT_EQ(KEYWORD_DATA, parse_one_token(std::string("data")));
}

TEST(lexical_one_token, keyword_database) {
    EXPECT_EQ(KEYWORD_DATABASE, parse_one_token(std::string("DATABASE")));
    EXPECT_EQ(KEYWORD_DATABASE, parse_one_token(std::string("database")));
}

TEST(lexical_one_token, keyword_databases) {
    EXPECT_EQ(KEYWORD_DATABASES, parse_one_token(std::string("DATABASES")));
    EXPECT_EQ(KEYWORD_DATABASES, parse_one_token(std::string("databases")));
}

TEST(lexical_one_token, keyword_datafile) {
    EXPECT_EQ(KEYWORD_DATAFILE, parse_one_token(std::string("DATAFILE")));
    EXPECT_EQ(KEYWORD_DATAFILE, parse_one_token(std::string("datafile")));
}

TEST(lexical_one_token, keyword_date) {
    EXPECT_EQ(KEYWORD_DATE, parse_one_token(std::string("DATE")));
    EXPECT_EQ(KEYWORD_DATE, parse_one_token(std::string("date")));
}

TEST(lexical_one_token, keyword_datetime) {
    EXPECT_EQ(KEYWORD_DATETIME, parse_one_token(std::string("DATETIME")));
    EXPECT_EQ(KEYWORD_DATETIME, parse_one_token(std::string("datetime")));
}

TEST(lexical_one_token, keyword_day) {
    EXPECT_EQ(KEYWORD_DAY, parse_one_token(std::string("DAY")));
    EXPECT_EQ(KEYWORD_DAY, parse_one_token(std::string("day")));
}

TEST(lexical_one_token, keyword_day_hour) {
    EXPECT_EQ(KEYWORD_DAY_HOUR, parse_one_token(std::string("DAY_HOUR")));
    EXPECT_EQ(KEYWORD_DAY_HOUR, parse_one_token(std::string("day_hour")));
}

TEST(lexical_one_token, keyword_day_microsecond) {
    EXPECT_EQ(KEYWORD_DAY_MICROSECOND, parse_one_token(std::string("DAY_MICROSECOND")));
    EXPECT_EQ(KEYWORD_DAY_MICROSECOND, parse_one_token(std::string("day_microsecond")));
}

TEST(lexical_one_token, keyword_day_minute) {
    EXPECT_EQ(KEYWORD_DAY_MINUTE, parse_one_token(std::string("DAY_MINUTE")));
    EXPECT_EQ(KEYWORD_DAY_MINUTE, parse_one_token(std::string("day_minute")));
}

TEST(lexical_one_token, keyword_day_second) {
    EXPECT_EQ(KEYWORD_DAY_SECOND, parse_one_token(std::string("DAY_SECOND")));
    EXPECT_EQ(KEYWORD_DAY_SECOND, parse_one_token(std::string("day_second")));
}

TEST(lexical_one_token, keyword_deallocate) {
    EXPECT_EQ(KEYWORD_DEALLOCATE, parse_one_token(std::string("DEALLOCATE")));
    EXPECT_EQ(KEYWORD_DEALLOCATE, parse_one_token(std::string("deallocate")));
}

TEST(lexical_one_token, keyword_dec) {
    EXPECT_EQ(KEYWORD_DEC, parse_one_token(std::string("DEC")));
    EXPECT_EQ(KEYWORD_DEC, parse_one_token(std::string("dec")));
}

TEST(lexical_one_token, keyword_decimal) {
    EXPECT_EQ(KEYWORD_DECIMAL, parse_one_token(std::string("DECIMAL")));
    EXPECT_EQ(KEYWORD_DECIMAL, parse_one_token(std::string("decimal")));
}

TEST(lexical_one_token, keyword_declare) {
    EXPECT_EQ(KEYWORD_DECLARE, parse_one_token(std::string("DECLARE")));
    EXPECT_EQ(KEYWORD_DECLARE, parse_one_token(std::string("declare")));
}

TEST(lexical_one_token, keyword_default) {
    EXPECT_EQ(KEYWORD_DEFAULT, parse_one_token(std::string("DEFAULT")));
    EXPECT_EQ(KEYWORD_DEFAULT, parse_one_token(std::string("default")));
}

TEST(lexical_one_token, keyword_default_auth) {
    EXPECT_EQ(KEYWORD_DEFAULT_AUTH, parse_one_token(std::string("DEFAULT_AUTH")));
    EXPECT_EQ(KEYWORD_DEFAULT_AUTH, parse_one_token(std::string("default_auth")));
}

TEST(lexical_one_token, keyword_definer) {
    EXPECT_EQ(KEYWORD_DEFINER, parse_one_token(std::string("DEFINER")));
    EXPECT_EQ(KEYWORD_DEFINER, parse_one_token(std::string("definer")));
}

TEST(lexical_one_token, keyword_definition) {
    EXPECT_EQ(KEYWORD_DEFINITION, parse_one_token(std::string("DEFINITION")));
    EXPECT_EQ(KEYWORD_DEFINITION, parse_one_token(std::string("definition")));
}

TEST(lexical_one_token, keyword_delayed) {
    EXPECT_EQ(KEYWORD_DELAYED, parse_one_token(std::string("DELAYED")));
    EXPECT_EQ(KEYWORD_DELAYED, parse_one_token(std::string("delayed")));
}

TEST(lexical_one_token, keyword_delay_key_write) {
    EXPECT_EQ(KEYWORD_DELAY_KEY_WRITE, parse_one_token(std::string("DELAY_KEY_WRITE")));
    EXPECT_EQ(KEYWORD_DELAY_KEY_WRITE, parse_one_token(std::string("delay_key_write")));
}

TEST(lexical_one_token, keyword_delete) {
    EXPECT_EQ(KEYWORD_DELETE, parse_one_token(std::string("DELETE")));
    EXPECT_EQ(KEYWORD_DELETE, parse_one_token(std::string("delete")));
}

TEST(lexical_one_token, keyword_dense_rank) {
    EXPECT_EQ(KEYWORD_DENSE_RANK, parse_one_token(std::string("DENSE_RANK")));
    EXPECT_EQ(KEYWORD_DENSE_RANK, parse_one_token(std::string("dense_rank")));
}

TEST(lexical_one_token, keyword_desc) {
    EXPECT_EQ(KEYWORD_DESC, parse_one_token(std::string("DESC")));
    EXPECT_EQ(KEYWORD_DESC, parse_one_token(std::string("desc")));
}

TEST(lexical_one_token, keyword_describe) {
    EXPECT_EQ(KEYWORD_DESCRIBE, parse_one_token(std::string("DESCRIBE")));
    EXPECT_EQ(KEYWORD_DESCRIBE, parse_one_token(std::string("describe")));
}

TEST(lexical_one_token, keyword_description) {
    EXPECT_EQ(KEYWORD_DESCRIPTION, parse_one_token(std::string("DESCRIPTION")));
    EXPECT_EQ(KEYWORD_DESCRIPTION, parse_one_token(std::string("description")));
}

TEST(lexical_one_token, keyword_deterministic) {
    EXPECT_EQ(KEYWORD_DETERMINISTIC, parse_one_token(std::string("DETERMINISTIC")));
    EXPECT_EQ(KEYWORD_DETERMINISTIC, parse_one_token(std::string("deterministic")));
}

TEST(lexical_one_token, keyword_diagnostics) {
    EXPECT_EQ(KEYWORD_DIAGNOSTICS, parse_one_token(std::string("DIAGNOSTICS")));
    EXPECT_EQ(KEYWORD_DIAGNOSTICS, parse_one_token(std::string("diagnostics")));
}

TEST(lexical_one_token, keyword_directory) {
    EXPECT_EQ(KEYWORD_DIRECTORY, parse_one_token(std::string("DIRECTORY")));
    EXPECT_EQ(KEYWORD_DIRECTORY, parse_one_token(std::string("directory")));
}

TEST(lexical_one_token, keyword_disable) {
    EXPECT_EQ(KEYWORD_DISABLE, parse_one_token(std::string("DISABLE")));
    EXPECT_EQ(KEYWORD_DISABLE, parse_one_token(std::string("disable")));
}

TEST(lexical_one_token, keyword_discard) {
    EXPECT_EQ(KEYWORD_DISCARD, parse_one_token(std::string("DISCARD")));
    EXPECT_EQ(KEYWORD_DISCARD, parse_one_token(std::string("discard")));
}

TEST(lexical_one_token, keyword_disk) {
    EXPECT_EQ(KEYWORD_DISK, parse_one_token(std::string("DISK")));
    EXPECT_EQ(KEYWORD_DISK, parse_one_token(std::string("disk")));
}

TEST(lexical_one_token, keyword_distinct) {
    EXPECT_EQ(KEYWORD_DISTINCT, parse_one_token(std::string("DISTINCT")));
    EXPECT_EQ(KEYWORD_DISTINCT, parse_one_token(std::string("distinct")));
}

TEST(lexical_one_token, keyword_distinctrow) {
    EXPECT_EQ(KEYWORD_DISTINCTROW, parse_one_token(std::string("DISTINCTROW")));
    EXPECT_EQ(KEYWORD_DISTINCTROW, parse_one_token(std::string("distinctrow")));
}

TEST(lexical_one_token, keyword_div) {
    EXPECT_EQ(KEYWORD_DIV, parse_one_token(std::string("DIV")));
    EXPECT_EQ(KEYWORD_DIV, parse_one_token(std::string("div")));
}

TEST(lexical_one_token, keyword_do) {
    EXPECT_EQ(KEYWORD_DO, parse_one_token(std::string("DO")));
    EXPECT_EQ(KEYWORD_DO, parse_one_token(std::string("do")));
}

TEST(lexical_one_token, keyword_double) {
    EXPECT_EQ(KEYWORD_DOUBLE, parse_one_token(std::string("DOUBLE")));
    EXPECT_EQ(KEYWORD_DOUBLE, parse_one_token(std::string("double")));
}

TEST(lexical_one_token, keyword_drop) {
    EXPECT_EQ(KEYWORD_DROP, parse_one_token(std::string("DROP")));
    EXPECT_EQ(KEYWORD_DROP, parse_one_token(std::string("drop")));
}

TEST(lexical_one_token, keyword_dual) {
    EXPECT_EQ(KEYWORD_DUAL, parse_one_token(std::string("DUAL")));
    EXPECT_EQ(KEYWORD_DUAL, parse_one_token(std::string("dual")));
}

TEST(lexical_one_token, keyword_dumpfile) {
    EXPECT_EQ(KEYWORD_DUMPFILE, parse_one_token(std::string("DUMPFILE")));
    EXPECT_EQ(KEYWORD_DUMPFILE, parse_one_token(std::string("dumpfile")));
}

TEST(lexical_one_token, keyword_duplicate) {
    EXPECT_EQ(KEYWORD_DUPLICATE, parse_one_token(std::string("DUPLICATE")));
    EXPECT_EQ(KEYWORD_DUPLICATE, parse_one_token(std::string("duplicate")));
}

TEST(lexical_one_token, keyword_dynamic) {
    EXPECT_EQ(KEYWORD_DYNAMIC, parse_one_token(std::string("DYNAMIC")));
    EXPECT_EQ(KEYWORD_DYNAMIC, parse_one_token(std::string("dynamic")));
}

TEST(lexical_one_token, keyword_each) {
    EXPECT_EQ(KEYWORD_EACH, parse_one_token(std::string("EACH")));
    EXPECT_EQ(KEYWORD_EACH, parse_one_token(std::string("each")));
}

TEST(lexical_one_token, keyword_else) {
    EXPECT_EQ(KEYWORD_ELSE, parse_one_token(std::string("ELSE")));
    EXPECT_EQ(KEYWORD_ELSE, parse_one_token(std::string("else")));
}

TEST(lexical_one_token, keyword_elseif) {
    EXPECT_EQ(KEYWORD_ELSEIF, parse_one_token(std::string("ELSEIF")));
    EXPECT_EQ(KEYWORD_ELSEIF, parse_one_token(std::string("elseif")));
}

TEST(lexical_one_token, keyword_empty) {
    EXPECT_EQ(KEYWORD_EMPTY, parse_one_token(std::string("EMPTY")));
    EXPECT_EQ(KEYWORD_EMPTY, parse_one_token(std::string("empty")));
}

TEST(lexical_one_token, keyword_enable) {
    EXPECT_EQ(KEYWORD_ENABLE, parse_one_token(std::string("ENABLE")));
    EXPECT_EQ(KEYWORD_ENABLE, parse_one_token(std::string("enable")));
}

TEST(lexical_one_token, keyword_enclosed) {
    EXPECT_EQ(KEYWORD_ENCLOSED, parse_one_token(std::string("ENCLOSED")));
    EXPECT_EQ(KEYWORD_ENCLOSED, parse_one_token(std::string("enclosed")));
}

TEST(lexical_one_token, keyword_encryption) {
    EXPECT_EQ(KEYWORD_ENCRYPTION, parse_one_token(std::string("ENCRYPTION")));
    EXPECT_EQ(KEYWORD_ENCRYPTION, parse_one_token(std::string("encryption")));
}

TEST(lexical_one_token, keyword_end) {
    EXPECT_EQ(KEYWORD_END, parse_one_token(std::string("END")));
    EXPECT_EQ(KEYWORD_END, parse_one_token(std::string("end")));
}

TEST(lexical_one_token, keyword_ends) {
    EXPECT_EQ(KEYWORD_ENDS, parse_one_token(std::string("ENDS")));
    EXPECT_EQ(KEYWORD_ENDS, parse_one_token(std::string("ends")));
}

TEST(lexical_one_token, keyword_enforced) {
    EXPECT_EQ(KEYWORD_ENFORCED, parse_one_token(std::string("ENFORCED")));
    EXPECT_EQ(KEYWORD_ENFORCED, parse_one_token(std::string("enforced")));
}

TEST(lexical_one_token, keyword_engine) {
    EXPECT_EQ(KEYWORD_ENGINE, parse_one_token(std::string("ENGINE")));
    EXPECT_EQ(KEYWORD_ENGINE, parse_one_token(std::string("engine")));
}

TEST(lexical_one_token, keyword_engines) {
    EXPECT_EQ(KEYWORD_ENGINES, parse_one_token(std::string("ENGINES")));
    EXPECT_EQ(KEYWORD_ENGINES, parse_one_token(std::string("engines")));
}

TEST(lexical_one_token, keyword_engine_attribute) {
    EXPECT_EQ(KEYWORD_ENGINE_ATTRIBUTE, parse_one_token(std::string("ENGINE_ATTRIBUTE")));
    EXPECT_EQ(KEYWORD_ENGINE_ATTRIBUTE, parse_one_token(std::string("engine_attribute")));
}

TEST(lexical_one_token, keyword_enum) {
    EXPECT_EQ(KEYWORD_ENUM, parse_one_token(std::string("ENUM")));
    EXPECT_EQ(KEYWORD_ENUM, parse_one_token(std::string("enum")));
}

TEST(lexical_one_token, keyword_error) {
    EXPECT_EQ(KEYWORD_ERROR, parse_one_token(std::string("ERROR")));
    EXPECT_EQ(KEYWORD_ERROR, parse_one_token(std::string("error")));
}

TEST(lexical_one_token, keyword_errors) {
    EXPECT_EQ(KEYWORD_ERRORS, parse_one_token(std::string("ERRORS")));
    EXPECT_EQ(KEYWORD_ERRORS, parse_one_token(std::string("errors")));
}

TEST(lexical_one_token, keyword_escape) {
    EXPECT_EQ(KEYWORD_ESCAPE, parse_one_token(std::string("ESCAPE")));
    EXPECT_EQ(KEYWORD_ESCAPE, parse_one_token(std::string("escape")));
}

TEST(lexical_one_token, keyword_escaped) {
    EXPECT_EQ(KEYWORD_ESCAPED, parse_one_token(std::string("ESCAPED")));
    EXPECT_EQ(KEYWORD_ESCAPED, parse_one_token(std::string("escaped")));
}

TEST(lexical_one_token, keyword_event) {
    EXPECT_EQ(KEYWORD_EVENT, parse_one_token(std::string("EVENT")));
    EXPECT_EQ(KEYWORD_EVENT, parse_one_token(std::string("event")));
}

TEST(lexical_one_token, keyword_events) {
    EXPECT_EQ(KEYWORD_EVENTS, parse_one_token(std::string("EVENTS")));
    EXPECT_EQ(KEYWORD_EVENTS, parse_one_token(std::string("events")));
}

TEST(lexical_one_token, keyword_every) {
    EXPECT_EQ(KEYWORD_EVERY, parse_one_token(std::string("EVERY")));
    EXPECT_EQ(KEYWORD_EVERY, parse_one_token(std::string("every")));
}

TEST(lexical_one_token, keyword_except) {
    EXPECT_EQ(KEYWORD_EXCEPT, parse_one_token(std::string("EXCEPT")));
    EXPECT_EQ(KEYWORD_EXCEPT, parse_one_token(std::string("except")));
}

TEST(lexical_one_token, keyword_exchange) {
    EXPECT_EQ(KEYWORD_EXCHANGE, parse_one_token(std::string("EXCHANGE")));
    EXPECT_EQ(KEYWORD_EXCHANGE, parse_one_token(std::string("exchange")));
}

TEST(lexical_one_token, keyword_exclude) {
    EXPECT_EQ(KEYWORD_EXCLUDE, parse_one_token(std::string("EXCLUDE")));
    EXPECT_EQ(KEYWORD_EXCLUDE, parse_one_token(std::string("exclude")));
}

TEST(lexical_one_token, keyword_execute) {
    EXPECT_EQ(KEYWORD_EXECUTE, parse_one_token(std::string("EXECUTE")));
    EXPECT_EQ(KEYWORD_EXECUTE, parse_one_token(std::string("execute")));
}

TEST(lexical_one_token, keyword_exists) {
    EXPECT_EQ(KEYWORD_EXISTS, parse_one_token(std::string("EXISTS")));
    EXPECT_EQ(KEYWORD_EXISTS, parse_one_token(std::string("exists")));
}

TEST(lexical_one_token, keyword_exit) {
    EXPECT_EQ(KEYWORD_EXIT, parse_one_token(std::string("EXIT")));
    EXPECT_EQ(KEYWORD_EXIT, parse_one_token(std::string("exit")));
}

TEST(lexical_one_token, keyword_expansion) {
    EXPECT_EQ(KEYWORD_EXPANSION, parse_one_token(std::string("EXPANSION")));
    EXPECT_EQ(KEYWORD_EXPANSION, parse_one_token(std::string("expansion")));
}

TEST(lexical_one_token, keyword_expire) {
    EXPECT_EQ(KEYWORD_EXPIRE, parse_one_token(std::string("EXPIRE")));
    EXPECT_EQ(KEYWORD_EXPIRE, parse_one_token(std::string("expire")));
}

TEST(lexical_one_token, keyword_explain) {
    EXPECT_EQ(KEYWORD_EXPLAIN, parse_one_token(std::string("EXPLAIN")));
    EXPECT_EQ(KEYWORD_EXPLAIN, parse_one_token(std::string("explain")));
}

TEST(lexical_one_token, keyword_export) {
    EXPECT_EQ(KEYWORD_EXPORT, parse_one_token(std::string("EXPORT")));
    EXPECT_EQ(KEYWORD_EXPORT, parse_one_token(std::string("export")));
}

TEST(lexical_one_token, keyword_extended) {
    EXPECT_EQ(KEYWORD_EXTENDED, parse_one_token(std::string("EXTENDED")));
    EXPECT_EQ(KEYWORD_EXTENDED, parse_one_token(std::string("extended")));
}

TEST(lexical_one_token, keyword_extent_size) {
    EXPECT_EQ(KEYWORD_EXTENT_SIZE, parse_one_token(std::string("EXTENT_SIZE")));
    EXPECT_EQ(KEYWORD_EXTENT_SIZE, parse_one_token(std::string("extent_size")));
}

TEST(lexical_one_token, keyword_factor) {
    EXPECT_EQ(KEYWORD_FACTOR, parse_one_token(std::string("FACTOR")));
    EXPECT_EQ(KEYWORD_FACTOR, parse_one_token(std::string("factor")));
}

TEST(lexical_one_token, keyword_failed_login_attempts) {
    EXPECT_EQ(KEYWORD_FAILED_LOGIN_ATTEMPTS, parse_one_token(std::string("FAILED_LOGIN_ATTEMPTS")));
    EXPECT_EQ(KEYWORD_FAILED_LOGIN_ATTEMPTS, parse_one_token(std::string("failed_login_attempts")));
}

TEST(lexical_one_token, keyword_false) {
    EXPECT_EQ(KEYWORD_FALSE, parse_one_token(std::string("FALSE")));
    EXPECT_EQ(KEYWORD_FALSE, parse_one_token(std::string("false")));
}

TEST(lexical_one_token, keyword_fast) {
    EXPECT_EQ(KEYWORD_FAST, parse_one_token(std::string("FAST")));
    EXPECT_EQ(KEYWORD_FAST, parse_one_token(std::string("fast")));
}

TEST(lexical_one_token, keyword_faults) {
    EXPECT_EQ(KEYWORD_FAULTS, parse_one_token(std::string("FAULTS")));
    EXPECT_EQ(KEYWORD_FAULTS, parse_one_token(std::string("faults")));
}

TEST(lexical_one_token, keyword_fetch) {
    EXPECT_EQ(KEYWORD_FETCH, parse_one_token(std::string("FETCH")));
    EXPECT_EQ(KEYWORD_FETCH, parse_one_token(std::string("fetch")));
}

TEST(lexical_one_token, keyword_fields) {
    EXPECT_EQ(KEYWORD_FIELDS, parse_one_token(std::string("FIELDS")));
    EXPECT_EQ(KEYWORD_FIELDS, parse_one_token(std::string("fields")));
}

TEST(lexical_one_token, keyword_file) {
    EXPECT_EQ(KEYWORD_FILE, parse_one_token(std::string("FILE")));
    EXPECT_EQ(KEYWORD_FILE, parse_one_token(std::string("file")));
}

TEST(lexical_one_token, keyword_file_block_size) {
    EXPECT_EQ(KEYWORD_FILE_BLOCK_SIZE, parse_one_token(std::string("FILE_BLOCK_SIZE")));
    EXPECT_EQ(KEYWORD_FILE_BLOCK_SIZE, parse_one_token(std::string("file_block_size")));
}

TEST(lexical_one_token, keyword_filter) {
    EXPECT_EQ(KEYWORD_FILTER, parse_one_token(std::string("FILTER")));
    EXPECT_EQ(KEYWORD_FILTER, parse_one_token(std::string("filter")));
}

TEST(lexical_one_token, keyword_finish) {
    EXPECT_EQ(KEYWORD_FINISH, parse_one_token(std::string("FINISH")));
    EXPECT_EQ(KEYWORD_FINISH, parse_one_token(std::string("finish")));
}

TEST(lexical_one_token, keyword_first) {
    EXPECT_EQ(KEYWORD_FIRST, parse_one_token(std::string("FIRST")));
    EXPECT_EQ(KEYWORD_FIRST, parse_one_token(std::string("first")));
}

TEST(lexical_one_token, keyword_first_value) {
    EXPECT_EQ(KEYWORD_FIRST_VALUE, parse_one_token(std::string("FIRST_VALUE")));
    EXPECT_EQ(KEYWORD_FIRST_VALUE, parse_one_token(std::string("first_value")));
}

TEST(lexical_one_token, keyword_fixed) {
    EXPECT_EQ(KEYWORD_FIXED, parse_one_token(std::string("FIXED")));
    EXPECT_EQ(KEYWORD_FIXED, parse_one_token(std::string("fixed")));
}

TEST(lexical_one_token, keyword_float) {
    EXPECT_EQ(KEYWORD_FLOAT, parse_one_token(std::string("FLOAT")));
    EXPECT_EQ(KEYWORD_FLOAT, parse_one_token(std::string("float")));
}

TEST(lexical_one_token, keyword_float4) {
    EXPECT_EQ(KEYWORD_FLOAT4, parse_one_token(std::string("FLOAT4")));
    EXPECT_EQ(KEYWORD_FLOAT4, parse_one_token(std::string("float4")));
}

TEST(lexical_one_token, keyword_float8) {
    EXPECT_EQ(KEYWORD_FLOAT8, parse_one_token(std::string("FLOAT8")));
    EXPECT_EQ(KEYWORD_FLOAT8, parse_one_token(std::string("float8")));
}

TEST(lexical_one_token, keyword_flush) {
    EXPECT_EQ(KEYWORD_FLUSH, parse_one_token(std::string("FLUSH")));
    EXPECT_EQ(KEYWORD_FLUSH, parse_one_token(std::string("flush")));
}

TEST(lexical_one_token, keyword_following) {
    EXPECT_EQ(KEYWORD_FOLLOWING, parse_one_token(std::string("FOLLOWING")));
    EXPECT_EQ(KEYWORD_FOLLOWING, parse_one_token(std::string("following")));
}

TEST(lexical_one_token, keyword_follows) {
    EXPECT_EQ(KEYWORD_FOLLOWS, parse_one_token(std::string("FOLLOWS")));
    EXPECT_EQ(KEYWORD_FOLLOWS, parse_one_token(std::string("follows")));
}

TEST(lexical_one_token, keyword_for) {
    EXPECT_EQ(KEYWORD_FOR, parse_one_token(std::string("FOR")));
    EXPECT_EQ(KEYWORD_FOR, parse_one_token(std::string("for")));
}

TEST(lexical_one_token, keyword_force) {
    EXPECT_EQ(KEYWORD_FORCE, parse_one_token(std::string("FORCE")));
    EXPECT_EQ(KEYWORD_FORCE, parse_one_token(std::string("force")));
}

TEST(lexical_one_token, keyword_foreign) {
    EXPECT_EQ(KEYWORD_FOREIGN, parse_one_token(std::string("FOREIGN")));
    EXPECT_EQ(KEYWORD_FOREIGN, parse_one_token(std::string("foreign")));
}

TEST(lexical_one_token, keyword_format) {
    EXPECT_EQ(KEYWORD_FORMAT, parse_one_token(std::string("FORMAT")));
    EXPECT_EQ(KEYWORD_FORMAT, parse_one_token(std::string("format")));
}

TEST(lexical_one_token, keyword_found) {
    EXPECT_EQ(KEYWORD_FOUND, parse_one_token(std::string("FOUND")));
    EXPECT_EQ(KEYWORD_FOUND, parse_one_token(std::string("found")));
}

TEST(lexical_one_token, keyword_from) {
    EXPECT_EQ(KEYWORD_FROM, parse_one_token(std::string("FROM")));
    EXPECT_EQ(KEYWORD_FROM, parse_one_token(std::string("from")));
}

TEST(lexical_one_token, keyword_full) {
    EXPECT_EQ(KEYWORD_FULL, parse_one_token(std::string("FULL")));
    EXPECT_EQ(KEYWORD_FULL, parse_one_token(std::string("full")));
}

TEST(lexical_one_token, keyword_fulltext) {
    EXPECT_EQ(KEYWORD_FULLTEXT, parse_one_token(std::string("FULLTEXT")));
    EXPECT_EQ(KEYWORD_FULLTEXT, parse_one_token(std::string("fulltext")));
}

TEST(lexical_one_token, keyword_function) {
    EXPECT_EQ(KEYWORD_FUNCTION, parse_one_token(std::string("FUNCTION")));
    EXPECT_EQ(KEYWORD_FUNCTION, parse_one_token(std::string("function")));
}

TEST(lexical_one_token, keyword_general) {
    EXPECT_EQ(KEYWORD_GENERAL, parse_one_token(std::string("GENERAL")));
    EXPECT_EQ(KEYWORD_GENERAL, parse_one_token(std::string("general")));
}

TEST(lexical_one_token, keyword_generate) {
    EXPECT_EQ(KEYWORD_GENERATE, parse_one_token(std::string("GENERATE")));
    EXPECT_EQ(KEYWORD_GENERATE, parse_one_token(std::string("generate")));
}

TEST(lexical_one_token, keyword_generated) {
    EXPECT_EQ(KEYWORD_GENERATED, parse_one_token(std::string("GENERATED")));
    EXPECT_EQ(KEYWORD_GENERATED, parse_one_token(std::string("generated")));
}

TEST(lexical_one_token, keyword_geomcollection) {
    EXPECT_EQ(KEYWORD_GEOMCOLLECTION, parse_one_token(std::string("GEOMCOLLECTION")));
    EXPECT_EQ(KEYWORD_GEOMCOLLECTION, parse_one_token(std::string("geomcollection")));
}

TEST(lexical_one_token, keyword_geometry) {
    EXPECT_EQ(KEYWORD_GEOMETRY, parse_one_token(std::string("GEOMETRY")));
    EXPECT_EQ(KEYWORD_GEOMETRY, parse_one_token(std::string("geometry")));
}

TEST(lexical_one_token, keyword_geometrycollection) {
    EXPECT_EQ(KEYWORD_GEOMETRYCOLLECTION, parse_one_token(std::string("GEOMETRYCOLLECTION")));
    EXPECT_EQ(KEYWORD_GEOMETRYCOLLECTION, parse_one_token(std::string("geometrycollection")));
}

TEST(lexical_one_token, keyword_get) {
    EXPECT_EQ(KEYWORD_GET, parse_one_token(std::string("GET")));
    EXPECT_EQ(KEYWORD_GET, parse_one_token(std::string("get")));
}

TEST(lexical_one_token, keyword_get_master_public_key) {
    EXPECT_EQ(KEYWORD_GET_MASTER_PUBLIC_KEY, parse_one_token(std::string("GET_MASTER_PUBLIC_KEY")));
    EXPECT_EQ(KEYWORD_GET_MASTER_PUBLIC_KEY, parse_one_token(std::string("get_master_public_key")));
}

TEST(lexical_one_token, keyword_get_format) {
    EXPECT_EQ(KEYWORD_GET_FORMAT, parse_one_token(std::string("GET_FORMAT")));
    EXPECT_EQ(KEYWORD_GET_FORMAT, parse_one_token(std::string("get_format")));
}

TEST(lexical_one_token, keyword_get_source_public_key) {
    EXPECT_EQ(KEYWORD_GET_SOURCE_PUBLIC_KEY, parse_one_token(std::string("GET_SOURCE_PUBLIC_KEY")));
    EXPECT_EQ(KEYWORD_GET_SOURCE_PUBLIC_KEY, parse_one_token(std::string("get_source_public_key")));
}

TEST(lexical_one_token, keyword_global) {
    EXPECT_EQ(KEYWORD_GLOBAL, parse_one_token(std::string("GLOBAL")));
    EXPECT_EQ(KEYWORD_GLOBAL, parse_one_token(std::string("global")));
}

TEST(lexical_one_token, keyword_grant) {
    EXPECT_EQ(KEYWORD_GRANT, parse_one_token(std::string("GRANT")));
    EXPECT_EQ(KEYWORD_GRANT, parse_one_token(std::string("grant")));
}

TEST(lexical_one_token, keyword_grants) {
    EXPECT_EQ(KEYWORD_GRANTS, parse_one_token(std::string("GRANTS")));
    EXPECT_EQ(KEYWORD_GRANTS, parse_one_token(std::string("grants")));
}

TEST(lexical_one_token, keyword_group) {
    EXPECT_EQ(KEYWORD_GROUP, parse_one_token(std::string("GROUP")));
    EXPECT_EQ(KEYWORD_GROUP, parse_one_token(std::string("group")));
}

TEST(lexical_one_token, keyword_grouping) {
    EXPECT_EQ(KEYWORD_GROUPING, parse_one_token(std::string("GROUPING")));
    EXPECT_EQ(KEYWORD_GROUPING, parse_one_token(std::string("grouping")));
}

TEST(lexical_one_token, keyword_groups) {
    EXPECT_EQ(KEYWORD_GROUPS, parse_one_token(std::string("GROUPS")));
    EXPECT_EQ(KEYWORD_GROUPS, parse_one_token(std::string("groups")));
}

TEST(lexical_one_token, keyword_group_replication) {
    EXPECT_EQ(KEYWORD_GROUP_REPLICATION, parse_one_token(std::string("GROUP_REPLICATION")));
    EXPECT_EQ(KEYWORD_GROUP_REPLICATION, parse_one_token(std::string("group_replication")));
}

TEST(lexical_one_token, keyword_gtids) {
    EXPECT_EQ(KEYWORD_GTIDS, parse_one_token(std::string("GTIDS")));
    EXPECT_EQ(KEYWORD_GTIDS, parse_one_token(std::string("gtids")));
}

TEST(lexical_one_token, keyword_gtid_only) {
    EXPECT_EQ(KEYWORD_GTID_ONLY, parse_one_token(std::string("GTID_ONLY")));
    EXPECT_EQ(KEYWORD_GTID_ONLY, parse_one_token(std::string("gtid_only")));
}

TEST(lexical_one_token, keyword_handler) {
    EXPECT_EQ(KEYWORD_HANDLER, parse_one_token(std::string("HANDLER")));
    EXPECT_EQ(KEYWORD_HANDLER, parse_one_token(std::string("handler")));
}

TEST(lexical_one_token, keyword_hash) {
    EXPECT_EQ(KEYWORD_HASH, parse_one_token(std::string("HASH")));
    EXPECT_EQ(KEYWORD_HASH, parse_one_token(std::string("hash")));
}

TEST(lexical_one_token, keyword_having) {
    EXPECT_EQ(KEYWORD_HAVING, parse_one_token(std::string("HAVING")));
    EXPECT_EQ(KEYWORD_HAVING, parse_one_token(std::string("having")));
}

TEST(lexical_one_token, keyword_help) {
    EXPECT_EQ(KEYWORD_HELP, parse_one_token(std::string("HELP")));
    EXPECT_EQ(KEYWORD_HELP, parse_one_token(std::string("help")));
}

TEST(lexical_one_token, keyword_high_priority) {
    EXPECT_EQ(KEYWORD_HIGH_PRIORITY, parse_one_token(std::string("HIGH_PRIORITY")));
    EXPECT_EQ(KEYWORD_HIGH_PRIORITY, parse_one_token(std::string("high_priority")));
}

TEST(lexical_one_token, keyword_histogram) {
    EXPECT_EQ(KEYWORD_HISTOGRAM, parse_one_token(std::string("HISTOGRAM")));
    EXPECT_EQ(KEYWORD_HISTOGRAM, parse_one_token(std::string("histogram")));
}

TEST(lexical_one_token, keyword_history) {
    EXPECT_EQ(KEYWORD_HISTORY, parse_one_token(std::string("HISTORY")));
    EXPECT_EQ(KEYWORD_HISTORY, parse_one_token(std::string("history")));
}

TEST(lexical_one_token, keyword_host) {
    EXPECT_EQ(KEYWORD_HOST, parse_one_token(std::string("HOST")));
    EXPECT_EQ(KEYWORD_HOST, parse_one_token(std::string("host")));
}

TEST(lexical_one_token, keyword_hosts) {
    EXPECT_EQ(KEYWORD_HOSTS, parse_one_token(std::string("HOSTS")));
    EXPECT_EQ(KEYWORD_HOSTS, parse_one_token(std::string("hosts")));
}

TEST(lexical_one_token, keyword_hour) {
    EXPECT_EQ(KEYWORD_HOUR, parse_one_token(std::string("HOUR")));
    EXPECT_EQ(KEYWORD_HOUR, parse_one_token(std::string("hour")));
}

TEST(lexical_one_token, keyword_hour_microsecond) {
    EXPECT_EQ(KEYWORD_HOUR_MICROSECOND, parse_one_token(std::string("HOUR_MICROSECOND")));
    EXPECT_EQ(KEYWORD_HOUR_MICROSECOND, parse_one_token(std::string("hour_microsecond")));
}

TEST(lexical_one_token, keyword_hour_minute) {
    EXPECT_EQ(KEYWORD_HOUR_MINUTE, parse_one_token(std::string("HOUR_MINUTE")));
    EXPECT_EQ(KEYWORD_HOUR_MINUTE, parse_one_token(std::string("hour_minute")));
}

TEST(lexical_one_token, keyword_hour_second) {
    EXPECT_EQ(KEYWORD_HOUR_SECOND, parse_one_token(std::string("HOUR_SECOND")));
    EXPECT_EQ(KEYWORD_HOUR_SECOND, parse_one_token(std::string("hour_second")));
}

TEST(lexical_one_token, keyword_identified) {
    EXPECT_EQ(KEYWORD_IDENTIFIED, parse_one_token(std::string("IDENTIFIED")));
    EXPECT_EQ(KEYWORD_IDENTIFIED, parse_one_token(std::string("identified")));
}

TEST(lexical_one_token, keyword_if) {
    EXPECT_EQ(KEYWORD_IF, parse_one_token(std::string("IF")));
    EXPECT_EQ(KEYWORD_IF, parse_one_token(std::string("if")));
}

TEST(lexical_one_token, keyword_ignore) {
    EXPECT_EQ(KEYWORD_IGNORE, parse_one_token(std::string("IGNORE")));
    EXPECT_EQ(KEYWORD_IGNORE, parse_one_token(std::string("ignore")));
}

TEST(lexical_one_token, keyword_ignore_server_ids) {
    EXPECT_EQ(KEYWORD_IGNORE_SERVER_IDS, parse_one_token(std::string("IGNORE_SERVER_IDS")));
    EXPECT_EQ(KEYWORD_IGNORE_SERVER_IDS, parse_one_token(std::string("ignore_server_ids")));
}

TEST(lexical_one_token, keyword_import) {
    EXPECT_EQ(KEYWORD_IMPORT, parse_one_token(std::string("IMPORT")));
    EXPECT_EQ(KEYWORD_IMPORT, parse_one_token(std::string("import")));
}

TEST(lexical_one_token, keyword_in) {
    EXPECT_EQ(KEYWORD_IN, parse_one_token(std::string("IN")));
    EXPECT_EQ(KEYWORD_IN, parse_one_token(std::string("in")));
}

TEST(lexical_one_token, keyword_inactive) {
    EXPECT_EQ(KEYWORD_INACTIVE, parse_one_token(std::string("INACTIVE")));
    EXPECT_EQ(KEYWORD_INACTIVE, parse_one_token(std::string("inactive")));
}

TEST(lexical_one_token, keyword_index) {
    EXPECT_EQ(KEYWORD_INDEX, parse_one_token(std::string("INDEX")));
    EXPECT_EQ(KEYWORD_INDEX, parse_one_token(std::string("index")));
}

TEST(lexical_one_token, keyword_indexes) {
    EXPECT_EQ(KEYWORD_INDEXES, parse_one_token(std::string("INDEXES")));
    EXPECT_EQ(KEYWORD_INDEXES, parse_one_token(std::string("indexes")));
}

TEST(lexical_one_token, keyword_infile) {
    EXPECT_EQ(KEYWORD_INFILE, parse_one_token(std::string("INFILE")));
    EXPECT_EQ(KEYWORD_INFILE, parse_one_token(std::string("infile")));
}

TEST(lexical_one_token, keyword_initial) {
    EXPECT_EQ(KEYWORD_INITIAL, parse_one_token(std::string("INITIAL")));
    EXPECT_EQ(KEYWORD_INITIAL, parse_one_token(std::string("initial")));
}

TEST(lexical_one_token, keyword_initial_size) {
    EXPECT_EQ(KEYWORD_INITIAL_SIZE, parse_one_token(std::string("INITIAL_SIZE")));
    EXPECT_EQ(KEYWORD_INITIAL_SIZE, parse_one_token(std::string("initial_size")));
}

TEST(lexical_one_token, keyword_initiate) {
    EXPECT_EQ(KEYWORD_INITIATE, parse_one_token(std::string("INITIATE")));
    EXPECT_EQ(KEYWORD_INITIATE, parse_one_token(std::string("initiate")));
}

TEST(lexical_one_token, keyword_inner) {
    EXPECT_EQ(KEYWORD_INNER, parse_one_token(std::string("INNER")));
    EXPECT_EQ(KEYWORD_INNER, parse_one_token(std::string("inner")));
}

TEST(lexical_one_token, keyword_inout) {
    EXPECT_EQ(KEYWORD_INOUT, parse_one_token(std::string("INOUT")));
    EXPECT_EQ(KEYWORD_INOUT, parse_one_token(std::string("inout")));
}

TEST(lexical_one_token, keyword_insensitive) {
    EXPECT_EQ(KEYWORD_INSENSITIVE, parse_one_token(std::string("INSENSITIVE")));
    EXPECT_EQ(KEYWORD_INSENSITIVE, parse_one_token(std::string("insensitive")));
}

TEST(lexical_one_token, keyword_insert) {
    EXPECT_EQ(KEYWORD_INSERT, parse_one_token(std::string("INSERT")));
    EXPECT_EQ(KEYWORD_INSERT, parse_one_token(std::string("insert")));
}

TEST(lexical_one_token, keyword_insert_method) {
    EXPECT_EQ(KEYWORD_INSERT_METHOD, parse_one_token(std::string("INSERT_METHOD")));
    EXPECT_EQ(KEYWORD_INSERT_METHOD, parse_one_token(std::string("insert_method")));
}

TEST(lexical_one_token, keyword_install) {
    EXPECT_EQ(KEYWORD_INSTALL, parse_one_token(std::string("INSTALL")));
    EXPECT_EQ(KEYWORD_INSTALL, parse_one_token(std::string("install")));
}

TEST(lexical_one_token, keyword_instance) {
    EXPECT_EQ(KEYWORD_INSTANCE, parse_one_token(std::string("INSTANCE")));
    EXPECT_EQ(KEYWORD_INSTANCE, parse_one_token(std::string("instance")));
}

TEST(lexical_one_token, keyword_int) {
    EXPECT_EQ(KEYWORD_INT, parse_one_token(std::string("INT")));
    EXPECT_EQ(KEYWORD_INT, parse_one_token(std::string("int")));
}

TEST(lexical_one_token, keyword_int1) {
    EXPECT_EQ(KEYWORD_INT1, parse_one_token(std::string("INT1")));
    EXPECT_EQ(KEYWORD_INT1, parse_one_token(std::string("int1")));
}

TEST(lexical_one_token, keyword_int2) {
    EXPECT_EQ(KEYWORD_INT2, parse_one_token(std::string("INT2")));
    EXPECT_EQ(KEYWORD_INT2, parse_one_token(std::string("int2")));
}

TEST(lexical_one_token, keyword_int3) {
    EXPECT_EQ(KEYWORD_INT3, parse_one_token(std::string("INT3")));
    EXPECT_EQ(KEYWORD_INT3, parse_one_token(std::string("int3")));
}

TEST(lexical_one_token, keyword_int4) {
    EXPECT_EQ(KEYWORD_INT4, parse_one_token(std::string("INT4")));
    EXPECT_EQ(KEYWORD_INT4, parse_one_token(std::string("int4")));
}

TEST(lexical_one_token, keyword_int8) {
    EXPECT_EQ(KEYWORD_INT8, parse_one_token(std::string("INT8")));
    EXPECT_EQ(KEYWORD_INT8, parse_one_token(std::string("int8")));
}

TEST(lexical_one_token, keyword_integer) {
    EXPECT_EQ(KEYWORD_INTEGER, parse_one_token(std::string("INTEGER")));
    EXPECT_EQ(KEYWORD_INTEGER, parse_one_token(std::string("integer")));
}

TEST(lexical_one_token, keyword_intersect) {
    EXPECT_EQ(KEYWORD_INTERSECT, parse_one_token(std::string("INTERSECT")));
    EXPECT_EQ(KEYWORD_INTERSECT, parse_one_token(std::string("intersect")));
}

TEST(lexical_one_token, keyword_interval) {
    EXPECT_EQ(KEYWORD_INTERVAL, parse_one_token(std::string("INTERVAL")));
    EXPECT_EQ(KEYWORD_INTERVAL, parse_one_token(std::string("interval")));
}

TEST(lexical_one_token, keyword_into) {
    EXPECT_EQ(KEYWORD_INTO, parse_one_token(std::string("INTO")));
    EXPECT_EQ(KEYWORD_INTO, parse_one_token(std::string("into")));
}

TEST(lexical_one_token, keyword_invisible) {
    EXPECT_EQ(KEYWORD_INVISIBLE, parse_one_token(std::string("INVISIBLE")));
    EXPECT_EQ(KEYWORD_INVISIBLE, parse_one_token(std::string("invisible")));
}

TEST(lexical_one_token, keyword_invoker) {
    EXPECT_EQ(KEYWORD_INVOKER, parse_one_token(std::string("INVOKER")));
    EXPECT_EQ(KEYWORD_INVOKER, parse_one_token(std::string("invoker")));
}

TEST(lexical_one_token, keyword_io) {
    EXPECT_EQ(KEYWORD_IO, parse_one_token(std::string("IO")));
    EXPECT_EQ(KEYWORD_IO, parse_one_token(std::string("io")));
}

TEST(lexical_one_token, keyword_io_after_gtids) {
    EXPECT_EQ(KEYWORD_IO_AFTER_GTIDS, parse_one_token(std::string("IO_AFTER_GTIDS")));
    EXPECT_EQ(KEYWORD_IO_AFTER_GTIDS, parse_one_token(std::string("io_after_gtids")));
}

TEST(lexical_one_token, keyword_io_before_gtids) {
    EXPECT_EQ(KEYWORD_IO_BEFORE_GTIDS, parse_one_token(std::string("IO_BEFORE_GTIDS")));
    EXPECT_EQ(KEYWORD_IO_BEFORE_GTIDS, parse_one_token(std::string("io_before_gtids")));
}

TEST(lexical_one_token, keyword_io_thread) {
    EXPECT_EQ(KEYWORD_IO_THREAD, parse_one_token(std::string("IO_THREAD")));
    EXPECT_EQ(KEYWORD_IO_THREAD, parse_one_token(std::string("io_thread")));
}

TEST(lexical_one_token, keyword_ipc) {
    EXPECT_EQ(KEYWORD_IPC, parse_one_token(std::string("IPC")));
    EXPECT_EQ(KEYWORD_IPC, parse_one_token(std::string("ipc")));
}

TEST(lexical_one_token, keyword_is) {
    EXPECT_EQ(KEYWORD_IS, parse_one_token(std::string("IS")));
    EXPECT_EQ(KEYWORD_IS, parse_one_token(std::string("is")));
}

TEST(lexical_one_token, keyword_isolation) {
    EXPECT_EQ(KEYWORD_ISOLATION, parse_one_token(std::string("ISOLATION")));
    EXPECT_EQ(KEYWORD_ISOLATION, parse_one_token(std::string("isolation")));
}

TEST(lexical_one_token, keyword_issuer) {
    EXPECT_EQ(KEYWORD_ISSUER, parse_one_token(std::string("ISSUER")));
    EXPECT_EQ(KEYWORD_ISSUER, parse_one_token(std::string("issuer")));
}

TEST(lexical_one_token, keyword_iterate) {
    EXPECT_EQ(KEYWORD_ITERATE, parse_one_token(std::string("ITERATE")));
    EXPECT_EQ(KEYWORD_ITERATE, parse_one_token(std::string("iterate")));
}

TEST(lexical_one_token, keyword_join) {
    EXPECT_EQ(KEYWORD_JOIN, parse_one_token(std::string("JOIN")));
    EXPECT_EQ(KEYWORD_JOIN, parse_one_token(std::string("join")));
}

TEST(lexical_one_token, keyword_json) {
    EXPECT_EQ(KEYWORD_JSON, parse_one_token(std::string("JSON")));
    EXPECT_EQ(KEYWORD_JSON, parse_one_token(std::string("json")));
}

TEST(lexical_one_token, keyword_json_table) {
    EXPECT_EQ(KEYWORD_JSON_TABLE, parse_one_token(std::string("JSON_TABLE")));
    EXPECT_EQ(KEYWORD_JSON_TABLE, parse_one_token(std::string("json_table")));
}

TEST(lexical_one_token, keyword_json_value) {
    EXPECT_EQ(KEYWORD_JSON_VALUE, parse_one_token(std::string("JSON_VALUE")));
    EXPECT_EQ(KEYWORD_JSON_VALUE, parse_one_token(std::string("json_value")));
}

TEST(lexical_one_token, keyword_key) {
    EXPECT_EQ(KEYWORD_KEY, parse_one_token(std::string("KEY")));
    EXPECT_EQ(KEYWORD_KEY, parse_one_token(std::string("key")));
}

TEST(lexical_one_token, keyword_keyring) {
    EXPECT_EQ(KEYWORD_KEYRING, parse_one_token(std::string("KEYRING")));
    EXPECT_EQ(KEYWORD_KEYRING, parse_one_token(std::string("keyring")));
}

TEST(lexical_one_token, keyword_keys) {
    EXPECT_EQ(KEYWORD_KEYS, parse_one_token(std::string("KEYS")));
    EXPECT_EQ(KEYWORD_KEYS, parse_one_token(std::string("keys")));
}

TEST(lexical_one_token, keyword_key_block_size) {
    EXPECT_EQ(KEYWORD_KEY_BLOCK_SIZE, parse_one_token(std::string("KEY_BLOCK_SIZE")));
    EXPECT_EQ(KEYWORD_KEY_BLOCK_SIZE, parse_one_token(std::string("key_block_size")));
}

TEST(lexical_one_token, keyword_kill) {
    EXPECT_EQ(KEYWORD_KILL, parse_one_token(std::string("KILL")));
    EXPECT_EQ(KEYWORD_KILL, parse_one_token(std::string("kill")));
}

TEST(lexical_one_token, keyword_lag) {
    EXPECT_EQ(KEYWORD_LAG, parse_one_token(std::string("LAG")));
    EXPECT_EQ(KEYWORD_LAG, parse_one_token(std::string("lag")));
}

TEST(lexical_one_token, keyword_language) {
    EXPECT_EQ(KEYWORD_LANGUAGE, parse_one_token(std::string("LANGUAGE")));
    EXPECT_EQ(KEYWORD_LANGUAGE, parse_one_token(std::string("language")));
}

TEST(lexical_one_token, keyword_last) {
    EXPECT_EQ(KEYWORD_LAST, parse_one_token(std::string("LAST")));
    EXPECT_EQ(KEYWORD_LAST, parse_one_token(std::string("last")));
}

TEST(lexical_one_token, keyword_last_value) {
    EXPECT_EQ(KEYWORD_LAST_VALUE, parse_one_token(std::string("LAST_VALUE")));
    EXPECT_EQ(KEYWORD_LAST_VALUE, parse_one_token(std::string("last_value")));
}

TEST(lexical_one_token, keyword_lateral) {
    EXPECT_EQ(KEYWORD_LATERAL, parse_one_token(std::string("LATERAL")));
    EXPECT_EQ(KEYWORD_LATERAL, parse_one_token(std::string("lateral")));
}

TEST(lexical_one_token, keyword_lead) {
    EXPECT_EQ(KEYWORD_LEAD, parse_one_token(std::string("LEAD")));
    EXPECT_EQ(KEYWORD_LEAD, parse_one_token(std::string("lead")));
}

TEST(lexical_one_token, keyword_leading) {
    EXPECT_EQ(KEYWORD_LEADING, parse_one_token(std::string("LEADING")));
    EXPECT_EQ(KEYWORD_LEADING, parse_one_token(std::string("leading")));
}

TEST(lexical_one_token, keyword_leave) {
    EXPECT_EQ(KEYWORD_LEAVE, parse_one_token(std::string("LEAVE")));
    EXPECT_EQ(KEYWORD_LEAVE, parse_one_token(std::string("leave")));
}

TEST(lexical_one_token, keyword_leaves) {
    EXPECT_EQ(KEYWORD_LEAVES, parse_one_token(std::string("LEAVES")));
    EXPECT_EQ(KEYWORD_LEAVES, parse_one_token(std::string("leaves")));
}

TEST(lexical_one_token, keyword_left) {
    EXPECT_EQ(KEYWORD_LEFT, parse_one_token(std::string("LEFT")));
    EXPECT_EQ(KEYWORD_LEFT, parse_one_token(std::string("left")));
}

TEST(lexical_one_token, keyword_less) {
    EXPECT_EQ(KEYWORD_LESS, parse_one_token(std::string("LESS")));
    EXPECT_EQ(KEYWORD_LESS, parse_one_token(std::string("less")));
}

TEST(lexical_one_token, keyword_level) {
    EXPECT_EQ(KEYWORD_LEVEL, parse_one_token(std::string("LEVEL")));
    EXPECT_EQ(KEYWORD_LEVEL, parse_one_token(std::string("level")));
}

TEST(lexical_one_token, keyword_like) {
    EXPECT_EQ(KEYWORD_LIKE, parse_one_token(std::string("LIKE")));
    EXPECT_EQ(KEYWORD_LIKE, parse_one_token(std::string("like")));
}

TEST(lexical_one_token, keyword_limit) {
    EXPECT_EQ(KEYWORD_LIMIT, parse_one_token(std::string("LIMIT")));
    EXPECT_EQ(KEYWORD_LIMIT, parse_one_token(std::string("limit")));
}

TEST(lexical_one_token, keyword_linear) {
    EXPECT_EQ(KEYWORD_LINEAR, parse_one_token(std::string("LINEAR")));
    EXPECT_EQ(KEYWORD_LINEAR, parse_one_token(std::string("linear")));
}

TEST(lexical_one_token, keyword_lines) {
    EXPECT_EQ(KEYWORD_LINES, parse_one_token(std::string("LINES")));
    EXPECT_EQ(KEYWORD_LINES, parse_one_token(std::string("lines")));
}

TEST(lexical_one_token, keyword_linestring) {
    EXPECT_EQ(KEYWORD_LINESTRING, parse_one_token(std::string("LINESTRING")));
    EXPECT_EQ(KEYWORD_LINESTRING, parse_one_token(std::string("linestring")));
}

TEST(lexical_one_token, keyword_list) {
    EXPECT_EQ(KEYWORD_LIST, parse_one_token(std::string("LIST")));
    EXPECT_EQ(KEYWORD_LIST, parse_one_token(std::string("list")));
}

TEST(lexical_one_token, keyword_load) {
    EXPECT_EQ(KEYWORD_LOAD, parse_one_token(std::string("LOAD")));
    EXPECT_EQ(KEYWORD_LOAD, parse_one_token(std::string("load")));
}

TEST(lexical_one_token, keyword_local) {
    EXPECT_EQ(KEYWORD_LOCAL, parse_one_token(std::string("LOCAL")));
    EXPECT_EQ(KEYWORD_LOCAL, parse_one_token(std::string("local")));
}

TEST(lexical_one_token, keyword_localtime) {
    EXPECT_EQ(KEYWORD_LOCALTIME, parse_one_token(std::string("LOCALTIME")));
    EXPECT_EQ(KEYWORD_LOCALTIME, parse_one_token(std::string("localtime")));
}

TEST(lexical_one_token, keyword_localtimestamp) {
    EXPECT_EQ(KEYWORD_LOCALTIMESTAMP, parse_one_token(std::string("LOCALTIMESTAMP")));
    EXPECT_EQ(KEYWORD_LOCALTIMESTAMP, parse_one_token(std::string("localtimestamp")));
}

TEST(lexical_one_token, keyword_lock) {
    EXPECT_EQ(KEYWORD_LOCK, parse_one_token(std::string("LOCK")));
    EXPECT_EQ(KEYWORD_LOCK, parse_one_token(std::string("lock")));
}

TEST(lexical_one_token, keyword_locked) {
    EXPECT_EQ(KEYWORD_LOCKED, parse_one_token(std::string("LOCKED")));
    EXPECT_EQ(KEYWORD_LOCKED, parse_one_token(std::string("locked")));
}

TEST(lexical_one_token, keyword_locks) {
    EXPECT_EQ(KEYWORD_LOCKS, parse_one_token(std::string("LOCKS")));
    EXPECT_EQ(KEYWORD_LOCKS, parse_one_token(std::string("locks")));
}

TEST(lexical_one_token, keyword_log) {
    EXPECT_EQ(KEYWORD_LOG, parse_one_token(std::string("LOG")));
    EXPECT_EQ(KEYWORD_LOG, parse_one_token(std::string("log")));
}

TEST(lexical_one_token, keyword_logfile) {
    EXPECT_EQ(KEYWORD_LOGFILE, parse_one_token(std::string("LOGFILE")));
    EXPECT_EQ(KEYWORD_LOGFILE, parse_one_token(std::string("logfile")));
}

TEST(lexical_one_token, keyword_logs) {
    EXPECT_EQ(KEYWORD_LOGS, parse_one_token(std::string("LOGS")));
    EXPECT_EQ(KEYWORD_LOGS, parse_one_token(std::string("logs")));
}

TEST(lexical_one_token, keyword_long) {
    EXPECT_EQ(KEYWORD_LONG, parse_one_token(std::string("LONG")));
    EXPECT_EQ(KEYWORD_LONG, parse_one_token(std::string("long")));
}

TEST(lexical_one_token, keyword_longblob) {
    EXPECT_EQ(KEYWORD_LONGBLOB, parse_one_token(std::string("LONGBLOB")));
    EXPECT_EQ(KEYWORD_LONGBLOB, parse_one_token(std::string("longblob")));
}

TEST(lexical_one_token, keyword_longtext) {
    EXPECT_EQ(KEYWORD_LONGTEXT, parse_one_token(std::string("LONGTEXT")));
    EXPECT_EQ(KEYWORD_LONGTEXT, parse_one_token(std::string("longtext")));
}

TEST(lexical_one_token, keyword_loop) {
    EXPECT_EQ(KEYWORD_LOOP, parse_one_token(std::string("LOOP")));
    EXPECT_EQ(KEYWORD_LOOP, parse_one_token(std::string("loop")));
}

TEST(lexical_one_token, keyword_low_priority) {
    EXPECT_EQ(KEYWORD_LOW_PRIORITY, parse_one_token(std::string("LOW_PRIORITY")));
    EXPECT_EQ(KEYWORD_LOW_PRIORITY, parse_one_token(std::string("low_priority")));
}

TEST(lexical_one_token, keyword_manual) {
    EXPECT_EQ(KEYWORD_MANUAL, parse_one_token(std::string("MANUAL")));
    EXPECT_EQ(KEYWORD_MANUAL, parse_one_token(std::string("manual")));
}

TEST(lexical_one_token, keyword_master) {
    EXPECT_EQ(KEYWORD_MASTER, parse_one_token(std::string("MASTER")));
    EXPECT_EQ(KEYWORD_MASTER, parse_one_token(std::string("master")));
}

TEST(lexical_one_token, keyword_master_auto_position) {
    EXPECT_EQ(KEYWORD_MASTER_AUTO_POSITION, parse_one_token(std::string("MASTER_AUTO_POSITION")));
    EXPECT_EQ(KEYWORD_MASTER_AUTO_POSITION, parse_one_token(std::string("master_auto_position")));
}

TEST(lexical_one_token, keyword_master_bind) {
    EXPECT_EQ(KEYWORD_MASTER_BIND, parse_one_token(std::string("MASTER_BIND")));
    EXPECT_EQ(KEYWORD_MASTER_BIND, parse_one_token(std::string("master_bind")));
}

TEST(lexical_one_token, keyword_master_compression_algorithm) {
    EXPECT_EQ(KEYWORD_MASTER_COMPRESSION_ALGORITHM, parse_one_token(std::string("MASTER_COMPRESSION_ALGORITHM")));
    EXPECT_EQ(KEYWORD_MASTER_COMPRESSION_ALGORITHM, parse_one_token(std::string("master_compression_algorithm")));
}

TEST(lexical_one_token, keyword_master_connect_retry) {
    EXPECT_EQ(KEYWORD_MASTER_CONNECT_RETRY, parse_one_token(std::string("MASTER_CONNECT_RETRY")));
    EXPECT_EQ(KEYWORD_MASTER_CONNECT_RETRY, parse_one_token(std::string("master_connect_retry")));
}

TEST(lexical_one_token, keyword_master_delay) {
    EXPECT_EQ(KEYWORD_MASTER_DELAY, parse_one_token(std::string("MASTER_DELAY")));
    EXPECT_EQ(KEYWORD_MASTER_DELAY, parse_one_token(std::string("master_delay")));
}

TEST(lexical_one_token, keyword_master_heartbeat_period) {
    EXPECT_EQ(KEYWORD_MASTER_HEARTBEAT_PERIOD, parse_one_token(std::string("MASTER_HEARTBEAT_PERIOD")));
    EXPECT_EQ(KEYWORD_MASTER_HEARTBEAT_PERIOD, parse_one_token(std::string("master_heartbeat_period")));
}

TEST(lexical_one_token, keyword_master_host) {
    EXPECT_EQ(KEYWORD_MASTER_HOST, parse_one_token(std::string("MASTER_HOST")));
    EXPECT_EQ(KEYWORD_MASTER_HOST, parse_one_token(std::string("master_host")));
}

TEST(lexical_one_token, keyword_master_log_file) {
    EXPECT_EQ(KEYWORD_MASTER_LOG_FILE, parse_one_token(std::string("MASTER_LOG_FILE")));
    EXPECT_EQ(KEYWORD_MASTER_LOG_FILE, parse_one_token(std::string("master_log_file")));
}

TEST(lexical_one_token, keyword_master_log_pos) {
    EXPECT_EQ(KEYWORD_MASTER_LOG_POS, parse_one_token(std::string("MASTER_LOG_POS")));
    EXPECT_EQ(KEYWORD_MASTER_LOG_POS, parse_one_token(std::string("master_log_pos")));
}

TEST(lexical_one_token, keyword_master_password) {
    EXPECT_EQ(KEYWORD_MASTER_PASSWORD, parse_one_token(std::string("MASTER_PASSWORD")));
    EXPECT_EQ(KEYWORD_MASTER_PASSWORD, parse_one_token(std::string("master_password")));
}

TEST(lexical_one_token, keyword_master_port) {
    EXPECT_EQ(KEYWORD_MASTER_PORT, parse_one_token(std::string("MASTER_PORT")));
    EXPECT_EQ(KEYWORD_MASTER_PORT, parse_one_token(std::string("master_port")));
}

TEST(lexical_one_token, keyword_master_public_key_path) {
    EXPECT_EQ(KEYWORD_MASTER_PUBLIC_KEY_PATH, parse_one_token(std::string("MASTER_PUBLIC_KEY_PATH")));
    EXPECT_EQ(KEYWORD_MASTER_PUBLIC_KEY_PATH, parse_one_token(std::string("master_public_key_path")));
}

TEST(lexical_one_token, keyword_master_retry_count) {
    EXPECT_EQ(KEYWORD_MASTER_RETRY_COUNT, parse_one_token(std::string("MASTER_RETRY_COUNT")));
    EXPECT_EQ(KEYWORD_MASTER_RETRY_COUNT, parse_one_token(std::string("master_retry_count")));
}

TEST(lexical_one_token, keyword_master_ssl) {
    EXPECT_EQ(KEYWORD_MASTER_SSL, parse_one_token(std::string("MASTER_SSL")));
    EXPECT_EQ(KEYWORD_MASTER_SSL, parse_one_token(std::string("master_ssl")));
}

TEST(lexical_one_token, keyword_master_ssl_ca) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_CA, parse_one_token(std::string("MASTER_SSL_CA")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_CA, parse_one_token(std::string("master_ssl_ca")));
}

TEST(lexical_one_token, keyword_master_ssl_capath) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_CAPATH, parse_one_token(std::string("MASTER_SSL_CAPATH")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_CAPATH, parse_one_token(std::string("master_ssl_capath")));
}

TEST(lexical_one_token, keyword_master_ssl_cert) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_CERT, parse_one_token(std::string("MASTER_SSL_CERT")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_CERT, parse_one_token(std::string("master_ssl_cert")));
}

TEST(lexical_one_token, keyword_master_ssl_cipher) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_CIPHER, parse_one_token(std::string("MASTER_SSL_CIPHER")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_CIPHER, parse_one_token(std::string("master_ssl_cipher")));
}

TEST(lexical_one_token, keyword_master_ssl_crl) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_CRL, parse_one_token(std::string("MASTER_SSL_CRL")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_CRL, parse_one_token(std::string("master_ssl_crl")));
}

TEST(lexical_one_token, keyword_master_ssl_crlpath) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_CRLPATH, parse_one_token(std::string("MASTER_SSL_CRLPATH")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_CRLPATH, parse_one_token(std::string("master_ssl_crlpath")));
}

TEST(lexical_one_token, keyword_master_ssl_key) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_KEY, parse_one_token(std::string("MASTER_SSL_KEY")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_KEY, parse_one_token(std::string("master_ssl_key")));
}

TEST(lexical_one_token, keyword_master_ssl_verify_server_cert) {
    EXPECT_EQ(KEYWORD_MASTER_SSL_VERIFY_SERVER_CERT, parse_one_token(std::string("MASTER_SSL_VERIFY_SERVER_CERT")));
    EXPECT_EQ(KEYWORD_MASTER_SSL_VERIFY_SERVER_CERT, parse_one_token(std::string("master_ssl_verify_server_cert")));
}

TEST(lexical_one_token, keyword_master_tls_ciphersuites) {
    EXPECT_EQ(KEYWORD_MASTER_TLS_CIPHERSUITES, parse_one_token(std::string("MASTER_TLS_CIPHERSUITES")));
    EXPECT_EQ(KEYWORD_MASTER_TLS_CIPHERSUITES, parse_one_token(std::string("master_tls_ciphersuites")));
}

TEST(lexical_one_token, keyword_master_tls_version) {
    EXPECT_EQ(KEYWORD_MASTER_TLS_VERSION, parse_one_token(std::string("MASTER_TLS_VERSION")));
    EXPECT_EQ(KEYWORD_MASTER_TLS_VERSION, parse_one_token(std::string("master_tls_version")));
}

TEST(lexical_one_token, keyword_master_user) {
    EXPECT_EQ(KEYWORD_MASTER_USER, parse_one_token(std::string("MASTER_USER")));
    EXPECT_EQ(KEYWORD_MASTER_USER, parse_one_token(std::string("master_user")));
}

TEST(lexical_one_token, keyword_master_zstd_compression_level) {
    EXPECT_EQ(KEYWORD_MASTER_ZSTD_COMPRESSION_LEVEL, parse_one_token(std::string("MASTER_ZSTD_COMPRESSION_LEVEL")));
    EXPECT_EQ(KEYWORD_MASTER_ZSTD_COMPRESSION_LEVEL, parse_one_token(std::string("master_zstd_compression_level")));
}

TEST(lexical_one_token, keyword_match) {
    EXPECT_EQ(KEYWORD_MATCH, parse_one_token(std::string("MATCH")));
    EXPECT_EQ(KEYWORD_MATCH, parse_one_token(std::string("match")));
}

TEST(lexical_one_token, keyword_max_value) {
    EXPECT_EQ(KEYWORD_MAX_VALUE, parse_one_token(std::string("MAX_VALUE")));
    EXPECT_EQ(KEYWORD_MAX_VALUE, parse_one_token(std::string("max_value")));
}

TEST(lexical_one_token, keyword_max_connections_per_hour) {
    EXPECT_EQ(KEYWORD_MAX_CONNECTIONS_PER_HOUR, parse_one_token(std::string("MAX_CONNECTIONS_PER_HOUR")));
    EXPECT_EQ(KEYWORD_MAX_CONNECTIONS_PER_HOUR, parse_one_token(std::string("max_connections_per_hour")));
}

TEST(lexical_one_token, keyword_max_queries_per_hour) {
    EXPECT_EQ(KEYWORD_MAX_QUERIES_PER_HOUR, parse_one_token(std::string("MAX_QUERIES_PER_HOUR")));
    EXPECT_EQ(KEYWORD_MAX_QUERIES_PER_HOUR, parse_one_token(std::string("max_queries_per_hour")));
}

TEST(lexical_one_token, keyword_max_rows) {
    EXPECT_EQ(KEYWORD_MAX_ROWS, parse_one_token(std::string("MAX_ROWS")));
    EXPECT_EQ(KEYWORD_MAX_ROWS, parse_one_token(std::string("max_rows")));
}

TEST(lexical_one_token, keyword_max_size) {
    EXPECT_EQ(KEYWORD_MAX_SIZE, parse_one_token(std::string("MAX_SIZE")));
    EXPECT_EQ(KEYWORD_MAX_SIZE, parse_one_token(std::string("max_size")));
}

TEST(lexical_one_token, keyword_max_updates_per_hour) {
    EXPECT_EQ(KEYWORD_MAX_UPDATES_PER_HOUR, parse_one_token(std::string("MAX_UPDATES_PER_HOUR")));
    EXPECT_EQ(KEYWORD_MAX_UPDATES_PER_HOUR, parse_one_token(std::string("max_updates_per_hour")));
}

TEST(lexical_one_token, keyword_max_user_connections) {
    EXPECT_EQ(KEYWORD_MAX_USER_CONNECTIONS, parse_one_token(std::string("MAX_USER_CONNECTIONS")));
    EXPECT_EQ(KEYWORD_MAX_USER_CONNECTIONS, parse_one_token(std::string("max_user_connections")));
}

TEST(lexical_one_token, keyword_medium) {
    EXPECT_EQ(KEYWORD_MEDIUM, parse_one_token(std::string("MEDIUM")));
    EXPECT_EQ(KEYWORD_MEDIUM, parse_one_token(std::string("medium")));
}

TEST(lexical_one_token, keyword_mediumblob) {
    EXPECT_EQ(KEYWORD_MEDIUMBLOB, parse_one_token(std::string("MEDIUMBLOB")));
    EXPECT_EQ(KEYWORD_MEDIUMBLOB, parse_one_token(std::string("mediumblob")));
}

TEST(lexical_one_token, keyword_mediumint) {
    EXPECT_EQ(KEYWORD_MEDIUMINT, parse_one_token(std::string("MEDIUMINT")));
    EXPECT_EQ(KEYWORD_MEDIUMINT, parse_one_token(std::string("mediumint")));
}

TEST(lexical_one_token, keyword_mediumtext) {
    EXPECT_EQ(KEYWORD_MEDIUMTEXT, parse_one_token(std::string("MEDIUMTEXT")));
    EXPECT_EQ(KEYWORD_MEDIUMTEXT, parse_one_token(std::string("mediumtext")));
}

TEST(lexical_one_token, keyword_member) {
    EXPECT_EQ(KEYWORD_MEMBER, parse_one_token(std::string("MEMBER")));
    EXPECT_EQ(KEYWORD_MEMBER, parse_one_token(std::string("member")));
}

TEST(lexical_one_token, keyword_memory) {
    EXPECT_EQ(KEYWORD_MEMORY, parse_one_token(std::string("MEMORY")));
    EXPECT_EQ(KEYWORD_MEMORY, parse_one_token(std::string("memory")));
}

TEST(lexical_one_token, keyword_merge) {
    EXPECT_EQ(KEYWORD_MERGE, parse_one_token(std::string("MERGE")));
    EXPECT_EQ(KEYWORD_MERGE, parse_one_token(std::string("merge")));
}

TEST(lexical_one_token, keyword_message_text) {
    EXPECT_EQ(KEYWORD_MESSAGE_TEXT, parse_one_token(std::string("MESSAGE_TEXT")));
    EXPECT_EQ(KEYWORD_MESSAGE_TEXT, parse_one_token(std::string("message_text")));
}

TEST(lexical_one_token, keyword_microsecond) {
    EXPECT_EQ(KEYWORD_MICROSECOND, parse_one_token(std::string("MICROSECOND")));
    EXPECT_EQ(KEYWORD_MICROSECOND, parse_one_token(std::string("microsecond")));
}

TEST(lexical_one_token, keyword_middleint) {
    EXPECT_EQ(KEYWORD_MIDDLEINT, parse_one_token(std::string("MIDDLEINT")));
    EXPECT_EQ(KEYWORD_MIDDLEINT, parse_one_token(std::string("middleint")));
}

TEST(lexical_one_token, keyword_migrate) {
    EXPECT_EQ(KEYWORD_MIGRATE, parse_one_token(std::string("MIGRATE")));
    EXPECT_EQ(KEYWORD_MIGRATE, parse_one_token(std::string("migrate")));
}

TEST(lexical_one_token, keyword_minute) {
    EXPECT_EQ(KEYWORD_MINUTE, parse_one_token(std::string("MINUTE")));
    EXPECT_EQ(KEYWORD_MINUTE, parse_one_token(std::string("minute")));
}

TEST(lexical_one_token, keyword_minute_microsecond) {
    EXPECT_EQ(KEYWORD_MINUTE_MICROSECOND, parse_one_token(std::string("MINUTE_MICROSECOND")));
    EXPECT_EQ(KEYWORD_MINUTE_MICROSECOND, parse_one_token(std::string("minute_microsecond")));
}

TEST(lexical_one_token, keyword_minute_second) {
    EXPECT_EQ(KEYWORD_MINUTE_SECOND, parse_one_token(std::string("MINUTE_SECOND")));
    EXPECT_EQ(KEYWORD_MINUTE_SECOND, parse_one_token(std::string("minute_second")));
}

TEST(lexical_one_token, keyword_min_rows) {
    EXPECT_EQ(KEYWORD_MIN_ROWS, parse_one_token(std::string("MIN_ROWS")));
    EXPECT_EQ(KEYWORD_MIN_ROWS, parse_one_token(std::string("min_rows")));
}

TEST(lexical_one_token, keyword_mod) {
    EXPECT_EQ(KEYWORD_MOD, parse_one_token(std::string("MOD")));
    EXPECT_EQ(KEYWORD_MOD, parse_one_token(std::string("mod")));
}

TEST(lexical_one_token, keyword_mode) {
    EXPECT_EQ(KEYWORD_MODE, parse_one_token(std::string("MODE")));
    EXPECT_EQ(KEYWORD_MODE, parse_one_token(std::string("mode")));
}

TEST(lexical_one_token, keyword_modifies) {
    EXPECT_EQ(KEYWORD_MODIFIES, parse_one_token(std::string("MODIFIES")));
    EXPECT_EQ(KEYWORD_MODIFIES, parse_one_token(std::string("modifies")));
}

TEST(lexical_one_token, keyword_modify) {
    EXPECT_EQ(KEYWORD_MODIFY, parse_one_token(std::string("MODIFY")));
    EXPECT_EQ(KEYWORD_MODIFY, parse_one_token(std::string("modify")));
}

TEST(lexical_one_token, keyword_month) {
    EXPECT_EQ(KEYWORD_MONTH, parse_one_token(std::string("MONTH")));
    EXPECT_EQ(KEYWORD_MONTH, parse_one_token(std::string("month")));
}

TEST(lexical_one_token, keyword_multilinestring) {
    EXPECT_EQ(KEYWORD_MULTILINESTRING, parse_one_token(std::string("MULTILINESTRING")));
    EXPECT_EQ(KEYWORD_MULTILINESTRING, parse_one_token(std::string("multilinestring")));
}

TEST(lexical_one_token, keyword_multipoint) {
    EXPECT_EQ(KEYWORD_MULTIPOINT, parse_one_token(std::string("MULTIPOINT")));
    EXPECT_EQ(KEYWORD_MULTIPOINT, parse_one_token(std::string("multipoint")));
}

TEST(lexical_one_token, keyword_multipolygon) {
    EXPECT_EQ(KEYWORD_MULTIPOLYGON, parse_one_token(std::string("MULTIPOLYGON")));
    EXPECT_EQ(KEYWORD_MULTIPOLYGON, parse_one_token(std::string("multipolygon")));
}

TEST(lexical_one_token, keyword_mutex) {
    EXPECT_EQ(KEYWORD_MUTEX, parse_one_token(std::string("MUTEX")));
    EXPECT_EQ(KEYWORD_MUTEX, parse_one_token(std::string("mutex")));
}

TEST(lexical_one_token, keyword_mysql_errno) {
    EXPECT_EQ(KEYWORD_MYSQL_ERRNO, parse_one_token(std::string("MYSQL_ERRNO")));
    EXPECT_EQ(KEYWORD_MYSQL_ERRNO, parse_one_token(std::string("mysql_errno")));
}

TEST(lexical_one_token, keyword_name) {
    EXPECT_EQ(KEYWORD_NAME, parse_one_token(std::string("NAME")));
    EXPECT_EQ(KEYWORD_NAME, parse_one_token(std::string("name")));
}

TEST(lexical_one_token, keyword_names) {
    EXPECT_EQ(KEYWORD_NAMES, parse_one_token(std::string("NAMES")));
    EXPECT_EQ(KEYWORD_NAMES, parse_one_token(std::string("names")));
}

TEST(lexical_one_token, keyword_national) {
    EXPECT_EQ(KEYWORD_NATIONAL, parse_one_token(std::string("NATIONAL")));
    EXPECT_EQ(KEYWORD_NATIONAL, parse_one_token(std::string("national")));
}

TEST(lexical_one_token, keyword_natural) {
    EXPECT_EQ(KEYWORD_NATURAL, parse_one_token(std::string("NATURAL")));
    EXPECT_EQ(KEYWORD_NATURAL, parse_one_token(std::string("natural")));
}

TEST(lexical_one_token, keyword_nchar) {
    EXPECT_EQ(KEYWORD_NCHAR, parse_one_token(std::string("NCHAR")));
    EXPECT_EQ(KEYWORD_NCHAR, parse_one_token(std::string("nchar")));
}

TEST(lexical_one_token, keyword_ndb) {
    EXPECT_EQ(KEYWORD_NDB, parse_one_token(std::string("NDB")));
    EXPECT_EQ(KEYWORD_NDB, parse_one_token(std::string("ndb")));
}

TEST(lexical_one_token, keyword_ndbcluster) {
    EXPECT_EQ(KEYWORD_NDBCLUSTER, parse_one_token(std::string("NDBCLUSTER")));
    EXPECT_EQ(KEYWORD_NDBCLUSTER, parse_one_token(std::string("ndbcluster")));
}

TEST(lexical_one_token, keyword_nested) {
    EXPECT_EQ(KEYWORD_NESTED, parse_one_token(std::string("NESTED")));
    EXPECT_EQ(KEYWORD_NESTED, parse_one_token(std::string("nested")));
}

TEST(lexical_one_token, keyword_network_namespace) {
    EXPECT_EQ(KEYWORD_NETWORK_NAMESPACE, parse_one_token(std::string("NETWORK_NAMESPACE")));
    EXPECT_EQ(KEYWORD_NETWORK_NAMESPACE, parse_one_token(std::string("network_namespace")));
}

TEST(lexical_one_token, keyword_never) {
    EXPECT_EQ(KEYWORD_NEVER, parse_one_token(std::string("NEVER")));
    EXPECT_EQ(KEYWORD_NEVER, parse_one_token(std::string("never")));
}

TEST(lexical_one_token, keyword_new) {
    EXPECT_EQ(KEYWORD_NEW, parse_one_token(std::string("NEW")));
    EXPECT_EQ(KEYWORD_NEW, parse_one_token(std::string("new")));
}

TEST(lexical_one_token, keyword_next) {
    EXPECT_EQ(KEYWORD_NEXT, parse_one_token(std::string("NEXT")));
    EXPECT_EQ(KEYWORD_NEXT, parse_one_token(std::string("next")));
}

TEST(lexical_one_token, keyword_no) {
    EXPECT_EQ(KEYWORD_NO, parse_one_token(std::string("NO")));
    EXPECT_EQ(KEYWORD_NO, parse_one_token(std::string("no")));
}

TEST(lexical_one_token, keyword_nodegroup) {
    EXPECT_EQ(KEYWORD_NODEGROUP, parse_one_token(std::string("NODEGROUP")));
    EXPECT_EQ(KEYWORD_NODEGROUP, parse_one_token(std::string("nodegroup")));
}

TEST(lexical_one_token, keyword_none) {
    EXPECT_EQ(KEYWORD_NONE, parse_one_token(std::string("NONE")));
    EXPECT_EQ(KEYWORD_NONE, parse_one_token(std::string("none")));
}

TEST(lexical_one_token, keyword_not) {
    EXPECT_EQ(KEYWORD_NOT, parse_one_token(std::string("NOT")));
    EXPECT_EQ(KEYWORD_NOT, parse_one_token(std::string("not")));
}

TEST(lexical_one_token, keyword_not2) {
    EXPECT_EQ(KEYWORD_NOT2, parse_one_token(std::string("NOT2")));
    EXPECT_EQ(KEYWORD_NOT2, parse_one_token(std::string("not2")));
}

TEST(lexical_one_token, keyword_nowait) {
    EXPECT_EQ(KEYWORD_NOWAIT, parse_one_token(std::string("NOWAIT")));
    EXPECT_EQ(KEYWORD_NOWAIT, parse_one_token(std::string("nowait")));
}

TEST(lexical_one_token, keyword_no_wait) {
    EXPECT_EQ(KEYWORD_NO_WAIT, parse_one_token(std::string("NO_WAIT")));
    EXPECT_EQ(KEYWORD_NO_WAIT, parse_one_token(std::string("no_wait")));
}

TEST(lexical_one_token, keyword_no_write_to_binlog) {
    EXPECT_EQ(KEYWORD_NO_WRITE_TO_BINLOG, parse_one_token(std::string("NO_WRITE_TO_BINLOG")));
    EXPECT_EQ(KEYWORD_NO_WRITE_TO_BINLOG, parse_one_token(std::string("no_write_to_binlog")));
}

TEST(lexical_one_token, keyword_nth_value) {
    EXPECT_EQ(KEYWORD_NTH_VALUE, parse_one_token(std::string("NTH_VALUE")));
    EXPECT_EQ(KEYWORD_NTH_VALUE, parse_one_token(std::string("nth_value")));
}

TEST(lexical_one_token, keyword_ntile) {
    EXPECT_EQ(KEYWORD_NTILE, parse_one_token(std::string("NTILE")));
    EXPECT_EQ(KEYWORD_NTILE, parse_one_token(std::string("ntile")));
}

TEST(lexical_one_token, keyword_null) {
    EXPECT_EQ(KEYWORD_NULL, parse_one_token(std::string("NULL")));
    EXPECT_EQ(KEYWORD_NULL, parse_one_token(std::string("null")));
}

TEST(lexical_one_token, keyword_nulls) {
    EXPECT_EQ(KEYWORD_NULLS, parse_one_token(std::string("NULLS")));
    EXPECT_EQ(KEYWORD_NULLS, parse_one_token(std::string("nulls")));
}

TEST(lexical_one_token, keyword_number) {
    EXPECT_EQ(KEYWORD_NUMBER, parse_one_token(std::string("NUMBER")));
    EXPECT_EQ(KEYWORD_NUMBER, parse_one_token(std::string("number")));
}

TEST(lexical_one_token, keyword_numeric) {
    EXPECT_EQ(KEYWORD_NUMERIC, parse_one_token(std::string("NUMERIC")));
    EXPECT_EQ(KEYWORD_NUMERIC, parse_one_token(std::string("numeric")));
}

TEST(lexical_one_token, keyword_nvarchar) {
    EXPECT_EQ(KEYWORD_NVARCHAR, parse_one_token(std::string("NVARCHAR")));
    EXPECT_EQ(KEYWORD_NVARCHAR, parse_one_token(std::string("nvarchar")));
}

TEST(lexical_one_token, keyword_of) {
    EXPECT_EQ(KEYWORD_OF, parse_one_token(std::string("OF")));
    EXPECT_EQ(KEYWORD_OF, parse_one_token(std::string("of")));
}

TEST(lexical_one_token, keyword_off) {
    EXPECT_EQ(KEYWORD_OFF, parse_one_token(std::string("OFF")));
    EXPECT_EQ(KEYWORD_OFF, parse_one_token(std::string("off")));
}

TEST(lexical_one_token, keyword_offset) {
    EXPECT_EQ(KEYWORD_OFFSET, parse_one_token(std::string("OFFSET")));
    EXPECT_EQ(KEYWORD_OFFSET, parse_one_token(std::string("offset")));
}

TEST(lexical_one_token, keyword_oj) {
    EXPECT_EQ(KEYWORD_OJ, parse_one_token(std::string("OJ")));
    EXPECT_EQ(KEYWORD_OJ, parse_one_token(std::string("oj")));
}

TEST(lexical_one_token, keyword_old) {
    EXPECT_EQ(KEYWORD_OLD, parse_one_token(std::string("OLD")));
    EXPECT_EQ(KEYWORD_OLD, parse_one_token(std::string("old")));
}

TEST(lexical_one_token, keyword_on) {
    EXPECT_EQ(KEYWORD_ON, parse_one_token(std::string("ON")));
    EXPECT_EQ(KEYWORD_ON, parse_one_token(std::string("on")));
}

TEST(lexical_one_token, keyword_one) {
    EXPECT_EQ(KEYWORD_ONE, parse_one_token(std::string("ONE")));
    EXPECT_EQ(KEYWORD_ONE, parse_one_token(std::string("one")));
}

TEST(lexical_one_token, keyword_only) {
    EXPECT_EQ(KEYWORD_ONLY, parse_one_token(std::string("ONLY")));
    EXPECT_EQ(KEYWORD_ONLY, parse_one_token(std::string("only")));
}

TEST(lexical_one_token, keyword_open) {
    EXPECT_EQ(KEYWORD_OPEN, parse_one_token(std::string("OPEN")));
    EXPECT_EQ(KEYWORD_OPEN, parse_one_token(std::string("open")));
}

TEST(lexical_one_token, keyword_optimize) {
    EXPECT_EQ(KEYWORD_OPTIMIZE, parse_one_token(std::string("OPTIMIZE")));
    EXPECT_EQ(KEYWORD_OPTIMIZE, parse_one_token(std::string("optimize")));
}

TEST(lexical_one_token, keyword_optimizer_costs) {
    EXPECT_EQ(KEYWORD_OPTIMIZER_COSTS, parse_one_token(std::string("OPTIMIZER_COSTS")));
    EXPECT_EQ(KEYWORD_OPTIMIZER_COSTS, parse_one_token(std::string("optimizer_costs")));
}

TEST(lexical_one_token, keyword_option) {
    EXPECT_EQ(KEYWORD_OPTION, parse_one_token(std::string("OPTION")));
    EXPECT_EQ(KEYWORD_OPTION, parse_one_token(std::string("option")));
}

TEST(lexical_one_token, keyword_optional) {
    EXPECT_EQ(KEYWORD_OPTIONAL, parse_one_token(std::string("OPTIONAL")));
    EXPECT_EQ(KEYWORD_OPTIONAL, parse_one_token(std::string("optional")));
}

TEST(lexical_one_token, keyword_optionally) {
    EXPECT_EQ(KEYWORD_OPTIONALLY, parse_one_token(std::string("OPTIONALLY")));
    EXPECT_EQ(KEYWORD_OPTIONALLY, parse_one_token(std::string("optionally")));
}

TEST(lexical_one_token, keyword_options) {
    EXPECT_EQ(KEYWORD_OPTIONS, parse_one_token(std::string("OPTIONS")));
    EXPECT_EQ(KEYWORD_OPTIONS, parse_one_token(std::string("options")));
}

TEST(lexical_one_token, keyword_or) {
    EXPECT_EQ(KEYWORD_OR, parse_one_token(std::string("OR")));
    EXPECT_EQ(KEYWORD_OR, parse_one_token(std::string("or")));
}

TEST(lexical_one_token, keyword_or2) {
    EXPECT_EQ(KEYWORD_OR2, parse_one_token(std::string("OR2")));
    EXPECT_EQ(KEYWORD_OR2, parse_one_token(std::string("or2")));
}

TEST(lexical_one_token, keyword_order) {
    EXPECT_EQ(KEYWORD_ORDER, parse_one_token(std::string("ORDER")));
    EXPECT_EQ(KEYWORD_ORDER, parse_one_token(std::string("order")));
}

TEST(lexical_one_token, keyword_ordinality) {
    EXPECT_EQ(KEYWORD_ORDINALITY, parse_one_token(std::string("ORDINALITY")));
    EXPECT_EQ(KEYWORD_ORDINALITY, parse_one_token(std::string("ordinality")));
}

TEST(lexical_one_token, keyword_organization) {
    EXPECT_EQ(KEYWORD_ORGANIZATION, parse_one_token(std::string("ORGANIZATION")));
    EXPECT_EQ(KEYWORD_ORGANIZATION, parse_one_token(std::string("organization")));
}

TEST(lexical_one_token, keyword_others) {
    EXPECT_EQ(KEYWORD_OTHERS, parse_one_token(std::string("OTHERS")));
    EXPECT_EQ(KEYWORD_OTHERS, parse_one_token(std::string("others")));
}

TEST(lexical_one_token, keyword_out) {
    EXPECT_EQ(KEYWORD_OUT, parse_one_token(std::string("OUT")));
    EXPECT_EQ(KEYWORD_OUT, parse_one_token(std::string("out")));
}

TEST(lexical_one_token, keyword_outer) {
    EXPECT_EQ(KEYWORD_OUTER, parse_one_token(std::string("OUTER")));
    EXPECT_EQ(KEYWORD_OUTER, parse_one_token(std::string("outer")));
}

TEST(lexical_one_token, keyword_outfile) {
    EXPECT_EQ(KEYWORD_OUTFILE, parse_one_token(std::string("OUTFILE")));
    EXPECT_EQ(KEYWORD_OUTFILE, parse_one_token(std::string("outfile")));
}

TEST(lexical_one_token, keyword_over) {
    EXPECT_EQ(KEYWORD_OVER, parse_one_token(std::string("OVER")));
    EXPECT_EQ(KEYWORD_OVER, parse_one_token(std::string("over")));
}

TEST(lexical_one_token, keyword_owner) {
    EXPECT_EQ(KEYWORD_OWNER, parse_one_token(std::string("OWNER")));
    EXPECT_EQ(KEYWORD_OWNER, parse_one_token(std::string("owner")));
}

TEST(lexical_one_token, keyword_pack_keys) {
    EXPECT_EQ(KEYWORD_PACK_KEYS, parse_one_token(std::string("PACK_KEYS")));
    EXPECT_EQ(KEYWORD_PACK_KEYS, parse_one_token(std::string("pack_keys")));
}

TEST(lexical_one_token, keyword_page) {
    EXPECT_EQ(KEYWORD_PAGE, parse_one_token(std::string("PAGE")));
    EXPECT_EQ(KEYWORD_PAGE, parse_one_token(std::string("page")));
}

TEST(lexical_one_token, keyword_parallel) {
    EXPECT_EQ(KEYWORD_PARALLEL, parse_one_token(std::string("PARALLEL")));
    EXPECT_EQ(KEYWORD_PARALLEL, parse_one_token(std::string("parallel")));
}

TEST(lexical_one_token, keyword_parser) {
    EXPECT_EQ(KEYWORD_PARSER, parse_one_token(std::string("PARSER")));
    EXPECT_EQ(KEYWORD_PARSER, parse_one_token(std::string("parser")));
}

TEST(lexical_one_token, keyword_parse_tree) {
    EXPECT_EQ(KEYWORD_PARSE_TREE, parse_one_token(std::string("PARSE_TREE")));
    EXPECT_EQ(KEYWORD_PARSE_TREE, parse_one_token(std::string("parse_tree")));
}

TEST(lexical_one_token, keyword_partial) {
    EXPECT_EQ(KEYWORD_PARTIAL, parse_one_token(std::string("PARTIAL")));
    EXPECT_EQ(KEYWORD_PARTIAL, parse_one_token(std::string("partial")));
}

TEST(lexical_one_token, keyword_partition) {
    EXPECT_EQ(KEYWORD_PARTITION, parse_one_token(std::string("PARTITION")));
    EXPECT_EQ(KEYWORD_PARTITION, parse_one_token(std::string("partition")));
}

TEST(lexical_one_token, keyword_partitioning) {
    EXPECT_EQ(KEYWORD_PARTITIONING, parse_one_token(std::string("PARTITIONING")));
    EXPECT_EQ(KEYWORD_PARTITIONING, parse_one_token(std::string("partitioning")));
}

TEST(lexical_one_token, keyword_partitions) {
    EXPECT_EQ(KEYWORD_PARTITIONS, parse_one_token(std::string("PARTITIONS")));
    EXPECT_EQ(KEYWORD_PARTITIONS, parse_one_token(std::string("partitions")));
}

TEST(lexical_one_token, keyword_password) {
    EXPECT_EQ(KEYWORD_PASSWORD, parse_one_token(std::string("PASSWORD")));
    EXPECT_EQ(KEYWORD_PASSWORD, parse_one_token(std::string("password")));
}

TEST(lexical_one_token, keyword_password_lock_time) {
    EXPECT_EQ(KEYWORD_PASSWORD_LOCK_TIME, parse_one_token(std::string("PASSWORD_LOCK_TIME")));
    EXPECT_EQ(KEYWORD_PASSWORD_LOCK_TIME, parse_one_token(std::string("password_lock_time")));
}

TEST(lexical_one_token, keyword_path) {
    EXPECT_EQ(KEYWORD_PATH, parse_one_token(std::string("PATH")));
    EXPECT_EQ(KEYWORD_PATH, parse_one_token(std::string("path")));
}

TEST(lexical_one_token, keyword_percent_rank) {
    EXPECT_EQ(KEYWORD_PERCENT_RANK, parse_one_token(std::string("PERCENT_RANK")));
    EXPECT_EQ(KEYWORD_PERCENT_RANK, parse_one_token(std::string("percent_rank")));
}

TEST(lexical_one_token, keyword_persist) {
    EXPECT_EQ(KEYWORD_PERSIST, parse_one_token(std::string("PERSIST")));
    EXPECT_EQ(KEYWORD_PERSIST, parse_one_token(std::string("persist")));
}

TEST(lexical_one_token, keyword_persist_only) {
    EXPECT_EQ(KEYWORD_PERSIST_ONLY, parse_one_token(std::string("PERSIST_ONLY")));
    EXPECT_EQ(KEYWORD_PERSIST_ONLY, parse_one_token(std::string("persist_only")));
}

TEST(lexical_one_token, keyword_phase) {
    EXPECT_EQ(KEYWORD_PHASE, parse_one_token(std::string("PHASE")));
    EXPECT_EQ(KEYWORD_PHASE, parse_one_token(std::string("phase")));
}

TEST(lexical_one_token, keyword_plugin) {
    EXPECT_EQ(KEYWORD_PLUGIN, parse_one_token(std::string("PLUGIN")));
    EXPECT_EQ(KEYWORD_PLUGIN, parse_one_token(std::string("plugin")));
}

TEST(lexical_one_token, keyword_plugins) {
    EXPECT_EQ(KEYWORD_PLUGINS, parse_one_token(std::string("PLUGINS")));
    EXPECT_EQ(KEYWORD_PLUGINS, parse_one_token(std::string("plugins")));
}

TEST(lexical_one_token, keyword_plugin_dir) {
    EXPECT_EQ(KEYWORD_PLUGIN_DIR, parse_one_token(std::string("PLUGIN_DIR")));
    EXPECT_EQ(KEYWORD_PLUGIN_DIR, parse_one_token(std::string("plugin_dir")));
}

TEST(lexical_one_token, keyword_point) {
    EXPECT_EQ(KEYWORD_POINT, parse_one_token(std::string("POINT")));
    EXPECT_EQ(KEYWORD_POINT, parse_one_token(std::string("point")));
}

TEST(lexical_one_token, keyword_polygon) {
    EXPECT_EQ(KEYWORD_POLYGON, parse_one_token(std::string("POLYGON")));
    EXPECT_EQ(KEYWORD_POLYGON, parse_one_token(std::string("polygon")));
}

TEST(lexical_one_token, keyword_port) {
    EXPECT_EQ(KEYWORD_PORT, parse_one_token(std::string("PORT")));
    EXPECT_EQ(KEYWORD_PORT, parse_one_token(std::string("port")));
}

TEST(lexical_one_token, keyword_precedes) {
    EXPECT_EQ(KEYWORD_PRECEDES, parse_one_token(std::string("PRECEDES")));
    EXPECT_EQ(KEYWORD_PRECEDES, parse_one_token(std::string("precedes")));
}

TEST(lexical_one_token, keyword_preceding) {
    EXPECT_EQ(KEYWORD_PRECEDING, parse_one_token(std::string("PRECEDING")));
    EXPECT_EQ(KEYWORD_PRECEDING, parse_one_token(std::string("preceding")));
}

TEST(lexical_one_token, keyword_precision) {
    EXPECT_EQ(KEYWORD_PRECISION, parse_one_token(std::string("PRECISION")));
    EXPECT_EQ(KEYWORD_PRECISION, parse_one_token(std::string("precision")));
}

TEST(lexical_one_token, keyword_prepare) {
    EXPECT_EQ(KEYWORD_PREPARE, parse_one_token(std::string("PREPARE")));
    EXPECT_EQ(KEYWORD_PREPARE, parse_one_token(std::string("prepare")));
}

TEST(lexical_one_token, keyword_preserve) {
    EXPECT_EQ(KEYWORD_PRESERVE, parse_one_token(std::string("PRESERVE")));
    EXPECT_EQ(KEYWORD_PRESERVE, parse_one_token(std::string("preserve")));
}

TEST(lexical_one_token, keyword_prev) {
    EXPECT_EQ(KEYWORD_PREV, parse_one_token(std::string("PREV")));
    EXPECT_EQ(KEYWORD_PREV, parse_one_token(std::string("prev")));
}

TEST(lexical_one_token, keyword_primary) {
    EXPECT_EQ(KEYWORD_PRIMARY, parse_one_token(std::string("PRIMARY")));
    EXPECT_EQ(KEYWORD_PRIMARY, parse_one_token(std::string("primary")));
}

TEST(lexical_one_token, keyword_privileges) {
    EXPECT_EQ(KEYWORD_PRIVILEGES, parse_one_token(std::string("PRIVILEGES")));
    EXPECT_EQ(KEYWORD_PRIVILEGES, parse_one_token(std::string("privileges")));
}

TEST(lexical_one_token, keyword_privilege_checks_user) {
    EXPECT_EQ(KEYWORD_PRIVILEGE_CHECKS_USER, parse_one_token(std::string("PRIVILEGE_CHECKS_USER")));
    EXPECT_EQ(KEYWORD_PRIVILEGE_CHECKS_USER, parse_one_token(std::string("privilege_checks_user")));
}

TEST(lexical_one_token, keyword_procedure) {
    EXPECT_EQ(KEYWORD_PROCEDURE, parse_one_token(std::string("PROCEDURE")));
    EXPECT_EQ(KEYWORD_PROCEDURE, parse_one_token(std::string("procedure")));
}

TEST(lexical_one_token, keyword_process) {
    EXPECT_EQ(KEYWORD_PROCESS, parse_one_token(std::string("PROCESS")));
    EXPECT_EQ(KEYWORD_PROCESS, parse_one_token(std::string("process")));
}

TEST(lexical_one_token, keyword_processlist) {
    EXPECT_EQ(KEYWORD_PROCESSLIST, parse_one_token(std::string("PROCESSLIST")));
    EXPECT_EQ(KEYWORD_PROCESSLIST, parse_one_token(std::string("processlist")));
}

TEST(lexical_one_token, keyword_profile) {
    EXPECT_EQ(KEYWORD_PROFILE, parse_one_token(std::string("PROFILE")));
    EXPECT_EQ(KEYWORD_PROFILE, parse_one_token(std::string("profile")));
}

TEST(lexical_one_token, keyword_profiles) {
    EXPECT_EQ(KEYWORD_PROFILES, parse_one_token(std::string("PROFILES")));
    EXPECT_EQ(KEYWORD_PROFILES, parse_one_token(std::string("profiles")));
}

TEST(lexical_one_token, keyword_proxy) {
    EXPECT_EQ(KEYWORD_PROXY, parse_one_token(std::string("PROXY")));
    EXPECT_EQ(KEYWORD_PROXY, parse_one_token(std::string("proxy")));
}

TEST(lexical_one_token, keyword_purge) {
    EXPECT_EQ(KEYWORD_PURGE, parse_one_token(std::string("PURGE")));
    EXPECT_EQ(KEYWORD_PURGE, parse_one_token(std::string("purge")));
}

TEST(lexical_one_token, keyword_qualify) {
    EXPECT_EQ(KEYWORD_QUALIFY, parse_one_token(std::string("QUALIFY")));
    EXPECT_EQ(KEYWORD_QUALIFY, parse_one_token(std::string("qualify")));
}

TEST(lexical_one_token, keyword_quarter) {
    EXPECT_EQ(KEYWORD_QUARTER, parse_one_token(std::string("QUARTER")));
    EXPECT_EQ(KEYWORD_QUARTER, parse_one_token(std::string("quarter")));
}

TEST(lexical_one_token, keyword_query) {
    EXPECT_EQ(KEYWORD_QUERY, parse_one_token(std::string("QUERY")));
    EXPECT_EQ(KEYWORD_QUERY, parse_one_token(std::string("query")));
}

TEST(lexical_one_token, keyword_quick) {
    EXPECT_EQ(KEYWORD_QUICK, parse_one_token(std::string("QUICK")));
    EXPECT_EQ(KEYWORD_QUICK, parse_one_token(std::string("quick")));
}

TEST(lexical_one_token, keyword_random) {
    EXPECT_EQ(KEYWORD_RANDOM, parse_one_token(std::string("RANDOM")));
    EXPECT_EQ(KEYWORD_RANDOM, parse_one_token(std::string("random")));
}

TEST(lexical_one_token, keyword_range) {
    EXPECT_EQ(KEYWORD_RANGE, parse_one_token(std::string("RANGE")));
    EXPECT_EQ(KEYWORD_RANGE, parse_one_token(std::string("range")));
}

TEST(lexical_one_token, keyword_rank) {
    EXPECT_EQ(KEYWORD_RANK, parse_one_token(std::string("RANK")));
    EXPECT_EQ(KEYWORD_RANK, parse_one_token(std::string("rank")));
}

TEST(lexical_one_token, keyword_read) {
    EXPECT_EQ(KEYWORD_READ, parse_one_token(std::string("READ")));
    EXPECT_EQ(KEYWORD_READ, parse_one_token(std::string("read")));
}

TEST(lexical_one_token, keyword_reads) {
    EXPECT_EQ(KEYWORD_READS, parse_one_token(std::string("READS")));
    EXPECT_EQ(KEYWORD_READS, parse_one_token(std::string("reads")));
}

TEST(lexical_one_token, keyword_read_only) {
    EXPECT_EQ(KEYWORD_READ_ONLY, parse_one_token(std::string("READ_ONLY")));
    EXPECT_EQ(KEYWORD_READ_ONLY, parse_one_token(std::string("read_only")));
}

TEST(lexical_one_token, keyword_read_write) {
    EXPECT_EQ(KEYWORD_READ_WRITE, parse_one_token(std::string("READ_WRITE")));
    EXPECT_EQ(KEYWORD_READ_WRITE, parse_one_token(std::string("read_write")));
}

TEST(lexical_one_token, keyword_real) {
    EXPECT_EQ(KEYWORD_REAL, parse_one_token(std::string("REAL")));
    EXPECT_EQ(KEYWORD_REAL, parse_one_token(std::string("real")));
}

TEST(lexical_one_token, keyword_rebuild) {
    EXPECT_EQ(KEYWORD_REBUILD, parse_one_token(std::string("REBUILD")));
    EXPECT_EQ(KEYWORD_REBUILD, parse_one_token(std::string("rebuild")));
}

TEST(lexical_one_token, keyword_recover) {
    EXPECT_EQ(KEYWORD_RECOVER, parse_one_token(std::string("RECOVER")));
    EXPECT_EQ(KEYWORD_RECOVER, parse_one_token(std::string("recover")));
}

TEST(lexical_one_token, keyword_recursive) {
    EXPECT_EQ(KEYWORD_RECURSIVE, parse_one_token(std::string("RECURSIVE")));
    EXPECT_EQ(KEYWORD_RECURSIVE, parse_one_token(std::string("recursive")));
}

TEST(lexical_one_token, keyword_redo_buffer_size) {
    EXPECT_EQ(KEYWORD_REDO_BUFFER_SIZE, parse_one_token(std::string("REDO_BUFFER_SIZE")));
    EXPECT_EQ(KEYWORD_REDO_BUFFER_SIZE, parse_one_token(std::string("redo_buffer_size")));
}

TEST(lexical_one_token, keyword_redundant) {
    EXPECT_EQ(KEYWORD_REDUNDANT, parse_one_token(std::string("REDUNDANT")));
    EXPECT_EQ(KEYWORD_REDUNDANT, parse_one_token(std::string("redundant")));
}

TEST(lexical_one_token, keyword_reference) {
    EXPECT_EQ(KEYWORD_REFERENCE, parse_one_token(std::string("REFERENCE")));
    EXPECT_EQ(KEYWORD_REFERENCE, parse_one_token(std::string("reference")));
}

TEST(lexical_one_token, keyword_references) {
    EXPECT_EQ(KEYWORD_REFERENCES, parse_one_token(std::string("REFERENCES")));
    EXPECT_EQ(KEYWORD_REFERENCES, parse_one_token(std::string("references")));
}

TEST(lexical_one_token, keyword_regexp) {
    EXPECT_EQ(KEYWORD_REGEXP, parse_one_token(std::string("REGEXP")));
    EXPECT_EQ(KEYWORD_REGEXP, parse_one_token(std::string("regexp")));
}

TEST(lexical_one_token, keyword_registration) {
    EXPECT_EQ(KEYWORD_REGISTRATION, parse_one_token(std::string("REGISTRATION")));
    EXPECT_EQ(KEYWORD_REGISTRATION, parse_one_token(std::string("registration")));
}

TEST(lexical_one_token, keyword_relay) {
    EXPECT_EQ(KEYWORD_RELAY, parse_one_token(std::string("RELAY")));
    EXPECT_EQ(KEYWORD_RELAY, parse_one_token(std::string("relay")));
}

TEST(lexical_one_token, keyword_relaylog) {
    EXPECT_EQ(KEYWORD_RELAYLOG, parse_one_token(std::string("RELAYLOG")));
    EXPECT_EQ(KEYWORD_RELAYLOG, parse_one_token(std::string("relaylog")));
}

TEST(lexical_one_token, keyword_relay_log_file) {
    EXPECT_EQ(KEYWORD_RELAY_LOG_FILE, parse_one_token(std::string("RELAY_LOG_FILE")));
    EXPECT_EQ(KEYWORD_RELAY_LOG_FILE, parse_one_token(std::string("relay_log_file")));
}

TEST(lexical_one_token, keyword_relay_log_pos) {
    EXPECT_EQ(KEYWORD_RELAY_LOG_POS, parse_one_token(std::string("RELAY_LOG_POS")));
    EXPECT_EQ(KEYWORD_RELAY_LOG_POS, parse_one_token(std::string("relay_log_pos")));
}

TEST(lexical_one_token, keyword_relay_thread) {
    EXPECT_EQ(KEYWORD_RELAY_THREAD, parse_one_token(std::string("RELAY_THREAD")));
    EXPECT_EQ(KEYWORD_RELAY_THREAD, parse_one_token(std::string("relay_thread")));
}

TEST(lexical_one_token, keyword_release) {
    EXPECT_EQ(KEYWORD_RELEASE, parse_one_token(std::string("RELEASE")));
    EXPECT_EQ(KEYWORD_RELEASE, parse_one_token(std::string("release")));
}

TEST(lexical_one_token, keyword_reload) {
    EXPECT_EQ(KEYWORD_RELOAD, parse_one_token(std::string("RELOAD")));
    EXPECT_EQ(KEYWORD_RELOAD, parse_one_token(std::string("reload")));
}

TEST(lexical_one_token, keyword_remove) {
    EXPECT_EQ(KEYWORD_REMOVE, parse_one_token(std::string("REMOVE")));
    EXPECT_EQ(KEYWORD_REMOVE, parse_one_token(std::string("remove")));
}

TEST(lexical_one_token, keyword_rename) {
    EXPECT_EQ(KEYWORD_RENAME, parse_one_token(std::string("RENAME")));
    EXPECT_EQ(KEYWORD_RENAME, parse_one_token(std::string("rename")));
}

TEST(lexical_one_token, keyword_reorganize) {
    EXPECT_EQ(KEYWORD_REORGANIZE, parse_one_token(std::string("REORGANIZE")));
    EXPECT_EQ(KEYWORD_REORGANIZE, parse_one_token(std::string("reorganize")));
}

TEST(lexical_one_token, keyword_repair) {
    EXPECT_EQ(KEYWORD_REPAIR, parse_one_token(std::string("REPAIR")));
    EXPECT_EQ(KEYWORD_REPAIR, parse_one_token(std::string("repair")));
}

TEST(lexical_one_token, keyword_repeat) {
    EXPECT_EQ(KEYWORD_REPEAT, parse_one_token(std::string("REPEAT")));
    EXPECT_EQ(KEYWORD_REPEAT, parse_one_token(std::string("repeat")));
}

TEST(lexical_one_token, keyword_repeatable) {
    EXPECT_EQ(KEYWORD_REPEATABLE, parse_one_token(std::string("REPEATABLE")));
    EXPECT_EQ(KEYWORD_REPEATABLE, parse_one_token(std::string("repeatable")));
}

TEST(lexical_one_token, keyword_replace) {
    EXPECT_EQ(KEYWORD_REPLACE, parse_one_token(std::string("REPLACE")));
    EXPECT_EQ(KEYWORD_REPLACE, parse_one_token(std::string("replace")));
}

TEST(lexical_one_token, keyword_replica) {
    EXPECT_EQ(KEYWORD_REPLICA, parse_one_token(std::string("REPLICA")));
    EXPECT_EQ(KEYWORD_REPLICA, parse_one_token(std::string("replica")));
}

TEST(lexical_one_token, keyword_replicas) {
    EXPECT_EQ(KEYWORD_REPLICAS, parse_one_token(std::string("REPLICAS")));
    EXPECT_EQ(KEYWORD_REPLICAS, parse_one_token(std::string("replicas")));
}

TEST(lexical_one_token, keyword_replicate_do_db) {
    EXPECT_EQ(KEYWORD_REPLICATE_DO_DB, parse_one_token(std::string("REPLICATE_DO_DB")));
    EXPECT_EQ(KEYWORD_REPLICATE_DO_DB, parse_one_token(std::string("replicate_do_db")));
}

TEST(lexical_one_token, keyword_replicate_do_table) {
    EXPECT_EQ(KEYWORD_REPLICATE_DO_TABLE, parse_one_token(std::string("REPLICATE_DO_TABLE")));
    EXPECT_EQ(KEYWORD_REPLICATE_DO_TABLE, parse_one_token(std::string("replicate_do_table")));
}

TEST(lexical_one_token, keyword_replicate_ignore_db) {
    EXPECT_EQ(KEYWORD_REPLICATE_IGNORE_DB, parse_one_token(std::string("REPLICATE_IGNORE_DB")));
    EXPECT_EQ(KEYWORD_REPLICATE_IGNORE_DB, parse_one_token(std::string("replicate_ignore_db")));
}

TEST(lexical_one_token, keyword_replicate_ignore_table) {
    EXPECT_EQ(KEYWORD_REPLICATE_IGNORE_TABLE, parse_one_token(std::string("REPLICATE_IGNORE_TABLE")));
    EXPECT_EQ(KEYWORD_REPLICATE_IGNORE_TABLE, parse_one_token(std::string("replicate_ignore_table")));
}

TEST(lexical_one_token, keyword_replicate_rewrite_db) {
    EXPECT_EQ(KEYWORD_REPLICATE_REWRITE_DB, parse_one_token(std::string("REPLICATE_REWRITE_DB")));
    EXPECT_EQ(KEYWORD_REPLICATE_REWRITE_DB, parse_one_token(std::string("replicate_rewrite_db")));
}

TEST(lexical_one_token, keyword_replicate_wild_do_table) {
    EXPECT_EQ(KEYWORD_REPLICATE_WILD_DO_TABLE, parse_one_token(std::string("REPLICATE_WILD_DO_TABLE")));
    EXPECT_EQ(KEYWORD_REPLICATE_WILD_DO_TABLE, parse_one_token(std::string("replicate_wild_do_table")));
}

TEST(lexical_one_token, keyword_replicate_wild_ignore_table) {
    EXPECT_EQ(KEYWORD_REPLICATE_WILD_IGNORE_TABLE, parse_one_token(std::string("REPLICATE_WILD_IGNORE_TABLE")));
    EXPECT_EQ(KEYWORD_REPLICATE_WILD_IGNORE_TABLE, parse_one_token(std::string("replicate_wild_ignore_table")));
}

TEST(lexical_one_token, keyword_replication) {
    EXPECT_EQ(KEYWORD_REPLICATION, parse_one_token(std::string("REPLICATION")));
    EXPECT_EQ(KEYWORD_REPLICATION, parse_one_token(std::string("replication")));
}

TEST(lexical_one_token, keyword_require) {
    EXPECT_EQ(KEYWORD_REQUIRE, parse_one_token(std::string("REQUIRE")));
    EXPECT_EQ(KEYWORD_REQUIRE, parse_one_token(std::string("require")));
}

TEST(lexical_one_token, keyword_require_row_format) {
    EXPECT_EQ(KEYWORD_REQUIRE_ROW_FORMAT, parse_one_token(std::string("REQUIRE_ROW_FORMAT")));
    EXPECT_EQ(KEYWORD_REQUIRE_ROW_FORMAT, parse_one_token(std::string("require_row_format")));
}

TEST(lexical_one_token, keyword_reset) {
    EXPECT_EQ(KEYWORD_RESET, parse_one_token(std::string("RESET")));
    EXPECT_EQ(KEYWORD_RESET, parse_one_token(std::string("reset")));
}

TEST(lexical_one_token, keyword_resignal) {
    EXPECT_EQ(KEYWORD_RESIGNAL, parse_one_token(std::string("RESIGNAL")));
    EXPECT_EQ(KEYWORD_RESIGNAL, parse_one_token(std::string("resignal")));
}

TEST(lexical_one_token, keyword_resource) {
    EXPECT_EQ(KEYWORD_RESOURCE, parse_one_token(std::string("RESOURCE")));
    EXPECT_EQ(KEYWORD_RESOURCE, parse_one_token(std::string("resource")));
}

TEST(lexical_one_token, keyword_respect) {
    EXPECT_EQ(KEYWORD_RESPECT, parse_one_token(std::string("RESPECT")));
    EXPECT_EQ(KEYWORD_RESPECT, parse_one_token(std::string("respect")));
}

TEST(lexical_one_token, keyword_restart) {
    EXPECT_EQ(KEYWORD_RESTART, parse_one_token(std::string("RESTART")));
    EXPECT_EQ(KEYWORD_RESTART, parse_one_token(std::string("restart")));
}

TEST(lexical_one_token, keyword_restore) {
    EXPECT_EQ(KEYWORD_RESTORE, parse_one_token(std::string("RESTORE")));
    EXPECT_EQ(KEYWORD_RESTORE, parse_one_token(std::string("restore")));
}

TEST(lexical_one_token, keyword_restrict) {
    EXPECT_EQ(KEYWORD_RESTRICT, parse_one_token(std::string("RESTRICT")));
    EXPECT_EQ(KEYWORD_RESTRICT, parse_one_token(std::string("restrict")));
}

TEST(lexical_one_token, keyword_resume) {
    EXPECT_EQ(KEYWORD_RESUME, parse_one_token(std::string("RESUME")));
    EXPECT_EQ(KEYWORD_RESUME, parse_one_token(std::string("resume")));
}

TEST(lexical_one_token, keyword_retain) {
    EXPECT_EQ(KEYWORD_RETAIN, parse_one_token(std::string("RETAIN")));
    EXPECT_EQ(KEYWORD_RETAIN, parse_one_token(std::string("retain")));
}

TEST(lexical_one_token, keyword_return) {
    EXPECT_EQ(KEYWORD_RETURN, parse_one_token(std::string("RETURN")));
    EXPECT_EQ(KEYWORD_RETURN, parse_one_token(std::string("return")));
}

TEST(lexical_one_token, keyword_returned_sqlstate) {
    EXPECT_EQ(KEYWORD_RETURNED_SQLSTATE, parse_one_token(std::string("RETURNED_SQLSTATE")));
    EXPECT_EQ(KEYWORD_RETURNED_SQLSTATE, parse_one_token(std::string("returned_sqlstate")));
}

TEST(lexical_one_token, keyword_returning) {
    EXPECT_EQ(KEYWORD_RETURNING, parse_one_token(std::string("RETURNING")));
    EXPECT_EQ(KEYWORD_RETURNING, parse_one_token(std::string("returning")));
}

TEST(lexical_one_token, keyword_returns) {
    EXPECT_EQ(KEYWORD_RETURNS, parse_one_token(std::string("RETURNS")));
    EXPECT_EQ(KEYWORD_RETURNS, parse_one_token(std::string("returns")));
}

TEST(lexical_one_token, keyword_reuse) {
    EXPECT_EQ(KEYWORD_REUSE, parse_one_token(std::string("REUSE")));
    EXPECT_EQ(KEYWORD_REUSE, parse_one_token(std::string("reuse")));
}

TEST(lexical_one_token, keyword_reverse) {
    EXPECT_EQ(KEYWORD_REVERSE, parse_one_token(std::string("REVERSE")));
    EXPECT_EQ(KEYWORD_REVERSE, parse_one_token(std::string("reverse")));
}

TEST(lexical_one_token, keyword_revoke) {
    EXPECT_EQ(KEYWORD_REVOKE, parse_one_token(std::string("REVOKE")));
    EXPECT_EQ(KEYWORD_REVOKE, parse_one_token(std::string("revoke")));
}

TEST(lexical_one_token, keyword_right) {
    EXPECT_EQ(KEYWORD_RIGHT, parse_one_token(std::string("RIGHT")));
    EXPECT_EQ(KEYWORD_RIGHT, parse_one_token(std::string("right")));
}

TEST(lexical_one_token, keyword_rlike) {
    EXPECT_EQ(KEYWORD_RLIKE, parse_one_token(std::string("RLIKE")));
    EXPECT_EQ(KEYWORD_RLIKE, parse_one_token(std::string("rlike")));
}

TEST(lexical_one_token, keyword_role) {
    EXPECT_EQ(KEYWORD_ROLE, parse_one_token(std::string("ROLE")));
    EXPECT_EQ(KEYWORD_ROLE, parse_one_token(std::string("role")));
}

TEST(lexical_one_token, keyword_rollback) {
    EXPECT_EQ(KEYWORD_ROLLBACK, parse_one_token(std::string("ROLLBACK")));
    EXPECT_EQ(KEYWORD_ROLLBACK, parse_one_token(std::string("rollback")));
}

TEST(lexical_one_token, keyword_rollup) {
    EXPECT_EQ(KEYWORD_ROLLUP, parse_one_token(std::string("ROLLUP")));
    EXPECT_EQ(KEYWORD_ROLLUP, parse_one_token(std::string("rollup")));
}

TEST(lexical_one_token, keyword_rotate) {
    EXPECT_EQ(KEYWORD_ROTATE, parse_one_token(std::string("ROTATE")));
    EXPECT_EQ(KEYWORD_ROTATE, parse_one_token(std::string("rotate")));
}

TEST(lexical_one_token, keyword_routine) {
    EXPECT_EQ(KEYWORD_ROUTINE, parse_one_token(std::string("ROUTINE")));
    EXPECT_EQ(KEYWORD_ROUTINE, parse_one_token(std::string("routine")));
}

TEST(lexical_one_token, keyword_row) {
    EXPECT_EQ(KEYWORD_ROW, parse_one_token(std::string("ROW")));
    EXPECT_EQ(KEYWORD_ROW, parse_one_token(std::string("row")));
}

TEST(lexical_one_token, keyword_rows) {
    EXPECT_EQ(KEYWORD_ROWS, parse_one_token(std::string("ROWS")));
    EXPECT_EQ(KEYWORD_ROWS, parse_one_token(std::string("rows")));
}

TEST(lexical_one_token, keyword_row_count) {
    EXPECT_EQ(KEYWORD_ROW_COUNT, parse_one_token(std::string("ROW_COUNT")));
    EXPECT_EQ(KEYWORD_ROW_COUNT, parse_one_token(std::string("row_count")));
}

TEST(lexical_one_token, keyword_row_format) {
    EXPECT_EQ(KEYWORD_ROW_FORMAT, parse_one_token(std::string("ROW_FORMAT")));
    EXPECT_EQ(KEYWORD_ROW_FORMAT, parse_one_token(std::string("row_format")));
}

TEST(lexical_one_token, keyword_row_number) {
    EXPECT_EQ(KEYWORD_ROW_NUMBER, parse_one_token(std::string("ROW_NUMBER")));
    EXPECT_EQ(KEYWORD_ROW_NUMBER, parse_one_token(std::string("row_number")));
}

TEST(lexical_one_token, keyword_rtree) {
    EXPECT_EQ(KEYWORD_RTREE, parse_one_token(std::string("RTREE")));
    EXPECT_EQ(KEYWORD_RTREE, parse_one_token(std::string("rtree")));
}

TEST(lexical_one_token, keyword_s3) {
    EXPECT_EQ(KEYWORD_S3, parse_one_token(std::string("S3")));
    EXPECT_EQ(KEYWORD_S3, parse_one_token(std::string("s3")));
}

TEST(lexical_one_token, keyword_savepoint) {
    EXPECT_EQ(KEYWORD_SAVEPOINT, parse_one_token(std::string("SAVEPOINT")));
    EXPECT_EQ(KEYWORD_SAVEPOINT, parse_one_token(std::string("savepoint")));
}

TEST(lexical_one_token, keyword_schedule) {
    EXPECT_EQ(KEYWORD_SCHEDULE, parse_one_token(std::string("SCHEDULE")));
    EXPECT_EQ(KEYWORD_SCHEDULE, parse_one_token(std::string("schedule")));
}

TEST(lexical_one_token, keyword_schema) {
    EXPECT_EQ(KEYWORD_SCHEMA, parse_one_token(std::string("SCHEMA")));
    EXPECT_EQ(KEYWORD_SCHEMA, parse_one_token(std::string("schema")));
}

TEST(lexical_one_token, keyword_schemas) {
    EXPECT_EQ(KEYWORD_SCHEMAS, parse_one_token(std::string("SCHEMAS")));
    EXPECT_EQ(KEYWORD_SCHEMAS, parse_one_token(std::string("schemas")));
}

TEST(lexical_one_token, keyword_schema_name) {
    EXPECT_EQ(KEYWORD_SCHEMA_NAME, parse_one_token(std::string("SCHEMA_NAME")));
    EXPECT_EQ(KEYWORD_SCHEMA_NAME, parse_one_token(std::string("schema_name")));
}

TEST(lexical_one_token, keyword_second) {
    EXPECT_EQ(KEYWORD_SECOND, parse_one_token(std::string("SECOND")));
    EXPECT_EQ(KEYWORD_SECOND, parse_one_token(std::string("second")));
}

TEST(lexical_one_token, keyword_secondary) {
    EXPECT_EQ(KEYWORD_SECONDARY, parse_one_token(std::string("SECONDARY")));
    EXPECT_EQ(KEYWORD_SECONDARY, parse_one_token(std::string("secondary")));
}

TEST(lexical_one_token, keyword_secondary_engine) {
    EXPECT_EQ(KEYWORD_SECONDARY_ENGINE, parse_one_token(std::string("SECONDARY_ENGINE")));
    EXPECT_EQ(KEYWORD_SECONDARY_ENGINE, parse_one_token(std::string("secondary_engine")));
}

TEST(lexical_one_token, keyword_secondary_engine_attribute) {
    EXPECT_EQ(KEYWORD_SECONDARY_ENGINE_ATTRIBUTE, parse_one_token(std::string("SECONDARY_ENGINE_ATTRIBUTE")));
    EXPECT_EQ(KEYWORD_SECONDARY_ENGINE_ATTRIBUTE, parse_one_token(std::string("secondary_engine_attribute")));
}

TEST(lexical_one_token, keyword_secondary_load) {
    EXPECT_EQ(KEYWORD_SECONDARY_LOAD, parse_one_token(std::string("SECONDARY_LOAD")));
    EXPECT_EQ(KEYWORD_SECONDARY_LOAD, parse_one_token(std::string("secondary_load")));
}

TEST(lexical_one_token, keyword_secondary_unload) {
    EXPECT_EQ(KEYWORD_SECONDARY_UNLOAD, parse_one_token(std::string("SECONDARY_UNLOAD")));
    EXPECT_EQ(KEYWORD_SECONDARY_UNLOAD, parse_one_token(std::string("secondary_unload")));
}

TEST(lexical_one_token, keyword_second_microsecond) {
    EXPECT_EQ(KEYWORD_SECOND_MICROSECOND, parse_one_token(std::string("SECOND_MICROSECOND")));
    EXPECT_EQ(KEYWORD_SECOND_MICROSECOND, parse_one_token(std::string("second_microsecond")));
}

TEST(lexical_one_token, keyword_security) {
    EXPECT_EQ(KEYWORD_SECURITY, parse_one_token(std::string("SECURITY")));
    EXPECT_EQ(KEYWORD_SECURITY, parse_one_token(std::string("security")));
}

TEST(lexical_one_token, keyword_select) {
    EXPECT_EQ(KEYWORD_SELECT, parse_one_token(std::string("SELECT")));
    EXPECT_EQ(KEYWORD_SELECT, parse_one_token(std::string("select")));
}

TEST(lexical_one_token, keyword_sensitive) {
    EXPECT_EQ(KEYWORD_SENSITIVE, parse_one_token(std::string("SENSITIVE")));
    EXPECT_EQ(KEYWORD_SENSITIVE, parse_one_token(std::string("sensitive")));
}

TEST(lexical_one_token, keyword_separator) {
    EXPECT_EQ(KEYWORD_SEPARATOR, parse_one_token(std::string("SEPARATOR")));
    EXPECT_EQ(KEYWORD_SEPARATOR, parse_one_token(std::string("separator")));
}

TEST(lexical_one_token, keyword_serial) {
    EXPECT_EQ(KEYWORD_SERIAL, parse_one_token(std::string("SERIAL")));
    EXPECT_EQ(KEYWORD_SERIAL, parse_one_token(std::string("serial")));
}

TEST(lexical_one_token, keyword_serializable) {
    EXPECT_EQ(KEYWORD_SERIALIZABLE, parse_one_token(std::string("SERIALIZABLE")));
    EXPECT_EQ(KEYWORD_SERIALIZABLE, parse_one_token(std::string("serializable")));
}

TEST(lexical_one_token, keyword_server) {
    EXPECT_EQ(KEYWORD_SERVER, parse_one_token(std::string("SERVER")));
    EXPECT_EQ(KEYWORD_SERVER, parse_one_token(std::string("server")));
}

TEST(lexical_one_token, keyword_session) {
    EXPECT_EQ(KEYWORD_SESSION, parse_one_token(std::string("SESSION")));
    EXPECT_EQ(KEYWORD_SESSION, parse_one_token(std::string("session")));
}

TEST(lexical_one_token, keyword_set) {
    EXPECT_EQ(KEYWORD_SET, parse_one_token(std::string("SET")));
    EXPECT_EQ(KEYWORD_SET, parse_one_token(std::string("set")));
}

TEST(lexical_one_token, keyword_share) {
    EXPECT_EQ(KEYWORD_SHARE, parse_one_token(std::string("SHARE")));
    EXPECT_EQ(KEYWORD_SHARE, parse_one_token(std::string("share")));
}

TEST(lexical_one_token, keyword_show) {
    EXPECT_EQ(KEYWORD_SHOW, parse_one_token(std::string("SHOW")));
    EXPECT_EQ(KEYWORD_SHOW, parse_one_token(std::string("show")));
}

TEST(lexical_one_token, keyword_shutdown) {
    EXPECT_EQ(KEYWORD_SHUTDOWN, parse_one_token(std::string("SHUTDOWN")));
    EXPECT_EQ(KEYWORD_SHUTDOWN, parse_one_token(std::string("shutdown")));
}

TEST(lexical_one_token, keyword_signal) {
    EXPECT_EQ(KEYWORD_SIGNAL, parse_one_token(std::string("SIGNAL")));
    EXPECT_EQ(KEYWORD_SIGNAL, parse_one_token(std::string("signal")));
}

TEST(lexical_one_token, keyword_signed) {
    EXPECT_EQ(KEYWORD_SIGNED, parse_one_token(std::string("SIGNED")));
    EXPECT_EQ(KEYWORD_SIGNED, parse_one_token(std::string("signed")));
}

TEST(lexical_one_token, keyword_simple) {
    EXPECT_EQ(KEYWORD_SIMPLE, parse_one_token(std::string("SIMPLE")));
    EXPECT_EQ(KEYWORD_SIMPLE, parse_one_token(std::string("simple")));
}

TEST(lexical_one_token, keyword_skip) {
    EXPECT_EQ(KEYWORD_SKIP, parse_one_token(std::string("SKIP")));
    EXPECT_EQ(KEYWORD_SKIP, parse_one_token(std::string("skip")));
}

TEST(lexical_one_token, keyword_slave) {
    EXPECT_EQ(KEYWORD_SLAVE, parse_one_token(std::string("SLAVE")));
    EXPECT_EQ(KEYWORD_SLAVE, parse_one_token(std::string("slave")));
}

TEST(lexical_one_token, keyword_slow) {
    EXPECT_EQ(KEYWORD_SLOW, parse_one_token(std::string("SLOW")));
    EXPECT_EQ(KEYWORD_SLOW, parse_one_token(std::string("slow")));
}

TEST(lexical_one_token, keyword_smallint) {
    EXPECT_EQ(KEYWORD_SMALLINT, parse_one_token(std::string("SMALLINT")));
    EXPECT_EQ(KEYWORD_SMALLINT, parse_one_token(std::string("smallint")));
}

TEST(lexical_one_token, keyword_snapshot) {
    EXPECT_EQ(KEYWORD_SNAPSHOT, parse_one_token(std::string("SNAPSHOT")));
    EXPECT_EQ(KEYWORD_SNAPSHOT, parse_one_token(std::string("snapshot")));
}

TEST(lexical_one_token, keyword_socket) {
    EXPECT_EQ(KEYWORD_SOCKET, parse_one_token(std::string("SOCKET")));
    EXPECT_EQ(KEYWORD_SOCKET, parse_one_token(std::string("socket")));
}

TEST(lexical_one_token, keyword_some) {
    EXPECT_EQ(KEYWORD_SOME, parse_one_token(std::string("SOME")));
    EXPECT_EQ(KEYWORD_SOME, parse_one_token(std::string("some")));
}

TEST(lexical_one_token, keyword_soname) {
    EXPECT_EQ(KEYWORD_SONAME, parse_one_token(std::string("SONAME")));
    EXPECT_EQ(KEYWORD_SONAME, parse_one_token(std::string("soname")));
}

TEST(lexical_one_token, keyword_sounds) {
    EXPECT_EQ(KEYWORD_SOUNDS, parse_one_token(std::string("SOUNDS")));
    EXPECT_EQ(KEYWORD_SOUNDS, parse_one_token(std::string("sounds")));
}

TEST(lexical_one_token, keyword_source) {
    EXPECT_EQ(KEYWORD_SOURCE, parse_one_token(std::string("SOURCE")));
    EXPECT_EQ(KEYWORD_SOURCE, parse_one_token(std::string("source")));
}

TEST(lexical_one_token, keyword_source_auto_position) {
    EXPECT_EQ(KEYWORD_SOURCE_AUTO_POSITION, parse_one_token(std::string("SOURCE_AUTO_POSITION")));
    EXPECT_EQ(KEYWORD_SOURCE_AUTO_POSITION, parse_one_token(std::string("source_auto_position")));
}

TEST(lexical_one_token, keyword_source_bind) {
    EXPECT_EQ(KEYWORD_SOURCE_BIND, parse_one_token(std::string("SOURCE_BIND")));
    EXPECT_EQ(KEYWORD_SOURCE_BIND, parse_one_token(std::string("source_bind")));
}

TEST(lexical_one_token, keyword_source_compression_algorithm) {
    EXPECT_EQ(KEYWORD_SOURCE_COMPRESSION_ALGORITHM, parse_one_token(std::string("SOURCE_COMPRESSION_ALGORITHM")));
    EXPECT_EQ(KEYWORD_SOURCE_COMPRESSION_ALGORITHM, parse_one_token(std::string("source_compression_algorithm")));
}

TEST(lexical_one_token, keyword_source_connect_retry) {
    EXPECT_EQ(KEYWORD_SOURCE_CONNECT_RETRY, parse_one_token(std::string("SOURCE_CONNECT_RETRY")));
    EXPECT_EQ(KEYWORD_SOURCE_CONNECT_RETRY, parse_one_token(std::string("source_connect_retry")));
}

TEST(lexical_one_token, keyword_source_delay) {
    EXPECT_EQ(KEYWORD_SOURCE_DELAY, parse_one_token(std::string("SOURCE_DELAY")));
    EXPECT_EQ(KEYWORD_SOURCE_DELAY, parse_one_token(std::string("source_delay")));
}

TEST(lexical_one_token, keyword_source_heartbeat_period) {
    EXPECT_EQ(KEYWORD_SOURCE_HEARTBEAT_PERIOD, parse_one_token(std::string("SOURCE_HEARTBEAT_PERIOD")));
    EXPECT_EQ(KEYWORD_SOURCE_HEARTBEAT_PERIOD, parse_one_token(std::string("source_heartbeat_period")));
}

TEST(lexical_one_token, keyword_source_host) {
    EXPECT_EQ(KEYWORD_SOURCE_HOST, parse_one_token(std::string("SOURCE_HOST")));
    EXPECT_EQ(KEYWORD_SOURCE_HOST, parse_one_token(std::string("source_host")));
}

TEST(lexical_one_token, keyword_source_log_file) {
    EXPECT_EQ(KEYWORD_SOURCE_LOG_FILE, parse_one_token(std::string("SOURCE_LOG_FILE")));
    EXPECT_EQ(KEYWORD_SOURCE_LOG_FILE, parse_one_token(std::string("source_log_file")));
}

TEST(lexical_one_token, keyword_source_log_pos) {
    EXPECT_EQ(KEYWORD_SOURCE_LOG_POS, parse_one_token(std::string("SOURCE_LOG_POS")));
    EXPECT_EQ(KEYWORD_SOURCE_LOG_POS, parse_one_token(std::string("source_log_pos")));
}

TEST(lexical_one_token, keyword_source_password) {
    EXPECT_EQ(KEYWORD_SOURCE_PASSWORD, parse_one_token(std::string("SOURCE_PASSWORD")));
    EXPECT_EQ(KEYWORD_SOURCE_PASSWORD, parse_one_token(std::string("source_password")));
}

TEST(lexical_one_token, keyword_source_port) {
    EXPECT_EQ(KEYWORD_SOURCE_PORT, parse_one_token(std::string("SOURCE_PORT")));
    EXPECT_EQ(KEYWORD_SOURCE_PORT, parse_one_token(std::string("source_port")));
}

TEST(lexical_one_token, keyword_source_public_key_path) {
    EXPECT_EQ(KEYWORD_SOURCE_PUBLIC_KEY_PATH, parse_one_token(std::string("SOURCE_PUBLIC_KEY_PATH")));
    EXPECT_EQ(KEYWORD_SOURCE_PUBLIC_KEY_PATH, parse_one_token(std::string("source_public_key_path")));
}

TEST(lexical_one_token, keyword_source_retry_count) {
    EXPECT_EQ(KEYWORD_SOURCE_RETRY_COUNT, parse_one_token(std::string("SOURCE_RETRY_COUNT")));
    EXPECT_EQ(KEYWORD_SOURCE_RETRY_COUNT, parse_one_token(std::string("source_retry_count")));
}

TEST(lexical_one_token, keyword_source_ssl) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL, parse_one_token(std::string("SOURCE_SSL")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL, parse_one_token(std::string("source_ssl")));
}

TEST(lexical_one_token, keyword_source_ssl_ca) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CA, parse_one_token(std::string("SOURCE_SSL_CA")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CA, parse_one_token(std::string("source_ssl_ca")));
}

TEST(lexical_one_token, keyword_source_ssl_capath) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CAPATH, parse_one_token(std::string("SOURCE_SSL_CAPATH")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CAPATH, parse_one_token(std::string("source_ssl_capath")));
}

TEST(lexical_one_token, keyword_source_ssl_cert) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CERT, parse_one_token(std::string("SOURCE_SSL_CERT")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CERT, parse_one_token(std::string("source_ssl_cert")));
}

TEST(lexical_one_token, keyword_source_ssl_cipher) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CIPHER, parse_one_token(std::string("SOURCE_SSL_CIPHER")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CIPHER, parse_one_token(std::string("source_ssl_cipher")));
}

TEST(lexical_one_token, keyword_source_ssl_crl) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CRL, parse_one_token(std::string("SOURCE_SSL_CRL")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CRL, parse_one_token(std::string("source_ssl_crl")));
}

TEST(lexical_one_token, keyword_source_ssl_crlpath) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CRLPATH, parse_one_token(std::string("SOURCE_SSL_CRLPATH")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_CRLPATH, parse_one_token(std::string("source_ssl_crlpath")));
}

TEST(lexical_one_token, keyword_source_ssl_key) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_KEY, parse_one_token(std::string("SOURCE_SSL_KEY")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_KEY, parse_one_token(std::string("source_ssl_key")));
}

TEST(lexical_one_token, keyword_source_ssl_verify_server_cert) {
    EXPECT_EQ(KEYWORD_SOURCE_SSL_VERIFY_SERVER_CERT, parse_one_token(std::string("SOURCE_SSL_VERIFY_SERVER_CERT")));
    EXPECT_EQ(KEYWORD_SOURCE_SSL_VERIFY_SERVER_CERT, parse_one_token(std::string("source_ssl_verify_server_cert")));
}

TEST(lexical_one_token, keyword_source_tls_ciphersuites) {
    EXPECT_EQ(KEYWORD_SOURCE_TLS_CIPHERSUITES, parse_one_token(std::string("SOURCE_TLS_CIPHERSUITES")));
    EXPECT_EQ(KEYWORD_SOURCE_TLS_CIPHERSUITES, parse_one_token(std::string("source_tls_ciphersuites")));
}

TEST(lexical_one_token, keyword_source_tls_version) {
    EXPECT_EQ(KEYWORD_SOURCE_TLS_VERSION, parse_one_token(std::string("SOURCE_TLS_VERSION")));
    EXPECT_EQ(KEYWORD_SOURCE_TLS_VERSION, parse_one_token(std::string("source_tls_version")));
}

TEST(lexical_one_token, keyword_source_user) {
    EXPECT_EQ(KEYWORD_SOURCE_USER, parse_one_token(std::string("SOURCE_USER")));
    EXPECT_EQ(KEYWORD_SOURCE_USER, parse_one_token(std::string("source_user")));
}

TEST(lexical_one_token, keyword_source_zstd_compression_level) {
    EXPECT_EQ(KEYWORD_SOURCE_ZSTD_COMPRESSION_LEVEL, parse_one_token(std::string("SOURCE_ZSTD_COMPRESSION_LEVEL")));
    EXPECT_EQ(KEYWORD_SOURCE_ZSTD_COMPRESSION_LEVEL, parse_one_token(std::string("source_zstd_compression_level")));
}

TEST(lexical_one_token, keyword_spatial) {
    EXPECT_EQ(KEYWORD_SPATIAL, parse_one_token(std::string("SPATIAL")));
    EXPECT_EQ(KEYWORD_SPATIAL, parse_one_token(std::string("spatial")));
}

TEST(lexical_one_token, keyword_specific) {
    EXPECT_EQ(KEYWORD_SPECIFIC, parse_one_token(std::string("SPECIFIC")));
    EXPECT_EQ(KEYWORD_SPECIFIC, parse_one_token(std::string("specific")));
}

TEST(lexical_one_token, keyword_sql) {
    EXPECT_EQ(KEYWORD_SQL, parse_one_token(std::string("SQL")));
    EXPECT_EQ(KEYWORD_SQL, parse_one_token(std::string("sql")));
}

TEST(lexical_one_token, keyword_sqlexception) {
    EXPECT_EQ(KEYWORD_SQLEXCEPTION, parse_one_token(std::string("SQLEXCEPTION")));
    EXPECT_EQ(KEYWORD_SQLEXCEPTION, parse_one_token(std::string("sqlexception")));
}

TEST(lexical_one_token, keyword_sqlstate) {
    EXPECT_EQ(KEYWORD_SQLSTATE, parse_one_token(std::string("SQLSTATE")));
    EXPECT_EQ(KEYWORD_SQLSTATE, parse_one_token(std::string("sqlstate")));
}

TEST(lexical_one_token, keyword_sqlwarning) {
    EXPECT_EQ(KEYWORD_SQLWARNING, parse_one_token(std::string("SQLWARNING")));
    EXPECT_EQ(KEYWORD_SQLWARNING, parse_one_token(std::string("sqlwarning")));
}

TEST(lexical_one_token, keyword_sql_after_gtids) {
    EXPECT_EQ(KEYWORD_SQL_AFTER_GTIDS, parse_one_token(std::string("SQL_AFTER_GTIDS")));
    EXPECT_EQ(KEYWORD_SQL_AFTER_GTIDS, parse_one_token(std::string("sql_after_gtids")));
}

TEST(lexical_one_token, keyword_sql_after_mts_gaps) {
    EXPECT_EQ(KEYWORD_SQL_AFTER_MTS_GAPS, parse_one_token(std::string("SQL_AFTER_MTS_GAPS")));
    EXPECT_EQ(KEYWORD_SQL_AFTER_MTS_GAPS, parse_one_token(std::string("sql_after_mts_gaps")));
}

TEST(lexical_one_token, keyword_sql_before_gtids) {
    EXPECT_EQ(KEYWORD_SQL_BEFORE_GTIDS, parse_one_token(std::string("SQL_BEFORE_GTIDS")));
    EXPECT_EQ(KEYWORD_SQL_BEFORE_GTIDS, parse_one_token(std::string("sql_before_gtids")));
}

TEST(lexical_one_token, keyword_sql_big_result) {
    EXPECT_EQ(KEYWORD_SQL_BIG_RESULT, parse_one_token(std::string("SQL_BIG_RESULT")));
    EXPECT_EQ(KEYWORD_SQL_BIG_RESULT, parse_one_token(std::string("sql_big_result")));
}

TEST(lexical_one_token, keyword_sql_buffer_result) {
    EXPECT_EQ(KEYWORD_SQL_BUFFER_RESULT, parse_one_token(std::string("SQL_BUFFER_RESULT")));
    EXPECT_EQ(KEYWORD_SQL_BUFFER_RESULT, parse_one_token(std::string("sql_buffer_result")));
}

TEST(lexical_one_token, keyword_sql_calc_found_rows) {
    EXPECT_EQ(KEYWORD_SQL_CALC_FOUND_ROWS, parse_one_token(std::string("SQL_CALC_FOUND_ROWS")));
    EXPECT_EQ(KEYWORD_SQL_CALC_FOUND_ROWS, parse_one_token(std::string("sql_calc_found_rows")));
}

TEST(lexical_one_token, keyword_sql_no_cache) {
    EXPECT_EQ(KEYWORD_SQL_NO_CACHE, parse_one_token(std::string("SQL_NO_CACHE")));
    EXPECT_EQ(KEYWORD_SQL_NO_CACHE, parse_one_token(std::string("sql_no_cache")));
}

TEST(lexical_one_token, keyword_sql_small_result) {
    EXPECT_EQ(KEYWORD_SQL_SMALL_RESULT, parse_one_token(std::string("SQL_SMALL_RESULT")));
    EXPECT_EQ(KEYWORD_SQL_SMALL_RESULT, parse_one_token(std::string("sql_small_result")));
}

TEST(lexical_one_token, keyword_sql_thread) {
    EXPECT_EQ(KEYWORD_SQL_THREAD, parse_one_token(std::string("SQL_THREAD")));
    EXPECT_EQ(KEYWORD_SQL_THREAD, parse_one_token(std::string("sql_thread")));
}

TEST(lexical_one_token, keyword_sql_tsi_day) {
    EXPECT_EQ(KEYWORD_SQL_TSI_DAY, parse_one_token(std::string("SQL_TSI_DAY")));
    EXPECT_EQ(KEYWORD_SQL_TSI_DAY, parse_one_token(std::string("sql_tsi_day")));
}

TEST(lexical_one_token, keyword_sql_tsi_hour) {
    EXPECT_EQ(KEYWORD_SQL_TSI_HOUR, parse_one_token(std::string("SQL_TSI_HOUR")));
    EXPECT_EQ(KEYWORD_SQL_TSI_HOUR, parse_one_token(std::string("sql_tsi_hour")));
}

TEST(lexical_one_token, keyword_sql_tsi_minute) {
    EXPECT_EQ(KEYWORD_SQL_TSI_MINUTE, parse_one_token(std::string("SQL_TSI_MINUTE")));
    EXPECT_EQ(KEYWORD_SQL_TSI_MINUTE, parse_one_token(std::string("sql_tsi_minute")));
}

TEST(lexical_one_token, keyword_sql_tsi_month) {
    EXPECT_EQ(KEYWORD_SQL_TSI_MONTH, parse_one_token(std::string("SQL_TSI_MONTH")));
    EXPECT_EQ(KEYWORD_SQL_TSI_MONTH, parse_one_token(std::string("sql_tsi_month")));
}

TEST(lexical_one_token, keyword_sql_tsi_quarter) {
    EXPECT_EQ(KEYWORD_SQL_TSI_QUARTER, parse_one_token(std::string("SQL_TSI_QUARTER")));
    EXPECT_EQ(KEYWORD_SQL_TSI_QUARTER, parse_one_token(std::string("sql_tsi_quarter")));
}

TEST(lexical_one_token, keyword_sql_tsi_second) {
    EXPECT_EQ(KEYWORD_SQL_TSI_SECOND, parse_one_token(std::string("SQL_TSI_SECOND")));
    EXPECT_EQ(KEYWORD_SQL_TSI_SECOND, parse_one_token(std::string("sql_tsi_second")));
}

TEST(lexical_one_token, keyword_sql_tsi_week) {
    EXPECT_EQ(KEYWORD_SQL_TSI_WEEK, parse_one_token(std::string("SQL_TSI_WEEK")));
    EXPECT_EQ(KEYWORD_SQL_TSI_WEEK, parse_one_token(std::string("sql_tsi_week")));
}

TEST(lexical_one_token, keyword_sql_tsi_year) {
    EXPECT_EQ(KEYWORD_SQL_TSI_YEAR, parse_one_token(std::string("SQL_TSI_YEAR")));
    EXPECT_EQ(KEYWORD_SQL_TSI_YEAR, parse_one_token(std::string("sql_tsi_year")));
}

TEST(lexical_one_token, keyword_srid) {
    EXPECT_EQ(KEYWORD_SRID, parse_one_token(std::string("SRID")));
    EXPECT_EQ(KEYWORD_SRID, parse_one_token(std::string("srid")));
}

TEST(lexical_one_token, keyword_ssl) {
    EXPECT_EQ(KEYWORD_SSL, parse_one_token(std::string("SSL")));
    EXPECT_EQ(KEYWORD_SSL, parse_one_token(std::string("ssl")));
}

TEST(lexical_one_token, keyword_stacked) {
    EXPECT_EQ(KEYWORD_STACKED, parse_one_token(std::string("STACKED")));
    EXPECT_EQ(KEYWORD_STACKED, parse_one_token(std::string("stacked")));
}

TEST(lexical_one_token, keyword_start) {
    EXPECT_EQ(KEYWORD_START, parse_one_token(std::string("START")));
    EXPECT_EQ(KEYWORD_START, parse_one_token(std::string("start")));
}

TEST(lexical_one_token, keyword_starting) {
    EXPECT_EQ(KEYWORD_STARTING, parse_one_token(std::string("STARTING")));
    EXPECT_EQ(KEYWORD_STARTING, parse_one_token(std::string("starting")));
}

TEST(lexical_one_token, keyword_starts) {
    EXPECT_EQ(KEYWORD_STARTS, parse_one_token(std::string("STARTS")));
    EXPECT_EQ(KEYWORD_STARTS, parse_one_token(std::string("starts")));
}

TEST(lexical_one_token, keyword_stats_auto_recalc) {
    EXPECT_EQ(KEYWORD_STATS_AUTO_RECALC, parse_one_token(std::string("STATS_AUTO_RECALC")));
    EXPECT_EQ(KEYWORD_STATS_AUTO_RECALC, parse_one_token(std::string("stats_auto_recalc")));
}

TEST(lexical_one_token, keyword_stats_persistent) {
    EXPECT_EQ(KEYWORD_STATS_PERSISTENT, parse_one_token(std::string("STATS_PERSISTENT")));
    EXPECT_EQ(KEYWORD_STATS_PERSISTENT, parse_one_token(std::string("stats_persistent")));
}

TEST(lexical_one_token, keyword_stats_sample_pages) {
    EXPECT_EQ(KEYWORD_STATS_SAMPLE_PAGES, parse_one_token(std::string("STATS_SAMPLE_PAGES")));
    EXPECT_EQ(KEYWORD_STATS_SAMPLE_PAGES, parse_one_token(std::string("stats_sample_pages")));
}

TEST(lexical_one_token, keyword_status) {
    EXPECT_EQ(KEYWORD_STATUS, parse_one_token(std::string("STATUS")));
    EXPECT_EQ(KEYWORD_STATUS, parse_one_token(std::string("status")));
}

TEST(lexical_one_token, keyword_stop) {
    EXPECT_EQ(KEYWORD_STOP, parse_one_token(std::string("STOP")));
    EXPECT_EQ(KEYWORD_STOP, parse_one_token(std::string("stop")));
}

TEST(lexical_one_token, keyword_storage) {
    EXPECT_EQ(KEYWORD_STORAGE, parse_one_token(std::string("STORAGE")));
    EXPECT_EQ(KEYWORD_STORAGE, parse_one_token(std::string("storage")));
}

TEST(lexical_one_token, keyword_stored) {
    EXPECT_EQ(KEYWORD_STORED, parse_one_token(std::string("STORED")));
    EXPECT_EQ(KEYWORD_STORED, parse_one_token(std::string("stored")));
}

TEST(lexical_one_token, keyword_straight_join) {
    EXPECT_EQ(KEYWORD_STRAIGHT_JOIN, parse_one_token(std::string("STRAIGHT_JOIN")));
    EXPECT_EQ(KEYWORD_STRAIGHT_JOIN, parse_one_token(std::string("straight_join")));
}

TEST(lexical_one_token, keyword_stream) {
    EXPECT_EQ(KEYWORD_STREAM, parse_one_token(std::string("STREAM")));
    EXPECT_EQ(KEYWORD_STREAM, parse_one_token(std::string("stream")));
}

TEST(lexical_one_token, keyword_string) {
    EXPECT_EQ(KEYWORD_STRING, parse_one_token(std::string("STRING")));
    EXPECT_EQ(KEYWORD_STRING, parse_one_token(std::string("string")));
}

TEST(lexical_one_token, keyword_subclass_origin) {
    EXPECT_EQ(KEYWORD_SUBCLASS_ORIGIN, parse_one_token(std::string("SUBCLASS_ORIGIN")));
    EXPECT_EQ(KEYWORD_SUBCLASS_ORIGIN, parse_one_token(std::string("subclass_origin")));
}

TEST(lexical_one_token, keyword_subject) {
    EXPECT_EQ(KEYWORD_SUBJECT, parse_one_token(std::string("SUBJECT")));
    EXPECT_EQ(KEYWORD_SUBJECT, parse_one_token(std::string("subject")));
}

TEST(lexical_one_token, keyword_subpartition) {
    EXPECT_EQ(KEYWORD_SUBPARTITION, parse_one_token(std::string("SUBPARTITION")));
    EXPECT_EQ(KEYWORD_SUBPARTITION, parse_one_token(std::string("subpartition")));
}

TEST(lexical_one_token, keyword_subpartitions) {
    EXPECT_EQ(KEYWORD_SUBPARTITIONS, parse_one_token(std::string("SUBPARTITIONS")));
    EXPECT_EQ(KEYWORD_SUBPARTITIONS, parse_one_token(std::string("subpartitions")));
}

TEST(lexical_one_token, keyword_super) {
    EXPECT_EQ(KEYWORD_SUPER, parse_one_token(std::string("SUPER")));
    EXPECT_EQ(KEYWORD_SUPER, parse_one_token(std::string("super")));
}

TEST(lexical_one_token, keyword_suspend) {
    EXPECT_EQ(KEYWORD_SUSPEND, parse_one_token(std::string("SUSPEND")));
    EXPECT_EQ(KEYWORD_SUSPEND, parse_one_token(std::string("suspend")));
}

TEST(lexical_one_token, keyword_swaps) {
    EXPECT_EQ(KEYWORD_SWAPS, parse_one_token(std::string("SWAPS")));
    EXPECT_EQ(KEYWORD_SWAPS, parse_one_token(std::string("swaps")));
}

TEST(lexical_one_token, keyword_switches) {
    EXPECT_EQ(KEYWORD_SWITCHES, parse_one_token(std::string("SWITCHES")));
    EXPECT_EQ(KEYWORD_SWITCHES, parse_one_token(std::string("switches")));
}

TEST(lexical_one_token, keyword_system) {
    EXPECT_EQ(KEYWORD_SYSTEM, parse_one_token(std::string("SYSTEM")));
    EXPECT_EQ(KEYWORD_SYSTEM, parse_one_token(std::string("system")));
}

TEST(lexical_one_token, keyword_table) {
    EXPECT_EQ(KEYWORD_TABLE, parse_one_token(std::string("TABLE")));
    EXPECT_EQ(KEYWORD_TABLE, parse_one_token(std::string("table")));
}

TEST(lexical_one_token, keyword_tables) {
    EXPECT_EQ(KEYWORD_TABLES, parse_one_token(std::string("TABLES")));
    EXPECT_EQ(KEYWORD_TABLES, parse_one_token(std::string("tables")));
}

TEST(lexical_one_token, keyword_tablesample) {
    EXPECT_EQ(KEYWORD_TABLESAMPLE, parse_one_token(std::string("TABLESAMPLE")));
    EXPECT_EQ(KEYWORD_TABLESAMPLE, parse_one_token(std::string("tablesample")));
}

TEST(lexical_one_token, keyword_tablespace) {
    EXPECT_EQ(KEYWORD_TABLESPACE, parse_one_token(std::string("TABLESPACE")));
    EXPECT_EQ(KEYWORD_TABLESPACE, parse_one_token(std::string("tablespace")));
}

TEST(lexical_one_token, keyword_table_checksum) {
    EXPECT_EQ(KEYWORD_TABLE_CHECKSUM, parse_one_token(std::string("TABLE_CHECKSUM")));
    EXPECT_EQ(KEYWORD_TABLE_CHECKSUM, parse_one_token(std::string("table_checksum")));
}

TEST(lexical_one_token, keyword_table_name) {
    EXPECT_EQ(KEYWORD_TABLE_NAME, parse_one_token(std::string("TABLE_NAME")));
    EXPECT_EQ(KEYWORD_TABLE_NAME, parse_one_token(std::string("table_name")));
}

TEST(lexical_one_token, keyword_temporary) {
    EXPECT_EQ(KEYWORD_TEMPORARY, parse_one_token(std::string("TEMPORARY")));
    EXPECT_EQ(KEYWORD_TEMPORARY, parse_one_token(std::string("temporary")));
}

TEST(lexical_one_token, keyword_temptable) {
    EXPECT_EQ(KEYWORD_TEMPTABLE, parse_one_token(std::string("TEMPTABLE")));
    EXPECT_EQ(KEYWORD_TEMPTABLE, parse_one_token(std::string("temptable")));
}

TEST(lexical_one_token, keyword_terminated) {
    EXPECT_EQ(KEYWORD_TERMINATED, parse_one_token(std::string("TERMINATED")));
    EXPECT_EQ(KEYWORD_TERMINATED, parse_one_token(std::string("terminated")));
}

TEST(lexical_one_token, keyword_text) {
    EXPECT_EQ(KEYWORD_TEXT, parse_one_token(std::string("TEXT")));
    EXPECT_EQ(KEYWORD_TEXT, parse_one_token(std::string("text")));
}

TEST(lexical_one_token, keyword_than) {
    EXPECT_EQ(KEYWORD_THAN, parse_one_token(std::string("THAN")));
    EXPECT_EQ(KEYWORD_THAN, parse_one_token(std::string("than")));
}

TEST(lexical_one_token, keyword_then) {
    EXPECT_EQ(KEYWORD_THEN, parse_one_token(std::string("THEN")));
    EXPECT_EQ(KEYWORD_THEN, parse_one_token(std::string("then")));
}

TEST(lexical_one_token, keyword_thread_priority) {
    EXPECT_EQ(KEYWORD_THREAD_PRIORITY, parse_one_token(std::string("THREAD_PRIORITY")));
    EXPECT_EQ(KEYWORD_THREAD_PRIORITY, parse_one_token(std::string("thread_priority")));
}

TEST(lexical_one_token, keyword_ties) {
    EXPECT_EQ(KEYWORD_TIES, parse_one_token(std::string("TIES")));
    EXPECT_EQ(KEYWORD_TIES, parse_one_token(std::string("ties")));
}

TEST(lexical_one_token, keyword_time) {
    EXPECT_EQ(KEYWORD_TIME, parse_one_token(std::string("TIME")));
    EXPECT_EQ(KEYWORD_TIME, parse_one_token(std::string("time")));
}

TEST(lexical_one_token, keyword_timestamp) {
    EXPECT_EQ(KEYWORD_TIMESTAMP, parse_one_token(std::string("TIMESTAMP")));
    EXPECT_EQ(KEYWORD_TIMESTAMP, parse_one_token(std::string("timestamp")));
}

TEST(lexical_one_token, keyword_timestamp_add) {
    EXPECT_EQ(KEYWORD_TIMESTAMP_ADD, parse_one_token(std::string("TIMESTAMP_ADD")));
    EXPECT_EQ(KEYWORD_TIMESTAMP_ADD, parse_one_token(std::string("timestamp_add")));
}

TEST(lexical_one_token, keyword_timestamp_diff) {
    EXPECT_EQ(KEYWORD_TIMESTAMP_DIFF, parse_one_token(std::string("TIMESTAMP_DIFF")));
    EXPECT_EQ(KEYWORD_TIMESTAMP_DIFF, parse_one_token(std::string("timestamp_diff")));
}

TEST(lexical_one_token, keyword_tinyblob) {
    EXPECT_EQ(KEYWORD_TINYBLOB, parse_one_token(std::string("TINYBLOB")));
    EXPECT_EQ(KEYWORD_TINYBLOB, parse_one_token(std::string("tinyblob")));
}

TEST(lexical_one_token, keyword_tinyint) {
    EXPECT_EQ(KEYWORD_TINYINT, parse_one_token(std::string("TINYINT")));
    EXPECT_EQ(KEYWORD_TINYINT, parse_one_token(std::string("tinyint")));
}

TEST(lexical_one_token, keyword_tinytext_syn) {
    EXPECT_EQ(KEYWORD_TINYTEXT_SYN, parse_one_token(std::string("TINYTEXT_SYN")));
    EXPECT_EQ(KEYWORD_TINYTEXT_SYN, parse_one_token(std::string("tinytext_syn")));
}

TEST(lexical_one_token, keyword_tls) {
    EXPECT_EQ(KEYWORD_TLS, parse_one_token(std::string("TLS")));
    EXPECT_EQ(KEYWORD_TLS, parse_one_token(std::string("tls")));
}

TEST(lexical_one_token, keyword_to) {
    EXPECT_EQ(KEYWORD_TO, parse_one_token(std::string("TO")));
    EXPECT_EQ(KEYWORD_TO, parse_one_token(std::string("to")));
}

TEST(lexical_one_token, keyword_trailing) {
    EXPECT_EQ(KEYWORD_TRAILING, parse_one_token(std::string("TRAILING")));
    EXPECT_EQ(KEYWORD_TRAILING, parse_one_token(std::string("trailing")));
}

TEST(lexical_one_token, keyword_transaction) {
    EXPECT_EQ(KEYWORD_TRANSACTION, parse_one_token(std::string("TRANSACTION")));
    EXPECT_EQ(KEYWORD_TRANSACTION, parse_one_token(std::string("transaction")));
}

TEST(lexical_one_token, keyword_trigger) {
    EXPECT_EQ(KEYWORD_TRIGGER, parse_one_token(std::string("TRIGGER")));
    EXPECT_EQ(KEYWORD_TRIGGER, parse_one_token(std::string("trigger")));
}

TEST(lexical_one_token, keyword_triggers) {
    EXPECT_EQ(KEYWORD_TRIGGERS, parse_one_token(std::string("TRIGGERS")));
    EXPECT_EQ(KEYWORD_TRIGGERS, parse_one_token(std::string("triggers")));
}

TEST(lexical_one_token, keyword_true) {
    EXPECT_EQ(KEYWORD_TRUE, parse_one_token(std::string("TRUE")));
    EXPECT_EQ(KEYWORD_TRUE, parse_one_token(std::string("true")));
}

TEST(lexical_one_token, keyword_truncate) {
    EXPECT_EQ(KEYWORD_TRUNCATE, parse_one_token(std::string("TRUNCATE")));
    EXPECT_EQ(KEYWORD_TRUNCATE, parse_one_token(std::string("truncate")));
}

TEST(lexical_one_token, keyword_type) {
    EXPECT_EQ(KEYWORD_TYPE, parse_one_token(std::string("TYPE")));
    EXPECT_EQ(KEYWORD_TYPE, parse_one_token(std::string("type")));
}

TEST(lexical_one_token, keyword_types) {
    EXPECT_EQ(KEYWORD_TYPES, parse_one_token(std::string("TYPES")));
    EXPECT_EQ(KEYWORD_TYPES, parse_one_token(std::string("types")));
}

TEST(lexical_one_token, keyword_unbounded) {
    EXPECT_EQ(KEYWORD_UNBOUNDED, parse_one_token(std::string("UNBOUNDED")));
    EXPECT_EQ(KEYWORD_UNBOUNDED, parse_one_token(std::string("unbounded")));
}

TEST(lexical_one_token, keyword_uncommitted) {
    EXPECT_EQ(KEYWORD_UNCOMMITTED, parse_one_token(std::string("UNCOMMITTED")));
    EXPECT_EQ(KEYWORD_UNCOMMITTED, parse_one_token(std::string("uncommitted")));
}

TEST(lexical_one_token, keyword_undefined) {
    EXPECT_EQ(KEYWORD_UNDEFINED, parse_one_token(std::string("UNDEFINED")));
    EXPECT_EQ(KEYWORD_UNDEFINED, parse_one_token(std::string("undefined")));
}

TEST(lexical_one_token, keyword_undo) {
    EXPECT_EQ(KEYWORD_UNDO, parse_one_token(std::string("UNDO")));
    EXPECT_EQ(KEYWORD_UNDO, parse_one_token(std::string("undo")));
}

TEST(lexical_one_token, keyword_undofile) {
    EXPECT_EQ(KEYWORD_UNDOFILE, parse_one_token(std::string("UNDOFILE")));
    EXPECT_EQ(KEYWORD_UNDOFILE, parse_one_token(std::string("undofile")));
}

TEST(lexical_one_token, keyword_undo_buffer_size) {
    EXPECT_EQ(KEYWORD_UNDO_BUFFER_SIZE, parse_one_token(std::string("UNDO_BUFFER_SIZE")));
    EXPECT_EQ(KEYWORD_UNDO_BUFFER_SIZE, parse_one_token(std::string("undo_buffer_size")));
}

TEST(lexical_one_token, keyword_unicode) {
    EXPECT_EQ(KEYWORD_UNICODE, parse_one_token(std::string("UNICODE")));
    EXPECT_EQ(KEYWORD_UNICODE, parse_one_token(std::string("unicode")));
}

TEST(lexical_one_token, keyword_uninstall) {
    EXPECT_EQ(KEYWORD_UNINSTALL, parse_one_token(std::string("UNINSTALL")));
    EXPECT_EQ(KEYWORD_UNINSTALL, parse_one_token(std::string("uninstall")));
}

TEST(lexical_one_token, keyword_union) {
    EXPECT_EQ(KEYWORD_UNION, parse_one_token(std::string("UNION")));
    EXPECT_EQ(KEYWORD_UNION, parse_one_token(std::string("union")));
}

TEST(lexical_one_token, keyword_unique) {
    EXPECT_EQ(KEYWORD_UNIQUE, parse_one_token(std::string("UNIQUE")));
    EXPECT_EQ(KEYWORD_UNIQUE, parse_one_token(std::string("unique")));
}

TEST(lexical_one_token, keyword_unknown) {
    EXPECT_EQ(KEYWORD_UNKNOWN, parse_one_token(std::string("UNKNOWN")));
    EXPECT_EQ(KEYWORD_UNKNOWN, parse_one_token(std::string("unknown")));
}

TEST(lexical_one_token, keyword_unlock) {
    EXPECT_EQ(KEYWORD_UNLOCK, parse_one_token(std::string("UNLOCK")));
    EXPECT_EQ(KEYWORD_UNLOCK, parse_one_token(std::string("unlock")));
}

TEST(lexical_one_token, keyword_unregister) {
    EXPECT_EQ(KEYWORD_UNREGISTER, parse_one_token(std::string("UNREGISTER")));
    EXPECT_EQ(KEYWORD_UNREGISTER, parse_one_token(std::string("unregister")));
}

TEST(lexical_one_token, keyword_unsigned) {
    EXPECT_EQ(KEYWORD_UNSIGNED, parse_one_token(std::string("UNSIGNED")));
    EXPECT_EQ(KEYWORD_UNSIGNED, parse_one_token(std::string("unsigned")));
}

TEST(lexical_one_token, keyword_until) {
    EXPECT_EQ(KEYWORD_UNTIL, parse_one_token(std::string("UNTIL")));
    EXPECT_EQ(KEYWORD_UNTIL, parse_one_token(std::string("until")));
}

TEST(lexical_one_token, keyword_update) {
    EXPECT_EQ(KEYWORD_UPDATE, parse_one_token(std::string("UPDATE")));
    EXPECT_EQ(KEYWORD_UPDATE, parse_one_token(std::string("update")));
}

TEST(lexical_one_token, keyword_upgrade) {
    EXPECT_EQ(KEYWORD_UPGRADE, parse_one_token(std::string("UPGRADE")));
    EXPECT_EQ(KEYWORD_UPGRADE, parse_one_token(std::string("upgrade")));
}

TEST(lexical_one_token, keyword_url) {
    EXPECT_EQ(KEYWORD_URL, parse_one_token(std::string("URL")));
    EXPECT_EQ(KEYWORD_URL, parse_one_token(std::string("url")));
}

TEST(lexical_one_token, keyword_usage) {
    EXPECT_EQ(KEYWORD_USAGE, parse_one_token(std::string("USAGE")));
    EXPECT_EQ(KEYWORD_USAGE, parse_one_token(std::string("usage")));
}

TEST(lexical_one_token, keyword_use) {
    EXPECT_EQ(KEYWORD_USE, parse_one_token(std::string("USE")));
    EXPECT_EQ(KEYWORD_USE, parse_one_token(std::string("use")));
}

TEST(lexical_one_token, keyword_user) {
    EXPECT_EQ(KEYWORD_USER, parse_one_token(std::string("USER")));
    EXPECT_EQ(KEYWORD_USER, parse_one_token(std::string("user")));
}

TEST(lexical_one_token, keyword_user_resources) {
    EXPECT_EQ(KEYWORD_USER_RESOURCES, parse_one_token(std::string("USER_RESOURCES")));
    EXPECT_EQ(KEYWORD_USER_RESOURCES, parse_one_token(std::string("user_resources")));
}

TEST(lexical_one_token, keyword_use_frm) {
    EXPECT_EQ(KEYWORD_USE_FRM, parse_one_token(std::string("USE_FRM")));
    EXPECT_EQ(KEYWORD_USE_FRM, parse_one_token(std::string("use_frm")));
}

TEST(lexical_one_token, keyword_using) {
    EXPECT_EQ(KEYWORD_USING, parse_one_token(std::string("USING")));
    EXPECT_EQ(KEYWORD_USING, parse_one_token(std::string("using")));
}

TEST(lexical_one_token, keyword_utc_date) {
    EXPECT_EQ(KEYWORD_UTC_DATE, parse_one_token(std::string("UTC_DATE")));
    EXPECT_EQ(KEYWORD_UTC_DATE, parse_one_token(std::string("utc_date")));
}

TEST(lexical_one_token, keyword_utc_time) {
    EXPECT_EQ(KEYWORD_UTC_TIME, parse_one_token(std::string("UTC_TIME")));
    EXPECT_EQ(KEYWORD_UTC_TIME, parse_one_token(std::string("utc_time")));
}

TEST(lexical_one_token, keyword_utc_timestamp) {
    EXPECT_EQ(KEYWORD_UTC_TIMESTAMP, parse_one_token(std::string("UTC_TIMESTAMP")));
    EXPECT_EQ(KEYWORD_UTC_TIMESTAMP, parse_one_token(std::string("utc_timestamp")));
}

TEST(lexical_one_token, keyword_validation) {
    EXPECT_EQ(KEYWORD_VALIDATION, parse_one_token(std::string("VALIDATION")));
    EXPECT_EQ(KEYWORD_VALIDATION, parse_one_token(std::string("validation")));
}

TEST(lexical_one_token, keyword_value) {
    EXPECT_EQ(KEYWORD_VALUE, parse_one_token(std::string("VALUE")));
    EXPECT_EQ(KEYWORD_VALUE, parse_one_token(std::string("value")));
}

TEST(lexical_one_token, keyword_values) {
    EXPECT_EQ(KEYWORD_VALUES, parse_one_token(std::string("VALUES")));
    EXPECT_EQ(KEYWORD_VALUES, parse_one_token(std::string("values")));
}

TEST(lexical_one_token, keyword_varbinary) {
    EXPECT_EQ(KEYWORD_VARBINARY, parse_one_token(std::string("VARBINARY")));
    EXPECT_EQ(KEYWORD_VARBINARY, parse_one_token(std::string("varbinary")));
}

TEST(lexical_one_token, keyword_varchar) {
    EXPECT_EQ(KEYWORD_VARCHAR, parse_one_token(std::string("VARCHAR")));
    EXPECT_EQ(KEYWORD_VARCHAR, parse_one_token(std::string("varchar")));
}

TEST(lexical_one_token, keyword_varcharacter) {
    EXPECT_EQ(KEYWORD_VARCHARACTER, parse_one_token(std::string("VARCHARACTER")));
    EXPECT_EQ(KEYWORD_VARCHARACTER, parse_one_token(std::string("varcharacter")));
}

TEST(lexical_one_token, keyword_variables) {
    EXPECT_EQ(KEYWORD_VARIABLES, parse_one_token(std::string("VARIABLES")));
    EXPECT_EQ(KEYWORD_VARIABLES, parse_one_token(std::string("variables")));
}

TEST(lexical_one_token, keyword_varying) {
    EXPECT_EQ(KEYWORD_VARYING, parse_one_token(std::string("VARYING")));
    EXPECT_EQ(KEYWORD_VARYING, parse_one_token(std::string("varying")));
}

TEST(lexical_one_token, keyword_vcpu) {
    EXPECT_EQ(KEYWORD_VCPU, parse_one_token(std::string("VCPU")));
    EXPECT_EQ(KEYWORD_VCPU, parse_one_token(std::string("vcpu")));
}

TEST(lexical_one_token, keyword_view) {
    EXPECT_EQ(KEYWORD_VIEW, parse_one_token(std::string("VIEW")));
    EXPECT_EQ(KEYWORD_VIEW, parse_one_token(std::string("view")));
}

TEST(lexical_one_token, keyword_virtual) {
    EXPECT_EQ(KEYWORD_VIRTUAL, parse_one_token(std::string("VIRTUAL")));
    EXPECT_EQ(KEYWORD_VIRTUAL, parse_one_token(std::string("virtual")));
}

TEST(lexical_one_token, keyword_visible) {
    EXPECT_EQ(KEYWORD_VISIBLE, parse_one_token(std::string("VISIBLE")));
    EXPECT_EQ(KEYWORD_VISIBLE, parse_one_token(std::string("visible")));
}

TEST(lexical_one_token, keyword_wait) {
    EXPECT_EQ(KEYWORD_WAIT, parse_one_token(std::string("WAIT")));
    EXPECT_EQ(KEYWORD_WAIT, parse_one_token(std::string("wait")));
}

TEST(lexical_one_token, keyword_warnings) {
    EXPECT_EQ(KEYWORD_WARNINGS, parse_one_token(std::string("WARNINGS")));
    EXPECT_EQ(KEYWORD_WARNINGS, parse_one_token(std::string("warnings")));
}

TEST(lexical_one_token, keyword_week) {
    EXPECT_EQ(KEYWORD_WEEK, parse_one_token(std::string("WEEK")));
    EXPECT_EQ(KEYWORD_WEEK, parse_one_token(std::string("week")));
}

TEST(lexical_one_token, keyword_weight_string) {
    EXPECT_EQ(KEYWORD_WEIGHT_STRING, parse_one_token(std::string("WEIGHT_STRING")));
    EXPECT_EQ(KEYWORD_WEIGHT_STRING, parse_one_token(std::string("weight_string")));
}

TEST(lexical_one_token, keyword_when) {
    EXPECT_EQ(KEYWORD_WHEN, parse_one_token(std::string("WHEN")));
    EXPECT_EQ(KEYWORD_WHEN, parse_one_token(std::string("when")));
}

TEST(lexical_one_token, keyword_where) {
    EXPECT_EQ(KEYWORD_WHERE, parse_one_token(std::string("WHERE")));
    EXPECT_EQ(KEYWORD_WHERE, parse_one_token(std::string("where")));
}

TEST(lexical_one_token, keyword_while) {
    EXPECT_EQ(KEYWORD_WHILE, parse_one_token(std::string("WHILE")));
    EXPECT_EQ(KEYWORD_WHILE, parse_one_token(std::string("while")));
}

TEST(lexical_one_token, keyword_window) {
    EXPECT_EQ(KEYWORD_WINDOW, parse_one_token(std::string("WINDOW")));
    EXPECT_EQ(KEYWORD_WINDOW, parse_one_token(std::string("window")));
}

TEST(lexical_one_token, keyword_with) {
    EXPECT_EQ(KEYWORD_WITH, parse_one_token(std::string("WITH")));
    EXPECT_EQ(KEYWORD_WITH, parse_one_token(std::string("with")));
}

TEST(lexical_one_token, keyword_without) {
    EXPECT_EQ(KEYWORD_WITHOUT, parse_one_token(std::string("WITHOUT")));
    EXPECT_EQ(KEYWORD_WITHOUT, parse_one_token(std::string("without")));
}

TEST(lexical_one_token, keyword_work) {
    EXPECT_EQ(KEYWORD_WORK, parse_one_token(std::string("WORK")));
    EXPECT_EQ(KEYWORD_WORK, parse_one_token(std::string("work")));
}

TEST(lexical_one_token, keyword_wrapper) {
    EXPECT_EQ(KEYWORD_WRAPPER, parse_one_token(std::string("WRAPPER")));
    EXPECT_EQ(KEYWORD_WRAPPER, parse_one_token(std::string("wrapper")));
}

TEST(lexical_one_token, keyword_write) {
    EXPECT_EQ(KEYWORD_WRITE, parse_one_token(std::string("WRITE")));
    EXPECT_EQ(KEYWORD_WRITE, parse_one_token(std::string("write")));
}

TEST(lexical_one_token, keyword_x509) {
    EXPECT_EQ(KEYWORD_X509, parse_one_token(std::string("X509")));
    EXPECT_EQ(KEYWORD_X509, parse_one_token(std::string("x509")));
}

TEST(lexical_one_token, keyword_xa) {
    EXPECT_EQ(KEYWORD_XA, parse_one_token(std::string("XA")));
    EXPECT_EQ(KEYWORD_XA, parse_one_token(std::string("xa")));
}

TEST(lexical_one_token, keyword_xid) {
    EXPECT_EQ(KEYWORD_XID, parse_one_token(std::string("XID")));
    EXPECT_EQ(KEYWORD_XID, parse_one_token(std::string("xid")));
}

TEST(lexical_one_token, keyword_xml) {
    EXPECT_EQ(KEYWORD_XML, parse_one_token(std::string("XML")));
    EXPECT_EQ(KEYWORD_XML, parse_one_token(std::string("xml")));
}

TEST(lexical_one_token, keyword_xor) {
    EXPECT_EQ(KEYWORD_XOR, parse_one_token(std::string("XOR")));
    EXPECT_EQ(KEYWORD_XOR, parse_one_token(std::string("xor")));
}

TEST(lexical_one_token, keyword_year) {
    EXPECT_EQ(KEYWORD_YEAR, parse_one_token(std::string("YEAR")));
    EXPECT_EQ(KEYWORD_YEAR, parse_one_token(std::string("year")));
}

TEST(lexical_one_token, keyword_year_month) {
    EXPECT_EQ(KEYWORD_YEAR_MONTH, parse_one_token(std::string("YEAR_MONTH")));
    EXPECT_EQ(KEYWORD_YEAR_MONTH, parse_one_token(std::string("year_month")));
}

TEST(lexical_one_token, keyword_zerofill) {
    EXPECT_EQ(KEYWORD_ZEROFILL, parse_one_token(std::string("ZEROFILL")));
    EXPECT_EQ(KEYWORD_ZEROFILL, parse_one_token(std::string("zerofill")));
}

TEST(lexical_one_token, keyword_zone) {
    EXPECT_EQ(KEYWORD_ZONE, parse_one_token(std::string("ZONE")));
    EXPECT_EQ(KEYWORD_ZONE, parse_one_token(std::string("zone")));
}

TEST(lexical_one_token, keyword_with_rollup) {
    EXPECT_EQ(KEYWORD_WITH_ROLLUP, parse_one_token(std::string("WITH_ROLLUP")));
    EXPECT_EQ(KEYWORD_WITH_ROLLUP, parse_one_token(std::string("with_rollup")));
}
