/* Generated code for Python module 'numpy.lib.mixins'
 * created by Nuitka version 0.7.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy$lib$mixins" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$mixins;
PyDictObject *moduledict_numpy$lib$mixins;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[169];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[169];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("numpy.lib.mixins"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 169; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$mixins(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 169; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ea9e1e50ab7bd6df65367ca389ca3b73;
static PyCodeObject *codeobj_fa2f111afbdb80cdfc682342f3d78d62;
static PyCodeObject *codeobj_026cdd14df640567d0952091191e2dd6;
static PyCodeObject *codeobj_0ac51cd8fe0e120972b0928fb68918c5;
static PyCodeObject *codeobj_0d513be7f5aa5349bfc4b008bded4004;
static PyCodeObject *codeobj_b4b4ba611d7947576fe792cc95082d56;
static PyCodeObject *codeobj_0201c99f99c61179323c164ce8c15a6e;
static PyCodeObject *codeobj_db305c108ce66284b74548a51434706f;
static PyCodeObject *codeobj_b3f0ed9c88df1725e19d43c8cdaa65e0;
static PyCodeObject *codeobj_74a05f2328efcb4739153bc970c4fabb;
static PyCodeObject *codeobj_ddcb3a87badc7a52da2a9871c57a4fdc;
static PyCodeObject *codeobj_13070888c8fe83f253744e848f68c2ee;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[159]); CHECK_OBJECT(module_filename_obj);
    codeobj_ea9e1e50ab7bd6df65367ca389ca3b73 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[160], NULL, NULL, 0, 0, 0);
    codeobj_fa2f111afbdb80cdfc682342f3d78d62 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_NOFREE, mod_consts[46], mod_consts[161], NULL, 0, 0, 0);
    codeobj_026cdd14df640567d0952091191e2dd6 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[162], NULL, 2, 0, 0);
    codeobj_0ac51cd8fe0e120972b0928fb68918c5 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[163], NULL, 1, 0, 0);
    codeobj_0d513be7f5aa5349bfc4b008bded4004 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[162], NULL, 2, 0, 0);
    codeobj_b4b4ba611d7947576fe792cc95082d56 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[164], NULL, 2, 0, 0);
    codeobj_0201c99f99c61179323c164ce8c15a6e = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[162], NULL, 2, 0, 0);
    codeobj_db305c108ce66284b74548a51434706f = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[162], NULL, 2, 0, 0);
    codeobj_b3f0ed9c88df1725e19d43c8cdaa65e0 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[165], mod_consts[166], 2, 0, 0);
    codeobj_74a05f2328efcb4739153bc970c4fabb = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[165], mod_consts[166], 2, 0, 0);
    codeobj_ddcb3a87badc7a52da2a9871c57a4fdc = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[165], mod_consts[166], 2, 0, 0);
    codeobj_13070888c8fe83f253744e848f68c2ee = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[167], mod_consts[166], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc();


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method();


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method();


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method();


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods();


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method();


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_numpy$lib$mixins$$$function__1__disables_array_ufunc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_0ac51cd8fe0e120972b0928fb68918c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0ac51cd8fe0e120972b0928fb68918c5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0ac51cd8fe0e120972b0928fb68918c5)) {
        Py_XDECREF(cache_frame_0ac51cd8fe0e120972b0928fb68918c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ac51cd8fe0e120972b0928fb68918c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ac51cd8fe0e120972b0928fb68918c5 = MAKE_FUNCTION_FRAME(codeobj_0ac51cd8fe0e120972b0928fb68918c5, module_numpy$lib$mixins, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0ac51cd8fe0e120972b0928fb68918c5->m_type_description == NULL);
    frame_0ac51cd8fe0e120972b0928fb68918c5 = cache_frame_0ac51cd8fe0e120972b0928fb68918c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ac51cd8fe0e120972b0928fb68918c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ac51cd8fe0e120972b0928fb68918c5) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0ac51cd8fe0e120972b0928fb68918c5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0ac51cd8fe0e120972b0928fb68918c5, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 14;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ac51cd8fe0e120972b0928fb68918c5->m_frame) frame_0ac51cd8fe0e120972b0928fb68918c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ac51cd8fe0e120972b0928fb68918c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ac51cd8fe0e120972b0928fb68918c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ac51cd8fe0e120972b0928fb68918c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ac51cd8fe0e120972b0928fb68918c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ac51cd8fe0e120972b0928fb68918c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ac51cd8fe0e120972b0928fb68918c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ac51cd8fe0e120972b0928fb68918c5,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_0ac51cd8fe0e120972b0928fb68918c5 == cache_frame_0ac51cd8fe0e120972b0928fb68918c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0ac51cd8fe0e120972b0928fb68918c5);
        cache_frame_0ac51cd8fe0e120972b0928fb68918c5 = NULL;
    }

    assertFrameObject(frame_0ac51cd8fe0e120972b0928fb68918c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__2__binary_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_026cdd14df640567d0952091191e2dd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_026cdd14df640567d0952091191e2dd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_026cdd14df640567d0952091191e2dd6)) {
        Py_XDECREF(cache_frame_026cdd14df640567d0952091191e2dd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_026cdd14df640567d0952091191e2dd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_026cdd14df640567d0952091191e2dd6 = MAKE_FUNCTION_FRAME(codeobj_026cdd14df640567d0952091191e2dd6, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_026cdd14df640567d0952091191e2dd6->m_type_description == NULL);
    frame_026cdd14df640567d0952091191e2dd6 = cache_frame_026cdd14df640567d0952091191e2dd6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_026cdd14df640567d0952091191e2dd6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_026cdd14df640567d0952091191e2dd6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = mod_consts[4];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_026cdd14df640567d0952091191e2dd6->m_frame.f_lineno = 26;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_026cdd14df640567d0952091191e2dd6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_026cdd14df640567d0952091191e2dd6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_026cdd14df640567d0952091191e2dd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_026cdd14df640567d0952091191e2dd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_026cdd14df640567d0952091191e2dd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_026cdd14df640567d0952091191e2dd6,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_026cdd14df640567d0952091191e2dd6 == cache_frame_026cdd14df640567d0952091191e2dd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_026cdd14df640567d0952091191e2dd6);
        cache_frame_026cdd14df640567d0952091191e2dd6 = NULL;
    }

    assertFrameObject(frame_026cdd14df640567d0952091191e2dd6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_b3f0ed9c88df1725e19d43c8cdaa65e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0)) {
        Py_XDECREF(cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0 = MAKE_FUNCTION_FRAME(codeobj_b3f0ed9c88df1725e19d43c8cdaa65e0, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0->m_type_description == NULL);
    frame_b3f0ed9c88df1725e19d43c8cdaa65e0 = cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b3f0ed9c88df1725e19d43c8cdaa65e0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b3f0ed9c88df1725e19d43c8cdaa65e0) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_b3f0ed9c88df1725e19d43c8cdaa65e0->m_frame.f_lineno = 23;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_b3f0ed9c88df1725e19d43c8cdaa65e0->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3f0ed9c88df1725e19d43c8cdaa65e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3f0ed9c88df1725e19d43c8cdaa65e0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3f0ed9c88df1725e19d43c8cdaa65e0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3f0ed9c88df1725e19d43c8cdaa65e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3f0ed9c88df1725e19d43c8cdaa65e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3f0ed9c88df1725e19d43c8cdaa65e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3f0ed9c88df1725e19d43c8cdaa65e0,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b3f0ed9c88df1725e19d43c8cdaa65e0 == cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0);
        cache_frame_b3f0ed9c88df1725e19d43c8cdaa65e0 = NULL;
    }

    assertFrameObject(frame_b3f0ed9c88df1725e19d43c8cdaa65e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__3__reflected_binary_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_0201c99f99c61179323c164ce8c15a6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0201c99f99c61179323c164ce8c15a6e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_0201c99f99c61179323c164ce8c15a6e)) {
        Py_XDECREF(cache_frame_0201c99f99c61179323c164ce8c15a6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0201c99f99c61179323c164ce8c15a6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0201c99f99c61179323c164ce8c15a6e = MAKE_FUNCTION_FRAME(codeobj_0201c99f99c61179323c164ce8c15a6e, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0201c99f99c61179323c164ce8c15a6e->m_type_description == NULL);
    frame_0201c99f99c61179323c164ce8c15a6e = cache_frame_0201c99f99c61179323c164ce8c15a6e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0201c99f99c61179323c164ce8c15a6e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0201c99f99c61179323c164ce8c15a6e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = mod_consts[11];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_0201c99f99c61179323c164ce8c15a6e->m_frame.f_lineno = 36;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0201c99f99c61179323c164ce8c15a6e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0201c99f99c61179323c164ce8c15a6e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0201c99f99c61179323c164ce8c15a6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0201c99f99c61179323c164ce8c15a6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0201c99f99c61179323c164ce8c15a6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0201c99f99c61179323c164ce8c15a6e,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_0201c99f99c61179323c164ce8c15a6e == cache_frame_0201c99f99c61179323c164ce8c15a6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0201c99f99c61179323c164ce8c15a6e);
        cache_frame_0201c99f99c61179323c164ce8c15a6e = NULL;
    }

    assertFrameObject(frame_0201c99f99c61179323c164ce8c15a6e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_74a05f2328efcb4739153bc970c4fabb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_74a05f2328efcb4739153bc970c4fabb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74a05f2328efcb4739153bc970c4fabb)) {
        Py_XDECREF(cache_frame_74a05f2328efcb4739153bc970c4fabb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74a05f2328efcb4739153bc970c4fabb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74a05f2328efcb4739153bc970c4fabb = MAKE_FUNCTION_FRAME(codeobj_74a05f2328efcb4739153bc970c4fabb, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_74a05f2328efcb4739153bc970c4fabb->m_type_description == NULL);
    frame_74a05f2328efcb4739153bc970c4fabb = cache_frame_74a05f2328efcb4739153bc970c4fabb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_74a05f2328efcb4739153bc970c4fabb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_74a05f2328efcb4739153bc970c4fabb) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_74a05f2328efcb4739153bc970c4fabb->m_frame.f_lineno = 33;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 33;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 35;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        frame_74a05f2328efcb4739153bc970c4fabb->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74a05f2328efcb4739153bc970c4fabb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_74a05f2328efcb4739153bc970c4fabb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74a05f2328efcb4739153bc970c4fabb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74a05f2328efcb4739153bc970c4fabb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74a05f2328efcb4739153bc970c4fabb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74a05f2328efcb4739153bc970c4fabb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74a05f2328efcb4739153bc970c4fabb,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_74a05f2328efcb4739153bc970c4fabb == cache_frame_74a05f2328efcb4739153bc970c4fabb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_74a05f2328efcb4739153bc970c4fabb);
        cache_frame_74a05f2328efcb4739153bc970c4fabb = NULL;
    }

    assertFrameObject(frame_74a05f2328efcb4739153bc970c4fabb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__4__inplace_binary_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_0d513be7f5aa5349bfc4b008bded4004;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0d513be7f5aa5349bfc4b008bded4004 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_0d513be7f5aa5349bfc4b008bded4004)) {
        Py_XDECREF(cache_frame_0d513be7f5aa5349bfc4b008bded4004);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d513be7f5aa5349bfc4b008bded4004 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d513be7f5aa5349bfc4b008bded4004 = MAKE_FUNCTION_FRAME(codeobj_0d513be7f5aa5349bfc4b008bded4004, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0d513be7f5aa5349bfc4b008bded4004->m_type_description == NULL);
    frame_0d513be7f5aa5349bfc4b008bded4004 = cache_frame_0d513be7f5aa5349bfc4b008bded4004;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0d513be7f5aa5349bfc4b008bded4004);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0d513be7f5aa5349bfc4b008bded4004) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = mod_consts[14];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_0d513be7f5aa5349bfc4b008bded4004->m_frame.f_lineno = 44;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d513be7f5aa5349bfc4b008bded4004);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d513be7f5aa5349bfc4b008bded4004);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d513be7f5aa5349bfc4b008bded4004, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d513be7f5aa5349bfc4b008bded4004->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d513be7f5aa5349bfc4b008bded4004, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d513be7f5aa5349bfc4b008bded4004,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_0d513be7f5aa5349bfc4b008bded4004 == cache_frame_0d513be7f5aa5349bfc4b008bded4004) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0d513be7f5aa5349bfc4b008bded4004);
        cache_frame_0d513be7f5aa5349bfc4b008bded4004 = NULL;
    }

    assertFrameObject(frame_0d513be7f5aa5349bfc4b008bded4004);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_ddcb3a87badc7a52da2a9871c57a4fdc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc)) {
        Py_XDECREF(cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc = MAKE_FUNCTION_FRAME(codeobj_ddcb3a87badc7a52da2a9871c57a4fdc, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc->m_type_description == NULL);
    frame_ddcb3a87badc7a52da2a9871c57a4fdc = cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ddcb3a87badc7a52da2a9871c57a4fdc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ddcb3a87badc7a52da2a9871c57a4fdc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_kw_call_arg_value_1_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_kw_call_dict_value_0_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
        frame_ddcb3a87badc7a52da2a9871c57a4fdc->m_frame.f_lineno = 43;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddcb3a87badc7a52da2a9871c57a4fdc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddcb3a87badc7a52da2a9871c57a4fdc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddcb3a87badc7a52da2a9871c57a4fdc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ddcb3a87badc7a52da2a9871c57a4fdc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ddcb3a87badc7a52da2a9871c57a4fdc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddcb3a87badc7a52da2a9871c57a4fdc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ddcb3a87badc7a52da2a9871c57a4fdc,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ddcb3a87badc7a52da2a9871c57a4fdc == cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc);
        cache_frame_ddcb3a87badc7a52da2a9871c57a4fdc = NULL;
    }

    assertFrameObject(frame_ddcb3a87badc7a52da2a9871c57a4fdc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__5__numeric_methods(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ufunc = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_b4b4ba611d7947576fe792cc95082d56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4b4ba611d7947576fe792cc95082d56 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4b4ba611d7947576fe792cc95082d56)) {
        Py_XDECREF(cache_frame_b4b4ba611d7947576fe792cc95082d56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4b4ba611d7947576fe792cc95082d56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4b4ba611d7947576fe792cc95082d56 = MAKE_FUNCTION_FRAME(codeobj_b4b4ba611d7947576fe792cc95082d56, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b4b4ba611d7947576fe792cc95082d56->m_type_description == NULL);
    frame_b4b4ba611d7947576fe792cc95082d56 = cache_frame_b4b4ba611d7947576fe792cc95082d56;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b4b4ba611d7947576fe792cc95082d56);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b4b4ba611d7947576fe792cc95082d56) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ufunc);
        tmp_args_element_value_1 = par_ufunc;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        frame_b4b4ba611d7947576fe792cc95082d56->m_frame.f_lineno = 50;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_ufunc);
            tmp_args_element_value_3 = par_ufunc;
            CHECK_OBJECT(par_name);
            tmp_args_element_value_4 = par_name;
            frame_b4b4ba611d7947576fe792cc95082d56->m_frame.f_lineno = 51;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_ufunc);
            tmp_args_element_value_5 = par_ufunc;
            CHECK_OBJECT(par_name);
            tmp_args_element_value_6 = par_name;
            frame_b4b4ba611d7947576fe792cc95082d56->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4b4ba611d7947576fe792cc95082d56);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4b4ba611d7947576fe792cc95082d56);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4b4ba611d7947576fe792cc95082d56);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4b4ba611d7947576fe792cc95082d56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4b4ba611d7947576fe792cc95082d56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4b4ba611d7947576fe792cc95082d56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4b4ba611d7947576fe792cc95082d56,
        type_description_1,
        par_ufunc,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_b4b4ba611d7947576fe792cc95082d56 == cache_frame_b4b4ba611d7947576fe792cc95082d56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b4b4ba611d7947576fe792cc95082d56);
        cache_frame_b4b4ba611d7947576fe792cc95082d56 = NULL;
    }

    assertFrameObject(frame_b4b4ba611d7947576fe792cc95082d56);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__6__unary_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_name = python_pars[1];
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_db305c108ce66284b74548a51434706f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_db305c108ce66284b74548a51434706f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_ufunc;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_db305c108ce66284b74548a51434706f)) {
        Py_XDECREF(cache_frame_db305c108ce66284b74548a51434706f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db305c108ce66284b74548a51434706f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db305c108ce66284b74548a51434706f = MAKE_FUNCTION_FRAME(codeobj_db305c108ce66284b74548a51434706f, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_db305c108ce66284b74548a51434706f->m_type_description == NULL);
    frame_db305c108ce66284b74548a51434706f = cache_frame_db305c108ce66284b74548a51434706f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_db305c108ce66284b74548a51434706f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_db305c108ce66284b74548a51434706f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = mod_consts[4];
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_db305c108ce66284b74548a51434706f->m_frame.f_lineno = 59;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db305c108ce66284b74548a51434706f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db305c108ce66284b74548a51434706f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db305c108ce66284b74548a51434706f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db305c108ce66284b74548a51434706f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db305c108ce66284b74548a51434706f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db305c108ce66284b74548a51434706f,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_db305c108ce66284b74548a51434706f == cache_frame_db305c108ce66284b74548a51434706f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_db305c108ce66284b74548a51434706f);
        cache_frame_db305c108ce66284b74548a51434706f = NULL;
    }

    assertFrameObject(frame_db305c108ce66284b74548a51434706f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_func);
    tmp_return_value = var_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ufunc);
    Py_DECREF(par_ufunc);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_13070888c8fe83f253744e848f68c2ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13070888c8fe83f253744e848f68c2ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_13070888c8fe83f253744e848f68c2ee)) {
        Py_XDECREF(cache_frame_13070888c8fe83f253744e848f68c2ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13070888c8fe83f253744e848f68c2ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13070888c8fe83f253744e848f68c2ee = MAKE_FUNCTION_FRAME(codeobj_13070888c8fe83f253744e848f68c2ee, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_13070888c8fe83f253744e848f68c2ee->m_type_description == NULL);
    frame_13070888c8fe83f253744e848f68c2ee = cache_frame_13070888c8fe83f253744e848f68c2ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_13070888c8fe83f253744e848f68c2ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_13070888c8fe83f253744e848f68c2ee) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_13070888c8fe83f253744e848f68c2ee->m_frame.f_lineno = 58;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13070888c8fe83f253744e848f68c2ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_13070888c8fe83f253744e848f68c2ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_13070888c8fe83f253744e848f68c2ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13070888c8fe83f253744e848f68c2ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13070888c8fe83f253744e848f68c2ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13070888c8fe83f253744e848f68c2ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13070888c8fe83f253744e848f68c2ee,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_13070888c8fe83f253744e848f68c2ee == cache_frame_13070888c8fe83f253744e848f68c2ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_13070888c8fe83f253744e848f68c2ee);
        cache_frame_13070888c8fe83f253744e848f68c2ee = NULL;
    }

    assertFrameObject(frame_13070888c8fe83f253744e848f68c2ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__1__disables_array_ufunc,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ac51cd8fe0e120972b0928fb68918c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__2__binary_method,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_026cdd14df640567d0952091191e2dd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_b3f0ed9c88df1725e19d43c8cdaa65e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__3__reflected_binary_method,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0201c99f99c61179323c164ce8c15a6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[10],
#endif
        codeobj_74a05f2328efcb4739153bc970c4fabb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__4__inplace_binary_method,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0d513be7f5aa5349bfc4b008bded4004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[13],
#endif
        codeobj_ddcb3a87badc7a52da2a9871c57a4fdc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__5__numeric_methods,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4b4ba611d7947576fe792cc95082d56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__6__unary_method,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_db305c108ce66284b74548a51434706f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        codeobj_13070888c8fe83f253744e848f68c2ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$mixins,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_numpy$lib$mixins[] = {
    impl_numpy$lib$mixins$$$function__2__binary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__3__reflected_binary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__4__inplace_binary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__6__unary_method$$$function__1_func,
    impl_numpy$lib$mixins$$$function__1__disables_array_ufunc,
    impl_numpy$lib$mixins$$$function__2__binary_method,
    impl_numpy$lib$mixins$$$function__3__reflected_binary_method,
    impl_numpy$lib$mixins$$$function__4__inplace_binary_method,
    impl_numpy$lib$mixins$$$function__5__numeric_methods,
    impl_numpy$lib$mixins$$$function__6__unary_method,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_numpy$lib$mixins;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_numpy$lib$mixins) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_numpy$lib$mixins[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_numpy$lib$mixins,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_numpy$lib$mixins(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy.lib.mixins");

    // Store the module for future use.
    module_numpy$lib$mixins = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.mixins: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.mixins: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy.lib.mixins: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnumpy$lib$mixins\n");

    moduledict_numpy$lib$mixins = MODULE_DICT(module_numpy$lib$mixins);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$mixins,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$mixins,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[168]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$mixins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$mixins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$mixins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$mixins);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_numpy$lib$mixins);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_ea9e1e50ab7bd6df65367ca389ca3b73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_fa2f111afbdb80cdfc682342f3d78d62_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    static struct Nuitka_FrameObject *cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ea9e1e50ab7bd6df65367ca389ca3b73 = MAKE_MODULE_FRAME(codeobj_ea9e1e50ab7bd6df65367ca389ca3b73, module_numpy$lib$mixins);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ea9e1e50ab7bd6df65367ca389ca3b73);
    assert(Py_REFCNT(frame_ea9e1e50ab7bd6df65367ca389ca3b73) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[28], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame.f_lineno = 2;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[30]);
        }

        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame.f_lineno = 2;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[31]);
        }

        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame.f_lineno = 2;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[32]);
        }

        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_7);
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[34];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$mixins;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[35];
        tmp_level_value_1 = mod_consts[36];
        frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$lib$mixins,
                mod_consts[37],
                mod_consts[36]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY(mod_consts[39]);
        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$mixins$$$function__1__disables_array_ufunc();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$mixins$$$function__2__binary_method();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$mixins$$$function__3__reflected_binary_method();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$mixins$$$function__4__inplace_binary_method();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$mixins$$$function__5__numeric_methods();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$mixins$$$function__6__unary_method();

        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_16);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[43];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_17 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[44];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[36];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_19 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[44];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;

        goto try_except_handler_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[45]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[46];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame.f_lineno = 63;
        tmp_assign_source_20 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[47]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[6];
        tmp_getattr_default_1 = mod_consts[49];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[6]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 63;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[53], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_3;
        }
        if (isFrameUnusable(cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2)) {
            Py_XDECREF(cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2 = MAKE_FUNCTION_FRAME(codeobj_fa2f111afbdb80cdfc682342f3d78d62, module_numpy$lib$mixins, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_type_description == NULL);
        frame_fa2f111afbdb80cdfc682342f3d78d62_2 = cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_fa2f111afbdb80cdfc682342f3d78d62_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_fa2f111afbdb80cdfc682342f3d78d62_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_2 == NULL)) {
                        tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_6 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[54]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = mod_consts[55];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 144;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_3 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_7 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 145;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[57]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_4 = mod_consts[58];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_4 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_8 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[60]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_6 = mod_consts[61];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_5 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 147;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_9 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        exception_lineno = 147;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[63]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_8 = mod_consts[64];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 147;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
            }

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_10;
            tmp_called_value_6 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_10 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 148;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[66]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_10 = mod_consts[67];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_7 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_11 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 149;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[69]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_12 = mod_consts[70];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_8 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 152;
                        type_description_2 = "o";
                        goto try_except_handler_4;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto try_except_handler_4;
                }
            }

            tmp_expression_value_12 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 152;
                        type_description_2 = "o";
                        goto try_except_handler_4;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto try_except_handler_4;
                }
            }

            tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[72]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 152;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_args_element_value_14 = mod_consts[72];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 152;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
            }

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = tmp_assign_source_23;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
            if (tmp_assign_source_24 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 152;
                goto try_except_handler_5;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
            if (tmp_assign_source_25 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 152;
                goto try_except_handler_5;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_unpack_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
            if (tmp_assign_source_26 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 152;
                goto try_except_handler_5;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = tmp_assign_source_26;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 152;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 152;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:
        try_end_2:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_9 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto try_except_handler_6;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto try_except_handler_6;
                }
            }

            tmp_expression_value_13 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 153;
                        type_description_2 = "o";
                        goto try_except_handler_6;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto try_except_handler_6;
                }
            }

            tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[77]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_args_element_value_16 = mod_consts[78];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = tmp_assign_source_27;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_4, 0, 3);
            if (tmp_assign_source_28 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_unpack_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_5, 1, 3);
            if (tmp_assign_source_29 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_unpack_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_6, 2, 3);
            if (tmp_assign_source_30 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 153;
                        goto try_except_handler_7;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 153;
                goto try_except_handler_7;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_6;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[79], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[81], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_2;
        // End of try:
        try_end_4:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_args_element_value_18;
            tmp_called_value_10 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto try_except_handler_8;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto try_except_handler_8;
                }
            }

            tmp_expression_value_14 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto try_except_handler_8;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto try_except_handler_8;
                }
            }

            tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[82]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_args_element_value_18 = mod_consts[83];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 154;
            {
                PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = tmp_assign_source_31;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_unpack_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_assign_source_32 = UNPACK_NEXT(tmp_unpack_7, 0, 3);
            if (tmp_assign_source_32 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 154;
                goto try_except_handler_9;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_unpack_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_8, 1, 3);
            if (tmp_assign_source_33 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 154;
                goto try_except_handler_9;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_unpack_9;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_unpack_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_9, 2, 3);
            if (tmp_assign_source_34 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 154;
                goto try_except_handler_9;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 154;
                        goto try_except_handler_9;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 154;
                goto try_except_handler_9;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_2;
        // End of try:
        try_end_6:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_20;
            tmp_called_value_11 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 155;
                        type_description_2 = "o";
                        goto try_except_handler_10;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto try_except_handler_10;
                }
            }

            tmp_expression_value_15 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 156;
                        type_description_2 = "o";
                        goto try_except_handler_10;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto try_except_handler_10;
                }
            }

            tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[87]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 156;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_args_element_value_20 = mod_consts[87];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 155;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
                tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
            }

            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_iter_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = tmp_assign_source_35;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_unpack_10;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_unpack_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_10, 0, 3);
            if (tmp_assign_source_36 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 155;
                goto try_except_handler_11;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_unpack_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT(tmp_unpack_11, 1, 3);
            if (tmp_assign_source_37 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 155;
                goto try_except_handler_11;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_unpack_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT(tmp_unpack_12, 2, 3);
            if (tmp_assign_source_38 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 155;
                goto try_except_handler_11;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = tmp_assign_source_38;
        }
        {
            PyObject *tmp_iterator_name_4;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
            tmp_iterator_name_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 155;
                        goto try_except_handler_11;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 155;
                goto try_except_handler_11;
            }
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_10;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_2;
        // End of try:
        try_end_8:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            tmp_expression_value_17 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[33]);

            if (tmp_expression_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[33]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[91]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[92]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_cmp_expr_right_1 = mod_consts[93];
            tmp_condition_result_6 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        // Tried code:
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_element_value_22;
            tmp_called_value_12 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto try_except_handler_12;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto try_except_handler_12;
                }
            }

            tmp_expression_value_18 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto try_except_handler_12;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto try_except_handler_12;
                }
            }

            tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[94]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_args_element_value_22 = mod_consts[95];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_iter_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            tmp_assign_source_39 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = tmp_assign_source_39;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_unpack_13;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_unpack_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_13, 0, 3);
            if (tmp_assign_source_40 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 159;
                goto try_except_handler_13;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_unpack_14;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_unpack_14 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_assign_source_41 = UNPACK_NEXT(tmp_unpack_14, 1, 3);
            if (tmp_assign_source_41 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 159;
                goto try_except_handler_13;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_unpack_15 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            tmp_assign_source_42 = UNPACK_NEXT(tmp_unpack_15, 2, 3);
            if (tmp_assign_source_42 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 159;
                goto try_except_handler_13;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_iterator_name_5;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
            tmp_iterator_name_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 159;
                        goto try_except_handler_13;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 159;
                goto try_except_handler_13;
            }
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_12;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[96], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[97], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[98], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_2;
        // End of try:
        try_end_10:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;

        branch_no_4:;
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_24;
            tmp_called_value_13 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 160;
                        type_description_2 = "o";
                        goto try_except_handler_14;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto try_except_handler_14;
                }
            }

            tmp_expression_value_19 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 161;
                        type_description_2 = "o";
                        goto try_except_handler_14;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto try_except_handler_14;
                }
            }

            tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[99]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_args_element_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 161;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_args_element_value_24 = mod_consts[100];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 160;
            {
                PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_iter_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_assign_source_43 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = tmp_assign_source_43;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_unpack_16 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_16, 0, 3);
            if (tmp_assign_source_44 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_unpack_17 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_17, 1, 3);
            if (tmp_assign_source_45 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_unpack_18 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            tmp_assign_source_46 = UNPACK_NEXT(tmp_unpack_18, 2, 3);
            if (tmp_assign_source_46 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = tmp_assign_source_46;
        }
        {
            PyObject *tmp_iterator_name_6;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
            tmp_iterator_name_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 160;
                        goto try_except_handler_15;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 160;
                goto try_except_handler_15;
            }
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_14;
        // End of try:
        try_end_11:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[102], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto try_end_12;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_2;
        // End of try:
        try_end_12:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_26;
            tmp_called_value_14 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_2 = "o";
                        goto try_except_handler_16;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto try_except_handler_16;
                }
            }

            tmp_expression_value_20 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto try_except_handler_16;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto try_except_handler_16;
                }
            }

            tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[104]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_args_element_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 163;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_args_element_value_26 = mod_consts[105];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
                tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_assign_source_47 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = tmp_assign_source_47;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_unpack_19;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_unpack_19 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_assign_source_48 = UNPACK_NEXT(tmp_unpack_19, 0, 3);
            if (tmp_assign_source_48 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 162;
                goto try_except_handler_17;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_unpack_20;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_unpack_20 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_assign_source_49 = UNPACK_NEXT(tmp_unpack_20, 1, 3);
            if (tmp_assign_source_49 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 162;
                goto try_except_handler_17;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_unpack_21;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_unpack_21 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_21, 2, 3);
            if (tmp_assign_source_50 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 162;
                goto try_except_handler_17;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = tmp_assign_source_50;
        }
        {
            PyObject *tmp_iterator_name_7;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
            tmp_iterator_name_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 162;
                        goto try_except_handler_17;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 162;
                goto try_except_handler_17;
            }
        }
        goto try_end_13;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_16;
        // End of try:
        try_end_13:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[106], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto try_end_14;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_2;
        // End of try:
        try_end_14:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_28;
            tmp_called_value_15 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_15 == NULL)) {
                        tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto try_except_handler_18;
                    }
                    Py_INCREF(tmp_called_value_15);
                } else {
                    goto try_except_handler_18;
                }
            }

            tmp_expression_value_21 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto try_except_handler_18;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto try_except_handler_18;
                }
            }

            tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[109]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_args_element_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            tmp_args_element_value_28 = mod_consts[110];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 164;
            {
                PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
                tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_iter_arg_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = tmp_assign_source_51;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_52;
            PyObject *tmp_unpack_22;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_unpack_22 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_22, 0, 3);
            if (tmp_assign_source_52 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 164;
                goto try_except_handler_19;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_unpack_23 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_23, 1, 3);
            if (tmp_assign_source_53 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 164;
                goto try_except_handler_19;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = tmp_assign_source_53;
        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_unpack_24 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_24, 2, 3);
            if (tmp_assign_source_54 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 164;
                goto try_except_handler_19;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = tmp_assign_source_54;
        }
        {
            PyObject *tmp_iterator_name_8;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
            tmp_iterator_name_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 164;
                        goto try_except_handler_19;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 164;
                goto try_except_handler_19;
            }
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_15:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[111], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[113], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_2;
        // End of try:
        try_end_16:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;

        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_30;
            tmp_called_value_16 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[17]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_22 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 165;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[114]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_args_element_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_30 = mod_consts[114];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 165;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_32;
            tmp_called_value_17 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[18]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[18]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_23 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 166;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[114]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_32 = mod_consts[114];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
            }

            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[116], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_34;
            tmp_called_value_18 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_18 == NULL)) {
                        tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto try_except_handler_20;
                    }
                    Py_INCREF(tmp_called_value_18);
                } else {
                    goto try_except_handler_20;
                }
            }

            tmp_expression_value_24 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto try_except_handler_20;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto try_except_handler_20;
                }
            }

            tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[117]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_args_element_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_args_element_value_34 = mod_consts[118];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 169;
            {
                PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
                tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
            }

            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_iter_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_assign_source_55 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
            Py_DECREF(tmp_iter_arg_9);
            if (tmp_assign_source_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = tmp_assign_source_55;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_unpack_25;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_unpack_25 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_assign_source_56 = UNPACK_NEXT(tmp_unpack_25, 0, 3);
            if (tmp_assign_source_56 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 169;
                goto try_except_handler_21;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = tmp_assign_source_56;
        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_unpack_26;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_unpack_26 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_assign_source_57 = UNPACK_NEXT(tmp_unpack_26, 1, 3);
            if (tmp_assign_source_57 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 169;
                goto try_except_handler_21;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = tmp_assign_source_57;
        }
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_unpack_27;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_unpack_27 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            tmp_assign_source_58 = UNPACK_NEXT(tmp_unpack_27, 2, 3);
            if (tmp_assign_source_58 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 169;
                goto try_except_handler_21;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = tmp_assign_source_58;
        }
        {
            PyObject *tmp_iterator_name_9;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
            tmp_iterator_name_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 169;
                        goto try_except_handler_21;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 169;
                goto try_except_handler_21;
            }
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_20;
        // End of try:
        try_end_17:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        goto try_end_18;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto frame_exception_exit_2;
        // End of try:
        try_end_18:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_36;
            tmp_called_value_19 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_19 == NULL)) {
                        tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 170;
                        type_description_2 = "o";
                        goto try_except_handler_22;
                    }
                    Py_INCREF(tmp_called_value_19);
                } else {
                    goto try_except_handler_22;
                }
            }

            tmp_expression_value_25 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 171;
                        type_description_2 = "o";
                        goto try_except_handler_22;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto try_except_handler_22;
                }
            }

            tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[122]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_args_element_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 171;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            tmp_args_element_value_36 = mod_consts[123];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 170;
            {
                PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
                tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
            }

            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_iter_arg_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            tmp_assign_source_59 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = tmp_assign_source_59;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_unpack_28;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_unpack_28 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_assign_source_60 = UNPACK_NEXT(tmp_unpack_28, 0, 3);
            if (tmp_assign_source_60 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 170;
                goto try_except_handler_23;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = tmp_assign_source_60;
        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_unpack_29;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_unpack_29 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_assign_source_61 = UNPACK_NEXT(tmp_unpack_29, 1, 3);
            if (tmp_assign_source_61 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 170;
                goto try_except_handler_23;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_unpack_30;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_unpack_30 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            tmp_assign_source_62 = UNPACK_NEXT(tmp_unpack_30, 2, 3);
            if (tmp_assign_source_62 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 170;
                goto try_except_handler_23;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = tmp_assign_source_62;
        }
        {
            PyObject *tmp_iterator_name_10;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
            tmp_iterator_name_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 170;
                        goto try_except_handler_23;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 170;
                goto try_except_handler_23;
            }
        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_22;
        // End of try:
        try_end_19:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[124], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        goto try_end_20;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto frame_exception_exit_2;
        // End of try:
        try_end_20:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_iter_arg_11;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_38;
            tmp_called_value_20 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_20 == NULL)) {
                        tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 172;
                        type_description_2 = "o";
                        goto try_except_handler_24;
                    }
                    Py_INCREF(tmp_called_value_20);
                } else {
                    goto try_except_handler_24;
                }
            }

            tmp_expression_value_26 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto try_except_handler_24;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto try_except_handler_24;
                }
            }

            tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[127]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 173;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            tmp_args_element_value_38 = mod_consts[128];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 172;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
            }

            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_iter_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            tmp_assign_source_63 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
            Py_DECREF(tmp_iter_arg_11);
            if (tmp_assign_source_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto try_except_handler_24;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = tmp_assign_source_63;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_unpack_31;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_unpack_31 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_assign_source_64 = UNPACK_NEXT(tmp_unpack_31, 0, 3);
            if (tmp_assign_source_64 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 172;
                goto try_except_handler_25;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = tmp_assign_source_64;
        }
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_unpack_32;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_unpack_32 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_assign_source_65 = UNPACK_NEXT(tmp_unpack_32, 1, 3);
            if (tmp_assign_source_65 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 172;
                goto try_except_handler_25;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = tmp_assign_source_65;
        }
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_unpack_33;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_unpack_33 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            tmp_assign_source_66 = UNPACK_NEXT(tmp_unpack_33, 2, 3);
            if (tmp_assign_source_66 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 172;
                goto try_except_handler_25;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = tmp_assign_source_66;
        }
        {
            PyObject *tmp_iterator_name_11;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
            tmp_iterator_name_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 172;
                        goto try_except_handler_25;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 172;
                goto try_except_handler_25;
            }
        }
        goto try_end_21;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_24;
        // End of try:
        try_end_21:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_24;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_24;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_24;
        }
        goto try_end_22;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto frame_exception_exit_2;
        // End of try:
        try_end_22:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_iter_arg_12;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_40;
            tmp_called_value_21 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_21 == NULL)) {
                        tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto try_except_handler_26;
                    }
                    Py_INCREF(tmp_called_value_21);
                } else {
                    goto try_except_handler_26;
                }
            }

            tmp_expression_value_27 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 174;
                        type_description_2 = "o";
                        goto try_except_handler_26;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto try_except_handler_26;
                }
            }

            tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[132]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 174;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_args_element_value_40 = mod_consts[133];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
                tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
            }

            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_iter_arg_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_assign_source_67 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
            Py_DECREF(tmp_iter_arg_12);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = tmp_assign_source_67;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_unpack_34;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_unpack_34 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_assign_source_68 = UNPACK_NEXT(tmp_unpack_34, 0, 3);
            if (tmp_assign_source_68 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 174;
                goto try_except_handler_27;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = tmp_assign_source_68;
        }
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_unpack_35;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_unpack_35 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_assign_source_69 = UNPACK_NEXT(tmp_unpack_35, 1, 3);
            if (tmp_assign_source_69 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 174;
                goto try_except_handler_27;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = tmp_assign_source_69;
        }
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_unpack_36;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_unpack_36 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            tmp_assign_source_70 = UNPACK_NEXT(tmp_unpack_36, 2, 3);
            if (tmp_assign_source_70 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 174;
                goto try_except_handler_27;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = tmp_assign_source_70;
        }
        {
            PyObject *tmp_iterator_name_12;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
            tmp_iterator_name_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_12); assert(HAS_ITERNEXT(tmp_iterator_name_12));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_12)->tp_iternext)(tmp_iterator_name_12);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 174;
                        goto try_except_handler_27;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 174;
                goto try_except_handler_27;
            }
        }
        goto try_end_23;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_26;
        // End of try:
        try_end_23:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[135], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[136], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        goto try_end_24;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto frame_exception_exit_2;
        // End of try:
        try_end_24:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_iter_arg_13;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_42;
            tmp_called_value_22 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto try_except_handler_28;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto try_except_handler_28;
                }
            }

            tmp_expression_value_28 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 175;
                        type_description_2 = "o";
                        goto try_except_handler_28;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto try_except_handler_28;
                }
            }

            tmp_args_element_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[137]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_args_element_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            tmp_args_element_value_42 = mod_consts[138];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
                tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_iter_arg_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
            Py_DECREF(tmp_iter_arg_13);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = tmp_assign_source_71;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_unpack_37;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_unpack_37 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_assign_source_72 = UNPACK_NEXT(tmp_unpack_37, 0, 3);
            if (tmp_assign_source_72 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 175;
                goto try_except_handler_29;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = tmp_assign_source_72;
        }
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_unpack_38;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_unpack_38 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_assign_source_73 = UNPACK_NEXT(tmp_unpack_38, 1, 3);
            if (tmp_assign_source_73 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 175;
                goto try_except_handler_29;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = tmp_assign_source_73;
        }
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_unpack_39;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_unpack_39 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            tmp_assign_source_74 = UNPACK_NEXT(tmp_unpack_39, 2, 3);
            if (tmp_assign_source_74 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 175;
                goto try_except_handler_29;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = tmp_assign_source_74;
        }
        {
            PyObject *tmp_iterator_name_13;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
            tmp_iterator_name_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_13); assert(HAS_ITERNEXT(tmp_iterator_name_13));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_13)->tp_iternext)(tmp_iterator_name_13);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 175;
                        goto try_except_handler_29;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 175;
                goto try_except_handler_29;
            }
        }
        goto try_end_25;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_28;
        // End of try:
        try_end_25:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[140], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        goto try_end_26;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto frame_exception_exit_2;
        // End of try:
        try_end_26:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_iter_arg_14;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_44;
            tmp_called_value_23 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[41]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[41]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto try_except_handler_30;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto try_except_handler_30;
                }
            }

            tmp_expression_value_29 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 176;
                        type_description_2 = "o";
                        goto try_except_handler_30;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto try_except_handler_30;
                }
            }

            tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[142]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_args_element_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 176;
                type_description_2 = "o";
                goto try_except_handler_30;
            }
            tmp_args_element_value_44 = mod_consts[143];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
                tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
            }

            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_iter_arg_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto try_except_handler_30;
            }
            tmp_assign_source_75 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
            Py_DECREF(tmp_iter_arg_14);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto try_except_handler_30;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter = tmp_assign_source_75;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_76;
            PyObject *tmp_unpack_40;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
            tmp_unpack_40 = tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter;
            tmp_assign_source_76 = UNPACK_NEXT(tmp_unpack_40, 0, 3);
            if (tmp_assign_source_76 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 176;
                goto try_except_handler_31;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1 = tmp_assign_source_76;
        }
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_unpack_41;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
            tmp_unpack_41 = tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter;
            tmp_assign_source_77 = UNPACK_NEXT(tmp_unpack_41, 1, 3);
            if (tmp_assign_source_77 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 176;
                goto try_except_handler_31;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2 = tmp_assign_source_77;
        }
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_unpack_42;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
            tmp_unpack_42 = tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter;
            tmp_assign_source_78 = UNPACK_NEXT(tmp_unpack_42, 2, 3);
            if (tmp_assign_source_78 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "o";
                exception_lineno = 176;
                goto try_except_handler_31;
            }
            assert(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3 == NULL);
            tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3 = tmp_assign_source_78;
        }
        {
            PyObject *tmp_iterator_name_14;
            CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
            tmp_iterator_name_14 = tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_14); assert(HAS_ITERNEXT(tmp_iterator_name_14));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_14)->tp_iternext)(tmp_iterator_name_14);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "o";
                        exception_lineno = 176;
                        goto try_except_handler_31;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[73];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "o";
                exception_lineno = 176;
                goto try_except_handler_31;
            }
        }
        goto try_end_27;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_30;
        // End of try:
        try_end_27:;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
        Py_DECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__source_iter = NULL;
        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[144], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "o";
            goto try_except_handler_30;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[145], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "o";
            goto try_except_handler_30;
        }
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2 = NULL;

        CHECK_OBJECT(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3);
        tmp_dictset_value = tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3;
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_2 = "o";
            goto try_except_handler_30;
        }
        goto try_end_28;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_1 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_2 = NULL;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto frame_exception_exit_2;
        // End of try:
        try_end_28:;
        Py_XDECREF(tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3);
        tmp_NDArrayOperatorsMixin$tuple_unpack_14__element_3 = NULL;

        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_46;
            tmp_called_value_24 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[42]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_30 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[147]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_args_element_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_46 = mod_consts[148];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 179;
            {
                PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
            }

            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_48;
            tmp_called_value_25 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[42]);

            if (tmp_called_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_31 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_31 == NULL)) {
                        tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[150]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_args_element_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_48 = mod_consts[151];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 180;
            {
                PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
            }

            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_50;
            tmp_called_value_26 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[42]);

            if (tmp_called_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_value_26 == NULL)) {
                        tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_26);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_32 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 181;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[153]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_args_element_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_50 = mod_consts[154];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
            }

            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_element_value_52;
            tmp_called_value_27 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[42]);

            if (tmp_called_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_33 = PyObject_GetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[38]);

            if (tmp_expression_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[38]);

                    if (unlikely(tmp_expression_value_33 == NULL)) {
                        tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                    }

                    if (tmp_expression_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 182;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[156]);
            Py_DECREF(tmp_expression_value_33);
            if (tmp_args_element_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_52 = mod_consts[156];
            frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
            }

            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fa2f111afbdb80cdfc682342f3d78d62_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_fa2f111afbdb80cdfc682342f3d78d62_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fa2f111afbdb80cdfc682342f3d78d62_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fa2f111afbdb80cdfc682342f3d78d62_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fa2f111afbdb80cdfc682342f3d78d62_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fa2f111afbdb80cdfc682342f3d78d62_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_fa2f111afbdb80cdfc682342f3d78d62_2 == cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2);
            cache_frame_fa2f111afbdb80cdfc682342f3d78d62_2 = NULL;
        }

        assertFrameObject(frame_fa2f111afbdb80cdfc682342f3d78d62_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_2 = mod_consts[43];
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_5:;
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_3;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_79;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_28 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[46];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame.f_lineno = 63;
            tmp_assign_source_79 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_79;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63);
        locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63);
        locals_numpy$lib$mixins$$$class__1_NDArrayOperatorsMixin_63 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 63;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_22);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea9e1e50ab7bd6df65367ca389ca3b73);
#endif
    popFrameStack();

    assertFrameObject(frame_ea9e1e50ab7bd6df65367ca389ca3b73);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea9e1e50ab7bd6df65367ca389ca3b73);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea9e1e50ab7bd6df65367ca389ca3b73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea9e1e50ab7bd6df65367ca389ca3b73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea9e1e50ab7bd6df65367ca389ca3b73, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy.lib.mixins", false);

    return module_numpy$lib$mixins;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$mixins", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
