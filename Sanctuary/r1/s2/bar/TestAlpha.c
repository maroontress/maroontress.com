#define bar_Alpha_IMPORT
#define bar_Beta_IMPORT
#define bar_Gamma_IMPORT

#include <assert.h>
#include <bar/Alpha.h>
#include <stub/bar/Beta.h>
#include <stub/bar/Gamma.h>

static int betaIsInitialized = 0;
static int gammaIsInitialized = 0;

static void
initializeBeta(struct Beta *b)
{
    betaIsInitialized = 1;
}

static void
initializeGamma(struct Gamma *g)
{
    gammaIsInitialized = 1;
}

void
TestAlpha_testInitialize(void)
{
    struct Alpha a;

    /* Alpha_initialize()�����Ѥ���ؿ��򥪡��Х饤�� */
    stub_bar_Beta_initialize = initializeBeta;
    stub_bar_Gamma_initialize = initializeGamma;

    /* Alpha_initialize()��¹� */
    Alpha_initialize(&a);
 
    /* ��̤θ��� */
    assert(betaIsInitialized && gammaIsInitialized);
    assert(a.flags == 0);
    ��
}
