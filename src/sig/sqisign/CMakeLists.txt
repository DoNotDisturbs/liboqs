# SPDX-License-Identifier: MIT
#
# Minimal SQIsign v3 integration for liboqs.
#
# Only files needed by the SQIsign submission package's own liboqs metadata
# are vendored under vendor/. No upstream tests, apps, KATs, scripts,
# standalone CMake files, ARM backends, or integration metadata are included.
#
# Exposed implementations:
#   *_ref        portable/reference implementation
#   *_broadwell  x86-64 Broadwell implementation (AVX2 + BMI2 + ADX)

set(_SQISIGN_OBJS "")
set(SQISIGN_VENDOR ${CMAKE_CURRENT_LIST_DIR}/vendor)

set(SQISIGN_COMMON_SOURCES
    ${SQISIGN_VENDOR}/src/sqisign.c
    ${SQISIGN_VENDOR}/src/common/generic/mem.c
    ${SQISIGN_VENDOR}/src/ec/ref/lvlx/basis.c
    ${SQISIGN_VENDOR}/src/ec/ref/lvlx/biextension.c
    ${SQISIGN_VENDOR}/src/ec/ref/lvlx/ec.c
    ${SQISIGN_VENDOR}/src/ec/ref/lvlx/isog.c
    ${SQISIGN_VENDOR}/src/ec/ref/lvlx/normalize.c
    ${SQISIGN_VENDOR}/src/hd/ref/lvlx/hd.c
    ${SQISIGN_VENDOR}/src/hd/ref/lvlx/theta_isogenies.c
    ${SQISIGN_VENDOR}/src/hd/ref/lvlx/theta_structure.c
    ${SQISIGN_VENDOR}/src/hd/ref/lvlx/gluing.c
    ${SQISIGN_VENDOR}/src/hd/ref/lvlx/splitting.c
    ${SQISIGN_VENDOR}/src/id2iso/ref/lvlx/dim2id2iso.c
    ${SQISIGN_VENDOR}/src/id2iso/ref/lvlx/id2iso.c
    ${SQISIGN_VENDOR}/src/mp/ref/lvlx/mp.c
    ${SQISIGN_VENDOR}/src/mp/ref/lvlx/modqx.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/algebra.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/dim2.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/dim4.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/finit.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/integers.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lattice.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/printer.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lll_applications.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lll/lll_lg2.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lll/lll_dim4.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lll/lehmer_xgcd.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lll/gaussian_xgcd.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/stdorder.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/qlapoty.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/ideal.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/protocol.c
    ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/test/random_input_generation.c
    ${SQISIGN_VENDOR}/src/signature/ref/lvlx/encode_secret.c
    ${SQISIGN_VENDOR}/src/signature/ref/lvlx/keygen.c
    ${SQISIGN_VENDOR}/src/signature/ref/lvlx/sign.c
    ${SQISIGN_VENDOR}/src/verification/ref/lvlx/common.c
    ${SQISIGN_VENDOR}/src/verification/ref/lvlx/encode_public.c
    ${SQISIGN_VENDOR}/src/verification/ref/lvlx/verify.c
    ${SQISIGN_VENDOR}/src/common/generic/prng.c
)

set(SQISIGN_COMMON_REF_SOURCES
    ${SQISIGN_VENDOR}/src/gf/ref/lvlx/fp.c
    ${SQISIGN_VENDOR}/src/gf/ref/lvlx/fp2.c
)

set(SQISIGN_COMMON_BROADWELL_SOURCES
    ${SQISIGN_VENDOR}/src/gf/sat64/lvlx/fp2.c
    ${SQISIGN_VENDOR}/src/gf/sat64/lvlx/fp_generic.c
)

set(SQISIGN_P324_3_REF_SOURCES
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/e0_basis.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/ec_params.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/endomorphism_action.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/quaternion_data.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/torsion_constants.c
    ${SQISIGN_VENDOR}/src/gf/ref/p324_3/fp_p324_3.c
    ${SQISIGN_VENDOR}/src/nistapi/p324_3/api.c
)

