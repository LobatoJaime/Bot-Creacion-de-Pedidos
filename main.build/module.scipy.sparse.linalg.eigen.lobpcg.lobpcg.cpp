/* Generated code for Python module 'scipy.sparse.linalg.eigen.lobpcg.lobpcg'
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

/* The "module_scipy$sparse$linalg$eigen$lobpcg$lobpcg" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
PyDictObject *moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[186];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[186];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.sparse.linalg.eigen.lobpcg.lobpcg"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 186; i++) {
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
void checkModuleConstants_scipy$sparse$linalg$eigen$lobpcg$lobpcg(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 186; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_61566c6bb315475febe4346fe73678e7;
static PyCodeObject *codeobj_b3bc5223ee7ab51df3dfbadc4335d79c;
static PyCodeObject *codeobj_73c93a2b5460b7c39e44f0e4d731f2e2;
static PyCodeObject *codeobj_52ff02a7e01f4456f54416a609cb1f6f;
static PyCodeObject *codeobj_cc5c0d675bbf62d31c36d55b8fa01dee;
static PyCodeObject *codeobj_8ad1950559886189115f0dd58b03105d;
static PyCodeObject *codeobj_4a8134884459abab3db8fd9e9b4b456b;
static PyCodeObject *codeobj_9bf82c5b200514fc6cb2151f4cb8eddc;
static PyCodeObject *codeobj_5ca6486b1ac0690d1575ba4467c9dc75;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[174]); CHECK_OBJECT(module_filename_obj);
    codeobj_61566c6bb315475febe4346fe73678e7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_b3bc5223ee7ab51df3dfbadc4335d79c = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[176], NULL, 4, 0, 0);
    codeobj_73c93a2b5460b7c39e44f0e4d731f2e2 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[177], NULL, 1, 0, 0);
    codeobj_52ff02a7e01f4456f54416a609cb1f6f = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[178], NULL, 4, 0, 0);
    codeobj_cc5c0d675bbf62d31c36d55b8fa01dee = MAKE_CODEOBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[179], NULL, 3, 0, 0);
    codeobj_8ad1950559886189115f0dd58b03105d = MAKE_CODEOBJECT(module_filename_obj, 548, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[180], mod_consts[181], 2, 0, 0);
    codeobj_4a8134884459abab3db8fd9e9b4b456b = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[182], NULL, 2, 0, 0);
    codeobj_9bf82c5b200514fc6cb2151f4cb8eddc = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[146], mod_consts[183], NULL, 2, 0, 0);
    codeobj_5ca6486b1ac0690d1575ba4467c9dc75 = MAKE_CODEOBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[173], mod_consts[184], NULL, 11, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__1__report_nonhermitian();


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__2__as2d();


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__3__makeOperator();


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__4__applyConstraints();


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__5__b_orthonormalize(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__6__get_indx();


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__1__report_nonhermitian(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_norm = NULL;
    PyObject *var_md = NULL;
    PyObject *var_nmd = NULL;
    PyObject *var_tol = NULL;
    struct Nuitka_FrameObject *frame_9bf82c5b200514fc6cb2151f4cb8eddc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc)) {
        Py_XDECREF(cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc = MAKE_FUNCTION_FRAME(codeobj_9bf82c5b200514fc6cb2151f4cb8eddc, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_type_description == NULL);
    frame_9bf82c5b200514fc6cb2151f4cb8eddc = cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9bf82c5b200514fc6cb2151f4cb8eddc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9bf82c5b200514fc6cb2151f4cb8eddc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 34;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_norm == NULL);
        var_norm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_M);
        tmp_left_value_1 = par_M;
        CHECK_OBJECT(par_M);
        tmp_expression_value_1 = par_M;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 36;
        tmp_right_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_md == NULL);
        var_md = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_norm);
        tmp_called_value_1 = var_norm;
        CHECK_OBJECT(var_md);
        tmp_args_element_value_1 = var_md;
        tmp_args_element_value_2 = mod_consts[6];
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nmd == NULL);
        var_nmd = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        tmp_left_value_2 = mod_consts[7];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_expression_value_4 = par_M;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 39;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tol == NULL);
        var_tol = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[12]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(var_tol);
        tmp_args_element_value_4 = var_tol;
        CHECK_OBJECT(var_tol);
        tmp_left_value_3 = var_tol;
        CHECK_OBJECT(var_norm);
        tmp_called_value_4 = var_norm;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_6 = par_M;
        tmp_args_element_value_7 = mod_consts[6];
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_right_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tol;
            assert(old != NULL);
            var_tol = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_nmd);
        tmp_cmp_expr_left_1 = var_nmd;
        CHECK_OBJECT(var_tol);
        tmp_cmp_expr_right_1 = var_tol;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_5 != NULL);
        tmp_left_value_4 = mod_consts[14];
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_right_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM0(tmp_right_value_4, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_M);
            tmp_expression_value_5 = par_M;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_4, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 42;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_6 != NULL);
        tmp_left_value_5 = mod_consts[15];
        CHECK_OBJECT(var_nmd);
        tmp_tuple_element_2 = var_nmd;
        tmp_right_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_5, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_tol);
        tmp_tuple_element_2 = var_tol;
        PyTuple_SET_ITEM0(tmp_right_value_5, 1, tmp_tuple_element_2);
        tmp_args_element_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame.f_lineno = 44;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9bf82c5b200514fc6cb2151f4cb8eddc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9bf82c5b200514fc6cb2151f4cb8eddc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9bf82c5b200514fc6cb2151f4cb8eddc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9bf82c5b200514fc6cb2151f4cb8eddc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9bf82c5b200514fc6cb2151f4cb8eddc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9bf82c5b200514fc6cb2151f4cb8eddc,
        type_description_1,
        par_M,
        par_name,
        var_norm,
        var_md,
        var_nmd,
        var_tol
    );


    // Release cached frame if used for exception.
    if (frame_9bf82c5b200514fc6cb2151f4cb8eddc == cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc);
        cache_frame_9bf82c5b200514fc6cb2151f4cb8eddc = NULL;
    }

    assertFrameObject(frame_9bf82c5b200514fc6cb2151f4cb8eddc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_norm);
    Py_DECREF(var_norm);
    var_norm = NULL;
    CHECK_OBJECT(var_md);
    Py_DECREF(var_md);
    var_md = NULL;
    CHECK_OBJECT(var_nmd);
    Py_DECREF(var_nmd);
    var_nmd = NULL;
    CHECK_OBJECT(var_tol);
    Py_DECREF(var_tol);
    var_tol = NULL;
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

    Py_XDECREF(var_norm);
    var_norm = NULL;
    Py_XDECREF(var_md);
    var_md = NULL;
    Py_XDECREF(var_nmd);
    var_nmd = NULL;
    Py_XDECREF(var_tol);
    var_tol = NULL;
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
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__2__as2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ar = python_pars[0];
    PyObject *var_aux = NULL;
    struct Nuitka_FrameObject *frame_73c93a2b5460b7c39e44f0e4d731f2e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2)) {
        Py_XDECREF(cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2 = MAKE_FUNCTION_FRAME(codeobj_73c93a2b5460b7c39e44f0e4d731f2e2, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2->m_type_description == NULL);
    frame_73c93a2b5460b7c39e44f0e4d731f2e2 = cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_73c93a2b5460b7c39e44f0e4d731f2e2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_73c93a2b5460b7c39e44f0e4d731f2e2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_1 = par_ar;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[18];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    CHECK_OBJECT(par_ar);
    tmp_return_value = par_ar;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ar);
        tmp_tuple_element_1 = par_ar;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[20]);
        frame_73c93a2b5460b7c39e44f0e4d731f2e2->m_frame.f_lineno = 55;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_aux == NULL);
        var_aux = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_4 = par_ar;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_assattr_value_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[6];
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_aux);
        tmp_assattr_target_1 = var_aux;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_aux);
    tmp_return_value = var_aux;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73c93a2b5460b7c39e44f0e4d731f2e2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_73c93a2b5460b7c39e44f0e4d731f2e2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73c93a2b5460b7c39e44f0e4d731f2e2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73c93a2b5460b7c39e44f0e4d731f2e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73c93a2b5460b7c39e44f0e4d731f2e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73c93a2b5460b7c39e44f0e4d731f2e2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73c93a2b5460b7c39e44f0e4d731f2e2,
        type_description_1,
        par_ar,
        var_aux
    );


    // Release cached frame if used for exception.
    if (frame_73c93a2b5460b7c39e44f0e4d731f2e2 == cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2);
        cache_frame_73c93a2b5460b7c39e44f0e4d731f2e2 = NULL;
    }

    assertFrameObject(frame_73c93a2b5460b7c39e44f0e4d731f2e2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_aux);
    var_aux = NULL;
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

    Py_XDECREF(var_aux);
    var_aux = NULL;
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
    CHECK_OBJECT(par_ar);
    Py_DECREF(par_ar);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ar);
    Py_DECREF(par_ar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__3__makeOperator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_operatorInput = python_pars[0];
    PyObject *par_expectedShape = python_pars[1];
    PyObject *var_operator = NULL;
    struct Nuitka_FrameObject *frame_4a8134884459abab3db8fd9e9b4b456b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4a8134884459abab3db8fd9e9b4b456b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a8134884459abab3db8fd9e9b4b456b)) {
        Py_XDECREF(cache_frame_4a8134884459abab3db8fd9e9b4b456b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a8134884459abab3db8fd9e9b4b456b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a8134884459abab3db8fd9e9b4b456b = MAKE_FUNCTION_FRAME(codeobj_4a8134884459abab3db8fd9e9b4b456b, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4a8134884459abab3db8fd9e9b4b456b->m_type_description == NULL);
    frame_4a8134884459abab3db8fd9e9b4b456b = cache_frame_4a8134884459abab3db8fd9e9b4b456b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4a8134884459abab3db8fd9e9b4b456b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4a8134884459abab3db8fd9e9b4b456b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_operatorInput);
        tmp_cmp_expr_left_1 = par_operatorInput;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_operatorInput);
        tmp_args_element_value_1 = par_operatorInput;
        frame_4a8134884459abab3db8fd9e9b4b456b->m_frame.f_lineno = 67;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_operator == NULL);
        var_operator = tmp_assign_source_1;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        if (var_operator == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = var_operator;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expectedShape);
        tmp_cmp_expr_right_2 = par_expectedShape;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[25];
        frame_4a8134884459abab3db8fd9e9b4b456b->m_frame.f_lineno = 70;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 70;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    if (var_operator == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 72;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_operator;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a8134884459abab3db8fd9e9b4b456b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a8134884459abab3db8fd9e9b4b456b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a8134884459abab3db8fd9e9b4b456b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a8134884459abab3db8fd9e9b4b456b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a8134884459abab3db8fd9e9b4b456b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a8134884459abab3db8fd9e9b4b456b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a8134884459abab3db8fd9e9b4b456b,
        type_description_1,
        par_operatorInput,
        par_expectedShape,
        var_operator
    );


    // Release cached frame if used for exception.
    if (frame_4a8134884459abab3db8fd9e9b4b456b == cache_frame_4a8134884459abab3db8fd9e9b4b456b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4a8134884459abab3db8fd9e9b4b456b);
        cache_frame_4a8134884459abab3db8fd9e9b4b456b = NULL;
    }

    assertFrameObject(frame_4a8134884459abab3db8fd9e9b4b456b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_operator);
    var_operator = NULL;
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

    Py_XDECREF(var_operator);
    var_operator = NULL;
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
    CHECK_OBJECT(par_operatorInput);
    Py_DECREF(par_operatorInput);
    CHECK_OBJECT(par_expectedShape);
    Py_DECREF(par_expectedShape);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_operatorInput);
    Py_DECREF(par_operatorInput);
    CHECK_OBJECT(par_expectedShape);
    Py_DECREF(par_expectedShape);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__4__applyConstraints(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_blockVectorV = python_pars[0];
    PyObject *par_factYBY = python_pars[1];
    PyObject *par_blockVectorBY = python_pars[2];
    PyObject *par_blockVectorY = python_pars[3];
    PyObject *var_YBV = NULL;
    PyObject *var_tmp = NULL;
    struct Nuitka_FrameObject *frame_b3bc5223ee7ab51df3dfbadc4335d79c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c)) {
        Py_XDECREF(cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c = MAKE_FUNCTION_FRAME(codeobj_b3bc5223ee7ab51df3dfbadc4335d79c, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c->m_type_description == NULL);
    frame_b3bc5223ee7ab51df3dfbadc4335d79c = cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b3bc5223ee7ab51df3dfbadc4335d79c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b3bc5223ee7ab51df3dfbadc4335d79c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorBY);
        tmp_expression_value_2 = par_blockVectorBY;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_b3bc5223ee7ab51df3dfbadc4335d79c->m_frame.f_lineno = 77;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorV);
        tmp_args_element_value_2 = par_blockVectorV;
        frame_b3bc5223ee7ab51df3dfbadc4335d79c->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_YBV == NULL);
        var_YBV = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_factYBY);
        tmp_args_element_value_3 = par_factYBY;
        CHECK_OBJECT(var_YBV);
        tmp_args_element_value_4 = var_YBV;
        frame_b3bc5223ee7ab51df3dfbadc4335d79c->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tmp == NULL);
        var_tmp = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_blockVectorV);
        tmp_left_value_1 = par_blockVectorV;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorY);
        tmp_args_element_value_5 = par_blockVectorY;
        CHECK_OBJECT(var_tmp);
        tmp_args_element_value_6 = var_tmp;
        frame_b3bc5223ee7ab51df3dfbadc4335d79c->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_right_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_SUB_OBJECT_OBJECT_INPLACE(&tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_value_1;
        par_blockVectorV = tmp_assign_source_3;

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3bc5223ee7ab51df3dfbadc4335d79c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b3bc5223ee7ab51df3dfbadc4335d79c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3bc5223ee7ab51df3dfbadc4335d79c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3bc5223ee7ab51df3dfbadc4335d79c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3bc5223ee7ab51df3dfbadc4335d79c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3bc5223ee7ab51df3dfbadc4335d79c,
        type_description_1,
        par_blockVectorV,
        par_factYBY,
        par_blockVectorBY,
        par_blockVectorY,
        var_YBV,
        var_tmp
    );


    // Release cached frame if used for exception.
    if (frame_b3bc5223ee7ab51df3dfbadc4335d79c == cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c);
        cache_frame_b3bc5223ee7ab51df3dfbadc4335d79c = NULL;
    }

    assertFrameObject(frame_b3bc5223ee7ab51df3dfbadc4335d79c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_blockVectorV);
    Py_DECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    CHECK_OBJECT(var_YBV);
    Py_DECREF(var_YBV);
    var_YBV = NULL;
    CHECK_OBJECT(var_tmp);
    Py_DECREF(var_tmp);
    var_tmp = NULL;
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

    CHECK_OBJECT(par_blockVectorV);
    Py_DECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    Py_XDECREF(var_YBV);
    var_YBV = NULL;
    Py_XDECREF(var_tmp);
    var_tmp = NULL;
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
    CHECK_OBJECT(par_factYBY);
    Py_DECREF(par_factYBY);
    CHECK_OBJECT(par_blockVectorBY);
    Py_DECREF(par_blockVectorBY);
    CHECK_OBJECT(par_blockVectorY);
    Py_DECREF(par_blockVectorY);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_factYBY);
    Py_DECREF(par_factYBY);
    CHECK_OBJECT(par_blockVectorBY);
    Py_DECREF(par_blockVectorBY);
    CHECK_OBJECT(par_blockVectorY);
    Py_DECREF(par_blockVectorY);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__5__b_orthonormalize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_B = python_pars[0];
    PyObject *par_blockVectorV = python_pars[1];
    PyObject *par_blockVectorBV = python_pars[2];
    PyObject *par_retInvR = python_pars[3];
    PyObject *var_normalization = NULL;
    PyObject *var_VBV = NULL;
    struct Nuitka_FrameObject *frame_52ff02a7e01f4456f54416a609cb1f6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52ff02a7e01f4456f54416a609cb1f6f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52ff02a7e01f4456f54416a609cb1f6f)) {
        Py_XDECREF(cache_frame_52ff02a7e01f4456f54416a609cb1f6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52ff02a7e01f4456f54416a609cb1f6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52ff02a7e01f4456f54416a609cb1f6f = MAKE_FUNCTION_FRAME(codeobj_52ff02a7e01f4456f54416a609cb1f6f, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52ff02a7e01f4456f54416a609cb1f6f->m_type_description == NULL);
    frame_52ff02a7e01f4456f54416a609cb1f6f = cache_frame_52ff02a7e01f4456f54416a609cb1f6f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52ff02a7e01f4456f54416a609cb1f6f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52ff02a7e01f4456f54416a609cb1f6f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_blockVectorV);
        tmp_expression_value_1 = par_blockVectorV;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 84;
        tmp_left_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[30], 0), mod_consts[31]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorV);
        tmp_expression_value_4 = par_blockVectorV;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 84;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_normalization == NULL);
        var_normalization = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(par_blockVectorV);
        tmp_left_value_2 = par_blockVectorV;
        CHECK_OBJECT(var_normalization);
        tmp_right_value_2 = var_normalization;
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blockVectorV;
            assert(old != NULL);
            par_blockVectorV = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_blockVectorBV);
        tmp_cmp_expr_left_1 = par_blockVectorBV;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_2 = par_B;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_B);
        tmp_called_value_3 = par_B;
        CHECK_OBJECT(par_blockVectorV);
        tmp_args_element_value_2 = par_blockVectorV;
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 88;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_blockVectorV);
        tmp_assign_source_4 = par_blockVectorV;
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_4;
            Py_INCREF(par_blockVectorBV);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(par_blockVectorBV);
        tmp_left_value_3 = par_blockVectorBV;
        CHECK_OBJECT(var_normalization);
        tmp_right_value_3 = var_normalization;
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorV);
        tmp_expression_value_6 = par_blockVectorV;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[4]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 93;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_blockVectorBV == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_blockVectorBV;
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_VBV == NULL);
        var_VBV = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_VBV);
        tmp_tuple_element_1 = var_VBV;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[35]);
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 96;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_VBV;
            assert(old != NULL);
            var_VBV = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_VBV);
        tmp_tuple_element_2 = var_VBV;
        tmp_args_value_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[35]);
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 97;
        tmp_assign_source_8 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_VBV;
            assert(old != NULL);
            var_VBV = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_blockVectorV);
        tmp_args_element_value_5 = par_blockVectorV;
        CHECK_OBJECT(var_VBV);
        tmp_args_element_value_6 = var_VBV;
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 98;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_blockVectorV;
            assert(old != NULL);
            par_blockVectorV = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_3 = par_B;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[32]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_blockVectorBV == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_blockVectorBV;
        CHECK_OBJECT(var_VBV);
        tmp_args_element_value_8 = var_VBV;
        frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_blockVectorBV;
            par_blockVectorBV = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        {
            PyObject *old = par_blockVectorBV;
            par_blockVectorBV = tmp_assign_source_11;
            Py_INCREF(par_blockVectorBV);
            Py_XDECREF(old);
        }

    }
    branch_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_52ff02a7e01f4456f54416a609cb1f6f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_52ff02a7e01f4456f54416a609cb1f6f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_None;
        {
            PyObject *old = par_blockVectorV;
            par_blockVectorV = tmp_assign_source_12;
            Py_INCREF(par_blockVectorV);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        {
            PyObject *old = par_blockVectorBV;
            par_blockVectorBV = tmp_assign_source_13;
            Py_INCREF(par_blockVectorBV);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        {
            PyObject *old = var_VBV;
            var_VBV = tmp_assign_source_14;
            Py_INCREF(var_VBV);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 94;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame) frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_retInvR);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_retInvR);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_tuple_element_3;
        if (par_blockVectorV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_blockVectorV;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        if (par_blockVectorBV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = par_blockVectorBV;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        if (var_VBV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = var_VBV;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
        CHECK_OBJECT(var_normalization);
        tmp_tuple_element_3 = var_normalization;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_tuple_element_4;
        if (par_blockVectorV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = par_blockVectorV;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
        if (par_blockVectorBV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_4 = par_blockVectorBV;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }
    branch_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52ff02a7e01f4456f54416a609cb1f6f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52ff02a7e01f4456f54416a609cb1f6f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52ff02a7e01f4456f54416a609cb1f6f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52ff02a7e01f4456f54416a609cb1f6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52ff02a7e01f4456f54416a609cb1f6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52ff02a7e01f4456f54416a609cb1f6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52ff02a7e01f4456f54416a609cb1f6f,
        type_description_1,
        par_B,
        par_blockVectorV,
        par_blockVectorBV,
        par_retInvR,
        var_normalization,
        var_VBV
    );


    // Release cached frame if used for exception.
    if (frame_52ff02a7e01f4456f54416a609cb1f6f == cache_frame_52ff02a7e01f4456f54416a609cb1f6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52ff02a7e01f4456f54416a609cb1f6f);
        cache_frame_52ff02a7e01f4456f54416a609cb1f6f = NULL;
    }

    assertFrameObject(frame_52ff02a7e01f4456f54416a609cb1f6f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    Py_XDECREF(par_blockVectorBV);
    par_blockVectorBV = NULL;
    CHECK_OBJECT(var_normalization);
    Py_DECREF(var_normalization);
    var_normalization = NULL;
    Py_XDECREF(var_VBV);
    var_VBV = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    Py_XDECREF(par_blockVectorBV);
    par_blockVectorBV = NULL;
    Py_XDECREF(var_normalization);
    var_normalization = NULL;
    Py_XDECREF(var_VBV);
    var_VBV = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_retInvR);
    Py_DECREF(par_retInvR);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_retInvR);
    Py_DECREF(par_retInvR);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__6__get_indx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par__lambda = python_pars[0];
    PyObject *par_num = python_pars[1];
    PyObject *par_largest = python_pars[2];
    PyObject *var_ii = NULL;
    struct Nuitka_FrameObject *frame_cc5c0d675bbf62d31c36d55b8fa01dee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee)) {
        Py_XDECREF(cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee = MAKE_FUNCTION_FRAME(codeobj_cc5c0d675bbf62d31c36d55b8fa01dee, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee->m_type_description == NULL);
    frame_cc5c0d675bbf62d31c36d55b8fa01dee = cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc5c0d675bbf62d31c36d55b8fa01dee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc5c0d675bbf62d31c36d55b8fa01dee) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__lambda);
        tmp_args_element_value_1 = par__lambda;
        frame_cc5c0d675bbf62d31c36d55b8fa01dee->m_frame.f_lineno = 119;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[41], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ii == NULL);
        var_ii = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_largest);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_largest);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_step_value_1;
        CHECK_OBJECT(var_ii);
        tmp_expression_value_1 = var_ii;
        tmp_start_value_1 = Py_None;
        CHECK_OBJECT(par_num);
        tmp_operand_value_1 = par_num;
        tmp_left_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[6];
        tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_step_value_1 = mod_consts[42];
        tmp_subscript_value_1 = MAKE_SLICEOBJ3(tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            assert(old != NULL);
            var_ii = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_ii);
        tmp_expression_value_2 = var_ii;
        CHECK_OBJECT(par_num);
        tmp_stop_value_2 = par_num;
        tmp_subscript_value_2 = MAKE_SLICEOBJ1(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            assert(old != NULL);
            var_ii = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc5c0d675bbf62d31c36d55b8fa01dee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc5c0d675bbf62d31c36d55b8fa01dee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc5c0d675bbf62d31c36d55b8fa01dee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc5c0d675bbf62d31c36d55b8fa01dee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc5c0d675bbf62d31c36d55b8fa01dee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc5c0d675bbf62d31c36d55b8fa01dee,
        type_description_1,
        par__lambda,
        par_num,
        par_largest,
        var_ii
    );


    // Release cached frame if used for exception.
    if (frame_cc5c0d675bbf62d31c36d55b8fa01dee == cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee);
        cache_frame_cc5c0d675bbf62d31c36d55b8fa01dee = NULL;
    }

    assertFrameObject(frame_cc5c0d675bbf62d31c36d55b8fa01dee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_ii);
    tmp_return_value = var_ii;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ii);
    Py_DECREF(var_ii);
    var_ii = NULL;
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

    Py_XDECREF(var_ii);
    var_ii = NULL;
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
    CHECK_OBJECT(par__lambda);
    Py_DECREF(par__lambda);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par__lambda);
    Py_DECREF(par__lambda);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *par_B = python_pars[2];
    PyObject *par_M = python_pars[3];
    PyObject *par_Y = python_pars[4];
    PyObject *par_tol = python_pars[5];
    PyObject *par_maxiter = python_pars[6];
    PyObject *par_largest = python_pars[7];
    struct Nuitka_CellObject *par_verbosityLevel = Nuitka_Cell_New1(python_pars[8]);
    PyObject *par_retLambdaHistory = python_pars[9];
    PyObject *par_retResidualNormsHistory = python_pars[10];
    PyObject *var_blockVectorX = NULL;
    PyObject *var_blockVectorY = NULL;
    PyObject *var_residualTolerance = NULL;
    PyObject *var_sizeY = NULL;
    PyObject *var_n = NULL;
    PyObject *var_sizeX = NULL;
    PyObject *var_aux = NULL;
    PyObject *var_eigvals = NULL;
    PyObject *var_A_dense = NULL;
    PyObject *var_B_dense = NULL;
    PyObject *var_vals = NULL;
    PyObject *var_vecs = NULL;
    PyObject *var_blockVectorBY = NULL;
    PyObject *var_gramYBY = NULL;
    PyObject *var_blockVectorBX = NULL;
    PyObject *var_blockVectorAX = NULL;
    PyObject *var_gramXAX = NULL;
    PyObject *var__lambda = NULL;
    PyObject *var_eigBlockVector = NULL;
    PyObject *var_ii = NULL;
    PyObject *var_activeMask = NULL;
    PyObject *var_lambdaHistory = NULL;
    PyObject *var_residualNormsHistory = NULL;
    PyObject *var_previousBlockSize = NULL;
    PyObject *var_ident = NULL;
    PyObject *var_ident0 = NULL;
    PyObject *var_blockVectorP = NULL;
    PyObject *var_blockVectorAP = NULL;
    PyObject *var_blockVectorBP = NULL;
    PyObject *var_iterationNumber = NULL;
    PyObject *var_restart = NULL;
    nuitka_bool var_explicitGramFlag = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_blockVectorR = NULL;
    PyObject *var_residualNorms = NULL;
    PyObject *var_currentBlockSize = NULL;
    PyObject *var_activeBlockVectorR = NULL;
    PyObject *var_activeBlockVectorP = NULL;
    PyObject *var_activeBlockVectorAP = NULL;
    PyObject *var_activeBlockVectorBP = NULL;
    PyObject *var_activeBlockVectorBR = NULL;
    PyObject *var_activeBlockVectorAR = NULL;
    PyObject *var_invR = NULL;
    PyObject *var_normal = NULL;
    PyObject *var__ = NULL;
    PyObject *var_myeps = NULL;
    PyObject *var_gramXAR = NULL;
    PyObject *var_gramRAR = NULL;
    PyObject *var_gramXBX = NULL;
    PyObject *var_gramRBR = NULL;
    PyObject *var_gramXBR = NULL;
    PyObject *var__handle_gramA_gramB_verbosity = NULL;
    PyObject *var_gramXAP = NULL;
    PyObject *var_gramRAP = NULL;
    PyObject *var_gramPAP = NULL;
    PyObject *var_gramXBP = NULL;
    PyObject *var_gramRBP = NULL;
    PyObject *var_gramPBP = NULL;
    PyObject *var_gramA = NULL;
    PyObject *var_gramB = NULL;
    PyObject *var_eigBlockVectorX = NULL;
    PyObject *var_eigBlockVectorR = NULL;
    PyObject *var_eigBlockVectorP = NULL;
    PyObject *var_pp = NULL;
    PyObject *var_app = NULL;
    PyObject *var_bpp = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__element_4 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__element_4 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5ca6486b1ac0690d1575ba4467c9dc75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    static struct Nuitka_FrameObject *cache_frame_5ca6486b1ac0690d1575ba4467c9dc75 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_X);
        tmp_assign_source_1 = par_X;
        assert(var_blockVectorX == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_blockVectorX = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_Y);
        tmp_assign_source_2 = par_Y;
        assert(var_blockVectorY == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_blockVectorY = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_tol);
        tmp_assign_source_3 = par_tol;
        assert(var_residualTolerance == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_residualTolerance = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_maxiter);
        tmp_cmp_expr_left_1 = par_maxiter;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[44];
        {
            PyObject *old = par_maxiter;
            assert(old != NULL);
            par_maxiter = tmp_assign_source_4;
            Py_INCREF(par_maxiter);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_5ca6486b1ac0690d1575ba4467c9dc75)) {
        Py_XDECREF(cache_frame_5ca6486b1ac0690d1575ba4467c9dc75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ca6486b1ac0690d1575ba4467c9dc75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ca6486b1ac0690d1575ba4467c9dc75 = MAKE_FUNCTION_FRAME(codeobj_5ca6486b1ac0690d1575ba4467c9dc75, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5ca6486b1ac0690d1575ba4467c9dc75->m_type_description == NULL);
    frame_5ca6486b1ac0690d1575ba4467c9dc75 = cache_frame_5ca6486b1ac0690d1575ba4467c9dc75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5ca6486b1ac0690d1575ba4467c9dc75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5ca6486b1ac0690d1575ba4467c9dc75) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_2 = var_blockVectorY;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_blockVectorY);
        tmp_expression_value_2 = var_blockVectorY;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[6];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizeY == NULL);
        var_sizeY = tmp_assign_source_5;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[2];
        assert(var_sizeY == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_sizeY = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_blockVectorX);
        tmp_expression_value_3 = var_blockVectorX;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[21]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[18];
        tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[45];
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 300;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 300;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_blockVectorX);
        tmp_expression_value_4 = var_blockVectorX;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 302;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 302;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 302;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 302;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_n = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert(var_sizeX == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_sizeX = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_verbosityLevel));
        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_verbosityLevel));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[47];
        assert(var_aux == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_aux = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_4 = par_B;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(var_aux);
        tmp_left_value_1 = var_aux;
        tmp_right_value_1 = mod_consts[48];
        tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_value_1, tmp_right_value_1);
        assert(!(tmp_result == false));
        tmp_assign_source_13 = tmp_left_value_1;
        var_aux = tmp_assign_source_13;

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(var_aux);
        tmp_left_value_2 = var_aux;
        tmp_right_value_2 = mod_consts[49];
        tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_value_2, tmp_right_value_2);
        assert(!(tmp_result == false));
        tmp_assign_source_14 = tmp_left_value_2;
        var_aux = tmp_assign_source_14;

    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(var_aux);
        tmp_left_value_3 = var_aux;
        tmp_right_value_3 = mod_consts[50];
        tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_value_3, tmp_right_value_3);
        assert(!(tmp_result == false));
        tmp_assign_source_15 = tmp_left_value_3;
        var_aux = tmp_assign_source_15;

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_M);
        tmp_cmp_expr_left_5 = par_M;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(var_aux);
        tmp_left_value_4 = var_aux;
        tmp_right_value_4 = mod_consts[51];
        tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_value_4, tmp_right_value_4);
        assert(!(tmp_result == false));
        tmp_assign_source_16 = tmp_left_value_4;
        var_aux = tmp_assign_source_16;

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        CHECK_OBJECT(var_aux);
        tmp_left_value_5 = var_aux;
        tmp_right_value_5 = mod_consts[52];
        tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_value_5, tmp_right_value_5);
        assert(!(tmp_result == false));
        tmp_assign_source_17 = tmp_left_value_5;
        var_aux = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        CHECK_OBJECT(var_aux);
        tmp_left_value_6 = var_aux;
        tmp_left_value_7 = mod_consts[53];
        CHECK_OBJECT(var_n);
        tmp_right_value_7 = var_n;
        tmp_right_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_7, tmp_right_value_7);
        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_UNICODE_OBJECT_INPLACE(&tmp_left_value_6, tmp_right_value_6);
        Py_DECREF(tmp_right_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_left_value_6;
        var_aux = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        CHECK_OBJECT(var_aux);
        tmp_left_value_8 = var_aux;
        tmp_left_value_9 = mod_consts[54];
        CHECK_OBJECT(var_sizeX);
        tmp_right_value_9 = var_sizeX;
        tmp_right_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_9, tmp_right_value_9);
        if (tmp_right_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_8, tmp_right_value_8);
        Py_DECREF(tmp_right_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_left_value_8;
        var_aux = tmp_assign_source_19;

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_6 = var_blockVectorY;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        CHECK_OBJECT(var_aux);
        tmp_left_value_10 = var_aux;
        tmp_right_value_10 = mod_consts[55];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE(&tmp_left_value_10, tmp_right_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = tmp_left_value_10;
        var_aux = tmp_assign_source_20;

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_sizeY);
        tmp_cmp_expr_left_7 = var_sizeY;
        tmp_cmp_expr_right_7 = mod_consts[6];
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        CHECK_OBJECT(var_aux);
        tmp_left_value_11 = var_aux;
        tmp_left_value_12 = mod_consts[56];
        CHECK_OBJECT(var_sizeY);
        tmp_right_value_12 = var_sizeY;
        tmp_right_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_12, tmp_right_value_12);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_11, tmp_right_value_11);
        Py_DECREF(tmp_right_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_left_value_11;
        var_aux = tmp_assign_source_21;

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_13;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_14;
        CHECK_OBJECT(var_aux);
        tmp_left_value_13 = var_aux;
        tmp_left_value_14 = mod_consts[57];
        CHECK_OBJECT(var_sizeY);
        tmp_right_value_14 = var_sizeY;
        tmp_right_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_14, tmp_right_value_14);
        if (tmp_right_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_13, tmp_right_value_13);
        Py_DECREF(tmp_right_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_left_value_13;
        var_aux = tmp_assign_source_22;

    }
    branch_end_8:;
    branch_end_7:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_1 != NULL);
        if (var_aux == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 323;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_aux;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 323;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_A);
        tmp_args_element_value_2 = par_A;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_n;
        tmp_args_element_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_B);
        tmp_args_element_value_4 = par_B;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 326;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_n;
        tmp_args_element_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 0, tmp_tuple_element_2);
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 326;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_args_element_value_6 = par_M;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_n;
        tmp_args_element_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_3);
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_M;
            assert(old != NULL);
            par_M = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_15;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_16;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_15 = var_n;
        if (var_sizeY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_15 = var_sizeY;
        tmp_cmp_expr_left_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_15, tmp_right_value_15);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_16 = mod_consts[62];
        if (var_sizeX == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_16 = var_sizeX;
        tmp_cmp_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_16, tmp_right_value_16);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_8);

            exception_lineno = 329;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[64]);
        assert(tmp_called_value_5 != NULL);
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = var_sizeX;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_n;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizeX;
            var_sizeX = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_9 = var_blockVectorY;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[65];
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 336;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 336;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_largest);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_largest);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_left_value_17;
        PyObject *tmp_right_value_17;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_17 = var_n;
        CHECK_OBJECT(var_sizeX);
        tmp_right_value_17 = var_sizeX;
        tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_17, tmp_right_value_17);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = PyTuple_New(2);
        {
            PyObject *tmp_left_value_18;
            PyObject *tmp_right_value_18;
            PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_4);
            if (var_n == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_left_value_18 = var_n;
            tmp_right_value_18 = mod_consts[6];
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_18, tmp_right_value_18);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_27, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_27);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        assert(var_eigvals == NULL);
        var_eigvals = tmp_assign_source_27;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = mod_consts[2];
        tmp_assign_source_28 = PyTuple_New(2);
        {
            PyObject *tmp_left_value_19;
            PyObject *tmp_right_value_19;
            PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_sizeX);
            tmp_left_value_19 = var_sizeX;
            tmp_right_value_19 = mod_consts[6];
            tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_19, tmp_right_value_19);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        assert(var_eigvals == NULL);
        var_eigvals = tmp_assign_source_28;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_A);
        tmp_called_value_6 = par_A;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[66]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_n == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = var_n;
        CHECK_OBJECT(par_A);
        tmp_expression_value_6 = par_A;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 345;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 345;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 345;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_A_dense == NULL);
        var_A_dense = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_10 = par_B;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_30 = Py_None;
        Py_INCREF(tmp_assign_source_30);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_B);
        tmp_called_value_8 = par_B;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[66]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_n == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = var_n;
        CHECK_OBJECT(par_B);
        tmp_expression_value_8 = par_B;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 346;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 346;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 346;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_B_dense == NULL);
        var_B_dense = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_A_dense);
        tmp_kw_call_arg_value_0_3 = var_A_dense;
        CHECK_OBJECT(var_B_dense);
        tmp_kw_call_arg_value_1_1 = var_B_dense;
        CHECK_OBJECT(var_eigvals);
        tmp_kw_call_dict_value_0_3 = var_eigvals;
        tmp_kw_call_dict_value_1_1 = Py_False;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 348;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[69]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_32 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 348;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 348;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_34 = tmp_tuple_unpack_2__element_1;
        assert(var_vals == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_vals = tmp_assign_source_34;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_35 = tmp_tuple_unpack_2__element_2;
        assert(var_vecs == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_vecs = tmp_assign_source_35;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_largest);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_largest);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_vals);
        tmp_expression_value_9 = var_vals;
        tmp_subscript_value_2 = mod_consts[70];
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vals;
            assert(old != NULL);
            var_vals = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_vecs);
        tmp_expression_value_10 = var_vecs;
        tmp_subscript_value_3 = mod_consts[71];
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vecs;
            assert(old != NULL);
            var_vecs = tmp_assign_source_37;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(var_vals);
        tmp_tuple_element_6 = var_vals;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_vecs);
        tmp_tuple_element_6 = var_vecs;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_6);
        goto frame_return_exit_1;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_residualTolerance);
        tmp_cmp_expr_left_11 = var_residualTolerance;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_residualTolerance);
        tmp_cmp_expr_left_12 = var_residualTolerance;
        tmp_cmp_expr_right_12 = mod_consts[72];
        tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_14 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_value_20;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_value_20;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 358;
        tmp_left_value_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[73],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        if (tmp_left_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_n == NULL) {
            Py_DECREF(tmp_left_value_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_20 = var_n;
        tmp_assign_source_38 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_20, tmp_right_value_20);
        Py_DECREF(tmp_left_value_20);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_residualTolerance;
            assert(old != NULL);
            var_residualTolerance = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_13 = var_blockVectorY;
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_14 = par_B;
        tmp_cmp_expr_right_14 = Py_None;
        tmp_condition_result_16 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_B);
        tmp_called_value_11 = par_B;
        CHECK_OBJECT(var_blockVectorY);
        tmp_args_element_value_12 = var_blockVectorY;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 364;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_12);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blockVectorBY == NULL);
        var_blockVectorBY = tmp_assign_source_39;
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(var_blockVectorY);
        tmp_assign_source_40 = var_blockVectorY;
        assert(var_blockVectorBY == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_blockVectorBY = tmp_assign_source_40;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[27]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorY);
        tmp_expression_value_12 = var_blockVectorY;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[4]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 369;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 369;
        tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[5]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 369;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorBY);
        tmp_args_element_value_14 = var_blockVectorBY;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gramYBY == NULL);
        var_gramYBY = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_gramYBY);
        tmp_args_element_value_15 = var_gramYBY;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 372;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_15);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_gramYBY;
            assert(old != NULL);
            var_gramYBY = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_5, exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_cmp_expr_right_15 == NULL)) {
            tmp_cmp_expr_right_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_cmp_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[76];
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 374;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 374;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 370;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame) frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
    branch_end_16:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_16 = var_blockVectorX;
        CHECK_OBJECT(var_gramYBY);
        tmp_args_element_value_17 = var_gramYBY;
        CHECK_OBJECT(var_blockVectorBY);
        tmp_args_element_value_18 = var_blockVectorBY;
        CHECK_OBJECT(var_blockVectorY);
        tmp_args_element_value_19 = var_blockVectorY;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 376;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_14, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_14:;
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_args_element_value_20 = par_B;
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_21 = var_blockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_43 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_44 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 380;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_45 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 380;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_45;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 380;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 380;
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_46 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_blockVectorX;
            assert(old != NULL);
            var_blockVectorX = tmp_assign_source_46;
            Py_INCREF(var_blockVectorX);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_47 = tmp_tuple_unpack_3__element_2;
        assert(var_blockVectorBX == NULL);
        Py_INCREF(tmp_assign_source_47);
        var_blockVectorBX = tmp_assign_source_47;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(par_A);
        tmp_called_value_16 = par_A;
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_22 = var_blockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 384;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_22);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blockVectorAX == NULL);
        var_blockVectorAX = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_24;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[27]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorX);
        tmp_expression_value_14 = var_blockVectorX;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[4]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 385;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 385;
        tmp_args_element_value_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[5]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 385;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorAX);
        tmp_args_element_value_24 = var_blockVectorAX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gramXAX == NULL);
        var_gramXAX = tmp_assign_source_49;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_gramXAX);
        tmp_tuple_element_7 = var_gramXAX;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_7);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[80]);
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 387;
        tmp_iter_arg_4 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_50 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_50;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 387;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_52 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 387;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 387;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 387;
            goto try_except_handler_11;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_53 = tmp_tuple_unpack_4__element_1;
        assert(var__lambda == NULL);
        Py_INCREF(tmp_assign_source_53);
        var__lambda = tmp_assign_source_53;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_54 = tmp_tuple_unpack_4__element_2;
        assert(var_eigBlockVector == NULL);
        Py_INCREF(tmp_assign_source_54);
        var_eigBlockVector = tmp_assign_source_54;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__lambda);
        tmp_args_element_value_25 = var__lambda;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_26 = var_sizeX;
        CHECK_OBJECT(par_largest);
        tmp_args_element_value_27 = par_largest;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_19, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ii == NULL);
        var_ii = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var__lambda);
        tmp_expression_value_15 = var__lambda;
        CHECK_OBJECT(var_ii);
        tmp_subscript_value_4 = var_ii;
        tmp_assign_source_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_4);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__lambda;
            assert(old != NULL);
            var__lambda = tmp_assign_source_56;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_8;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[82]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_17 = var_eigBlockVector;
        tmp_tuple_element_8 = mod_consts[83];
        tmp_subscript_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_ii);
        tmp_tuple_element_8 = var_ii;
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_8);
        tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 391;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 391;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVector;
            assert(old != NULL);
            var_eigBlockVector = tmp_assign_source_57;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_29 = var_blockVectorX;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_30 = var_eigBlockVector;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_58 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorX;
            assert(old != NULL);
            var_blockVectorX = tmp_assign_source_58;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorAX);
        tmp_args_element_value_31 = var_blockVectorAX;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_32 = var_eigBlockVector;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_59 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorAX;
            assert(old != NULL);
            var_blockVectorAX = tmp_assign_source_59;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_16 = par_B;
        tmp_cmp_expr_right_16 = Py_None;
        tmp_condition_result_18 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorBX);
        tmp_args_element_value_33 = var_blockVectorBX;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_34 = var_eigBlockVector;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 395;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_60 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorBX;
            assert(old != NULL);
            var_blockVectorBX = tmp_assign_source_60;
            Py_DECREF(old);
        }

    }
    branch_no_17:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[84]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizeX == NULL) {
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_sizeX;
        tmp_tuple_element_9 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_10);
        tmp_args_value_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_9);
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[85]);
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 399;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_activeMask == NULL);
        var_activeMask = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var__lambda);
        tmp_list_element_1 = var__lambda;
        tmp_assign_source_62 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assign_source_62, 0, tmp_list_element_1);
        assert(var_lambdaHistory == NULL);
        var_lambdaHistory = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = PyList_New(0);
        assert(var_residualNormsHistory == NULL);
        var_residualNormsHistory = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_64 = var_sizeX;
        assert(var_previousBlockSize == NULL);
        Py_INCREF(tmp_assign_source_64);
        var_previousBlockSize = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[66]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizeX == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_4 = var_sizeX;
        CHECK_OBJECT(par_A);
        tmp_expression_value_20 = par_A;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 405;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 405;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ident == NULL);
        var_ident = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[66]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizeX == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_5 = var_sizeX;
        CHECK_OBJECT(par_A);
        tmp_expression_value_22 = par_A;
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 406;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 406;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_23, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ident0 == NULL);
        var_ident0 = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = Py_None;
        assert(var_blockVectorP == NULL);
        Py_INCREF(tmp_assign_source_67);
        var_blockVectorP = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = Py_None;
        assert(var_blockVectorAP == NULL);
        Py_INCREF(tmp_assign_source_68);
        var_blockVectorAP = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = Py_None;
        assert(var_blockVectorBP == NULL);
        Py_INCREF(tmp_assign_source_69);
        var_blockVectorBP = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[42];
        assert(var_iterationNumber == NULL);
        Py_INCREF(tmp_assign_source_70);
        var_iterationNumber = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = Py_True;
        assert(var_restart == NULL);
        Py_INCREF(tmp_assign_source_71);
        var_restart = tmp_assign_source_71;
    }
    {
        nuitka_bool tmp_assign_source_72;
        tmp_assign_source_72 = NUITKA_BOOL_FALSE;
        var_explicitGramFlag = tmp_assign_source_72;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        if (var_iterationNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_17 = var_iterationNumber;
        CHECK_OBJECT(par_maxiter);
        tmp_cmp_expr_right_17 = par_maxiter;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    goto loop_end_1;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_left_value_21;
        PyObject *tmp_right_value_21;
        if (var_iterationNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_21 = var_iterationNumber;
        tmp_right_value_21 = mod_consts[6];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_value_21, tmp_right_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_73 = tmp_left_value_21;
        var_iterationNumber = tmp_assign_source_73;

    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_18 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_18 = mod_consts[2];
        tmp_condition_result_20 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
        assert(tmp_condition_result_20 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_left_value_22;
        PyObject *tmp_right_value_22;
        tmp_called_value_24 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_24 != NULL);
        tmp_left_value_22 = mod_consts[88];
        CHECK_OBJECT(var_iterationNumber);
        tmp_right_value_22 = var_iterationNumber;
        tmp_args_element_value_35 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_22, tmp_right_value_22);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 421;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_19:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_19 = par_B;
        tmp_cmp_expr_right_19 = Py_None;
        tmp_condition_result_21 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_left_value_23;
        PyObject *tmp_right_value_23;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_24;
        if (var_blockVectorBX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_23 = var_blockVectorBX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = var__lambda;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[91]);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = mod_consts[83];
        PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_11);
        tmp_right_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_right_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_74 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_23, tmp_right_value_23);
        Py_DECREF(tmp_right_value_23);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_left_value_24;
        PyObject *tmp_right_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_26;
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_24 = var_blockVectorX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = var__lambda;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[91]);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = mod_consts[83];
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_12);
        tmp_right_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_right_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_75 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_24, tmp_right_value_24);
        Py_DECREF(tmp_right_value_24);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    branch_end_20:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_left_value_25;
        PyObject *tmp_right_value_25;
        if (var_blockVectorAX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_25 = var_blockVectorAX;
        CHECK_OBJECT(var_aux);
        tmp_right_value_25 = var_aux;
        tmp_assign_source_76 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_25, tmp_right_value_25);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorR;
            var_blockVectorR = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_left_value_26;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_right_value_26;
        PyObject *tmp_args_element_value_37;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[94]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_called_instance_7 = var_blockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 430;
        tmp_left_value_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[5]);
        if (tmp_left_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 430;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_right_value_26 = var_blockVectorR;
        tmp_args_element_value_36 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_26, tmp_right_value_26);
        Py_DECREF(tmp_left_value_26);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 430;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[2];
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_77;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_38;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_38 = var_aux;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 431;
        tmp_assign_source_78 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[73], tmp_args_element_value_38);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_residualNorms;
            var_residualNorms = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_39;
        if (var_residualNormsHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_residualNormsHistory;
        CHECK_OBJECT(var_residualNorms);
        tmp_args_element_value_39 = var_residualNorms;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 433;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[96], tmp_args_element_value_39);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[97]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_residualNorms);
        tmp_cmp_expr_left_20 = var_residualNorms;
        CHECK_OBJECT(var_residualTolerance);
        tmp_cmp_expr_right_20 = var_residualTolerance;
        tmp_args_element_value_40 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 435;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = Py_True;
        tmp_args_element_value_42 = Py_False;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 435;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_left_value_27;
        PyObject *tmp_right_value_27;
        if (var_activeMask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_27 = var_activeMask;
        CHECK_OBJECT(var_ii);
        tmp_right_value_27 = var_ii;
        tmp_assign_source_80 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_value_27, tmp_right_value_27);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeMask;
            var_activeMask = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_21 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_21 = mod_consts[18];
        tmp_condition_result_22 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
        assert(tmp_condition_result_22 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_43;
        tmp_called_value_27 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_27 != NULL);
        CHECK_OBJECT(var_activeMask);
        tmp_args_element_value_43 = var_activeMask;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 438;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_43);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_21:;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_activeMask);
        tmp_called_instance_10 = var_activeMask;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 440;
        tmp_assign_source_81 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[94]);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_currentBlockSize;
            var_currentBlockSize = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_cmp_expr_left_22 = var_currentBlockSize;
        if (var_previousBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_22 = var_previousBlockSize;
        tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
        assert(tmp_condition_result_23 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_assign_source_82 = var_currentBlockSize;
        {
            PyObject *old = var_previousBlockSize;
            var_previousBlockSize = tmp_assign_source_82;
            Py_INCREF(var_previousBlockSize);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[66]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_currentBlockSize);
        tmp_kw_call_arg_value_0_6 = var_currentBlockSize;
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_A;
        tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 443;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 443;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_28, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ident;
            var_ident = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_23 = var_currentBlockSize;
        tmp_cmp_expr_right_23 = mod_consts[2];
        tmp_condition_result_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
        assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_23:;
    goto loop_end_1;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_24 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_24 = mod_consts[2];
        tmp_condition_result_25 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
        assert(tmp_condition_result_25 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_29 != NULL);
        tmp_args_element_value_44 = mod_consts[102];
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_45 = var_currentBlockSize;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        tmp_called_value_30 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_30 != NULL);
        tmp_args_element_value_46 = mod_consts[103];
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_47 = var__lambda;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_31 != NULL);
        tmp_args_element_value_48 = mod_consts[104];
        CHECK_OBJECT(var_residualNorms);
        tmp_args_element_value_49 = var_residualNorms;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_25 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_25 = mod_consts[7];
        tmp_condition_result_26 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
        assert(tmp_condition_result_26 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_32 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_32 != NULL);
        if (var_eigBlockVector == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_50 = var_eigBlockVector;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 453;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_50);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_25:;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_13;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_expression_value_31 = var_blockVectorR;
        tmp_tuple_element_13 = mod_consts[83];
        tmp_subscript_value_8 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_13);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_13 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_13);
        tmp_args_element_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 455;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            var_activeBlockVectorR = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        if (var_iterationNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_26 = var_iterationNumber;
        tmp_cmp_expr_right_26 = mod_consts[2];
        tmp_condition_result_27 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        assert(tmp_condition_result_27 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_14;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 458;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = var_blockVectorP;
        tmp_tuple_element_14 = mod_consts[83];
        tmp_subscript_value_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_14);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_14 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_14);
        tmp_args_element_value_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 458;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorP;
            var_activeBlockVectorP = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_15;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = var_blockVectorAP;
        tmp_tuple_element_15 = mod_consts[83];
        tmp_subscript_value_10 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_15);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_15 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_15);
        tmp_args_element_value_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 459;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAP;
            var_activeBlockVectorAP = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_27 = par_B;
        tmp_cmp_expr_right_27 = Py_None;
        tmp_condition_result_28 = (tmp_cmp_expr_left_27 != tmp_cmp_expr_right_27) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_16;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_blockVectorBP;
        tmp_tuple_element_16 = mod_consts[83];
        tmp_subscript_value_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_16);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_16 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_16);
        tmp_args_element_value_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 461;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorBP;
            var_activeBlockVectorBP = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    branch_no_27:;
    branch_no_26:;
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        if (par_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_28 = par_M;
        tmp_cmp_expr_right_28 = Py_None;
        tmp_condition_result_29 = (tmp_cmp_expr_left_28 != tmp_cmp_expr_right_28) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_55;
        if (par_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_37 = par_M;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_55 = var_activeBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 465;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_55);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            assert(old != NULL);
            var_activeBlockVectorR = tmp_assign_source_88;
            Py_DECREF(old);
        }

    }
    branch_no_28:;
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        if (var_blockVectorY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 469;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_29 = var_blockVectorY;
        tmp_cmp_expr_right_29 = Py_None;
        tmp_condition_result_30 = (tmp_cmp_expr_left_29 != tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_56 = var_activeBlockVectorR;
        if (var_gramYBY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_57 = var_gramYBY;
        if (var_blockVectorBY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_58 = var_blockVectorBY;
        if (var_blockVectorY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_59 = var_blockVectorY;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 470;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_29:;
    {
        bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_30 = par_B;
        tmp_cmp_expr_right_30 = Py_None;
        tmp_condition_result_31 = (tmp_cmp_expr_left_30 != tmp_cmp_expr_right_30) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_left_value_28;
        PyObject *tmp_right_value_28;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_63;
        if (var_activeBlockVectorR == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_28 = var_activeBlockVectorR;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[32]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_60 = var_blockVectorX;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 477;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[32]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 477;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBX == NULL) {
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_blockVectorBX;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[4]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 477;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 477;
        tmp_args_element_value_62 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[5]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 477;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorR == NULL) {
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_62);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_63 = var_activeBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 477;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_args_element_value_61 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 477;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 476;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_right_value_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_right_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_89 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_28, tmp_right_value_28);
        Py_DECREF(tmp_right_value_28);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            var_activeBlockVectorR = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_left_value_29;
        PyObject *tmp_right_value_29;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_67;
        if (var_activeBlockVectorR == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_29 = var_activeBlockVectorR;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[32]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_64 = var_blockVectorX;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 481;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[32]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 481;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 481;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = var_blockVectorX;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[4]);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 481;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 481;
        tmp_args_element_value_66 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[5]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 481;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorR == NULL) {
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_66);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_67 = var_activeBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 481;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_args_element_value_65 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 481;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 480;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_right_value_29 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_right_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_29, tmp_right_value_29);
        Py_DECREF(tmp_right_value_29);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            var_activeBlockVectorR = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_68 = par_B;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_69 = var_activeBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_91;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(var_aux);
        tmp_iter_arg_5 = var_aux;
        tmp_assign_source_92 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_93 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_93 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 487;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_94 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_94 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 487;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 487;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 487;
            goto try_except_handler_13;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_95 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_activeBlockVectorR;
            assert(old != NULL);
            var_activeBlockVectorR = tmp_assign_source_95;
            Py_INCREF(var_activeBlockVectorR);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_96 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_activeBlockVectorBR;
            var_activeBlockVectorBR = tmp_assign_source_96;
            Py_INCREF(var_activeBlockVectorBR);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_70;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_44 = par_A;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_70 = var_activeBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 489;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_70);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAR;
            var_activeBlockVectorAR = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        if (var_iterationNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_31 = var_iterationNumber;
        tmp_cmp_expr_right_31 = mod_consts[2];
        tmp_condition_result_32 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
        assert(tmp_condition_result_32 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_31:;
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_32 = par_B;
        tmp_cmp_expr_right_32 = Py_None;
        tmp_condition_result_33 = (tmp_cmp_expr_left_32 != tmp_cmp_expr_right_32) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_3;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 493;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_17 = par_B;
        tmp_args_value_3 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_17);
        if (var_activeBlockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 493;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_17 = var_activeBlockVectorP;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_17);
        if (var_activeBlockVectorBP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_17 = var_activeBlockVectorBP;
        PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_17);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_args_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_kwargs_value_3 = PyDict_Copy(mod_consts[117]);
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 493;
        tmp_assign_source_98 = CALL_FUNCTION(tmp_called_value_45, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_98;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(var_aux);
        tmp_iter_arg_6 = var_aux;
        tmp_assign_source_99 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_99;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_100 = UNPACK_NEXT(tmp_unpack_11, 0, 4);
        if (tmp_assign_source_100 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 495;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_101 = UNPACK_NEXT(tmp_unpack_12, 1, 4);
        if (tmp_assign_source_101 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 495;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_102 = UNPACK_NEXT(tmp_unpack_13, 2, 4);
        if (tmp_assign_source_102 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 495;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_3;
            tmp_tuple_unpack_6__element_3 = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_103 = UNPACK_NEXT(tmp_unpack_14, 3, 4);
        if (tmp_assign_source_103 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 495;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_4;
            tmp_tuple_unpack_6__element_4 = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 495;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[118];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 495;
            goto try_except_handler_15;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_4);
    tmp_tuple_unpack_6__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_104 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_activeBlockVectorP;
            var_activeBlockVectorP = tmp_assign_source_104;
            Py_INCREF(var_activeBlockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_105 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_activeBlockVectorBP;
            var_activeBlockVectorBP = tmp_assign_source_105;
            Py_INCREF(var_activeBlockVectorBP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
        tmp_assign_source_106 = tmp_tuple_unpack_6__element_3;
        {
            PyObject *old = var_invR;
            var_invR = tmp_assign_source_106;
            Py_INCREF(var_invR);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;

    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_4);
        tmp_assign_source_107 = tmp_tuple_unpack_6__element_4;
        {
            PyObject *old = var_normal;
            var_normal = tmp_assign_source_107;
            Py_INCREF(var_normal);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_4);
    tmp_tuple_unpack_6__element_4 = NULL;

    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_4;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_18 = par_B;
        tmp_args_value_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_18);
        if (var_activeBlockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_18 = var_activeBlockVectorP;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_18);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_args_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_kwargs_value_4 = PyDict_Copy(mod_consts[117]);
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 497;
        tmp_assign_source_108 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_108;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(var_aux);
        tmp_iter_arg_7 = var_aux;
        tmp_assign_source_109 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_110 = UNPACK_NEXT(tmp_unpack_15, 0, 4);
        if (tmp_assign_source_110 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 498;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_111 = UNPACK_NEXT(tmp_unpack_16, 1, 4);
        if (tmp_assign_source_111 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 498;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_112 = UNPACK_NEXT(tmp_unpack_17, 2, 4);
        if (tmp_assign_source_112 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 498;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_3;
            tmp_tuple_unpack_7__element_3 = tmp_assign_source_112;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_113 = UNPACK_NEXT(tmp_unpack_18, 3, 4);
        if (tmp_assign_source_113 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 498;
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_4;
            tmp_tuple_unpack_7__element_4 = tmp_assign_source_113;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 498;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[118];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 498;
            goto try_except_handler_17;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_114;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_114 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_activeBlockVectorP;
            var_activeBlockVectorP = tmp_assign_source_114;
            Py_INCREF(var_activeBlockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_115 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_115;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
        tmp_assign_source_116 = tmp_tuple_unpack_7__element_3;
        {
            PyObject *old = var_invR;
            var_invR = tmp_assign_source_116;
            Py_INCREF(var_invR);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_4);
        tmp_assign_source_117 = tmp_tuple_unpack_7__element_4;
        {
            PyObject *old = var_normal;
            var_normal = tmp_assign_source_117;
            Py_INCREF(var_normal);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;

    branch_end_32:;
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        CHECK_OBJECT(var_activeBlockVectorP);
        tmp_cmp_expr_left_33 = var_activeBlockVectorP;
        tmp_cmp_expr_right_33 = Py_None;
        tmp_condition_result_34 = (tmp_cmp_expr_left_33 != tmp_cmp_expr_right_33) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_left_value_30;
        PyObject *tmp_right_value_30;
        if (var_activeBlockVectorAP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_30 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_normal);
        tmp_right_value_30 = var_normal;
        tmp_assign_source_118 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_30, tmp_right_value_30);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAP;
            var_activeBlockVectorAP = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAP);
        tmp_args_element_value_71 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_invR);
        tmp_args_element_value_72 = var_invR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 502;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_assign_source_119 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_13,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAP;
            assert(old != NULL);
            var_activeBlockVectorAP = tmp_assign_source_119;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = Py_False;
        {
            PyObject *old = var_restart;
            var_restart = tmp_assign_source_120;
            Py_INCREF(var_restart);
            Py_XDECREF(old);
        }

    }
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = Py_True;
        {
            PyObject *old = var_restart;
            var_restart = tmp_assign_source_121;
            Py_INCREF(var_restart);
            Py_XDECREF(old);
        }

    }
    branch_end_33:;
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_expression_value_41 = var_activeBlockVectorAR;
        tmp_cmp_expr_left_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[10]);
        if (tmp_cmp_expr_left_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_34 = mod_consts[120];
        tmp_condition_result_35 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        Py_DECREF(tmp_cmp_expr_left_34);
        if (tmp_condition_result_35 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
        assert(tmp_condition_result_35 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[6];
        {
            PyObject *old = var_myeps;
            var_myeps = tmp_assign_source_122;
            Py_INCREF(var_myeps);
            Py_XDECREF(old);
        }

    }
    goto branch_end_34;
    branch_no_34:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_42 = var_activeBlockVectorR;
        tmp_cmp_expr_left_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[10]);
        if (tmp_cmp_expr_left_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_35 = mod_consts[120];
        tmp_condition_result_36 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        Py_DECREF(tmp_cmp_expr_left_35);
        if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
        assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[121];
        {
            PyObject *old = var_myeps;
            var_myeps = tmp_assign_source_123;
            Py_INCREF(var_myeps);
            Py_XDECREF(old);
        }

    }
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[122];
        {
            PyObject *old = var_myeps;
            var_myeps = tmp_assign_source_124;
            Py_INCREF(var_myeps);
            Py_XDECREF(old);
        }

    }
    branch_end_35:;
    branch_end_34:;
    {
        nuitka_bool tmp_condition_result_37;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_residualNorms);
        tmp_called_instance_14 = var_residualNorms;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 518;
        tmp_cmp_expr_left_36 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[12]);
        if (tmp_cmp_expr_left_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_myeps == NULL) {
            Py_DECREF(tmp_cmp_expr_left_36);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_36 = var_myeps;
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        Py_DECREF(tmp_cmp_expr_left_36);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 518;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(tmp_and_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        if (var_explicitGramFlag == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = (var_explicitGramFlag == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_37 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_37 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
        assert(tmp_condition_result_37 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_36:;
    {
        nuitka_bool tmp_assign_source_125;
        tmp_assign_source_125 = NUITKA_BOOL_FALSE;
        var_explicitGramFlag = tmp_assign_source_125;
    }
    goto branch_end_36;
    branch_no_36:;
    {
        nuitka_bool tmp_assign_source_126;
        tmp_assign_source_126 = NUITKA_BOOL_TRUE;
        var_explicitGramFlag = tmp_assign_source_126;
    }
    branch_end_36:;
    {
        bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_37 = par_B;
        tmp_cmp_expr_right_37 = Py_None;
        tmp_condition_result_38 = (tmp_cmp_expr_left_37 == tmp_cmp_expr_right_37) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_127;
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 526;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_127 = var_blockVectorX;
        {
            PyObject *old = var_blockVectorBX;
            var_blockVectorBX = tmp_assign_source_127;
            Py_INCREF(var_blockVectorBX);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_assign_source_128 = var_activeBlockVectorR;
        {
            PyObject *old = var_activeBlockVectorBR;
            assert(old != NULL);
            var_activeBlockVectorBR = tmp_assign_source_128;
            Py_INCREF(var_activeBlockVectorBR);
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_3;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 528;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_3 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_129;
        if (var_activeBlockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 529;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_129 = var_activeBlockVectorP;
        {
            PyObject *old = var_activeBlockVectorBP;
            var_activeBlockVectorBP = tmp_assign_source_129;
            Py_INCREF(var_activeBlockVectorBP);
            Py_XDECREF(old);
        }

    }
    branch_no_38:;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_74;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[27]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = var_blockVectorX;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[4]);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 532;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 532;
        tmp_args_element_value_73 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[5]);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 532;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_74 = var_activeBlockVectorAR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_assign_source_130 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAR;
            var_gramXAR = tmp_assign_source_130;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_76;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[27]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_46 = var_activeBlockVectorR;
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[4]);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 533;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 533;
        tmp_args_element_value_75 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[5]);
        Py_DECREF(tmp_called_instance_16);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 533;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_76 = var_activeBlockVectorAR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_48, call_args);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRAR;
            var_gramRAR = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_40;
        assert(var_explicitGramFlag != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_40 = var_explicitGramFlag == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_left_value_31;
        PyObject *tmp_left_value_32;
        PyObject *tmp_right_value_31;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_right_value_32;
        CHECK_OBJECT(var_gramRAR);
        tmp_left_value_32 = var_gramRAR;
        CHECK_OBJECT(var_gramRAR);
        tmp_expression_value_47 = var_gramRAR;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[4]);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 536;
        tmp_right_value_31 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[5]);
        Py_DECREF(tmp_called_instance_17);
        if (tmp_right_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_32, tmp_right_value_31);
        Py_DECREF(tmp_right_value_31);
        if (tmp_left_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_32 = mod_consts[18];
        tmp_assign_source_132 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_31, tmp_right_value_32);
        Py_DECREF(tmp_left_value_31);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRAR;
            assert(old != NULL);
            var_gramRAR = tmp_assign_source_132;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_78;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[27]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_49);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_49 = var_blockVectorX;
        tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[4]);
        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 537;
        tmp_args_element_value_77 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[5]);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAX == NULL) {
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_77);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_78 = var_blockVectorAX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_49, call_args);
        }

        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAX;
            var_gramXAX = tmp_assign_source_133;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_left_value_33;
        PyObject *tmp_left_value_34;
        PyObject *tmp_right_value_33;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_right_value_34;
        CHECK_OBJECT(var_gramXAX);
        tmp_left_value_34 = var_gramXAX;
        CHECK_OBJECT(var_gramXAX);
        tmp_expression_value_50 = var_gramXAX;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[4]);
        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 538;
        tmp_right_value_33 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[5]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_right_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_34, tmp_right_value_33);
        Py_DECREF(tmp_right_value_33);
        if (tmp_left_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_34 = mod_consts[18];
        tmp_assign_source_134 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_33, tmp_right_value_34);
        Py_DECREF(tmp_left_value_33);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAX;
            assert(old != NULL);
            var_gramXAX = tmp_assign_source_134;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_80;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[27]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = var_blockVectorX;
        tmp_called_instance_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[4]);
        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 539;
        tmp_args_element_value_79 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[5]);
        Py_DECREF(tmp_called_instance_20);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBX == NULL) {
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_79);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_80 = var_blockVectorBX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_assign_source_135 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_50, call_args);
        }

        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBX;
            var_gramXBX = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_82;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[27]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_54 = var_activeBlockVectorR;
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[4]);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 540;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 540;
        tmp_args_element_value_81 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[5]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 540;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_82 = var_activeBlockVectorBR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
            tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRBR;
            var_gramRBR = tmp_assign_source_136;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_84;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[27]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_52);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 541;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = var_blockVectorX;
        tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[4]);
        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 541;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 541;
        tmp_args_element_value_83 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[5]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 541;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_84 = var_activeBlockVectorBR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBR;
            var_gramXBR = tmp_assign_source_137;
            Py_XDECREF(old);
        }

    }
    goto branch_end_39;
    branch_no_39:;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_85;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[126]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var__lambda == NULL) {
            Py_DECREF(tmp_called_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 543;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_85 = var__lambda;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 543;
        tmp_assign_source_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAX;
            var_gramXAX = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_139;
        CHECK_OBJECT(var_ident0);
        tmp_assign_source_139 = var_ident0;
        {
            PyObject *old = var_gramXBX;
            var_gramXBX = tmp_assign_source_139;
            Py_INCREF(var_gramXBX);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        if (var_ident == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 545;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_140 = var_ident;
        {
            PyObject *old = var_gramRBR;
            var_gramRBR = tmp_assign_source_140;
            Py_INCREF(var_gramRBR);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_expression_value_59;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[128]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizeX == NULL) {
            Py_DECREF(tmp_called_value_54);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_19 = var_sizeX;
        tmp_kw_call_arg_value_0_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_7, 0, tmp_tuple_element_19);
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_19 = var_currentBlockSize;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_7, 1, tmp_tuple_element_19);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_kw_call_arg_value_0_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_kw_call_arg_value_0_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = par_A;
        tmp_kw_call_dict_value_0_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_kw_call_arg_value_0_7);

            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 546;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_assign_source_141 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_54, args, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_kw_call_arg_value_0_7);
        Py_DECREF(tmp_kw_call_dict_value_0_7);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBR;
            var_gramXBR = tmp_assign_source_141;
            Py_XDECREF(old);
        }

    }
    branch_end_39:;
    {
        PyObject *tmp_assign_source_142;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_verbosityLevel;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_142 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(tmp_closure_1);

        {
            PyObject *old = var__handle_gramA_gramB_verbosity;
            var__handle_gramA_gramB_verbosity = tmp_assign_source_142;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_4;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 557;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_4 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_87;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[27]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_55);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_61 = var_blockVectorX;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[4]);
        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 558;
        tmp_args_element_value_86 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[5]);
        Py_DECREF(tmp_called_instance_23);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_86);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_87 = var_activeBlockVectorAP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_assign_source_143 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAP;
            var_gramXAP = tmp_assign_source_143;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_89;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[27]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_63 = var_activeBlockVectorR;
        tmp_called_instance_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[4]);
        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 559;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 559;
        tmp_args_element_value_88 = CALL_METHOD_NO_ARGS(tmp_called_instance_24, mod_consts[5]);
        Py_DECREF(tmp_called_instance_24);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 559;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_88);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 559;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_89 = var_activeBlockVectorAP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 559;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_assign_source_144 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_56, call_args);
        }

        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRAP;
            var_gramRAP = tmp_assign_source_144;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_91;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[27]);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_57);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_65 = var_activeBlockVectorP;
        tmp_called_instance_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[4]);
        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 560;
        tmp_args_element_value_90 = CALL_METHOD_NO_ARGS(tmp_called_instance_25, mod_consts[5]);
        Py_DECREF(tmp_called_instance_25);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_90);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_91 = var_activeBlockVectorAP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_assign_source_145 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_57, call_args);
        }

        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramPAP;
            var_gramPAP = tmp_assign_source_145;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_93;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[27]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_58);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_67 = var_blockVectorX;
        tmp_called_instance_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[4]);
        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 561;
        tmp_args_element_value_92 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[5]);
        Py_DECREF(tmp_called_instance_26);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_92);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_93 = var_activeBlockVectorBP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 561;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_assign_source_146 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_58, call_args);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBP;
            var_gramXBP = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_95;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[27]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_69 = var_activeBlockVectorR;
        tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[4]);
        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 562;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 562;
        tmp_args_element_value_94 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[5]);
        Py_DECREF(tmp_called_instance_27);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 562;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_94);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 562;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_95 = var_activeBlockVectorBP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
            tmp_assign_source_147 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_59, call_args);
        }

        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRBP;
            var_gramRBP = tmp_assign_source_147;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_42;
        assert(var_explicitGramFlag != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_42 = var_explicitGramFlag == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_left_value_35;
        PyObject *tmp_left_value_36;
        PyObject *tmp_right_value_35;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_right_value_36;
        CHECK_OBJECT(var_gramPAP);
        tmp_left_value_36 = var_gramPAP;
        CHECK_OBJECT(var_gramPAP);
        tmp_expression_value_70 = var_gramPAP;
        tmp_called_instance_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[4]);
        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 564;
        tmp_right_value_35 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, mod_consts[5]);
        Py_DECREF(tmp_called_instance_28);
        if (tmp_right_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_36, tmp_right_value_35);
        Py_DECREF(tmp_right_value_35);
        if (tmp_left_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_36 = mod_consts[18];
        tmp_assign_source_148 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_35, tmp_right_value_36);
        Py_DECREF(tmp_left_value_35);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramPAP;
            assert(old != NULL);
            var_gramPAP = tmp_assign_source_148;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_97;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[27]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_60);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 565;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_72 = var_activeBlockVectorP;
        tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[4]);
        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 565;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 565;
        tmp_args_element_value_96 = CALL_METHOD_NO_ARGS(tmp_called_instance_29, mod_consts[5]);
        Py_DECREF(tmp_called_instance_29);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 565;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_96);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 566;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_97 = var_activeBlockVectorBP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_assign_source_149 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_60, call_args);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramPBP;
            var_gramPBP = tmp_assign_source_149;
            Py_XDECREF(old);
        }

    }
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assign_source_150;
        if (var_ident == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_150 = var_ident;
        {
            PyObject *old = var_gramPBP;
            var_gramPBP = tmp_assign_source_150;
            Py_INCREF(var_gramPBP);
            Py_XDECREF(old);
        }

    }
    branch_end_41:;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_list_element_2;
        PyObject *tmp_list_element_3;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gramXAX);
        tmp_list_element_3 = var_gramXAX;
        tmp_list_element_2 = PyList_New(3);
        PyList_SET_ITEM0(tmp_list_element_2, 0, tmp_list_element_3);
        CHECK_OBJECT(var_gramXAR);
        tmp_list_element_3 = var_gramXAR;
        PyList_SET_ITEM0(tmp_list_element_2, 1, tmp_list_element_3);
        CHECK_OBJECT(var_gramXAP);
        tmp_list_element_3 = var_gramXAP;
        PyList_SET_ITEM0(tmp_list_element_2, 2, tmp_list_element_3);
        tmp_args_element_value_98 = PyList_New(3);
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_expression_value_74;
            PyList_SET_ITEM(tmp_args_element_value_98, 0, tmp_list_element_2);
            CHECK_OBJECT(var_gramXAR);
            tmp_expression_value_73 = var_gramXAR;
            tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[4]);
            if (tmp_called_instance_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 571;
            tmp_list_element_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_30, mod_consts[5]);
            Py_DECREF(tmp_called_instance_30);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 571;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_2 = PyList_New(3);
            PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_4);
            CHECK_OBJECT(var_gramRAR);
            tmp_list_element_4 = var_gramRAR;
            PyList_SET_ITEM0(tmp_list_element_2, 1, tmp_list_element_4);
            CHECK_OBJECT(var_gramRAP);
            tmp_list_element_4 = var_gramRAP;
            PyList_SET_ITEM0(tmp_list_element_2, 2, tmp_list_element_4);
            PyList_SET_ITEM(tmp_args_element_value_98, 1, tmp_list_element_2);
            CHECK_OBJECT(var_gramXAP);
            tmp_expression_value_74 = var_gramXAP;
            tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[4]);
            if (tmp_called_instance_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 572;
            tmp_list_element_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_31, mod_consts[5]);
            Py_DECREF(tmp_called_instance_31);
            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 572;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_2 = PyList_New(3);
            {
                PyObject *tmp_called_instance_32;
                PyObject *tmp_expression_value_75;
                PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_5);
                CHECK_OBJECT(var_gramRAP);
                tmp_expression_value_75 = var_gramRAP;
                tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[4]);
                if (tmp_called_instance_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 572;
                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_2;
                }
                frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 572;
                tmp_list_element_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, mod_consts[5]);
                Py_DECREF(tmp_called_instance_32);
                if (tmp_list_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 572;
                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_2, 1, tmp_list_element_5);
                CHECK_OBJECT(var_gramPAP);
                tmp_list_element_5 = var_gramPAP;
                PyList_SET_ITEM0(tmp_list_element_2, 2, tmp_list_element_5);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_args_element_value_98, 2, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_98);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 570;
        tmp_assign_source_151 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_98);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramA;
            var_gramA = tmp_assign_source_151;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_list_element_6;
        PyObject *tmp_list_element_7;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gramXBX);
        tmp_list_element_7 = var_gramXBX;
        tmp_list_element_6 = PyList_New(3);
        PyList_SET_ITEM0(tmp_list_element_6, 0, tmp_list_element_7);
        CHECK_OBJECT(var_gramXBR);
        tmp_list_element_7 = var_gramXBR;
        PyList_SET_ITEM0(tmp_list_element_6, 1, tmp_list_element_7);
        CHECK_OBJECT(var_gramXBP);
        tmp_list_element_7 = var_gramXBP;
        PyList_SET_ITEM0(tmp_list_element_6, 2, tmp_list_element_7);
        tmp_args_element_value_99 = PyList_New(3);
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_instance_33;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_list_element_9;
            PyObject *tmp_called_instance_34;
            PyObject *tmp_expression_value_77;
            PyList_SET_ITEM(tmp_args_element_value_99, 0, tmp_list_element_6);
            CHECK_OBJECT(var_gramXBR);
            tmp_expression_value_76 = var_gramXBR;
            tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[4]);
            if (tmp_called_instance_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 574;
            tmp_list_element_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_33, mod_consts[5]);
            Py_DECREF(tmp_called_instance_33);
            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 574;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            tmp_list_element_6 = PyList_New(3);
            PyList_SET_ITEM(tmp_list_element_6, 0, tmp_list_element_8);
            CHECK_OBJECT(var_gramRBR);
            tmp_list_element_8 = var_gramRBR;
            PyList_SET_ITEM0(tmp_list_element_6, 1, tmp_list_element_8);
            CHECK_OBJECT(var_gramRBP);
            tmp_list_element_8 = var_gramRBP;
            PyList_SET_ITEM0(tmp_list_element_6, 2, tmp_list_element_8);
            PyList_SET_ITEM(tmp_args_element_value_99, 1, tmp_list_element_6);
            CHECK_OBJECT(var_gramXBP);
            tmp_expression_value_77 = var_gramXBP;
            tmp_called_instance_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[4]);
            if (tmp_called_instance_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 575;
            tmp_list_element_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_34, mod_consts[5]);
            Py_DECREF(tmp_called_instance_34);
            if (tmp_list_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            tmp_list_element_6 = PyList_New(3);
            {
                PyObject *tmp_called_instance_35;
                PyObject *tmp_expression_value_78;
                PyList_SET_ITEM(tmp_list_element_6, 0, tmp_list_element_9);
                CHECK_OBJECT(var_gramRBP);
                tmp_expression_value_78 = var_gramRBP;
                tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[4]);
                if (tmp_called_instance_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 575;
                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_4;
                }
                frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 575;
                tmp_list_element_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_35, mod_consts[5]);
                Py_DECREF(tmp_called_instance_35);
                if (tmp_list_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 575;
                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_6, 1, tmp_list_element_9);
                CHECK_OBJECT(var_gramPBP);
                tmp_list_element_9 = var_gramPBP;
                PyList_SET_ITEM0(tmp_list_element_6, 2, tmp_list_element_9);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_3;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_99, 2, tmp_list_element_6);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_args_element_value_99);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 573;
        tmp_assign_source_152 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_99);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramB;
            var_gramB = tmp_assign_source_152;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        CHECK_OBJECT(var__handle_gramA_gramB_verbosity);
        tmp_called_value_63 = var__handle_gramA_gramB_verbosity;
        CHECK_OBJECT(var_gramA);
        tmp_args_element_value_100 = var_gramA;
        CHECK_OBJECT(var_gramB);
        tmp_args_element_value_101 = var_gramB;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 577;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_63, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_64;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_5;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        CHECK_OBJECT(var_gramA);
        tmp_tuple_element_20 = var_gramA;
        tmp_args_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_20);
        CHECK_OBJECT(var_gramB);
        tmp_tuple_element_20 = var_gramB;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_20);
        tmp_kwargs_value_5 = PyDict_Copy(mod_consts[80]);
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 580;
        tmp_iter_arg_8 = CALL_FUNCTION(tmp_called_value_64, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_153 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__source_iter;
            tmp_tuple_unpack_8__source_iter = tmp_assign_source_153;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_154 = UNPACK_NEXT(tmp_unpack_19, 0, 2);
        if (tmp_assign_source_154 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 580;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_1;
            tmp_tuple_unpack_8__element_1 = tmp_assign_source_154;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_155 = UNPACK_NEXT(tmp_unpack_20, 1, 2);
        if (tmp_assign_source_155 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 580;
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_2;
            tmp_tuple_unpack_8__element_2 = tmp_assign_source_155;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 580;
                    goto try_except_handler_20;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 580;
            goto try_except_handler_20;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_18;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_156;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_156 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var__lambda;
            var__lambda = tmp_assign_source_156;
            Py_INCREF(var__lambda);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_157;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_157 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_eigBlockVector;
            var_eigBlockVector = tmp_assign_source_157;
            Py_INCREF(var_eigBlockVector);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_19 == NULL) {
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_keeper_lineno_19);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_19, exception_keeper_tb_19);
    PUBLISH_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_43;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        tmp_cmp_expr_left_38 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_38 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_cmp_expr_right_38 == NULL)) {
            tmp_cmp_expr_right_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_cmp_expr_right_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = Py_True;
        {
            PyObject *old = var_restart;
            var_restart = tmp_assign_source_158;
            Py_INCREF(var_restart);
            Py_XDECREF(old);
        }

    }
    goto branch_end_42;
    branch_no_42:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 579;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame) frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
    branch_end_42:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_18;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_18:;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_4;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_restart);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_44 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_list_element_10;
        PyObject *tmp_list_element_11;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_gramXAX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_11 = var_gramXAX;
        tmp_list_element_10 = PyList_New(2);
        PyList_SET_ITEM0(tmp_list_element_10, 0, tmp_list_element_11);
        if (var_gramXAR == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[133]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 587;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto list_build_exception_5;
        }

        tmp_list_element_11 = var_gramXAR;
        PyList_SET_ITEM0(tmp_list_element_10, 1, tmp_list_element_11);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_list_element_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_args_element_value_102 = PyList_New(2);
        {
            PyObject *tmp_list_element_12;
            PyObject *tmp_called_instance_36;
            PyObject *tmp_expression_value_79;
            PyList_SET_ITEM(tmp_args_element_value_102, 0, tmp_list_element_10);
            if (var_gramXAR == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[133]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 588;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_6;
            }

            tmp_expression_value_79 = var_gramXAR;
            tmp_called_instance_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[4]);
            if (tmp_called_instance_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_6;
            }
            frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 588;
            tmp_list_element_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_36, mod_consts[5]);
            Py_DECREF(tmp_called_instance_36);
            if (tmp_list_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 588;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_6;
            }
            tmp_list_element_10 = PyList_New(2);
            PyList_SET_ITEM(tmp_list_element_10, 0, tmp_list_element_12);
            if (var_gramRAR == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 588;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_7;
            }

            tmp_list_element_12 = var_gramRAR;
            PyList_SET_ITEM0(tmp_list_element_10, 1, tmp_list_element_12);
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_list_element_10);
            goto list_build_exception_6;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            PyList_SET_ITEM(tmp_args_element_value_102, 1, tmp_list_element_10);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_args_element_value_102);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 587;
        tmp_assign_source_159 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramA;
            var_gramA = tmp_assign_source_159;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_list_element_13;
        PyObject *tmp_list_element_14;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_gramXBX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 589;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_element_14 = var_gramXBX;
        tmp_list_element_13 = PyList_New(2);
        PyList_SET_ITEM0(tmp_list_element_13, 0, tmp_list_element_14);
        if (var_gramXBR == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[136]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 589;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto list_build_exception_8;
        }

        tmp_list_element_14 = var_gramXBR;
        PyList_SET_ITEM0(tmp_list_element_13, 1, tmp_list_element_14);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_list_element_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_args_element_value_103 = PyList_New(2);
        {
            PyObject *tmp_list_element_15;
            PyObject *tmp_called_instance_37;
            PyObject *tmp_expression_value_80;
            PyList_SET_ITEM(tmp_args_element_value_103, 0, tmp_list_element_13);
            if (var_gramXBR == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[136]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 590;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_9;
            }

            tmp_expression_value_80 = var_gramXBR;
            tmp_called_instance_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[4]);
            if (tmp_called_instance_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_9;
            }
            frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 590;
            tmp_list_element_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_37, mod_consts[5]);
            Py_DECREF(tmp_called_instance_37);
            if (tmp_list_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_list_element_13 = PyList_New(2);
            PyList_SET_ITEM(tmp_list_element_13, 0, tmp_list_element_15);
            if (var_gramRBR == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[137]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 590;
                type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_10;
            }

            tmp_list_element_15 = var_gramRBR;
            PyList_SET_ITEM0(tmp_list_element_13, 1, tmp_list_element_15);
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_list_element_13);
            goto list_build_exception_9;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            PyList_SET_ITEM(tmp_args_element_value_103, 1, tmp_list_element_13);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_args_element_value_103);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 589;
        tmp_assign_source_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramB;
            var_gramB = tmp_assign_source_160;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        if (var__handle_gramA_gramB_verbosity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[129]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 592;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_67 = var__handle_gramA_gramB_verbosity;
        CHECK_OBJECT(var_gramA);
        tmp_args_element_value_104 = var_gramA;
        CHECK_OBJECT(var_gramB);
        tmp_args_element_value_105 = var_gramB;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 592;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_67, call_args);
        }

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_6;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_gramA);
        tmp_tuple_element_21 = var_gramA;
        tmp_args_value_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_21);
        CHECK_OBJECT(var_gramB);
        tmp_tuple_element_21 = var_gramB;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_21);
        tmp_kwargs_value_6 = PyDict_Copy(mod_consts[80]);
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 595;
        tmp_iter_arg_9 = CALL_FUNCTION(tmp_called_value_68, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_161 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__source_iter;
            tmp_tuple_unpack_9__source_iter = tmp_assign_source_161;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_162 = UNPACK_NEXT(tmp_unpack_21, 0, 2);
        if (tmp_assign_source_162 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 595;
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_1;
            tmp_tuple_unpack_9__element_1 = tmp_assign_source_162;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_163 = UNPACK_NEXT(tmp_unpack_22, 1, 2);
        if (tmp_assign_source_163 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 595;
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_2;
            tmp_tuple_unpack_9__element_2 = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 595;
                    goto try_except_handler_24;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 595;
            goto try_except_handler_24;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_23;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_22;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_23 == NULL) {
        exception_keeper_tb_23 = MAKE_TRACEBACK(frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_keeper_lineno_23);
    } else if (exception_keeper_lineno_23 != 0) {
        exception_keeper_tb_23 = ADD_TRACEBACK(exception_keeper_tb_23, frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_keeper_lineno_23);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_23, &exception_keeper_value_23, &exception_keeper_tb_23);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_23, exception_keeper_tb_23);
    PUBLISH_EXCEPTION(&exception_keeper_type_23, &exception_keeper_value_23, &exception_keeper_tb_23);
    // Tried code:
    {
        bool tmp_condition_result_45;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        tmp_cmp_expr_left_39 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_39 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_cmp_expr_right_39 == NULL)) {
            tmp_cmp_expr_right_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_cmp_expr_right_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[138];
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 598;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 598;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto try_except_handler_25;
    }
    goto branch_end_44;
    branch_no_44:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 594;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame) frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
    branch_end_44:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_164;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_164 = tmp_tuple_unpack_9__element_1;
        {
            PyObject *old = var__lambda;
            var__lambda = tmp_assign_source_164;
            Py_INCREF(var__lambda);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_165 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = var_eigBlockVector;
            var_eigBlockVector = tmp_assign_source_165;
            Py_INCREF(var_eigBlockVector);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    branch_no_43:;
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_106 = var__lambda;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_107 = var_sizeX;
        if (par_largest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 600;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_108 = par_largest;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 600;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_assign_source_166 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_69, call_args);
        }

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 600;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            assert(old != NULL);
            var_ii = tmp_assign_source_166;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 601;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_40 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_40 = mod_consts[7];
        tmp_condition_result_46 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
        assert(tmp_condition_result_46 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_109;
        tmp_called_value_70 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_70 != NULL);
        CHECK_OBJECT(var_ii);
        tmp_args_element_value_109 = var_ii;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 602;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_109);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_110;
        tmp_called_value_71 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_71 != NULL);
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 603;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_110 = var__lambda;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 603;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_110);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_45:;
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_12;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_81 = var__lambda;
        CHECK_OBJECT(var_ii);
        tmp_subscript_value_12 = var_ii;
        tmp_assign_source_167 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_12);
        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__lambda;
            var__lambda = tmp_assign_source_167;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_22;
        if (var_eigBlockVector == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 606;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_82 = var_eigBlockVector;
        tmp_tuple_element_22 = mod_consts[83];
        tmp_subscript_value_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_22);
        CHECK_OBJECT(var_ii);
        tmp_tuple_element_22 = var_ii;
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 1, tmp_tuple_element_22);
        tmp_assign_source_168 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVector;
            var_eigBlockVector = tmp_assign_source_168;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_111;
        if (var_lambdaHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 608;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_38 = var_lambdaHistory;
        CHECK_OBJECT(var__lambda);
        tmp_args_element_value_111 = var__lambda;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 608;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_38, mod_consts[96], tmp_args_element_value_111);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 608;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 610;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_41 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_41 = mod_consts[7];
        tmp_condition_result_47 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
        assert(tmp_condition_result_47 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_46:;
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        tmp_called_value_72 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_72 != NULL);
        tmp_args_element_value_112 = mod_consts[141];
        CHECK_OBJECT(var__lambda);
        tmp_args_element_value_113 = var__lambda;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 611;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_72, call_args);
        }

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 618;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_42 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_42 = mod_consts[7];
        tmp_condition_result_48 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 618;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
        assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_47:;
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_114;
        tmp_called_value_73 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_73 != NULL);
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_114 = var_eigBlockVector;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 619;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_114);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 619;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_no_47:;
    {
        bool tmp_condition_result_49;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 622;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_43 = par_B;
        tmp_cmp_expr_right_43 = Py_None;
        tmp_condition_result_49 = (tmp_cmp_expr_left_43 != tmp_cmp_expr_right_43) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        bool tmp_condition_result_50;
        PyObject *tmp_operand_value_5;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 623;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_5 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_50 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_83 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 624;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_1 = var_sizeX;
        tmp_subscript_value_14 = MAKE_SLICEOBJ1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_14 == NULL));
        tmp_assign_source_169 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 624;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_169;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_left_value_37;
        PyObject *tmp_right_value_37;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_84 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_1 = var_sizeX;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_37 = var_sizeX;
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 625;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_37 = var_currentBlockSize;
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_37, tmp_right_value_37);
        if (tmp_stop_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_15 == NULL));
        tmp_assign_source_170 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 625;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_170;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_start_value_2;
        PyObject *tmp_left_value_38;
        PyObject *tmp_right_value_38;
        PyObject *tmp_stop_value_3;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_85 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 626;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_38 = var_sizeX;
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 626;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_38 = var_currentBlockSize;
        tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_38, tmp_right_value_38);
        if (tmp_start_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_3 = Py_None;
        tmp_subscript_value_16 = MAKE_SLICEOBJ2(tmp_start_value_2, tmp_stop_value_3);
        Py_DECREF(tmp_start_value_2);
        assert(!(tmp_subscript_value_16 == NULL));
        tmp_assign_source_171 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_16);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorP;
            var_eigBlockVectorP = tmp_assign_source_171;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_115 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_116 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 628;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_assign_source_172 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_39,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_172;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_left_value_39;
        PyObject *tmp_right_value_39;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        CHECK_OBJECT(var_pp);
        tmp_left_value_39 = var_pp;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[27]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_74);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 629;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_117 = var_activeBlockVectorP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_118 = var_eigBlockVectorP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 629;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_right_value_39 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_74, call_args);
        }

        Py_DECREF(tmp_called_value_74);
        if (tmp_right_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_39, tmp_right_value_39);
        Py_DECREF(tmp_right_value_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_173 = tmp_left_value_39;
        var_pp = tmp_assign_source_173;

    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_119 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_120 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 631;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_assign_source_174 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_40,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_174;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_left_value_40;
        PyObject *tmp_right_value_40;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        CHECK_OBJECT(var_app);
        tmp_left_value_40 = var_app;
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[27]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_75);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 632;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_121 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_122 = var_eigBlockVectorP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 632;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_right_value_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_75, call_args);
        }

        Py_DECREF(tmp_called_value_75);
        if (tmp_right_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_40, tmp_right_value_40);
        Py_DECREF(tmp_right_value_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 632;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_175 = tmp_left_value_40;
        var_app = tmp_assign_source_175;

    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_instance_41;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_123 = var_activeBlockVectorBR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_124 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 634;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_assign_source_176 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_41,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_bpp;
            var_bpp = tmp_assign_source_176;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_left_value_41;
        PyObject *tmp_right_value_41;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        CHECK_OBJECT(var_bpp);
        tmp_left_value_41 = var_bpp;
        tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_88 == NULL)) {
            tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[27]);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_76);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 635;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_125 = var_activeBlockVectorBP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_126 = var_eigBlockVectorP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 635;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_right_value_41 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_76, call_args);
        }

        Py_DECREF(tmp_called_value_76);
        if (tmp_right_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_41, tmp_right_value_41);
        Py_DECREF(tmp_right_value_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_177 = tmp_left_value_41;
        var_bpp = tmp_assign_source_177;

    }
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_stop_value_4;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_89 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 637;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_4 = var_sizeX;
        tmp_subscript_value_17 = MAKE_SLICEOBJ1(tmp_stop_value_4);
        assert(!(tmp_subscript_value_17 == NULL));
        tmp_assign_source_178 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 637;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_178;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_5;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_90 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 638;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_3 = var_sizeX;
        tmp_stop_value_5 = Py_None;
        tmp_subscript_value_18 = MAKE_SLICEOBJ2(tmp_start_value_3, tmp_stop_value_5);
        assert(!(tmp_subscript_value_18 == NULL));
        tmp_assign_source_179 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 638;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_179;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_127 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_128 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 640;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_assign_source_180 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_42,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_180;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_instance_43;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_43 == NULL)) {
            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_129 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_130 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 641;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_assign_source_181 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_43,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_181;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_instance_44;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_131 = var_activeBlockVectorBR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_132 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 642;
        {
            PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_assign_source_182 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_44,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 642;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_bpp;
            var_bpp = tmp_assign_source_182;
            Py_XDECREF(old);
        }

    }
    branch_end_49:;
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 644;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_44 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_44 = mod_consts[7];
        tmp_condition_result_51 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        if (tmp_condition_result_51 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 644;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
        assert(tmp_condition_result_51 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_50:;
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_133;
        tmp_called_value_77 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_77 != NULL);
        CHECK_OBJECT(var_pp);
        tmp_args_element_value_133 = var_pp;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 645;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_77, tmp_args_element_value_133);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_134;
        tmp_called_value_78 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_78 != NULL);
        CHECK_OBJECT(var_app);
        tmp_args_element_value_134 = var_app;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 646;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_134);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_135;
        tmp_called_value_79 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_79 != NULL);
        CHECK_OBJECT(var_bpp);
        tmp_args_element_value_135 = var_bpp;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 647;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_135);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_no_50:;
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_left_value_42;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_right_value_42;
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[27]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_80);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 649;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_136 = var_blockVectorX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_137 = var_eigBlockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 649;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137};
            tmp_left_value_42 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_called_value_80);
        if (tmp_left_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pp);
        tmp_right_value_42 = var_pp;
        tmp_assign_source_183 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_42, tmp_right_value_42);
        Py_DECREF(tmp_left_value_42);
        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorX;
            var_blockVectorX = tmp_assign_source_183;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_left_value_43;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_right_value_43;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[27]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAX == NULL) {
            Py_DECREF(tmp_called_value_81);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 650;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_138 = var_blockVectorAX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_139 = var_eigBlockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 650;
        {
            PyObject *call_args[] = {tmp_args_element_value_138, tmp_args_element_value_139};
            tmp_left_value_43 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_81, call_args);
        }

        Py_DECREF(tmp_called_value_81);
        if (tmp_left_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_right_value_43 = var_app;
        tmp_assign_source_184 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_43, tmp_right_value_43);
        Py_DECREF(tmp_left_value_43);
        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorAX;
            var_blockVectorAX = tmp_assign_source_184;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_left_value_44;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_right_value_44;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[27]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBX == NULL) {
            Py_DECREF(tmp_called_value_82);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 651;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_140 = var_blockVectorBX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_141 = var_eigBlockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 651;
        {
            PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141};
            tmp_left_value_44 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_82, call_args);
        }

        Py_DECREF(tmp_called_value_82);
        if (tmp_left_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bpp);
        tmp_right_value_44 = var_bpp;
        tmp_assign_source_185 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_44, tmp_right_value_44);
        Py_DECREF(tmp_left_value_44);
        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorBX;
            var_blockVectorBX = tmp_assign_source_185;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_tuple_element_23;
        CHECK_OBJECT(var_pp);
        tmp_tuple_element_23 = var_pp;
        tmp_iter_arg_10 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_iter_arg_10, 0, tmp_tuple_element_23);
        CHECK_OBJECT(var_app);
        tmp_tuple_element_23 = var_app;
        PyTuple_SET_ITEM0(tmp_iter_arg_10, 1, tmp_tuple_element_23);
        CHECK_OBJECT(var_bpp);
        tmp_tuple_element_23 = var_bpp;
        PyTuple_SET_ITEM0(tmp_iter_arg_10, 2, tmp_tuple_element_23);
        tmp_assign_source_186 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        assert(!(tmp_assign_source_186 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_186;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_23 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_187 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_23);
        assert(!(tmp_assign_source_187 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_187;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_24 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_188 = UNPACK_NEXT(tmp_unpack_24, 1, 3);
        if (tmp_assign_source_188 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 653;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_188;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_25 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_189 = UNPACK_NEXT(tmp_unpack_25, 2, 3);
        if (tmp_assign_source_189 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 653;
            goto try_except_handler_27;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_3;
            tmp_tuple_unpack_10__element_3 = tmp_assign_source_189;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 653;
                    goto try_except_handler_27;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[142];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 653;
            goto try_except_handler_27;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
    Py_DECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_3);
    tmp_tuple_unpack_10__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_190;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_190 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_blockVectorP;
            var_blockVectorP = tmp_assign_source_190;
            Py_INCREF(var_blockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_191;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_191 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_blockVectorAP;
            var_blockVectorAP = tmp_assign_source_191;
            Py_INCREF(var_blockVectorAP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    {
        PyObject *tmp_assign_source_192;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_3);
        tmp_assign_source_192 = tmp_tuple_unpack_10__element_3;
        {
            PyObject *old = var_blockVectorBP;
            var_blockVectorBP = tmp_assign_source_192;
            Py_INCREF(var_blockVectorBP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_3);
    tmp_tuple_unpack_10__element_3 = NULL;

    goto branch_end_48;
    branch_no_48:;
    {
        bool tmp_condition_result_52;
        PyObject *tmp_operand_value_6;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 656;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_6 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_stop_value_6;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_94 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 657;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_6 = var_sizeX;
        tmp_subscript_value_19 = MAKE_SLICEOBJ1(tmp_stop_value_6);
        assert(!(tmp_subscript_value_19 == NULL));
        tmp_assign_source_193 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 657;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_193;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_start_value_4;
        PyObject *tmp_stop_value_7;
        PyObject *tmp_left_value_45;
        PyObject *tmp_right_value_45;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_95 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 658;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_4 = var_sizeX;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 658;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_45 = var_sizeX;
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 658;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_45 = var_currentBlockSize;
        tmp_stop_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_45, tmp_right_value_45);
        if (tmp_stop_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = MAKE_SLICEOBJ2(tmp_start_value_4, tmp_stop_value_7);
        Py_DECREF(tmp_stop_value_7);
        assert(!(tmp_subscript_value_20 == NULL));
        tmp_assign_source_194 = LOOKUP_SUBSCRIPT(tmp_expression_value_95, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_assign_source_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_194;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_start_value_5;
        PyObject *tmp_left_value_46;
        PyObject *tmp_right_value_46;
        PyObject *tmp_stop_value_8;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_96 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 659;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_46 = var_sizeX;
        if (var_currentBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 659;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_46 = var_currentBlockSize;
        tmp_start_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_46, tmp_right_value_46);
        if (tmp_start_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_8 = Py_None;
        tmp_subscript_value_21 = MAKE_SLICEOBJ2(tmp_start_value_5, tmp_stop_value_8);
        Py_DECREF(tmp_start_value_5);
        assert(!(tmp_subscript_value_21 == NULL));
        tmp_assign_source_195 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_assign_source_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorP;
            var_eigBlockVectorP = tmp_assign_source_195;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_142 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_143 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 661;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143};
            tmp_assign_source_196 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_45,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 661;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_196;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_left_value_47;
        PyObject *tmp_right_value_47;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_args_element_value_145;
        CHECK_OBJECT(var_pp);
        tmp_left_value_47 = var_pp;
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[27]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_83);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 662;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_144 = var_activeBlockVectorP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_145 = var_eigBlockVectorP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 662;
        {
            PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145};
            tmp_right_value_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_83, call_args);
        }

        Py_DECREF(tmp_called_value_83);
        if (tmp_right_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_47, tmp_right_value_47);
        Py_DECREF(tmp_right_value_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_197 = tmp_left_value_47;
        var_pp = tmp_assign_source_197;

    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        tmp_called_instance_46 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_46 == NULL)) {
            tmp_called_instance_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_146 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_147 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 664;
        {
            PyObject *call_args[] = {tmp_args_element_value_146, tmp_args_element_value_147};
            tmp_assign_source_198 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_46,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_198;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_left_value_48;
        PyObject *tmp_right_value_48;
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        CHECK_OBJECT(var_app);
        tmp_left_value_48 = var_app;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[27]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_84);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 665;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_148 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_149 = var_eigBlockVectorP;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 665;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149};
            tmp_right_value_48 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_84, call_args);
        }

        Py_DECREF(tmp_called_value_84);
        if (tmp_right_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_48, tmp_right_value_48);
        Py_DECREF(tmp_right_value_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_199 = tmp_left_value_48;
        var_app = tmp_assign_source_199;

    }
    goto branch_end_51;
    branch_no_51:;
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_stop_value_9;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_99 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 667;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_9 = var_sizeX;
        tmp_subscript_value_22 = MAKE_SLICEOBJ1(tmp_stop_value_9);
        assert(!(tmp_subscript_value_22 == NULL));
        tmp_assign_source_200 = LOOKUP_SUBSCRIPT(tmp_expression_value_99, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_200;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_start_value_6;
        PyObject *tmp_stop_value_10;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_100 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 668;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_6 = var_sizeX;
        tmp_stop_value_10 = Py_None;
        tmp_subscript_value_23 = MAKE_SLICEOBJ2(tmp_start_value_6, tmp_stop_value_10);
        assert(!(tmp_subscript_value_23 == NULL));
        tmp_assign_source_201 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_23);
        Py_DECREF(tmp_subscript_value_23);
        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_201;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_args_element_value_151;
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_150 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_151 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 670;
        {
            PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151};
            tmp_assign_source_202 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_47,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 670;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_202;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_152 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_153 = var_eigBlockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 671;
        {
            PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153};
            tmp_assign_source_203 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_48,
                mod_consts[27],
                call_args
            );
        }

        if (tmp_assign_source_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_203;
            Py_XDECREF(old);
        }

    }
    branch_end_51:;
    {
        nuitka_bool tmp_condition_result_53;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 673;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_45 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_45 = mod_consts[7];
        tmp_condition_result_53 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_45, tmp_cmp_expr_right_45);
        if (tmp_condition_result_53 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
        assert(tmp_condition_result_53 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_52:;
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_154;
        tmp_called_value_85 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_85 != NULL);
        CHECK_OBJECT(var_pp);
        tmp_args_element_value_154 = var_pp;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 674;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_85, tmp_args_element_value_154);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_155;
        tmp_called_value_86 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_86 != NULL);
        CHECK_OBJECT(var_app);
        tmp_args_element_value_155 = var_app;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 675;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_155);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    branch_no_52:;
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_left_value_49;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_right_value_49;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[27]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_87);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 677;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_156 = var_blockVectorX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_157 = var_eigBlockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 677;
        {
            PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157};
            tmp_left_value_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_87, call_args);
        }

        Py_DECREF(tmp_called_value_87);
        if (tmp_left_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pp);
        tmp_right_value_49 = var_pp;
        tmp_assign_source_204 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_49, tmp_right_value_49);
        Py_DECREF(tmp_left_value_49);
        if (tmp_assign_source_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 677;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorX;
            var_blockVectorX = tmp_assign_source_204;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_left_value_50;
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_right_value_50;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[27]);
        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAX == NULL) {
            Py_DECREF(tmp_called_value_88);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 678;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_158 = var_blockVectorAX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_159 = var_eigBlockVectorX;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 678;
        {
            PyObject *call_args[] = {tmp_args_element_value_158, tmp_args_element_value_159};
            tmp_left_value_50 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_88, call_args);
        }

        Py_DECREF(tmp_called_value_88);
        if (tmp_left_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_right_value_50 = var_app;
        tmp_assign_source_205 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_50, tmp_right_value_50);
        Py_DECREF(tmp_left_value_50);
        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorAX;
            var_blockVectorAX = tmp_assign_source_205;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_tuple_element_24;
        CHECK_OBJECT(var_pp);
        tmp_tuple_element_24 = var_pp;
        tmp_iter_arg_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_11, 0, tmp_tuple_element_24);
        CHECK_OBJECT(var_app);
        tmp_tuple_element_24 = var_app;
        PyTuple_SET_ITEM0(tmp_iter_arg_11, 1, tmp_tuple_element_24);
        tmp_assign_source_206 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        assert(!(tmp_assign_source_206 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_11__source_iter;
            tmp_tuple_unpack_11__source_iter = tmp_assign_source_206;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_26 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_207 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_26);
        assert(!(tmp_assign_source_207 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_11__element_1;
            tmp_tuple_unpack_11__element_1 = tmp_assign_source_207;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_27 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_208 = UNPACK_NEXT(tmp_unpack_27, 1, 2);
        if (tmp_assign_source_208 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 680;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_2;
            tmp_tuple_unpack_11__element_2 = tmp_assign_source_208;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
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

                    type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    exception_lineno = 680;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[46];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            exception_lineno = 680;
            goto try_except_handler_29;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
    Py_DECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_209;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
        tmp_assign_source_209 = tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = var_blockVectorP;
            var_blockVectorP = tmp_assign_source_209;
            Py_INCREF(var_blockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_210;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
        tmp_assign_source_210 = tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = var_blockVectorAP;
            var_blockVectorAP = tmp_assign_source_210;
            Py_INCREF(var_blockVectorAP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;

    branch_end_48:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 418;
        type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        bool tmp_condition_result_54;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 682;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_46 = par_B;
        tmp_cmp_expr_right_46 = Py_None;
        tmp_condition_result_54 = (tmp_cmp_expr_left_46 != tmp_cmp_expr_right_46) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_left_value_51;
        PyObject *tmp_right_value_51;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_104;
        if (var_blockVectorBX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 683;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_51 = var_blockVectorBX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 683;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_103 = var__lambda;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[91]);
        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_25);
        tmp_tuple_element_25 = mod_consts[83];
        PyTuple_SET_ITEM0(tmp_subscript_value_24, 1, tmp_tuple_element_25);
        tmp_right_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_24);
        Py_DECREF(tmp_subscript_value_24);
        if (tmp_right_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_211 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_51, tmp_right_value_51);
        Py_DECREF(tmp_right_value_51);
        if (tmp_assign_source_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_211;
            Py_XDECREF(old);
        }

    }
    goto branch_end_53;
    branch_no_53:;
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_left_value_52;
        PyObject *tmp_right_value_52;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_106;
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 686;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_52 = var_blockVectorX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 686;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_105 = var__lambda;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[91]);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_26);
        tmp_tuple_element_26 = mod_consts[83];
        PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_26);
        tmp_right_value_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_105, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_right_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_212 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_52, tmp_right_value_52);
        Py_DECREF(tmp_right_value_52);
        if (tmp_assign_source_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 686;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_212;
            Py_XDECREF(old);
        }

    }
    branch_end_53:;
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_left_value_53;
        PyObject *tmp_right_value_53;
        if (var_blockVectorAX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 688;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_53 = var_blockVectorAX;
        CHECK_OBJECT(var_aux);
        tmp_right_value_53 = var_aux;
        tmp_assign_source_213 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_53, tmp_right_value_53);
        if (tmp_assign_source_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 688;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorR;
            var_blockVectorR = tmp_assign_source_213;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_left_value_54;
        PyObject *tmp_called_instance_49;
        PyObject *tmp_right_value_54;
        PyObject *tmp_args_element_value_161;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[94]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_called_instance_49 = var_blockVectorR;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 690;
        tmp_left_value_54 = CALL_METHOD_NO_ARGS(tmp_called_instance_49, mod_consts[5]);
        if (tmp_left_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 690;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_right_value_54 = var_blockVectorR;
        tmp_args_element_value_160 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_54, tmp_right_value_54);
        Py_DECREF(tmp_left_value_54);
        if (tmp_args_element_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 690;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = mod_consts[2];
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 690;
        {
            PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161};
            tmp_assign_source_214 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_89, call_args);
        }

        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_element_value_160);
        if (tmp_assign_source_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_214;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_called_instance_50;
        PyObject *tmp_args_element_value_162;
        tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_50 == NULL)) {
            tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_162 = var_aux;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 691;
        tmp_assign_source_215 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_50, mod_consts[73], tmp_args_element_value_162);
        if (tmp_assign_source_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_residualNorms;
            var_residualNorms = tmp_assign_source_215;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 698;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_47 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_47 = mod_consts[2];
        tmp_condition_result_55 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_47, tmp_cmp_expr_right_47);
        if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 698;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
        assert(tmp_condition_result_55 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_54:;
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        tmp_called_value_90 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_90 != NULL);
        tmp_args_element_value_163 = mod_consts[143];
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 699;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_164 = var__lambda;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 699;
        {
            PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_90, call_args);
        }

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_args_element_value_166;
        tmp_called_value_91 = LOOKUP_BUILTIN(mod_consts[13]);
        assert(tmp_called_value_91 != NULL);
        tmp_args_element_value_165 = mod_consts[144];
        CHECK_OBJECT(var_residualNorms);
        tmp_args_element_value_166 = var_residualNorms;
        frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame.f_lineno = 700;
        {
            PyObject *call_args[] = {tmp_args_element_value_165, tmp_args_element_value_166};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_91, call_args);
        }

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 700;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    branch_no_54:;
    {
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_retLambdaHistory);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_retLambdaHistory);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 702;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_56 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_retResidualNormsHistory);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_retResidualNormsHistory);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 703;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_57 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_tuple_element_27;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 704;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_27 = var__lambda;
        tmp_return_value = PyTuple_New(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_27);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 704;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_27 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_27);
        if (var_lambdaHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 704;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_27 = var_lambdaHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_27);
        if (var_residualNormsHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 704;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_9;
        }

        tmp_tuple_element_27 = var_residualNormsHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_27);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        goto frame_return_exit_1;
    }
    goto branch_end_56;
    branch_no_56:;
    {
        PyObject *tmp_tuple_element_28;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 706;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_28 = var__lambda;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_28);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 706;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_10;
        }

        tmp_tuple_element_28 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_28);
        if (var_lambdaHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 706;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_10;
        }

        tmp_tuple_element_28 = var_lambdaHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_28);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        goto frame_return_exit_1;
    }
    branch_end_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        nuitka_bool tmp_condition_result_58;
        int tmp_truth_name_7;
        CHECK_OBJECT(par_retResidualNormsHistory);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_retResidualNormsHistory);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_58 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_tuple_element_29;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 709;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_29 = var__lambda;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_29);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 709;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_11;
        }

        tmp_tuple_element_29 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_29);
        if (var_residualNormsHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 709;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_11;
        }

        tmp_tuple_element_29 = var_residualNormsHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_29);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        goto frame_return_exit_1;
    }
    goto branch_end_57;
    branch_no_57:;
    {
        PyObject *tmp_tuple_element_30;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 711;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_30 = var__lambda;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_30);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 711;
            type_description_1 = "oooooooocooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_12;
        }

        tmp_tuple_element_30 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_30);
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        goto frame_return_exit_1;
    }
    branch_end_57:;
    branch_end_55:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ca6486b1ac0690d1575ba4467c9dc75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ca6486b1ac0690d1575ba4467c9dc75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5ca6486b1ac0690d1575ba4467c9dc75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ca6486b1ac0690d1575ba4467c9dc75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ca6486b1ac0690d1575ba4467c9dc75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ca6486b1ac0690d1575ba4467c9dc75,
        type_description_1,
        par_A,
        par_X,
        par_B,
        par_M,
        par_Y,
        par_tol,
        par_maxiter,
        par_largest,
        par_verbosityLevel,
        par_retLambdaHistory,
        par_retResidualNormsHistory,
        var_blockVectorX,
        var_blockVectorY,
        var_residualTolerance,
        var_sizeY,
        var_n,
        var_sizeX,
        var_aux,
        var_eigvals,
        var_A_dense,
        var_B_dense,
        var_vals,
        var_vecs,
        var_blockVectorBY,
        var_gramYBY,
        var_blockVectorBX,
        var_blockVectorAX,
        var_gramXAX,
        var__lambda,
        var_eigBlockVector,
        var_ii,
        var_activeMask,
        var_lambdaHistory,
        var_residualNormsHistory,
        var_previousBlockSize,
        var_ident,
        var_ident0,
        var_blockVectorP,
        var_blockVectorAP,
        var_blockVectorBP,
        var_iterationNumber,
        var_restart,
        (int)var_explicitGramFlag,
        var_blockVectorR,
        var_residualNorms,
        var_currentBlockSize,
        var_activeBlockVectorR,
        var_activeBlockVectorP,
        var_activeBlockVectorAP,
        var_activeBlockVectorBP,
        var_activeBlockVectorBR,
        var_activeBlockVectorAR,
        var_invR,
        var_normal,
        var__,
        var_myeps,
        var_gramXAR,
        var_gramRAR,
        var_gramXBX,
        var_gramRBR,
        var_gramXBR,
        var__handle_gramA_gramB_verbosity,
        var_gramXAP,
        var_gramRAP,
        var_gramPAP,
        var_gramXBP,
        var_gramRBP,
        var_gramPBP,
        var_gramA,
        var_gramB,
        var_eigBlockVectorX,
        var_eigBlockVectorR,
        var_eigBlockVectorP,
        var_pp,
        var_app,
        var_bpp
    );


    // Release cached frame if used for exception.
    if (frame_5ca6486b1ac0690d1575ba4467c9dc75 == cache_frame_5ca6486b1ac0690d1575ba4467c9dc75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5ca6486b1ac0690d1575ba4467c9dc75);
        cache_frame_5ca6486b1ac0690d1575ba4467c9dc75 = NULL;
    }

    assertFrameObject(frame_5ca6486b1ac0690d1575ba4467c9dc75);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_M);
    par_M = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    Py_XDECREF(var_blockVectorX);
    var_blockVectorX = NULL;
    Py_XDECREF(var_blockVectorY);
    var_blockVectorY = NULL;
    Py_XDECREF(var_residualTolerance);
    var_residualTolerance = NULL;
    Py_XDECREF(var_sizeY);
    var_sizeY = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_sizeX);
    var_sizeX = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    Py_XDECREF(var_eigvals);
    var_eigvals = NULL;
    Py_XDECREF(var_A_dense);
    var_A_dense = NULL;
    Py_XDECREF(var_B_dense);
    var_B_dense = NULL;
    Py_XDECREF(var_vals);
    var_vals = NULL;
    Py_XDECREF(var_vecs);
    var_vecs = NULL;
    Py_XDECREF(var_blockVectorBY);
    var_blockVectorBY = NULL;
    Py_XDECREF(var_gramYBY);
    var_gramYBY = NULL;
    Py_XDECREF(var_blockVectorBX);
    var_blockVectorBX = NULL;
    Py_XDECREF(var_blockVectorAX);
    var_blockVectorAX = NULL;
    Py_XDECREF(var_gramXAX);
    var_gramXAX = NULL;
    Py_XDECREF(var__lambda);
    var__lambda = NULL;
    Py_XDECREF(var_eigBlockVector);
    var_eigBlockVector = NULL;
    Py_XDECREF(var_ii);
    var_ii = NULL;
    Py_XDECREF(var_activeMask);
    var_activeMask = NULL;
    Py_XDECREF(var_lambdaHistory);
    var_lambdaHistory = NULL;
    Py_XDECREF(var_residualNormsHistory);
    var_residualNormsHistory = NULL;
    Py_XDECREF(var_previousBlockSize);
    var_previousBlockSize = NULL;
    Py_XDECREF(var_ident);
    var_ident = NULL;
    Py_XDECREF(var_ident0);
    var_ident0 = NULL;
    Py_XDECREF(var_blockVectorP);
    var_blockVectorP = NULL;
    Py_XDECREF(var_blockVectorAP);
    var_blockVectorAP = NULL;
    Py_XDECREF(var_blockVectorBP);
    var_blockVectorBP = NULL;
    Py_XDECREF(var_iterationNumber);
    var_iterationNumber = NULL;
    Py_XDECREF(var_restart);
    var_restart = NULL;
    var_explicitGramFlag = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_blockVectorR);
    var_blockVectorR = NULL;
    Py_XDECREF(var_residualNorms);
    var_residualNorms = NULL;
    Py_XDECREF(var_currentBlockSize);
    var_currentBlockSize = NULL;
    Py_XDECREF(var_activeBlockVectorR);
    var_activeBlockVectorR = NULL;
    Py_XDECREF(var_activeBlockVectorP);
    var_activeBlockVectorP = NULL;
    Py_XDECREF(var_activeBlockVectorAP);
    var_activeBlockVectorAP = NULL;
    Py_XDECREF(var_activeBlockVectorBP);
    var_activeBlockVectorBP = NULL;
    Py_XDECREF(var_activeBlockVectorBR);
    var_activeBlockVectorBR = NULL;
    Py_XDECREF(var_activeBlockVectorAR);
    var_activeBlockVectorAR = NULL;
    Py_XDECREF(var_invR);
    var_invR = NULL;
    Py_XDECREF(var_normal);
    var_normal = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_myeps);
    var_myeps = NULL;
    Py_XDECREF(var_gramXAR);
    var_gramXAR = NULL;
    Py_XDECREF(var_gramRAR);
    var_gramRAR = NULL;
    Py_XDECREF(var_gramXBX);
    var_gramXBX = NULL;
    Py_XDECREF(var_gramRBR);
    var_gramRBR = NULL;
    Py_XDECREF(var_gramXBR);
    var_gramXBR = NULL;
    Py_XDECREF(var__handle_gramA_gramB_verbosity);
    var__handle_gramA_gramB_verbosity = NULL;
    Py_XDECREF(var_gramXAP);
    var_gramXAP = NULL;
    Py_XDECREF(var_gramRAP);
    var_gramRAP = NULL;
    Py_XDECREF(var_gramPAP);
    var_gramPAP = NULL;
    Py_XDECREF(var_gramXBP);
    var_gramXBP = NULL;
    Py_XDECREF(var_gramRBP);
    var_gramRBP = NULL;
    Py_XDECREF(var_gramPBP);
    var_gramPBP = NULL;
    Py_XDECREF(var_gramA);
    var_gramA = NULL;
    Py_XDECREF(var_gramB);
    var_gramB = NULL;
    Py_XDECREF(var_eigBlockVectorX);
    var_eigBlockVectorX = NULL;
    Py_XDECREF(var_eigBlockVectorR);
    var_eigBlockVectorR = NULL;
    Py_XDECREF(var_eigBlockVectorP);
    var_eigBlockVectorP = NULL;
    Py_XDECREF(var_pp);
    var_pp = NULL;
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_bpp);
    var_bpp = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_M);
    par_M = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    Py_XDECREF(var_blockVectorX);
    var_blockVectorX = NULL;
    Py_XDECREF(var_blockVectorY);
    var_blockVectorY = NULL;
    Py_XDECREF(var_residualTolerance);
    var_residualTolerance = NULL;
    Py_XDECREF(var_sizeY);
    var_sizeY = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_sizeX);
    var_sizeX = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    Py_XDECREF(var_eigvals);
    var_eigvals = NULL;
    Py_XDECREF(var_A_dense);
    var_A_dense = NULL;
    Py_XDECREF(var_B_dense);
    var_B_dense = NULL;
    Py_XDECREF(var_vals);
    var_vals = NULL;
    Py_XDECREF(var_vecs);
    var_vecs = NULL;
    Py_XDECREF(var_blockVectorBY);
    var_blockVectorBY = NULL;
    Py_XDECREF(var_gramYBY);
    var_gramYBY = NULL;
    Py_XDECREF(var_blockVectorBX);
    var_blockVectorBX = NULL;
    Py_XDECREF(var_blockVectorAX);
    var_blockVectorAX = NULL;
    Py_XDECREF(var_gramXAX);
    var_gramXAX = NULL;
    Py_XDECREF(var__lambda);
    var__lambda = NULL;
    Py_XDECREF(var_eigBlockVector);
    var_eigBlockVector = NULL;
    Py_XDECREF(var_ii);
    var_ii = NULL;
    Py_XDECREF(var_activeMask);
    var_activeMask = NULL;
    Py_XDECREF(var_lambdaHistory);
    var_lambdaHistory = NULL;
    Py_XDECREF(var_residualNormsHistory);
    var_residualNormsHistory = NULL;
    Py_XDECREF(var_previousBlockSize);
    var_previousBlockSize = NULL;
    Py_XDECREF(var_ident);
    var_ident = NULL;
    Py_XDECREF(var_ident0);
    var_ident0 = NULL;
    Py_XDECREF(var_blockVectorP);
    var_blockVectorP = NULL;
    Py_XDECREF(var_blockVectorAP);
    var_blockVectorAP = NULL;
    Py_XDECREF(var_blockVectorBP);
    var_blockVectorBP = NULL;
    Py_XDECREF(var_iterationNumber);
    var_iterationNumber = NULL;
    Py_XDECREF(var_restart);
    var_restart = NULL;
    var_explicitGramFlag = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_blockVectorR);
    var_blockVectorR = NULL;
    Py_XDECREF(var_residualNorms);
    var_residualNorms = NULL;
    Py_XDECREF(var_currentBlockSize);
    var_currentBlockSize = NULL;
    Py_XDECREF(var_activeBlockVectorR);
    var_activeBlockVectorR = NULL;
    Py_XDECREF(var_activeBlockVectorP);
    var_activeBlockVectorP = NULL;
    Py_XDECREF(var_activeBlockVectorAP);
    var_activeBlockVectorAP = NULL;
    Py_XDECREF(var_activeBlockVectorBP);
    var_activeBlockVectorBP = NULL;
    Py_XDECREF(var_activeBlockVectorBR);
    var_activeBlockVectorBR = NULL;
    Py_XDECREF(var_activeBlockVectorAR);
    var_activeBlockVectorAR = NULL;
    Py_XDECREF(var_invR);
    var_invR = NULL;
    Py_XDECREF(var_normal);
    var_normal = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_myeps);
    var_myeps = NULL;
    Py_XDECREF(var_gramXAR);
    var_gramXAR = NULL;
    Py_XDECREF(var_gramRAR);
    var_gramRAR = NULL;
    Py_XDECREF(var_gramXBX);
    var_gramXBX = NULL;
    Py_XDECREF(var_gramRBR);
    var_gramRBR = NULL;
    Py_XDECREF(var_gramXBR);
    var_gramXBR = NULL;
    Py_XDECREF(var__handle_gramA_gramB_verbosity);
    var__handle_gramA_gramB_verbosity = NULL;
    Py_XDECREF(var_gramXAP);
    var_gramXAP = NULL;
    Py_XDECREF(var_gramRAP);
    var_gramRAP = NULL;
    Py_XDECREF(var_gramPAP);
    var_gramPAP = NULL;
    Py_XDECREF(var_gramXBP);
    var_gramXBP = NULL;
    Py_XDECREF(var_gramRBP);
    var_gramRBP = NULL;
    Py_XDECREF(var_gramPBP);
    var_gramPBP = NULL;
    Py_XDECREF(var_gramA);
    var_gramA = NULL;
    Py_XDECREF(var_gramB);
    var_gramB = NULL;
    Py_XDECREF(var_eigBlockVectorX);
    var_eigBlockVectorX = NULL;
    Py_XDECREF(var_eigBlockVectorR);
    var_eigBlockVectorR = NULL;
    Py_XDECREF(var_eigBlockVectorP);
    var_eigBlockVectorP = NULL;
    Py_XDECREF(var_pp);
    var_pp = NULL;
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_bpp);
    var_bpp = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_Y);
    Py_DECREF(par_Y);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);
    CHECK_OBJECT(par_verbosityLevel);
    Py_DECREF(par_verbosityLevel);
    CHECK_OBJECT(par_retLambdaHistory);
    Py_DECREF(par_retLambdaHistory);
    CHECK_OBJECT(par_retResidualNormsHistory);
    Py_DECREF(par_retResidualNormsHistory);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_Y);
    Py_DECREF(par_Y);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);
    CHECK_OBJECT(par_verbosityLevel);
    Py_DECREF(par_verbosityLevel);
    CHECK_OBJECT(par_retLambdaHistory);
    Py_DECREF(par_retLambdaHistory);
    CHECK_OBJECT(par_retResidualNormsHistory);
    Py_DECREF(par_retResidualNormsHistory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_gramA = python_pars[0];
    PyObject *par_gramB = python_pars[1];
    struct Nuitka_FrameObject *frame_8ad1950559886189115f0dd58b03105d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8ad1950559886189115f0dd58b03105d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ad1950559886189115f0dd58b03105d)) {
        Py_XDECREF(cache_frame_8ad1950559886189115f0dd58b03105d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ad1950559886189115f0dd58b03105d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ad1950559886189115f0dd58b03105d = MAKE_FUNCTION_FRAME(codeobj_8ad1950559886189115f0dd58b03105d, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8ad1950559886189115f0dd58b03105d->m_type_description == NULL);
    frame_8ad1950559886189115f0dd58b03105d = cache_frame_8ad1950559886189115f0dd58b03105d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8ad1950559886189115f0dd58b03105d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8ad1950559886189115f0dd58b03105d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_gramA);
        tmp_args_element_value_1 = par_gramA;
        tmp_args_element_value_2 = mod_consts[147];
        frame_8ad1950559886189115f0dd58b03105d->m_frame.f_lineno = 550;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_gramB);
        tmp_args_element_value_3 = par_gramB;
        tmp_args_element_value_4 = mod_consts[148];
        frame_8ad1950559886189115f0dd58b03105d->m_frame.f_lineno = 551;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_2 = mod_consts[7];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[149]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[150];
        if (par_gramA == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 554;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = par_gramA;
        frame_8ad1950559886189115f0dd58b03105d->m_frame.f_lineno = 554;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[149]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[151];
        if (par_gramB == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 555;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_gramB;
        frame_8ad1950559886189115f0dd58b03105d->m_frame.f_lineno = 555;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8ad1950559886189115f0dd58b03105d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8ad1950559886189115f0dd58b03105d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ad1950559886189115f0dd58b03105d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ad1950559886189115f0dd58b03105d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ad1950559886189115f0dd58b03105d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ad1950559886189115f0dd58b03105d,
        type_description_1,
        par_gramA,
        par_gramB,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8ad1950559886189115f0dd58b03105d == cache_frame_8ad1950559886189115f0dd58b03105d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8ad1950559886189115f0dd58b03105d);
        cache_frame_8ad1950559886189115f0dd58b03105d = NULL;
    }

    assertFrameObject(frame_8ad1950559886189115f0dd58b03105d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_gramA);
    Py_DECREF(par_gramA);
    CHECK_OBJECT(par_gramB);
    Py_DECREF(par_gramB);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_gramA);
    Py_DECREF(par_gramA);
    CHECK_OBJECT(par_gramB);
    Py_DECREF(par_gramB);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__1__report_nonhermitian() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__1__report_nonhermitian,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9bf82c5b200514fc6cb2151f4cb8eddc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__2__as2d() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__2__as2d,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73c93a2b5460b7c39e44f0e4d731f2e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__3__makeOperator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__3__makeOperator,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a8134884459abab3db8fd9e9b4b456b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__4__applyConstraints() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__4__applyConstraints,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b3bc5223ee7ab51df3dfbadc4335d79c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__5__b_orthonormalize(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__5__b_orthonormalize,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52ff02a7e01f4456f54416a609cb1f6f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__6__get_indx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__6__get_indx,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc5c0d675bbf62d31c36d55b8fa01dee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ca6486b1ac0690d1575ba4467c9dc75,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        mod_consts[145],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_8ad1950559886189115f0dd58b03105d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
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

function_impl_code functable_scipy$sparse$linalg$eigen$lobpcg$lobpcg[] = {
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__1__report_nonhermitian,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__2__as2d,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__3__makeOperator,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__4__applyConstraints,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__5__b_orthonormalize,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__6__get_indx,
    impl_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg,
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

    function_impl_code *current = functable_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
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

    if (offset > sizeof(functable_scipy$sparse$linalg$eigen$lobpcg$lobpcg) || offset < 0) {
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
        functable_scipy$sparse$linalg$eigen$lobpcg$lobpcg[offset],
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
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
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
PyObject *modulecode_scipy$sparse$linalg$eigen$lobpcg$lobpcg(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.sparse.linalg.eigen.lobpcg.lobpcg");

    // Store the module for future use.
    module_scipy$sparse$linalg$eigen$lobpcg$lobpcg = module;

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
        PRINT_STRING("scipy.sparse.linalg.eigen.lobpcg.lobpcg: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.sparse.linalg.eigen.lobpcg.lobpcg: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.sparse.linalg.eigen.lobpcg.lobpcg: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$sparse$linalg$eigen$lobpcg$lobpcg\n");

    moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg = MODULE_DICT(module_scipy$sparse$linalg$eigen$lobpcg$lobpcg);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[185]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$sparse$linalg$eigen$lobpcg$lobpcg);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_61566c6bb315475febe4346fe73678e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_61566c6bb315475febe4346fe73678e7 = MAKE_MODULE_FRAME(codeobj_61566c6bb315475febe4346fe73678e7, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_61566c6bb315475febe4346fe73678e7);
    assert(Py_REFCNT(frame_61566c6bb315475febe4346fe73678e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[156], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[157], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_3);
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
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 20;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[159]);
        }

        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 20;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_6 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[160]);
        }

        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 20;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_7 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[161]);
        }

        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_7);
    }
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[162];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 21;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[163];
        tmp_level_value_2 = mod_consts[2];
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 22;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_1 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[36],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[36]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_2 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[68],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[68]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[75],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[75]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[28],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[28]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[34],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[34]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[164],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[164]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[37],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[37]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_16);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[165];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[166];
        tmp_level_value_3 = mod_consts[2];
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 24;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[23],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[167];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[168];
        tmp_level_value_4 = mod_consts[2];
        frame_61566c6bb315475febe4346fe73678e7->m_frame.f_lineno = 25;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
                mod_consts[131],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_18);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_61566c6bb315475febe4346fe73678e7);
#endif
    popFrameStack();

    assertFrameObject(frame_61566c6bb315475febe4346fe73678e7);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_61566c6bb315475febe4346fe73678e7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61566c6bb315475febe4346fe73678e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61566c6bb315475febe4346fe73678e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61566c6bb315475febe4346fe73678e7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = LIST_COPY(mod_consts[169]);
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__1__report_nonhermitian();

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__2__as2d();

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__3__makeOperator();

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__4__applyConstraints();

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[171];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_24 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__5__b_orthonormalize(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__6__get_indx();

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[172];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_26 = MAKE_FUNCTION_scipy$sparse$linalg$eigen$lobpcg$lobpcg$$$function__7_lobpcg(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_26);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.sparse.linalg.eigen.lobpcg.lobpcg", false);

    return module_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$sparse$linalg$eigen$lobpcg$lobpcg", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
