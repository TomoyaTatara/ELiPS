#ifndef TEST_H
#define TEST_H

#include <ELiPS/time.h>
#include <ELiPS/bls12_test.h>
#include <ELiPS/lazy_test.h>
#include <ELiPS/Jacobian_test.h>

extern int test_Field(int fp2,int fp6,int fp12,int sqr);
extern int test_EFp(int ecd,int eca,int scm);
extern int test_EFp2(int ecd,int eca,int scm);
extern int test_EFp12(int ecd,int eca,int scm);
extern void test_Frobenius_map();
extern void test_skew_frobenius_map();
extern void test_twist();
extern int test_mod(int mulmod,int mod);
extern void test_All();
extern int Fast_test_BLS12(int g1, int g2,int g3,int pairing);
#endif
