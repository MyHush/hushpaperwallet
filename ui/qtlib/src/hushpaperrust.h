#ifndef _HUSH_PAPER_RUST_H
#define _HUSH_PAPER_RUST_H

#ifdef __cplusplus
extern "C"{
#endif

extern char * rust_generate_wallet(bool is_testnet, unsigned int zcount, unsigned int tcount, const char* entropy);
extern void   rust_free_string    (char* s);
extern bool   rust_save_as_pdf    (bool is_testnet, const char* json, const char* filename);

#ifdef __cplusplus
}
#endif
#endif