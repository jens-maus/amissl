#define declare_dh_bn(x) \
    extern const BIGNUM _bignum_dh##x##_p;              \
    extern const BIGNUM _bignum_dh##x##_g;              \
    extern const BIGNUM _bignum_dh##x##_q;

declare_dh_bn(1024_160)
declare_dh_bn(2048_224)
declare_dh_bn(2048_256)