set(SQISIGN_P324_3_BROADWELL_SOURCES
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/e0_basis.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/ec_params.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/endomorphism_action.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/quaternion_data.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p324_3/torsion_constants.c
    ${SQISIGN_VENDOR}/src/gf/sat64/p324_3/fp.c
    ${SQISIGN_VENDOR}/src/gf/broadwell/p324_3/fp_asm.S
    ${SQISIGN_VENDOR}/src/nistapi/p324_3/api.c
)

set(SQISIGN_P500_27_REF_SOURCES
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/e0_basis.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/ec_params.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/endomorphism_action.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/quaternion_data.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/torsion_constants.c
    ${SQISIGN_VENDOR}/src/gf/ref/p500_27/fp_p500_27.c
    ${SQISIGN_VENDOR}/src/nistapi/p500_27/api.c
)

set(SQISIGN_P500_27_BROADWELL_SOURCES
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/e0_basis.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/ec_params.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/endomorphism_action.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/quaternion_data.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p500_27/torsion_constants.c
    ${SQISIGN_VENDOR}/src/gf/sat64/p500_27/fp.c
    ${SQISIGN_VENDOR}/src/gf/broadwell/p500_27/fp_asm.S
    ${SQISIGN_VENDOR}/src/nistapi/p500_27/api.c
)

set(SQISIGN_P664_17_REF_SOURCES
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/e0_basis.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/ec_params.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/endomorphism_action.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/quaternion_data.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/torsion_constants.c
    ${SQISIGN_VENDOR}/src/gf/ref/p664_17/fp_p664_17.c
    ${SQISIGN_VENDOR}/src/nistapi/p664_17/api.c
)

set(SQISIGN_P664_17_BROADWELL_SOURCES
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/e0_basis.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/ec_params.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/endomorphism_action.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/quaternion_data.c
    ${SQISIGN_VENDOR}/src/precomp/ref/p664_17/torsion_constants.c
    ${SQISIGN_VENDOR}/src/gf/sat64/p664_17/fp.c
    ${SQISIGN_VENDOR}/src/gf/broadwell/p664_17/fp_asm.S
    ${SQISIGN_VENDOR}/src/nistapi/p664_17/api.c
)


