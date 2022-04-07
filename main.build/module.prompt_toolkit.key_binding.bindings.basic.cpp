/* Generated code for Python module 'prompt_toolkit.key_binding.bindings.basic'
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

/* The "module_prompt_toolkit$key_binding$bindings$basic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$key_binding$bindings$basic;
PyDictObject *moduledict_prompt_toolkit$key_binding$bindings$basic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[213];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[213];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("prompt_toolkit.key_binding.bindings.basic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 213; i++) {
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
void checkModuleConstants_prompt_toolkit$key_binding$bindings$basic(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 213; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1a266f30f894bf67d753f284898bcbe8;
static PyCodeObject *codeobj_a08fddbd228e4f0516e89551b55e6624;
static PyCodeObject *codeobj_3711584cb69a081971e350b2841a5f6e;
static PyCodeObject *codeobj_5125e65b0a3cd6ce9684bb3ae281f1a4;
static PyCodeObject *codeobj_17a58854a483b8fde084b14e8e4a4717;
static PyCodeObject *codeobj_18e715f7998d0c944536f136cf8eac98;
static PyCodeObject *codeobj_7d08056ae6bf5811f54b74126cf39981;
static PyCodeObject *codeobj_18425cd4ad19a1093b6e93df5511f04d;
static PyCodeObject *codeobj_5c49f61cd8d4106fafed934a4d3b8c7c;
static PyCodeObject *codeobj_5d05c9370ded56e95dd31470848c8edd;
static PyCodeObject *codeobj_b5d97cb89b618b1f6e0885844e379fe4;
static PyCodeObject *codeobj_47c671e6dc750763efbb652428d14b18;
static PyCodeObject *codeobj_80cc7d62d16a3c09a3ea470ef9e32797;
static PyCodeObject *codeobj_31c41cd6471285520e6f3fa4ca17773b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[207]); CHECK_OBJECT(module_filename_obj);
    codeobj_1a266f30f894bf67d753f284898bcbe8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[208], NULL, NULL, 0, 0, 0);
    codeobj_a08fddbd228e4f0516e89551b55e6624 = MAKE_CODEOBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[209], NULL, 1, 0, 0);
    codeobj_3711584cb69a081971e350b2841a5f6e = MAKE_CODEOBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[210], NULL, 1, 0, 0);
    codeobj_5125e65b0a3cd6ce9684bb3ae281f1a4 = MAKE_CODEOBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[210], NULL, 1, 0, 0);
    codeobj_17a58854a483b8fde084b14e8e4a4717 = MAKE_CODEOBJECT(module_filename_obj, 35, CO_NOFREE, mod_consts[100], mod_consts[210], NULL, 1, 0, 0);
    codeobj_18e715f7998d0c944536f136cf8eac98 = MAKE_CODEOBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[210], NULL, 1, 0, 0);
    codeobj_7d08056ae6bf5811f54b74126cf39981 = MAKE_CODEOBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[210], NULL, 1, 0, 0);
    codeobj_18425cd4ad19a1093b6e93df5511f04d = MAKE_CODEOBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[210], NULL, 1, 0, 0);
    codeobj_5c49f61cd8d4106fafed934a4d3b8c7c = MAKE_CODEOBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[210], NULL, 1, 0, 0);
    codeobj_5d05c9370ded56e95dd31470848c8edd = MAKE_CODEOBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[209], NULL, 1, 0, 0);
    codeobj_b5d97cb89b618b1f6e0885844e379fe4 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], NULL, NULL, 0, 0, 0);
    codeobj_47c671e6dc750763efbb652428d14b18 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[210], NULL, 1, 0, 0);
    codeobj_80cc7d62d16a3c09a3ea470ef9e32797 = MAKE_CODEOBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], NULL, NULL, 0, 0, 0);
    codeobj_31c41cd6471285520e6f3fa4ca17773b = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[211], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_47c671e6dc750763efbb652428d14b18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_47c671e6dc750763efbb652428d14b18 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47c671e6dc750763efbb652428d14b18)) {
        Py_XDECREF(cache_frame_47c671e6dc750763efbb652428d14b18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47c671e6dc750763efbb652428d14b18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47c671e6dc750763efbb652428d14b18 = MAKE_FUNCTION_FRAME(codeobj_47c671e6dc750763efbb652428d14b18, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_47c671e6dc750763efbb652428d14b18->m_type_description == NULL);
    frame_47c671e6dc750763efbb652428d14b18 = cache_frame_47c671e6dc750763efbb652428d14b18;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_47c671e6dc750763efbb652428d14b18);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_47c671e6dc750763efbb652428d14b18) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47c671e6dc750763efbb652428d14b18);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47c671e6dc750763efbb652428d14b18);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47c671e6dc750763efbb652428d14b18);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47c671e6dc750763efbb652428d14b18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47c671e6dc750763efbb652428d14b18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47c671e6dc750763efbb652428d14b18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47c671e6dc750763efbb652428d14b18,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_47c671e6dc750763efbb652428d14b18 == cache_frame_47c671e6dc750763efbb652428d14b18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_47c671e6dc750763efbb652428d14b18);
        cache_frame_47c671e6dc750763efbb652428d14b18 = NULL;
    }

    assertFrameObject(frame_47c671e6dc750763efbb652428d14b18);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    PyObject *var_insert_mode = NULL;
    PyObject *var_handle = NULL;
    PyObject *var__ignore = NULL;
    PyObject *var_has_text_before_cursor = NULL;
    PyObject *var__newline = NULL;
    PyObject *var__newline2 = NULL;
    PyObject *var__go_up = NULL;
    PyObject *var__go_down = NULL;
    PyObject *var__cut = NULL;
    PyObject *var__insert_ctrl_z = NULL;
    PyObject *var__paste = NULL;
    PyObject *var_in_quoted_insert = NULL;
    PyObject *var__insert_text = NULL;
    struct Nuitka_FrameObject *frame_31c41cd6471285520e6f3fa4ca17773b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_31c41cd6471285520e6f3fa4ca17773b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_31c41cd6471285520e6f3fa4ca17773b)) {
        Py_XDECREF(cache_frame_31c41cd6471285520e6f3fa4ca17773b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_31c41cd6471285520e6f3fa4ca17773b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_31c41cd6471285520e6f3fa4ca17773b = MAKE_FUNCTION_FRAME(codeobj_31c41cd6471285520e6f3fa4ca17773b, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_31c41cd6471285520e6f3fa4ca17773b->m_type_description == NULL);
    frame_31c41cd6471285520e6f3fa4ca17773b = cache_frame_31c41cd6471285520e6f3fa4ca17773b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_31c41cd6471285520e6f3fa4ca17773b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_31c41cd6471285520e6f3fa4ca17773b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 31;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_insert_mode == NULL);
        var_insert_mode = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_1 = var_key_bindings;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_56;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_80;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_84;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_86;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_90;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_92;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_98;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_called_value_102;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_104;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_called_value_106;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_108;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_110;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_112;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_called_value_114;
        PyObject *tmp_called_value_115;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_116;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_called_value_118;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_called_value_120;
        PyObject *tmp_called_value_121;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_called_value_122;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_124;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_value_126;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_called_value_128;
        PyObject *tmp_called_value_129;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_130;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_value_132;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_called_value_134;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_called_value_136;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_called_value_138;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_140;
        PyObject *tmp_called_value_141;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_called_value_142;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_called_value_144;
        PyObject *tmp_called_value_145;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_value_146;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_called_value_148;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_called_value_150;
        PyObject *tmp_called_value_151;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_152;
        PyObject *tmp_called_value_153;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_called_value_154;
        PyObject *tmp_called_value_155;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_156;
        PyObject *tmp_called_value_157;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_value_158;
        PyObject *tmp_called_value_159;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_called_value_160;
        PyObject *tmp_called_value_161;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_called_value_162;
        PyObject *tmp_called_value_163;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_164;
        PyObject *tmp_called_value_165;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_value_166;
        PyObject *tmp_called_value_167;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_168;
        PyObject *tmp_called_value_169;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_called_value_170;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_called_value_172;
        PyObject *tmp_called_value_173;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_value_174;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_value_176;
        PyObject *tmp_called_value_177;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_called_value_178;
        PyObject *tmp_called_value_179;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_handle);
        tmp_called_value_3 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 35;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[6]);

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_5 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 36;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[7]);

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 36;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_7 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 37;
        tmp_called_value_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[8]);

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 37;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_9 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 38;
        tmp_called_value_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[9]);

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 38;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_11 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 39;
        tmp_called_value_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[10]);

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_13 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 40;
        tmp_called_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[11]);

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_15 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 41;
        tmp_called_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[12]);

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_17 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 42;
        tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[13]);

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 42;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_19 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 43;
        tmp_called_value_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[14]);

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_21 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 44;
        tmp_called_value_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[15]);

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_23 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 45;
        tmp_called_value_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[16]);

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 45;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_25 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 46;
        tmp_called_value_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[17]);

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_27 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 47;
        tmp_called_value_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_27, mod_consts[18]);

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_29 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 48;
        tmp_called_value_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[19]);

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_31 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 49;
        tmp_called_value_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[20]);

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_33 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 50;
        tmp_called_value_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[21]);

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_35 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 51;
        tmp_called_value_34 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[22]);

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_37 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 52;
        tmp_called_value_36 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_37, mod_consts[23]);

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_39 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 53;
        tmp_called_value_38 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[24]);

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_41 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 54;
        tmp_called_value_40 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[25]);

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_43 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 55;
        tmp_called_value_42 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[26]);

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_45 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 56;
        tmp_called_value_44 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[27]);

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_47 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 57;
        tmp_called_value_46 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_47, mod_consts[28]);

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_49 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 58;
        tmp_called_value_48 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[29]);

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_51 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 59;
        tmp_called_value_50 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_51, mod_consts[30]);

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_53 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 60;
        tmp_called_value_52 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_53, mod_consts[31]);

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_55 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 61;
        tmp_called_value_54 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[32]);

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_57 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 62;
        tmp_called_value_56 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[33]);

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_59 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 63;
        tmp_called_value_58 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[34]);

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_61 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 64;
        tmp_called_value_60 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_61, mod_consts[35]);

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_63 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 65;
        tmp_called_value_62 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_63, mod_consts[36]);

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_65 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 66;
        tmp_called_value_64 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_65, mod_consts[37]);

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_67 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 67;
        tmp_called_value_66 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_67, mod_consts[38]);

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_69 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 68;
        tmp_called_value_68 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_69, mod_consts[39]);

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_71 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 69;
        tmp_called_value_70 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_71, mod_consts[40]);

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_73 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 70;
        tmp_called_value_72 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_73, mod_consts[41]);

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_75 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 71;
        tmp_called_value_74 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_75, mod_consts[42]);

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_77 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 72;
        tmp_called_value_76 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_77, mod_consts[43]);

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_79 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 73;
        tmp_called_value_78 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_79, mod_consts[44]);

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_81 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 74;
        tmp_called_value_80 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_81, mod_consts[45]);

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_83 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 75;
        tmp_called_value_82 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_83, mod_consts[46]);

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_85 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 76;
        tmp_called_value_84 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_85, mod_consts[47]);

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_87 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 77;
        tmp_called_value_86 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_87, mod_consts[48]);

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_89 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 78;
        tmp_called_value_88 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_89, mod_consts[49]);

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_91 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 79;
        tmp_called_value_90 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_91, mod_consts[50]);

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_93 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 80;
        tmp_called_value_92 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_93, mod_consts[51]);

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_95 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 81;
        tmp_called_value_94 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_95, mod_consts[52]);

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_97 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 82;
        tmp_called_value_96 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_97, mod_consts[53]);

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_99 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 83;
        tmp_called_value_98 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_99, mod_consts[54]);

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_101 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 84;
        tmp_called_value_100 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_101, mod_consts[55]);

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_103 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 85;
        tmp_called_value_102 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_103, mod_consts[56]);

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_105 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 86;
        tmp_called_value_104 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_105, mod_consts[57]);

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_107 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 87;
        tmp_called_value_106 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_107, mod_consts[58]);

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_109 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 88;
        tmp_called_value_108 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_109, mod_consts[59]);

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_111 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 89;
        tmp_called_value_110 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_111, mod_consts[60]);

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_113 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 90;
        tmp_called_value_112 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_113, mod_consts[61]);

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_115 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 91;
        tmp_called_value_114 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_115, mod_consts[62]);

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_117 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 92;
        tmp_called_value_116 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_117, mod_consts[63]);

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_119 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 93;
        tmp_called_value_118 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_119, mod_consts[64]);

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_121 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 94;
        tmp_called_value_120 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_121, mod_consts[65]);

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_123 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 95;
        tmp_called_value_122 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_123, mod_consts[66]);

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_125 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 96;
        tmp_called_value_124 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_125, mod_consts[67]);

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_127 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 97;
        tmp_called_value_126 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_127, mod_consts[68]);

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_129 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 98;
        tmp_called_value_128 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_129, mod_consts[69]);

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_131 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 99;
        tmp_called_value_130 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_131, mod_consts[70]);

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_133 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 100;
        tmp_called_value_132 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_133, mod_consts[71]);

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_135 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 101;
        tmp_called_value_134 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_135, mod_consts[72]);

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_137 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 102;
        tmp_called_value_136 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_137, mod_consts[73]);

        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_139 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 103;
        tmp_called_value_138 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_139, mod_consts[74]);

        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_141 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 104;
        tmp_called_value_140 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_141, mod_consts[75]);

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_143 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 105;
        tmp_called_value_142 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_143, mod_consts[76]);

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_145 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 106;
        tmp_called_value_144 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_145, mod_consts[77]);

        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_147 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 107;
        tmp_called_value_146 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_147, mod_consts[78]);

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_149 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 108;
        tmp_called_value_148 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_149, mod_consts[79]);

        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_151 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 109;
        tmp_called_value_150 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_151, mod_consts[80]);

        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_153 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 110;
        tmp_called_value_152 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_153, mod_consts[81]);

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_155 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 111;
        tmp_called_value_154 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_155, mod_consts[82]);

        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_157 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 112;
        tmp_called_value_156 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_157, mod_consts[83]);

        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_159 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 113;
        tmp_called_value_158 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_159, mod_consts[84]);

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_161 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 114;
        tmp_called_value_160 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_161, mod_consts[85]);

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_163 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 115;
        tmp_called_value_162 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_163, mod_consts[86]);

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_165 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 116;
        tmp_called_value_164 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_165, mod_consts[87]);

        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_167 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 117;
        tmp_called_value_166 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_167, mod_consts[88]);

        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_169 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 118;
        tmp_called_value_168 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_169, mod_consts[89]);

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_171 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 119;
        tmp_called_value_170 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_171, mod_consts[90]);

        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_173 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 120;
        tmp_called_value_172 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_173, mod_consts[91]);

        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_175 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 121;
        tmp_called_value_174 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_175, mod_consts[92]);

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_177 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 122;
        tmp_called_value_176 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_177, mod_consts[93]);

        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_179 = var_handle;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[95]);
        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 123;
        tmp_called_value_178 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_179, tmp_args_element_value_89);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[96];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_args_element_value_90 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(tmp_annotations_1);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 123;
        tmp_args_element_value_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_178, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_178);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 122;
        tmp_args_element_value_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_176, tmp_args_element_value_88);
        Py_DECREF(tmp_called_value_176);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 121;
        tmp_args_element_value_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_174, tmp_args_element_value_87);
        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 120;
        tmp_args_element_value_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_172, tmp_args_element_value_86);
        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 119;
        tmp_args_element_value_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_170, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 118;
        tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_168, tmp_args_element_value_84);
        Py_DECREF(tmp_called_value_168);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 117;
        tmp_args_element_value_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_166, tmp_args_element_value_83);
        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 116;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_164, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 115;
        tmp_args_element_value_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_162, tmp_args_element_value_81);
        Py_DECREF(tmp_called_value_162);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 114;
        tmp_args_element_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_160, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_160);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 113;
        tmp_args_element_value_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_158, tmp_args_element_value_79);
        Py_DECREF(tmp_called_value_158);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_args_element_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 112;
        tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_156, tmp_args_element_value_78);
        Py_DECREF(tmp_called_value_156);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 111;
        tmp_args_element_value_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_154, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 110;
        tmp_args_element_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_152, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 109;
        tmp_args_element_value_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_150, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 108;
        tmp_args_element_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_148, tmp_args_element_value_74);
        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 107;
        tmp_args_element_value_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_146, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_146);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 106;
        tmp_args_element_value_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_144, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 105;
        tmp_args_element_value_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_142, tmp_args_element_value_71);
        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 104;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_140, tmp_args_element_value_70);
        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 103;
        tmp_args_element_value_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_138, tmp_args_element_value_69);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 102;
        tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_136, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 101;
        tmp_args_element_value_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_134, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 100;
        tmp_args_element_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_132, tmp_args_element_value_66);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 99;
        tmp_args_element_value_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_65);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 98;
        tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 97;
        tmp_args_element_value_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_126, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 96;
        tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_124, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 95;
        tmp_args_element_value_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_122, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 94;
        tmp_args_element_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_120, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 93;
        tmp_args_element_value_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_118, tmp_args_element_value_59);
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 92;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_116, tmp_args_element_value_58);
        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 91;
        tmp_args_element_value_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_114, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 90;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_112, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 89;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 88;
        tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 87;
        tmp_args_element_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 86;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 85;
        tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_102, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 84;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_100, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 83;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_98, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 82;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 81;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_94, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 80;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 79;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 78;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 77;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 76;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 75;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 74;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_80, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 73;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 72;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 71;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 70;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 69;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_70, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 68;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 67;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 66;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 65;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 64;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 63;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 62;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 61;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 60;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 59;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 58;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 57;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 56;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 55;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 54;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 53;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 52;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 51;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 50;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 49;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 48;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 47;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 46;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 45;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 45;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 44;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 43;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 42;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 42;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 41;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 40;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 39;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 38;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 38;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 37;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 37;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 36;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 36;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 35;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__ignore == NULL);
        var__ignore = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_called_value_181;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_called_value_182;
        CHECK_OBJECT(var_handle);
        tmp_called_value_181 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 136;
        tmp_called_value_180 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_181, mod_consts[70]);

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 136;
        tmp_args_element_value_91 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_182, mod_consts[103]);

        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_180);

            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 136;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_180, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_180);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_183;
        PyObject *tmp_called_value_184;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_called_value_185;
        CHECK_OBJECT(var_handle);
        tmp_called_value_184 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 137;
        tmp_called_value_183 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_184, mod_consts[71]);

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_183);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 137;
        tmp_args_element_value_92 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_185, mod_consts[104]);

        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_183);

            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_183, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_183);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_called_value_187;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_188;
        CHECK_OBJECT(var_handle);
        tmp_called_value_187 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 138;
        tmp_called_value_186 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_187, mod_consts[65]);

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_188 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_188 == NULL)) {
            tmp_called_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_186);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 138;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_188, mod_consts[105]);

        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_186);

            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 138;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_186, tmp_args_element_value_93);
        Py_DECREF(tmp_called_value_186);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_189;
        PyObject *tmp_called_value_190;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_value_191;
        CHECK_OBJECT(var_handle);
        tmp_called_value_190 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 139;
        tmp_called_value_189 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_190, mod_consts[64]);

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_189);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 139;
        tmp_args_element_value_94 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_191, mod_consts[106]);

        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_189);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 139;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_189, tmp_args_element_value_94);
        Py_DECREF(tmp_called_value_189);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_called_value_193;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_194;
        CHECK_OBJECT(var_handle);
        tmp_called_value_193 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 140;
        tmp_called_value_192 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_193, mod_consts[87]);

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_194 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_194 == NULL)) {
            tmp_called_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_192);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 140;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_194, mod_consts[107]);

        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_192);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 140;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_192, tmp_args_element_value_95);
        Py_DECREF(tmp_called_value_192);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_195;
        PyObject *tmp_called_value_196;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_197;
        CHECK_OBJECT(var_handle);
        tmp_called_value_196 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 141;
        tmp_called_value_195 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_196, mod_consts[88]);

        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_195);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 141;
        tmp_args_element_value_96 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_197, mod_consts[108]);

        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_195);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 141;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_195, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_195);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_198;
        PyObject *tmp_called_value_199;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_called_value_200;
        CHECK_OBJECT(var_handle);
        tmp_called_value_199 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 142;
        tmp_called_value_198 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_199, mod_consts[17]);

        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_200 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_200 == NULL)) {
            tmp_called_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 142;
        tmp_args_element_value_97 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_200, mod_consts[109]);

        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_198);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 142;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_198, tmp_args_element_value_97);
        Py_DECREF(tmp_called_value_198);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_201;
        PyObject *tmp_called_value_202;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_called_value_203;
        CHECK_OBJECT(var_handle);
        tmp_called_value_202 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_1 = var_insert_mode;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 144;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_called_value_201 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_202, mod_consts[16], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_203 == NULL)) {
            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_201);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 144;
        tmp_args_element_value_98 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_203, mod_consts[111]);

        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_201);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 144;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_201, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_201);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_204;
        PyObject *tmp_called_value_205;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_206;
        CHECK_OBJECT(var_handle);
        tmp_called_value_205 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_2 = var_insert_mode;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 145;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_called_value_204 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_205, mod_consts[26], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_206 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_206 == NULL)) {
            tmp_called_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 145;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_206, mod_consts[112]);

        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_204);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 145;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_204, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_204);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_207;
        PyObject *tmp_called_value_208;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_called_value_209;
        CHECK_OBJECT(var_handle);
        tmp_called_value_208 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_3 = var_insert_mode;
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 146;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_1};
            tmp_called_value_207 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_208, mod_consts[61], kw_values, mod_consts[114]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_209 == NULL)) {
            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_207);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 147;
        tmp_args_element_value_100 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_209, mod_consts[115]);

        if (tmp_args_element_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_207);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 146;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_207, tmp_args_element_value_100);
        Py_DECREF(tmp_called_value_207);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_210;
        PyObject *tmp_called_value_211;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_called_value_212;
        CHECK_OBJECT(var_handle);
        tmp_called_value_211 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_4 = var_insert_mode;
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 149;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_2};
            tmp_called_value_210 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_211, mod_consts[74], kw_values, mod_consts[114]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_212 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_212 == NULL)) {
            tmp_called_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_210);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 150;
        tmp_args_element_value_101 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_212, mod_consts[116]);

        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_210);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 149;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_210, tmp_args_element_value_101);
        Py_DECREF(tmp_called_value_210);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_213;
        PyObject *tmp_called_value_214;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_called_value_215;
        CHECK_OBJECT(var_handle);
        tmp_called_value_214 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_5 = var_insert_mode;
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 152;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_3};
            tmp_called_value_213 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_214, mod_consts[76], kw_values, mod_consts[114]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_215 == NULL)) {
            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_213);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 153;
        tmp_args_element_value_102 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_215, mod_consts[116]);

        if (tmp_args_element_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_213);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 152;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_213, tmp_args_element_value_102);
        Py_DECREF(tmp_called_value_213);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_216;
        PyObject *tmp_called_value_217;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_called_value_218;
        CHECK_OBJECT(var_handle);
        tmp_called_value_217 = var_handle;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[117]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_dict_value_0_1 = var_insert_mode;
        tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 155;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_value_216 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_217, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_called_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_218 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_218 == NULL)) {
            tmp_called_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_216);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 156;
        tmp_args_element_value_103 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_218, mod_consts[118]);

        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_216);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 155;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_216, tmp_args_element_value_103);
        Py_DECREF(tmp_called_value_216);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_219;
        PyObject *tmp_called_value_220;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_called_value_221;
        CHECK_OBJECT(var_handle);
        tmp_called_value_220 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_6 = var_insert_mode;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 158;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_called_value_219 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_220, mod_consts[25], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_221 == NULL)) {
            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_219);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 158;
        tmp_args_element_value_104 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_221, mod_consts[119]);

        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_219);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 158;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_219, tmp_args_element_value_104);
        Py_DECREF(tmp_called_value_219);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_222;
        PyObject *tmp_called_value_223;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_called_value_224;
        CHECK_OBJECT(var_handle);
        tmp_called_value_223 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_7 = var_insert_mode;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 159;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_called_value_222 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_223, mod_consts[14], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_224 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_224 == NULL)) {
            tmp_called_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_222);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 159;
        tmp_args_element_value_105 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_224, mod_consts[120]);

        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_222);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 159;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_222, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_222);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_225;
        PyObject *tmp_called_value_226;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_227;
        CHECK_OBJECT(var_handle);
        tmp_called_value_226 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_8 = var_insert_mode;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 160;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_called_value_225 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_226, mod_consts[79], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_227 == NULL)) {
            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_225);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 160;
        tmp_args_element_value_106 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_227, mod_consts[121]);

        if (tmp_args_element_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_225);

            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 160;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_225, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_225);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_228;
        PyObject *tmp_called_value_229;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_called_value_230;
        CHECK_OBJECT(var_handle);
        tmp_called_value_229 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_9 = var_insert_mode;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 164;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_called_value_228 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_229, mod_consts[28], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_230 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_230 == NULL)) {
            tmp_called_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_228);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 164;
        tmp_args_element_value_107 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_230, mod_consts[122]);

        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_228);

            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 164;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_228, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_228);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_231;
        PyObject *tmp_called_value_232;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_called_value_233;
        CHECK_OBJECT(var_handle);
        tmp_called_value_232 = var_handle;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 166;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_called_value_231 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_232, mod_consts[77], kw_values, mod_consts[110]);
        }

        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_231);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 166;
        tmp_args_element_value_108 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_233, mod_consts[107]);

        if (tmp_args_element_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_231);

            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 166;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_231, tmp_args_element_value_108);
        Py_DECREF(tmp_called_value_231);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_234;
        PyObject *tmp_called_value_235;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_called_value_236;
        CHECK_OBJECT(var_handle);
        tmp_called_value_235 = var_handle;
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 167;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};
            tmp_called_value_234 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_235, mod_consts[78], kw_values, mod_consts[110]);
        }

        Py_DECREF(tmp_kw_call_value_0_11);
        if (tmp_called_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_236 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_236 == NULL)) {
            tmp_called_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 167;
        tmp_args_element_value_109 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_236, mod_consts[108]);

        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_234);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 167;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_234, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_234);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_237;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_annotations_2;
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = PyDict_Copy(mod_consts[125]);


        tmp_args_element_value_110 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(tmp_annotations_2);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 171;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_237, tmp_args_element_value_110);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_text_before_cursor == NULL);
        var_has_text_before_cursor = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_238;
        PyObject *tmp_called_value_239;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_240;
        CHECK_OBJECT(var_handle);
        tmp_called_value_239 = var_handle;
        CHECK_OBJECT(var_has_text_before_cursor);
        tmp_left_value_2 = var_has_text_before_cursor;
        CHECK_OBJECT(var_insert_mode);
        tmp_right_value_2 = var_insert_mode;
        tmp_kw_call_value_0_12 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 175;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_12};
            tmp_called_value_238 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_239, mod_consts[9], kw_values, mod_consts[110]);
        }

        Py_DECREF(tmp_kw_call_value_0_12);
        if (tmp_called_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_240 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_240 == NULL)) {
            tmp_called_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 176;
        tmp_args_element_value_111 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_240, mod_consts[116]);

        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_238);

            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 175;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_238, tmp_args_element_value_111);
        Py_DECREF(tmp_called_value_238);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_241;
        PyObject *tmp_called_value_242;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT(var_handle);
        tmp_called_value_242 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_left_value_3 = var_insert_mode;
        tmp_right_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_right_value_3 == NULL)) {
            tmp_right_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        if (tmp_kw_call_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 179;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};
            tmp_called_value_241 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_242, mod_consts[129], kw_values, mod_consts[110]);
        }

        Py_DECREF(tmp_kw_call_value_0_13);
        if (tmp_called_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[96];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_241);

            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[98];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_args_element_value_112 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(tmp_annotations_3);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 179;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_241, tmp_args_element_value_112);
        Py_DECREF(tmp_called_value_241);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline == NULL);
        var__newline = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_243;
        PyObject *tmp_called_value_244;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        CHECK_OBJECT(var_handle);
        tmp_called_value_244 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 186;
        tmp_called_value_243 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_244, mod_consts[15]);

        if (tmp_called_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[96];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_243);

            exception_lineno = 187;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[98];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_args_element_value_113 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(tmp_annotations_4);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 186;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_243, tmp_args_element_value_113);
        Py_DECREF(tmp_called_value_243);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline2 == NULL);
        var__newline2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_245;
        PyObject *tmp_called_value_246;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        CHECK_OBJECT(var_handle);
        tmp_called_value_246 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 197;
        tmp_called_value_245 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_246, mod_consts[62]);

        if (tmp_called_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[96];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_245);

            exception_lineno = 198;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[98];
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_args_element_value_114 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(tmp_annotations_5);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 197;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_245, tmp_args_element_value_114);
        Py_DECREF(tmp_called_value_245);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__go_up == NULL);
        var__go_up = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_247;
        PyObject *tmp_called_value_248;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        CHECK_OBJECT(var_handle);
        tmp_called_value_248 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 201;
        tmp_called_value_247 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_248, mod_consts[63]);

        if (tmp_called_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[96];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_247);

            exception_lineno = 202;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[98];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_args_element_value_115 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(tmp_annotations_6);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 201;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_247, tmp_args_element_value_115);
        Py_DECREF(tmp_called_value_247);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__go_down == NULL);
        var__go_down = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_249;
        PyObject *tmp_called_value_250;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        CHECK_OBJECT(var_handle);
        tmp_called_value_250 = var_handle;
        tmp_kw_call_value_0_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_kw_call_value_0_14 == NULL)) {
            tmp_kw_call_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_kw_call_value_0_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 205;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_14};
            tmp_called_value_249 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_250, mod_consts[74], kw_values, mod_consts[110]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = mod_consts[96];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_249);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[98];
        tmp_dict_value_6 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_args_element_value_116 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(tmp_annotations_7);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 205;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_249, tmp_args_element_value_116);
        Py_DECREF(tmp_called_value_249);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cut == NULL);
        var__cut = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_251;
        PyObject *tmp_called_value_252;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT(var_handle);
        tmp_called_value_252 = var_handle;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 212;
        tmp_called_value_251 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_252, mod_consts[31]);

        if (tmp_called_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = mod_consts[96];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_251);

            exception_lineno = 213;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[98];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_args_element_value_117 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(tmp_annotations_8);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 212;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_251, tmp_args_element_value_117);
        Py_DECREF(tmp_called_value_251);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_ctrl_z == NULL);
        var__insert_ctrl_z = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_253;
        PyObject *tmp_called_value_254;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        CHECK_OBJECT(var_handle);
        tmp_called_value_254 = var_handle;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[145]);
        if (tmp_args_element_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 225;
        tmp_called_value_253 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_254, tmp_args_element_value_118);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_called_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = mod_consts[96];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_253);

            exception_lineno = 226;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[98];
        tmp_dict_value_8 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_args_element_value_119 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(tmp_annotations_9);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 225;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_253, tmp_args_element_value_119);
        Py_DECREF(tmp_called_value_253);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__paste == NULL);
        var__paste = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_255;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_annotations_10;
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = PyDict_Copy(mod_consts[125]);


        tmp_args_element_value_120 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(tmp_annotations_10);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 240;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_255, tmp_args_element_value_120);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_in_quoted_insert == NULL);
        var_in_quoted_insert = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_256;
        PyObject *tmp_called_value_257;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        CHECK_OBJECT(var_handle);
        tmp_called_value_257 = var_handle;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[117]);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_in_quoted_insert);
        tmp_kw_call_dict_value_0_2 = var_in_quoted_insert;
        tmp_kw_call_dict_value_1_2 = Py_True;
        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 244;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_called_value_256 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_257, args, kw_values, mod_consts[151]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_called_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = mod_consts[96];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_256);

            exception_lineno = 245;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[98];
        tmp_dict_value_9 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_args_element_value_121 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(tmp_annotations_11);

        frame_31c41cd6471285520e6f3fa4ca17773b->m_frame.f_lineno = 244;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_256, tmp_args_element_value_121);
        Py_DECREF(tmp_called_value_256);
        Py_DECREF(tmp_args_element_value_121);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_text == NULL);
        var__insert_text = tmp_assign_source_14;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31c41cd6471285520e6f3fa4ca17773b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31c41cd6471285520e6f3fa4ca17773b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_31c41cd6471285520e6f3fa4ca17773b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_31c41cd6471285520e6f3fa4ca17773b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31c41cd6471285520e6f3fa4ca17773b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_31c41cd6471285520e6f3fa4ca17773b,
        type_description_1,
        var_key_bindings,
        var_insert_mode,
        var_handle,
        var__ignore,
        var_has_text_before_cursor,
        var__newline,
        var__newline2,
        var__go_up,
        var__go_down,
        var__cut,
        var__insert_ctrl_z,
        var__paste,
        var_in_quoted_insert,
        var__insert_text
    );


    // Release cached frame if used for exception.
    if (frame_31c41cd6471285520e6f3fa4ca17773b == cache_frame_31c41cd6471285520e6f3fa4ca17773b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_31c41cd6471285520e6f3fa4ca17773b);
        cache_frame_31c41cd6471285520e6f3fa4ca17773b = NULL;
    }

    assertFrameObject(frame_31c41cd6471285520e6f3fa4ca17773b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_key_bindings);
    tmp_return_value = var_key_bindings;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_key_bindings);
    Py_DECREF(var_key_bindings);
    var_key_bindings = NULL;
    CHECK_OBJECT(var_insert_mode);
    Py_DECREF(var_insert_mode);
    var_insert_mode = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var__ignore);
    Py_DECREF(var__ignore);
    var__ignore = NULL;
    CHECK_OBJECT(var_has_text_before_cursor);
    Py_DECREF(var_has_text_before_cursor);
    var_has_text_before_cursor = NULL;
    CHECK_OBJECT(var__newline);
    Py_DECREF(var__newline);
    var__newline = NULL;
    CHECK_OBJECT(var__newline2);
    Py_DECREF(var__newline2);
    var__newline2 = NULL;
    CHECK_OBJECT(var__go_up);
    Py_DECREF(var__go_up);
    var__go_up = NULL;
    CHECK_OBJECT(var__go_down);
    Py_DECREF(var__go_down);
    var__go_down = NULL;
    CHECK_OBJECT(var__cut);
    Py_DECREF(var__cut);
    var__cut = NULL;
    CHECK_OBJECT(var__insert_ctrl_z);
    Py_DECREF(var__insert_ctrl_z);
    var__insert_ctrl_z = NULL;
    CHECK_OBJECT(var__paste);
    Py_DECREF(var__paste);
    var__paste = NULL;
    CHECK_OBJECT(var_in_quoted_insert);
    Py_DECREF(var_in_quoted_insert);
    var_in_quoted_insert = NULL;
    CHECK_OBJECT(var__insert_text);
    Py_DECREF(var__insert_text);
    var__insert_text = NULL;
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

    Py_XDECREF(var_key_bindings);
    var_key_bindings = NULL;
    Py_XDECREF(var_insert_mode);
    var_insert_mode = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var__ignore);
    var__ignore = NULL;
    Py_XDECREF(var_has_text_before_cursor);
    var_has_text_before_cursor = NULL;
    Py_XDECREF(var__newline);
    var__newline = NULL;
    Py_XDECREF(var__newline2);
    var__newline2 = NULL;
    Py_XDECREF(var__go_up);
    var__go_up = NULL;
    Py_XDECREF(var__go_down);
    var__go_down = NULL;
    Py_XDECREF(var__cut);
    var__cut = NULL;
    Py_XDECREF(var__insert_ctrl_z);
    var__insert_ctrl_z = NULL;
    Py_XDECREF(var__paste);
    var__paste = NULL;
    Py_XDECREF(var_in_quoted_insert);
    var_in_quoted_insert = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b5d97cb89b618b1f6e0885844e379fe4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b5d97cb89b618b1f6e0885844e379fe4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5d97cb89b618b1f6e0885844e379fe4)) {
        Py_XDECREF(cache_frame_b5d97cb89b618b1f6e0885844e379fe4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5d97cb89b618b1f6e0885844e379fe4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5d97cb89b618b1f6e0885844e379fe4 = MAKE_FUNCTION_FRAME(codeobj_b5d97cb89b618b1f6e0885844e379fe4, module_prompt_toolkit$key_binding$bindings$basic, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b5d97cb89b618b1f6e0885844e379fe4->m_type_description == NULL);
    frame_b5d97cb89b618b1f6e0885844e379fe4 = cache_frame_b5d97cb89b618b1f6e0885844e379fe4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b5d97cb89b618b1f6e0885844e379fe4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b5d97cb89b618b1f6e0885844e379fe4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        frame_b5d97cb89b618b1f6e0885844e379fe4->m_frame.f_lineno = 173;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[156]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[157]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5d97cb89b618b1f6e0885844e379fe4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5d97cb89b618b1f6e0885844e379fe4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b5d97cb89b618b1f6e0885844e379fe4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5d97cb89b618b1f6e0885844e379fe4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5d97cb89b618b1f6e0885844e379fe4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5d97cb89b618b1f6e0885844e379fe4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5d97cb89b618b1f6e0885844e379fe4,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b5d97cb89b618b1f6e0885844e379fe4 == cache_frame_b5d97cb89b618b1f6e0885844e379fe4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b5d97cb89b618b1f6e0885844e379fe4);
        cache_frame_b5d97cb89b618b1f6e0885844e379fe4 = NULL;
    }

    assertFrameObject(frame_b5d97cb89b618b1f6e0885844e379fe4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_18425cd4ad19a1093b6e93df5511f04d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_18425cd4ad19a1093b6e93df5511f04d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18425cd4ad19a1093b6e93df5511f04d)) {
        Py_XDECREF(cache_frame_18425cd4ad19a1093b6e93df5511f04d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18425cd4ad19a1093b6e93df5511f04d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18425cd4ad19a1093b6e93df5511f04d = MAKE_FUNCTION_FRAME(codeobj_18425cd4ad19a1093b6e93df5511f04d, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18425cd4ad19a1093b6e93df5511f04d->m_type_description == NULL);
    frame_18425cd4ad19a1093b6e93df5511f04d = cache_frame_18425cd4ad19a1093b6e93df5511f04d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18425cd4ad19a1093b6e93df5511f04d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18425cd4ad19a1093b6e93df5511f04d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[156]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[158]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_18425cd4ad19a1093b6e93df5511f04d->m_frame.f_lineno = 184;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = (tmp_res == 0) ? Py_True : Py_False;
        frame_18425cd4ad19a1093b6e93df5511f04d->m_frame.f_lineno = 184;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[160]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18425cd4ad19a1093b6e93df5511f04d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18425cd4ad19a1093b6e93df5511f04d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18425cd4ad19a1093b6e93df5511f04d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18425cd4ad19a1093b6e93df5511f04d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18425cd4ad19a1093b6e93df5511f04d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18425cd4ad19a1093b6e93df5511f04d,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_18425cd4ad19a1093b6e93df5511f04d == cache_frame_18425cd4ad19a1093b6e93df5511f04d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18425cd4ad19a1093b6e93df5511f04d);
        cache_frame_18425cd4ad19a1093b6e93df5511f04d = NULL;
    }

    assertFrameObject(frame_18425cd4ad19a1093b6e93df5511f04d);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_5c49f61cd8d4106fafed934a4d3b8c7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c)) {
        Py_XDECREF(cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c = MAKE_FUNCTION_FRAME(codeobj_5c49f61cd8d4106fafed934a4d3b8c7c, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c->m_type_description == NULL);
    frame_5c49f61cd8d4106fafed934a4d3b8c7c = cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5c49f61cd8d4106fafed934a4d3b8c7c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5c49f61cd8d4106fafed934a4d3b8c7c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[161]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[162]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[164]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[165];
        frame_5c49f61cd8d4106fafed934a4d3b8c7c->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[166]);
        frame_5c49f61cd8d4106fafed934a4d3b8c7c->m_frame.f_lineno = 193;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c49f61cd8d4106fafed934a4d3b8c7c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5c49f61cd8d4106fafed934a4d3b8c7c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c49f61cd8d4106fafed934a4d3b8c7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c49f61cd8d4106fafed934a4d3b8c7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c49f61cd8d4106fafed934a4d3b8c7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c49f61cd8d4106fafed934a4d3b8c7c,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_5c49f61cd8d4106fafed934a4d3b8c7c == cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c);
        cache_frame_5c49f61cd8d4106fafed934a4d3b8c7c = NULL;
    }

    assertFrameObject(frame_5c49f61cd8d4106fafed934a4d3b8c7c);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_5125e65b0a3cd6ce9684bb3ae281f1a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4)) {
        Py_XDECREF(cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4 = MAKE_FUNCTION_FRAME(codeobj_5125e65b0a3cd6ce9684bb3ae281f1a4, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4->m_type_description == NULL);
    frame_5125e65b0a3cd6ce9684bb3ae281f1a4 = cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5125e65b0a3cd6ce9684bb3ae281f1a4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5125e65b0a3cd6ce9684bb3ae281f1a4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[156]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[167]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5125e65b0a3cd6ce9684bb3ae281f1a4->m_frame.f_lineno = 199;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[169]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5125e65b0a3cd6ce9684bb3ae281f1a4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5125e65b0a3cd6ce9684bb3ae281f1a4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5125e65b0a3cd6ce9684bb3ae281f1a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5125e65b0a3cd6ce9684bb3ae281f1a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5125e65b0a3cd6ce9684bb3ae281f1a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5125e65b0a3cd6ce9684bb3ae281f1a4,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_5125e65b0a3cd6ce9684bb3ae281f1a4 == cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4);
        cache_frame_5125e65b0a3cd6ce9684bb3ae281f1a4 = NULL;
    }

    assertFrameObject(frame_5125e65b0a3cd6ce9684bb3ae281f1a4);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_3711584cb69a081971e350b2841a5f6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3711584cb69a081971e350b2841a5f6e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3711584cb69a081971e350b2841a5f6e)) {
        Py_XDECREF(cache_frame_3711584cb69a081971e350b2841a5f6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3711584cb69a081971e350b2841a5f6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3711584cb69a081971e350b2841a5f6e = MAKE_FUNCTION_FRAME(codeobj_3711584cb69a081971e350b2841a5f6e, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3711584cb69a081971e350b2841a5f6e->m_type_description == NULL);
    frame_3711584cb69a081971e350b2841a5f6e = cache_frame_3711584cb69a081971e350b2841a5f6e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3711584cb69a081971e350b2841a5f6e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3711584cb69a081971e350b2841a5f6e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[156]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[170]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3711584cb69a081971e350b2841a5f6e->m_frame.f_lineno = 203;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[169]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3711584cb69a081971e350b2841a5f6e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3711584cb69a081971e350b2841a5f6e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3711584cb69a081971e350b2841a5f6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3711584cb69a081971e350b2841a5f6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3711584cb69a081971e350b2841a5f6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3711584cb69a081971e350b2841a5f6e,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_3711584cb69a081971e350b2841a5f6e == cache_frame_3711584cb69a081971e350b2841a5f6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3711584cb69a081971e350b2841a5f6e);
        cache_frame_3711584cb69a081971e350b2841a5f6e = NULL;
    }

    assertFrameObject(frame_3711584cb69a081971e350b2841a5f6e);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_a08fddbd228e4f0516e89551b55e6624;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_a08fddbd228e4f0516e89551b55e6624 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a08fddbd228e4f0516e89551b55e6624)) {
        Py_XDECREF(cache_frame_a08fddbd228e4f0516e89551b55e6624);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a08fddbd228e4f0516e89551b55e6624 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a08fddbd228e4f0516e89551b55e6624 = MAKE_FUNCTION_FRAME(codeobj_a08fddbd228e4f0516e89551b55e6624, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a08fddbd228e4f0516e89551b55e6624->m_type_description == NULL);
    frame_a08fddbd228e4f0516e89551b55e6624 = cache_frame_a08fddbd228e4f0516e89551b55e6624;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a08fddbd228e4f0516e89551b55e6624);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a08fddbd228e4f0516e89551b55e6624) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[156]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a08fddbd228e4f0516e89551b55e6624->m_frame.f_lineno = 207;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[171]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[172]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[173]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        frame_a08fddbd228e4f0516e89551b55e6624->m_frame.f_lineno = 208;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[174], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a08fddbd228e4f0516e89551b55e6624);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a08fddbd228e4f0516e89551b55e6624);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a08fddbd228e4f0516e89551b55e6624, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a08fddbd228e4f0516e89551b55e6624->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a08fddbd228e4f0516e89551b55e6624, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a08fddbd228e4f0516e89551b55e6624,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_a08fddbd228e4f0516e89551b55e6624 == cache_frame_a08fddbd228e4f0516e89551b55e6624) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a08fddbd228e4f0516e89551b55e6624);
        cache_frame_a08fddbd228e4f0516e89551b55e6624 = NULL;
    }

    assertFrameObject(frame_a08fddbd228e4f0516e89551b55e6624);

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
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_18e715f7998d0c944536f136cf8eac98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18e715f7998d0c944536f136cf8eac98 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18e715f7998d0c944536f136cf8eac98)) {
        Py_XDECREF(cache_frame_18e715f7998d0c944536f136cf8eac98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18e715f7998d0c944536f136cf8eac98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18e715f7998d0c944536f136cf8eac98 = MAKE_FUNCTION_FRAME(codeobj_18e715f7998d0c944536f136cf8eac98, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18e715f7998d0c944536f136cf8eac98->m_type_description == NULL);
    frame_18e715f7998d0c944536f136cf8eac98 = cache_frame_18e715f7998d0c944536f136cf8eac98;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18e715f7998d0c944536f136cf8eac98);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18e715f7998d0c944536f136cf8eac98) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[156]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[175]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[176]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_18e715f7998d0c944536f136cf8eac98->m_frame.f_lineno = 223;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18e715f7998d0c944536f136cf8eac98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18e715f7998d0c944536f136cf8eac98);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18e715f7998d0c944536f136cf8eac98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18e715f7998d0c944536f136cf8eac98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18e715f7998d0c944536f136cf8eac98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18e715f7998d0c944536f136cf8eac98,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_18e715f7998d0c944536f136cf8eac98 == cache_frame_18e715f7998d0c944536f136cf8eac98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18e715f7998d0c944536f136cf8eac98);
        cache_frame_18e715f7998d0c944536f136cf8eac98 = NULL;
    }

    assertFrameObject(frame_18e715f7998d0c944536f136cf8eac98);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_5d05c9370ded56e95dd31470848c8edd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5d05c9370ded56e95dd31470848c8edd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5d05c9370ded56e95dd31470848c8edd)) {
        Py_XDECREF(cache_frame_5d05c9370ded56e95dd31470848c8edd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d05c9370ded56e95dd31470848c8edd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d05c9370ded56e95dd31470848c8edd = MAKE_FUNCTION_FRAME(codeobj_5d05c9370ded56e95dd31470848c8edd, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5d05c9370ded56e95dd31470848c8edd->m_type_description == NULL);
    frame_5d05c9370ded56e95dd31470848c8edd = cache_frame_5d05c9370ded56e95dd31470848c8edd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5d05c9370ded56e95dd31470848c8edd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5d05c9370ded56e95dd31470848c8edd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[176]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_data);
        tmp_expression_value_2 = var_data;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[177]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5d05c9370ded56e95dd31470848c8edd->m_frame.f_lineno = 235;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[178]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_data);
        tmp_expression_value_3 = var_data;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[177]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5d05c9370ded56e95dd31470848c8edd->m_frame.f_lineno = 236;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[179]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[156]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        frame_5d05c9370ded56e95dd31470848c8edd->m_frame.f_lineno = 238;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[175], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d05c9370ded56e95dd31470848c8edd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d05c9370ded56e95dd31470848c8edd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d05c9370ded56e95dd31470848c8edd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d05c9370ded56e95dd31470848c8edd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d05c9370ded56e95dd31470848c8edd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d05c9370ded56e95dd31470848c8edd,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_5d05c9370ded56e95dd31470848c8edd == cache_frame_5d05c9370ded56e95dd31470848c8edd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5d05c9370ded56e95dd31470848c8edd);
        cache_frame_5d05c9370ded56e95dd31470848c8edd = NULL;
    }

    assertFrameObject(frame_5d05c9370ded56e95dd31470848c8edd);

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
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_80cc7d62d16a3c09a3ea470ef9e32797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80cc7d62d16a3c09a3ea470ef9e32797 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80cc7d62d16a3c09a3ea470ef9e32797)) {
        Py_XDECREF(cache_frame_80cc7d62d16a3c09a3ea470ef9e32797);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80cc7d62d16a3c09a3ea470ef9e32797 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80cc7d62d16a3c09a3ea470ef9e32797 = MAKE_FUNCTION_FRAME(codeobj_80cc7d62d16a3c09a3ea470ef9e32797, module_prompt_toolkit$key_binding$bindings$basic, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_80cc7d62d16a3c09a3ea470ef9e32797->m_type_description == NULL);
    frame_80cc7d62d16a3c09a3ea470ef9e32797 = cache_frame_80cc7d62d16a3c09a3ea470ef9e32797;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_80cc7d62d16a3c09a3ea470ef9e32797);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_80cc7d62d16a3c09a3ea470ef9e32797) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        frame_80cc7d62d16a3c09a3ea470ef9e32797->m_frame.f_lineno = 242;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[180]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_80cc7d62d16a3c09a3ea470ef9e32797);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_80cc7d62d16a3c09a3ea470ef9e32797);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_80cc7d62d16a3c09a3ea470ef9e32797);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_80cc7d62d16a3c09a3ea470ef9e32797, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80cc7d62d16a3c09a3ea470ef9e32797->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80cc7d62d16a3c09a3ea470ef9e32797, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80cc7d62d16a3c09a3ea470ef9e32797,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_80cc7d62d16a3c09a3ea470ef9e32797 == cache_frame_80cc7d62d16a3c09a3ea470ef9e32797) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_80cc7d62d16a3c09a3ea470ef9e32797);
        cache_frame_80cc7d62d16a3c09a3ea470ef9e32797 = NULL;
    }

    assertFrameObject(frame_80cc7d62d16a3c09a3ea470ef9e32797);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_7d08056ae6bf5811f54b74126cf39981;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7d08056ae6bf5811f54b74126cf39981 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d08056ae6bf5811f54b74126cf39981)) {
        Py_XDECREF(cache_frame_7d08056ae6bf5811f54b74126cf39981);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d08056ae6bf5811f54b74126cf39981 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d08056ae6bf5811f54b74126cf39981 = MAKE_FUNCTION_FRAME(codeobj_7d08056ae6bf5811f54b74126cf39981, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d08056ae6bf5811f54b74126cf39981->m_type_description == NULL);
    frame_7d08056ae6bf5811f54b74126cf39981 = cache_frame_7d08056ae6bf5811f54b74126cf39981;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d08056ae6bf5811f54b74126cf39981);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d08056ae6bf5811f54b74126cf39981) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[156]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[175]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[176]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[181]);
        frame_7d08056ae6bf5811f54b74126cf39981->m_frame.f_lineno = 249;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_4;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[172]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[180], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d08056ae6bf5811f54b74126cf39981);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d08056ae6bf5811f54b74126cf39981);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d08056ae6bf5811f54b74126cf39981, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d08056ae6bf5811f54b74126cf39981->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d08056ae6bf5811f54b74126cf39981, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d08056ae6bf5811f54b74126cf39981,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_7d08056ae6bf5811f54b74126cf39981 == cache_frame_7d08056ae6bf5811f54b74126cf39981) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d08056ae6bf5811f54b74126cf39981);
        cache_frame_7d08056ae6bf5811f54b74126cf39981 = NULL;
    }

    assertFrameObject(frame_7d08056ae6bf5811f54b74126cf39981);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_47c671e6dc750763efbb652428d14b18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_31c41cd6471285520e6f3fa4ca17773b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_80cc7d62d16a3c09a3ea470ef9e32797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_7d08056ae6bf5811f54b74126cf39981,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[152],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_17a58854a483b8fde084b14e8e4a4717,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_b5d97cb89b618b1f6e0885844e379fe4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_18425cd4ad19a1093b6e93df5511f04d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[130],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_5c49f61cd8d4106fafed934a4d3b8c7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_5125e65b0a3cd6ce9684bb3ae281f1a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_3711584cb69a081971e350b2841a5f6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_a08fddbd228e4f0516e89551b55e6624,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_18e715f7998d0c944536f136cf8eac98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_5d05c9370ded56e95dd31470848c8edd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[146],
        NULL,
        0
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

function_impl_code functable_prompt_toolkit$key_binding$bindings$basic[] = {
    NULL,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings,
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

    function_impl_code *current = functable_prompt_toolkit$key_binding$bindings$basic;
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

    if (offset > sizeof(functable_prompt_toolkit$key_binding$bindings$basic) || offset < 0) {
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
        functable_prompt_toolkit$key_binding$bindings$basic[offset],
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
        module_prompt_toolkit$key_binding$bindings$basic,
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
PyObject *modulecode_prompt_toolkit$key_binding$bindings$basic(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit.key_binding.bindings.basic");

    // Store the module for future use.
    module_prompt_toolkit$key_binding$bindings$basic = module;

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
        PRINT_STRING("prompt_toolkit.key_binding.bindings.basic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.key_binding.bindings.basic: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.key_binding.bindings.basic: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$key_binding$bindings$basic\n");

    moduledict_prompt_toolkit$key_binding$bindings$basic = MODULE_DICT(module_prompt_toolkit$key_binding$bindings$basic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$key_binding$bindings$basic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[212]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$key_binding$bindings$basic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_prompt_toolkit$key_binding$bindings$basic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_1a266f30f894bf67d753f284898bcbe8;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_1a266f30f894bf67d753f284898bcbe8 = MAKE_MODULE_FRAME(codeobj_1a266f30f894bf67d753f284898bcbe8, module_prompt_toolkit$key_binding$bindings$basic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1a266f30f894bf67d753f284898bcbe8);
    assert(Py_REFCNT(frame_1a266f30f894bf67d753f284898bcbe8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[185], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[186], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[188];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[189];
        tmp_level_value_1 = mod_consts[190];
        frame_1a266f30f894bf67d753f284898bcbe8->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[155],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[191];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[192];
        tmp_level_value_2 = mod_consts[190];
        frame_1a266f30f894bf67d753f284898bcbe8->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[124],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[124]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[4],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[4]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[123],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[123]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[159],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[159]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[128],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[128]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[3],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[3]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_11);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[193];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[194];
        tmp_level_value_3 = mod_consts[190];
        frame_1a266f30f894bf67d753f284898bcbe8->m_frame.f_lineno = 11;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[163],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[163]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[195],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[195]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_14);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[196];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[197];
        tmp_level_value_4 = mod_consts[190];
        frame_1a266f30f894bf67d753f284898bcbe8->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[94],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[198];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[199];
        tmp_level_value_5 = mod_consts[200];
        frame_1a266f30f894bf67d753f284898bcbe8->m_frame.f_lineno = 14;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[2],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[201];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[202];
        tmp_level_value_6 = mod_consts[203];
        frame_1a266f30f894bf67d753f284898bcbe8->m_frame.f_lineno = 15;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[102],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = LIST_COPY(mod_consts[204]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assign_source_19 == NULL)) {
            tmp_assign_source_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[96];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[98];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_21);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a266f30f894bf67d753f284898bcbe8);
#endif
    popFrameStack();

    assertFrameObject(frame_1a266f30f894bf67d753f284898bcbe8);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a266f30f894bf67d753f284898bcbe8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a266f30f894bf67d753f284898bcbe8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a266f30f894bf67d753f284898bcbe8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a266f30f894bf67d753f284898bcbe8, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit.key_binding.bindings.basic", false);

    return module_prompt_toolkit$key_binding$bindings$basic;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$basic", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