function(sqisign_add_variant NAME PARAM BACKEND WRAPPER SELECTOR)
    string(TOUPPER ${PARAM} PARAM_UPPER)

    if(BACKEND STREQUAL "REF")
        set(BACKEND_SOURCES
            ${SQISIGN_COMMON_REF_SOURCES}
            ${SQISIGN_${PARAM_UPPER}_REF_SOURCES}
        )
        set(BACKEND_INCLUDE_DIRS
            ${SQISIGN_VENDOR}/src/gf/ref/include
        )
        set(BUILD_DEFS
            SQISIGN_BUILD_TYPE_REF=ON
            SQISIGN_GF_IMPL_REF=ON
        )
    elseif(BACKEND STREQUAL "BROADWELL")
        if(NOT CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
            message(FATAL_ERROR "${NAME} requires x86-64")
        endif()

        set(BACKEND_SOURCES
            ${SQISIGN_COMMON_BROADWELL_SOURCES}
            ${SQISIGN_${PARAM_UPPER}_BROADWELL_SOURCES}
        )

        # IMPORTANT: the parameter-specific SAT64 headers must come before any
        # generic field headers because broadwell fp.c includes <fp.h>.
        set(BACKEND_INCLUDE_DIRS
            ${SQISIGN_VENDOR}/src/gf/sat64/${PARAM}/include
            ${SQISIGN_VENDOR}/src/gf/sat64/include
        )

        set(BUILD_DEFS
            SQISIGN_BUILD_TYPE_BROADWELL=ON
            SQISIGN_GF_IMPL_SAT64=ON
            RADIX_64=ON
        )
    else()
        message(FATAL_ERROR "Unknown SQIsign backend '${BACKEND}'")
    endif()

    add_library(${NAME}_core OBJECT
        ${SQISIGN_COMMON_SOURCES}
        ${BACKEND_SOURCES}
    )

    # The liboqs shims are deliberately first so <rng.h>, <fips202.h>, and
    # <ct_testing.h> resolve to the liboqs adapters rather than standalone code.
    target_include_directories(${NAME}_core PRIVATE
        ${SQISIGN_VENDOR}/integration/liboqs
        ${SQISIGN_VENDOR}/include
        ${SQISIGN_VENDOR}/src/common/generic/include

        ${SQISIGN_VENDOR}/src/mp/ref/include
        ${SQISIGN_VENDOR}/src/ec/ref/include
        ${SQISIGN_VENDOR}/src/hd/ref/include
        ${SQISIGN_VENDOR}/src/hd/ref/lvlx
        ${SQISIGN_VENDOR}/src/id2iso/ref/include
        ${SQISIGN_VENDOR}/src/quaternion/ref/include
        ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx
        ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/internal_quaternion_headers
        ${SQISIGN_VENDOR}/src/quaternion/ref/lvlx/lll
        ${SQISIGN_VENDOR}/src/signature/ref/include
        ${SQISIGN_VENDOR}/src/verification/ref/include

        ${SQISIGN_VENDOR}/src/precomp/ref/${PARAM}/include
        ${SQISIGN_VENDOR}/src/nistapi/${PARAM}

        ${BACKEND_INCLUDE_DIRS}
    )

    target_compile_definitions(${NAME}_core PRIVATE
        SQISIGN_VARIANT=${PARAM}
        SQISIGN_NAMESPACE_GENERIC_AS_VARIANT=1
        ENABLE_SIGN=ON
        ${BUILD_DEFS}
    )

    target_compile_options(${NAME}_core PRIVATE
        -Wno-missing-braces
        -fno-strict-aliasing
    )

    if(BACKEND STREQUAL "BROADWELL")
        target_compile_options(${NAME}_core PRIVATE
            -mavx2
            -mbmi2
            -madx
        )
    endif()

    add_library(${NAME}_glue OBJECT ${WRAPPER})
    target_include_directories(${NAME}_glue PRIVATE ${CMAKE_CURRENT_LIST_DIR})
    target_compile_definitions(${NAME}_glue PRIVATE ${SELECTOR})

    set(_SQISIGN_OBJS ${_SQISIGN_OBJS}
        $<TARGET_OBJECTS:${NAME}_core>
        $<TARGET_OBJECTS:${NAME}_glue>
        PARENT_SCOPE
    )
endfunction()

if(OQS_ENABLE_SIG_sqisign_p324_3_ref)
    sqisign_add_variant(
        sqisign_p324_3_ref
        p324_3
        REF
        sig_sqisign_p324_3.c
        OQS_SQISIGN_P324_3_REF
    )
endif()

if(OQS_ENABLE_SIG_sqisign_p324_3_broadwell)
    sqisign_add_variant(
        sqisign_p324_3_broadwell
        p324_3
        BROADWELL
        sig_sqisign_p324_3.c
        OQS_SQISIGN_P324_3_BROADWELL
    )
endif()

if(OQS_ENABLE_SIG_sqisign_p500_27_ref)
    sqisign_add_variant(
        sqisign_p500_27_ref
        p500_27
        REF
        sig_sqisign_p500_27.c
        OQS_SQISIGN_P500_27_REF
    )
endif()

if(OQS_ENABLE_SIG_sqisign_p500_27_broadwell)
    sqisign_add_variant(
        sqisign_p500_27_broadwell
        p500_27
        BROADWELL
        sig_sqisign_p500_27.c
        OQS_SQISIGN_P500_27_BROADWELL
    )
endif()

if(OQS_ENABLE_SIG_sqisign_p664_17_ref)
    sqisign_add_variant(
        sqisign_p664_17_ref
        p664_17
        REF
        sig_sqisign_p664_17.c
        OQS_SQISIGN_P664_17_REF
    )
endif()

if(OQS_ENABLE_SIG_sqisign_p664_17_broadwell)
    sqisign_add_variant(
        sqisign_p664_17_broadwell
        p664_17
        BROADWELL
        sig_sqisign_p664_17.c
        OQS_SQISIGN_P664_17_BROADWELL
    )
endif()

set(SQISIGN_OBJS ${_SQISIGN_OBJS} PARENT_SCOPE)
