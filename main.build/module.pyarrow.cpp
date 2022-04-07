/* Generated code for Python module 'pyarrow'
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

/* The "module_pyarrow" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyarrow;
PyDictObject *moduledict_pyarrow;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[587];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[587];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyarrow"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 587; i++) {
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
void checkModuleConstants_pyarrow(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 587; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e4b1d08ee2774d5b8480bc174e21a226;
static PyCodeObject *codeobj_b8cdd13fabea0d900a0c4bb30c1decfd;
static PyCodeObject *codeobj_1a207be18027d29686526db7ef07569b;
static PyCodeObject *codeobj_70376b251992ce2e064d973a4119eae6;
static PyCodeObject *codeobj_926bb0086be25ff76c453c2b47e24ffc;
static PyCodeObject *codeobj_f53b81a0470e5570c49579b841713c6b;
static PyCodeObject *codeobj_d4307042a25df150981b0dcba4082ac0;
static PyCodeObject *codeobj_90d8fa7f6a79f9a774c5dcce28305dac;
static PyCodeObject *codeobj_656ff3d65ec3f73a2b5d1ff21d462b9d;
static PyCodeObject *codeobj_94d61c8400cb30c022a82445ba74699b;
static PyCodeObject *codeobj_29f217cf293b5ab24fd6ab3a7b3c4039;
static PyCodeObject *codeobj_b6cc78f0fceb12e00da973556b8f4478;
static PyCodeObject *codeobj_3cea2f02081dc71a593b3eff0f7e0ee6;
static PyCodeObject *codeobj_ae1c8a4d041d8bb5dbb7f6c1d34760b0;
static PyCodeObject *codeobj_050bdc6b2e12c18b98ed8840f3b75152;
static PyCodeObject *codeobj_61589cd4dff2496b16ef7b3d2f37869c;
static PyCodeObject *codeobj_a29d95dd9327972bfb8db6645e8db341;
static PyCodeObject *codeobj_19ebf5f38ba727d7a5aacddf89231ebf;
static PyCodeObject *codeobj_71e9a6c8536355cca32621279e951b9a;
static PyCodeObject *codeobj_bfd97ca15017bf912e4e8b44240676de;
static PyCodeObject *codeobj_5f08a56e65acc4e564f5b9b12e43cfb3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[569]); CHECK_OBJECT(module_filename_obj);
    codeobj_e4b1d08ee2774d5b8480bc174e21a226 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[570], NULL, NULL, 0, 0, 0);
    codeobj_b8cdd13fabea0d900a0c4bb30c1decfd = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[466], mod_consts[571], NULL, 1, 0, 0);
    codeobj_1a207be18027d29686526db7ef07569b = MAKE_CODEOBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[490], mod_consts[572], NULL, 2, 0, 0);
    codeobj_70376b251992ce2e064d973a4119eae6 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[573], NULL, 1, 0, 0);
    codeobj_926bb0086be25ff76c453c2b47e24ffc = MAKE_CODEOBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], NULL, NULL, 0, 0, 0);
    codeobj_f53b81a0470e5570c49579b841713c6b = MAKE_CODEOBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[147], mod_consts[574], NULL, 1, 0, 0);
    codeobj_d4307042a25df150981b0dcba4082ac0 = MAKE_CODEOBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[575], NULL, 1, 0, 0);
    codeobj_90d8fa7f6a79f9a774c5dcce28305dac = MAKE_CODEOBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[467], mod_consts[576], NULL, 0, 0, 0);
    codeobj_656ff3d65ec3f73a2b5d1ff21d462b9d = MAKE_CODEOBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[577], NULL, 2, 0, 0);
    codeobj_94d61c8400cb30c022a82445ba74699b = MAKE_CODEOBJECT(module_filename_obj, 535, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[578], mod_consts[579], 1, 0, 0);
    codeobj_29f217cf293b5ab24fd6ab3a7b3c4039 = MAKE_CODEOBJECT(module_filename_obj, 484, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[567], mod_consts[580], NULL, 0, 0, 0);
    codeobj_b6cc78f0fceb12e00da973556b8f4478 = MAKE_CODEOBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[565], NULL, NULL, 0, 0, 0);
    codeobj_3cea2f02081dc71a593b3eff0f7e0ee6 = MAKE_CODEOBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[566], NULL, NULL, 0, 0, 0);
    codeobj_ae1c8a4d041d8bb5dbb7f6c1d34760b0 = MAKE_CODEOBJECT(module_filename_obj, 527, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[568], mod_consts[581], NULL, 0, 0, 0);
    codeobj_050bdc6b2e12c18b98ed8840f3b75152 = MAKE_CODEOBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[582], NULL, 1, 0, 0);
    codeobj_61589cd4dff2496b16ef7b3d2f37869c = MAKE_CODEOBJECT(module_filename_obj, 512, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[130], mod_consts[582], NULL, 1, 0, 0);
    codeobj_a29d95dd9327972bfb8db6645e8db341 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[180], mod_consts[583], NULL, 1, 0, 0);
    codeobj_19ebf5f38ba727d7a5aacddf89231ebf = MAKE_CODEOBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[584], NULL, 2, 0, 0);
    codeobj_71e9a6c8536355cca32621279e951b9a = MAKE_CODEOBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[584], NULL, 2, 0, 0);
    codeobj_bfd97ca15017bf912e4e8b44240676de = MAKE_CODEOBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[585], NULL, 0, 0, 0);
    codeobj_5f08a56e65acc4e564f5b9b12e43cfb3 = MAKE_CODEOBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[586], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyarrow$$$function__10__get_pkg_config_executable();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__11__has_pkg_config();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__12__read_pkg_config_variable();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__13_get_libraries();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks$$$function__1_get_symlink_path();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks$$$function__2_get_symlink_path();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__15_get_library_dirs();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__15_get_library_dirs$$$function__1_append_library_dir(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyarrow$$$function__1_parse_git();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__2_show_versions();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__2_show_versions$$$function__1_print_entry();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__3__module_is_available();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__4__filesystem_is_available();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__5_show_info();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__5_show_info$$$function__1_print_entry();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__6___getattr__();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__7__plasma_store_entry_point();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__8__deprecate_scalar();


static PyObject *MAKE_FUNCTION_pyarrow$$$function__9_get_include();


// The module function definitions.
static PyObject *impl_pyarrow$$$function__1_parse_git(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_root = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_parse = NULL;
    struct Nuitka_FrameObject *frame_a29d95dd9327972bfb8db6645e8db341;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a29d95dd9327972bfb8db6645e8db341 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a29d95dd9327972bfb8db6645e8db341)) {
        Py_XDECREF(cache_frame_a29d95dd9327972bfb8db6645e8db341);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a29d95dd9327972bfb8db6645e8db341 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a29d95dd9327972bfb8db6645e8db341 = MAKE_FUNCTION_FRAME(codeobj_a29d95dd9327972bfb8db6645e8db341, module_pyarrow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a29d95dd9327972bfb8db6645e8db341->m_type_description == NULL);
    frame_a29d95dd9327972bfb8db6645e8db341 = cache_frame_a29d95dd9327972bfb8db6645e8db341;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a29d95dd9327972bfb8db6645e8db341);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a29d95dd9327972bfb8db6645e8db341) == 2); // Frame stack

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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_a29d95dd9327972bfb8db6645e8db341->m_frame.f_lineno = 52;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyarrow,
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


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_parse == NULL);
        var_parse = tmp_assign_source_1;
    }
    tmp_dictset_value = mod_consts[4];
    CHECK_OBJECT(par_kwargs);
    tmp_dictset_dict = par_kwargs;
    tmp_dictset_key = mod_consts[5];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_parse);
        tmp_dircall_arg1_1 = var_parse;
        CHECK_OBJECT(par_root);
        tmp_tuple_element_1 = par_root;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a29d95dd9327972bfb8db6645e8db341);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a29d95dd9327972bfb8db6645e8db341);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a29d95dd9327972bfb8db6645e8db341);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a29d95dd9327972bfb8db6645e8db341, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a29d95dd9327972bfb8db6645e8db341->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a29d95dd9327972bfb8db6645e8db341, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a29d95dd9327972bfb8db6645e8db341,
        type_description_1,
        par_root,
        par_kwargs,
        var_parse
    );


    // Release cached frame if used for exception.
    if (frame_a29d95dd9327972bfb8db6645e8db341 == cache_frame_a29d95dd9327972bfb8db6645e8db341) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a29d95dd9327972bfb8db6645e8db341);
        cache_frame_a29d95dd9327972bfb8db6645e8db341 = NULL;
    }

    assertFrameObject(frame_a29d95dd9327972bfb8db6645e8db341);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parse);
    Py_DECREF(var_parse);
    var_parse = NULL;
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

    Py_XDECREF(var_parse);
    var_parse = NULL;
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
    CHECK_OBJECT(par_root);
    Py_DECREF(par_root);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_root);
    Py_DECREF(par_root);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__2_show_versions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_print_entry = NULL;
    struct Nuitka_FrameObject *frame_5f08a56e65acc4e564f5b9b12e43cfb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_pyarrow$$$function__2_show_versions$$$function__1_print_entry();

        assert(var_print_entry == NULL);
        var_print_entry = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3)) {
        Py_XDECREF(cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3 = MAKE_FUNCTION_FRAME(codeobj_5f08a56e65acc4e564f5b9b12e43cfb3, module_pyarrow, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_type_description == NULL);
    frame_5f08a56e65acc4e564f5b9b12e43cfb3 = cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5f08a56e65acc4e564f5b9b12e43cfb3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5f08a56e65acc4e564f5b9b12e43cfb3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_1 != NULL);
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 83;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[10]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_2 = var_print_entry;
        tmp_args_element_value_1 = mod_consts[11];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_2 = mod_consts[14];
        Py_INCREF(tmp_args_element_value_2);
        condexpr_end_1:;
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_3 = var_print_entry;
        tmp_args_element_value_3 = mod_consts[15];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_4 = var_print_entry;
        tmp_args_element_value_5 = mod_consts[17];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[19];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_6 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_5 = var_print_entry;
        tmp_args_element_value_7 = mod_consts[22];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_6 = var_print_entry;
        tmp_args_element_value_9 = mod_consts[24];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_7 = var_print_entry;
        tmp_args_element_value_11 = mod_consts[26];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[27]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_8 = var_print_entry;
        tmp_args_element_value_13 = mod_consts[28];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[29]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f08a56e65acc4e564f5b9b12e43cfb3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5f08a56e65acc4e564f5b9b12e43cfb3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f08a56e65acc4e564f5b9b12e43cfb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f08a56e65acc4e564f5b9b12e43cfb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f08a56e65acc4e564f5b9b12e43cfb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f08a56e65acc4e564f5b9b12e43cfb3,
        type_description_1,
        var_print_entry
    );


    // Release cached frame if used for exception.
    if (frame_5f08a56e65acc4e564f5b9b12e43cfb3 == cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3);
        cache_frame_5f08a56e65acc4e564f5b9b12e43cfb3 = NULL;
    }

    assertFrameObject(frame_5f08a56e65acc4e564f5b9b12e43cfb3);

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
    CHECK_OBJECT(var_print_entry);
    Py_DECREF(var_print_entry);
    var_print_entry = NULL;
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

    CHECK_OBJECT(var_print_entry);
    Py_DECREF(var_print_entry);
    var_print_entry = NULL;
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


static PyObject *impl_pyarrow$$$function__2_show_versions$$$function__1_print_entry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_label = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_19ebf5f38ba727d7a5aacddf89231ebf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_19ebf5f38ba727d7a5aacddf89231ebf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19ebf5f38ba727d7a5aacddf89231ebf)) {
        Py_XDECREF(cache_frame_19ebf5f38ba727d7a5aacddf89231ebf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19ebf5f38ba727d7a5aacddf89231ebf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19ebf5f38ba727d7a5aacddf89231ebf = MAKE_FUNCTION_FRAME(codeobj_19ebf5f38ba727d7a5aacddf89231ebf, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_19ebf5f38ba727d7a5aacddf89231ebf->m_type_description == NULL);
    frame_19ebf5f38ba727d7a5aacddf89231ebf = cache_frame_19ebf5f38ba727d7a5aacddf89231ebf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_19ebf5f38ba727d7a5aacddf89231ebf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_19ebf5f38ba727d7a5aacddf89231ebf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_label);
        tmp_format_value_1 = par_label;
        tmp_format_spec_1 = mod_consts[31];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_value);
            tmp_format_value_2 = par_value;
            tmp_format_spec_2 = mod_consts[33];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_19ebf5f38ba727d7a5aacddf89231ebf->m_frame.f_lineno = 81;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19ebf5f38ba727d7a5aacddf89231ebf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_19ebf5f38ba727d7a5aacddf89231ebf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19ebf5f38ba727d7a5aacddf89231ebf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19ebf5f38ba727d7a5aacddf89231ebf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19ebf5f38ba727d7a5aacddf89231ebf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19ebf5f38ba727d7a5aacddf89231ebf,
        type_description_1,
        par_label,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_19ebf5f38ba727d7a5aacddf89231ebf == cache_frame_19ebf5f38ba727d7a5aacddf89231ebf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_19ebf5f38ba727d7a5aacddf89231ebf);
        cache_frame_19ebf5f38ba727d7a5aacddf89231ebf = NULL;
    }

    assertFrameObject(frame_19ebf5f38ba727d7a5aacddf89231ebf);

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
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__3__module_is_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module = python_pars[0];
    struct Nuitka_FrameObject *frame_d4307042a25df150981b0dcba4082ac0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_d4307042a25df150981b0dcba4082ac0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4307042a25df150981b0dcba4082ac0)) {
        Py_XDECREF(cache_frame_d4307042a25df150981b0dcba4082ac0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4307042a25df150981b0dcba4082ac0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4307042a25df150981b0dcba4082ac0 = MAKE_FUNCTION_FRAME(codeobj_d4307042a25df150981b0dcba4082ac0, module_pyarrow, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d4307042a25df150981b0dcba4082ac0->m_type_description == NULL);
    frame_d4307042a25df150981b0dcba4082ac0 = cache_frame_d4307042a25df150981b0dcba4082ac0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d4307042a25df150981b0dcba4082ac0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d4307042a25df150981b0dcba4082ac0) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[36];
        tmp_string_concat_values_1 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_module);
            tmp_format_value_1 = par_module;
            tmp_format_spec_1 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 98;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_d4307042a25df150981b0dcba4082ac0->m_frame.f_lineno = 98;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d4307042a25df150981b0dcba4082ac0, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d4307042a25df150981b0dcba4082ac0, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
        exception_lineno = 97;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d4307042a25df150981b0dcba4082ac0->m_frame) frame_d4307042a25df150981b0dcba4082ac0->m_frame.f_lineno = exception_tb->tb_lineno;
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
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4307042a25df150981b0dcba4082ac0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4307042a25df150981b0dcba4082ac0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4307042a25df150981b0dcba4082ac0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4307042a25df150981b0dcba4082ac0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4307042a25df150981b0dcba4082ac0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4307042a25df150981b0dcba4082ac0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4307042a25df150981b0dcba4082ac0,
        type_description_1,
        par_module
    );


    // Release cached frame if used for exception.
    if (frame_d4307042a25df150981b0dcba4082ac0 == cache_frame_d4307042a25df150981b0dcba4082ac0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d4307042a25df150981b0dcba4082ac0);
        cache_frame_d4307042a25df150981b0dcba4082ac0 = NULL;
    }

    assertFrameObject(frame_d4307042a25df150981b0dcba4082ac0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__4__filesystem_is_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fs = python_pars[0];
    PyObject *var_pyarrow = NULL;
    struct Nuitka_FrameObject *frame_70376b251992ce2e064d973a4119eae6;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_70376b251992ce2e064d973a4119eae6 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_70376b251992ce2e064d973a4119eae6)) {
        Py_XDECREF(cache_frame_70376b251992ce2e064d973a4119eae6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70376b251992ce2e064d973a4119eae6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70376b251992ce2e064d973a4119eae6 = MAKE_FUNCTION_FRAME(codeobj_70376b251992ce2e064d973a4119eae6, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_70376b251992ce2e064d973a4119eae6->m_type_description == NULL);
    frame_70376b251992ce2e064d973a4119eae6 = cache_frame_70376b251992ce2e064d973a4119eae6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70376b251992ce2e064d973a4119eae6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70376b251992ce2e064d973a4119eae6) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[37];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_70376b251992ce2e064d973a4119eae6->m_frame.f_lineno = 107;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(var_pyarrow == NULL);
        var_pyarrow = tmp_assign_source_1;
    }
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_70376b251992ce2e064d973a4119eae6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_70376b251992ce2e064d973a4119eae6, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 106;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70376b251992ce2e064d973a4119eae6->m_frame) frame_70376b251992ce2e064d973a4119eae6->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(var_pyarrow);
        tmp_expression_value_1 = var_pyarrow;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_fs);
        tmp_getattr_attr_1 = par_fs;
        tmp_capi_result_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_capi_result_1);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_70376b251992ce2e064d973a4119eae6, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_70376b251992ce2e064d973a4119eae6, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_3, exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = mod_consts[39];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 111;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70376b251992ce2e064d973a4119eae6->m_frame) frame_70376b251992ce2e064d973a4119eae6->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_5;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70376b251992ce2e064d973a4119eae6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_70376b251992ce2e064d973a4119eae6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70376b251992ce2e064d973a4119eae6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70376b251992ce2e064d973a4119eae6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70376b251992ce2e064d973a4119eae6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70376b251992ce2e064d973a4119eae6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70376b251992ce2e064d973a4119eae6,
        type_description_1,
        par_fs,
        var_pyarrow
    );


    // Release cached frame if used for exception.
    if (frame_70376b251992ce2e064d973a4119eae6 == cache_frame_70376b251992ce2e064d973a4119eae6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_70376b251992ce2e064d973a4119eae6);
        cache_frame_70376b251992ce2e064d973a4119eae6 = NULL;
    }

    assertFrameObject(frame_70376b251992ce2e064d973a4119eae6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pyarrow);
    var_pyarrow = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_pyarrow);
    var_pyarrow = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fs);
    Py_DECREF(par_fs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__5_show_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_print_entry = NULL;
    PyObject *var_pool = NULL;
    PyObject *var_modules = NULL;
    PyObject *var_module = NULL;
    PyObject *var_status = NULL;
    PyObject *var_filesystems = NULL;
    PyObject *var_fs = NULL;
    PyObject *var_codecs = NULL;
    PyObject *var_codec = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bfd97ca15017bf912e4e8b44240676de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_bfd97ca15017bf912e4e8b44240676de = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bfd97ca15017bf912e4e8b44240676de)) {
        Py_XDECREF(cache_frame_bfd97ca15017bf912e4e8b44240676de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bfd97ca15017bf912e4e8b44240676de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bfd97ca15017bf912e4e8b44240676de = MAKE_FUNCTION_FRAME(codeobj_bfd97ca15017bf912e4e8b44240676de, module_pyarrow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bfd97ca15017bf912e4e8b44240676de->m_type_description == NULL);
    frame_bfd97ca15017bf912e4e8b44240676de = cache_frame_bfd97ca15017bf912e4e8b44240676de;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bfd97ca15017bf912e4e8b44240676de);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bfd97ca15017bf912e4e8b44240676de) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_pyarrow$$$function__5_show_info$$$function__1_print_entry();

        assert(var_print_entry == NULL);
        var_print_entry = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_2 != NULL);
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 128;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[42]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_3 = var_print_entry;
        tmp_args_element_value_1 = mod_consts[43];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 129;
        tmp_format_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[45]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[19];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 129;
            tmp_format_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[46]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[19];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_5;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_4 = var_print_entry;
        tmp_args_element_value_3 = mod_consts[47];
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 130;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[49]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_7;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_6 = var_print_entry;
        tmp_args_element_value_5 = mod_consts[50];
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 131;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[51]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 133;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pool == NULL);
        var_pool = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_6;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_9 != NULL);
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 134;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[53]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_10 = var_print_entry;
        tmp_args_element_value_7 = mod_consts[54];
        CHECK_OBJECT(var_pool);
        tmp_expression_value_3 = var_pool;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_format_spec_3;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_11 = var_print_entry;
        tmp_args_element_value_9 = mod_consts[56];
        CHECK_OBJECT(var_pool);
        tmp_called_instance_3 = var_pool;
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 136;
        tmp_format_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[57]);
        if (tmp_format_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_3 = mod_consts[19];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
        Py_DECREF(tmp_format_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[58];
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        tmp_args_element_value_10 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_format_value_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_format_spec_4;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_12 = var_print_entry;
        tmp_args_element_value_11 = mod_consts[59];
        CHECK_OBJECT(var_pool);
        tmp_called_instance_4 = var_pool;
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 137;
        tmp_format_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[60]);
        if (tmp_format_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_4 = mod_consts[19];
        tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
        Py_DECREF(tmp_format_value_4);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[58];
        PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        tmp_args_element_value_12 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_14;
        CHECK_OBJECT(var_print_entry);
        tmp_called_value_13 = var_print_entry;
        tmp_args_element_value_13 = mod_consts[61];
        tmp_str_arg_value_1 = mod_consts[62];
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 138;
        tmp_iterable_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_11;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_15 != NULL);
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 140;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[64]);

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(mod_consts[65]);
        assert(var_modules == NULL);
        var_modules = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_modules);
        tmp_iter_arg_1 = var_modules;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_module;
            var_module = tmp_assign_source_6;
            Py_INCREF(var_module);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_15;
        int tmp_truth_name_1;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_module);
        tmp_args_element_value_15 = var_module;
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 144;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_12);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_12);

            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_12);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_7 = mod_consts[67];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_7 = mod_consts[68];
        condexpr_end_1:;
        {
            PyObject *old = var_status;
            var_status = tmp_assign_source_7;
            Py_INCREF(var_status);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_17 != NULL);
        tmp_tuple_element_4 = mod_consts[69];
        tmp_string_concat_values_4 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_module);
            tmp_format_value_5 = var_module;
            tmp_format_spec_5 = mod_consts[70];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(var_status);
            tmp_format_value_6 = var_status;
            tmp_format_spec_6 = mod_consts[33];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_16 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 145;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 143;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_14;
        tmp_called_value_18 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_18 != NULL);
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 147;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[71]);

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = LIST_COPY(mod_consts[72]);
        assert(var_filesystems == NULL);
        var_filesystems = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_filesystems);
        tmp_iter_arg_2 = var_filesystems;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 149;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_11 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_fs;
            var_fs = tmp_assign_source_11;
            Py_INCREF(var_fs);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_17;
        int tmp_truth_name_2;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_fs);
        tmp_args_element_value_17 = var_fs;
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 150;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_17);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_15);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_15);

            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_15);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_12 = mod_consts[67];
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_12 = mod_consts[68];
        condexpr_end_2:;
        {
            PyObject *old = var_status;
            var_status = tmp_assign_source_12;
            Py_INCREF(var_status);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        tmp_called_value_20 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_20 != NULL);
        tmp_tuple_element_5 = mod_consts[69];
        tmp_string_concat_values_5 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_fs);
            tmp_format_value_7 = var_fs;
            tmp_format_spec_7 = mod_consts[70];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
            CHECK_OBJECT(var_status);
            tmp_format_value_8 = var_status;
            tmp_format_spec_8 = mod_consts[33];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_18 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 151;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_16);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 149;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_17;
        tmp_called_value_21 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_21 != NULL);
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 153;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[74]);

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = LIST_COPY(mod_consts[75]);
        assert(var_codecs == NULL);
        var_codecs = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_codecs);
        tmp_iter_arg_3 = var_codecs;
        tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_14;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_15 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 155;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_16 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_codec;
            var_codec = tmp_assign_source_16;
            Py_INCREF(var_codec);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_19;
        int tmp_truth_name_3;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_codec);
        tmp_args_element_value_19 = var_codec;
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 156;
        tmp_call_result_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[77], tmp_args_element_value_19);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_18);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_18);

            exception_lineno = 156;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_18);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_assign_source_17 = mod_consts[67];
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_17 = mod_consts[68];
        condexpr_end_3:;
        {
            PyObject *old = var_status;
            var_status = tmp_assign_source_17;
            Py_INCREF(var_status);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        tmp_called_value_22 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_22 != NULL);
        tmp_tuple_element_6 = mod_consts[69];
        tmp_string_concat_values_6 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_codec);
            tmp_format_value_9 = var_codec;
            tmp_format_spec_9 = mod_consts[70];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(var_status);
            tmp_format_value_10 = var_status;
            tmp_format_spec_10 = mod_consts[33];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_20 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        frame_bfd97ca15017bf912e4e8b44240676de->m_frame.f_lineno = 157;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_19);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 155;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfd97ca15017bf912e4e8b44240676de);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bfd97ca15017bf912e4e8b44240676de);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bfd97ca15017bf912e4e8b44240676de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bfd97ca15017bf912e4e8b44240676de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bfd97ca15017bf912e4e8b44240676de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bfd97ca15017bf912e4e8b44240676de,
        type_description_1,
        var_print_entry,
        var_pool,
        var_modules,
        var_module,
        var_status,
        var_filesystems,
        var_fs,
        var_codecs,
        var_codec
    );


    // Release cached frame if used for exception.
    if (frame_bfd97ca15017bf912e4e8b44240676de == cache_frame_bfd97ca15017bf912e4e8b44240676de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bfd97ca15017bf912e4e8b44240676de);
        cache_frame_bfd97ca15017bf912e4e8b44240676de = NULL;
    }

    assertFrameObject(frame_bfd97ca15017bf912e4e8b44240676de);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_print_entry);
    Py_DECREF(var_print_entry);
    var_print_entry = NULL;
    CHECK_OBJECT(var_pool);
    Py_DECREF(var_pool);
    var_pool = NULL;
    CHECK_OBJECT(var_modules);
    Py_DECREF(var_modules);
    var_modules = NULL;
    Py_XDECREF(var_module);
    var_module = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    CHECK_OBJECT(var_filesystems);
    Py_DECREF(var_filesystems);
    var_filesystems = NULL;
    Py_XDECREF(var_fs);
    var_fs = NULL;
    CHECK_OBJECT(var_codecs);
    Py_DECREF(var_codecs);
    var_codecs = NULL;
    Py_XDECREF(var_codec);
    var_codec = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_print_entry);
    var_print_entry = NULL;
    Py_XDECREF(var_pool);
    var_pool = NULL;
    Py_XDECREF(var_modules);
    var_modules = NULL;
    Py_XDECREF(var_module);
    var_module = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_filesystems);
    var_filesystems = NULL;
    Py_XDECREF(var_fs);
    var_fs = NULL;
    Py_XDECREF(var_codecs);
    var_codecs = NULL;
    Py_XDECREF(var_codec);
    var_codec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyarrow$$$function__5_show_info$$$function__1_print_entry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_label = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_71e9a6c8536355cca32621279e951b9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_71e9a6c8536355cca32621279e951b9a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_71e9a6c8536355cca32621279e951b9a)) {
        Py_XDECREF(cache_frame_71e9a6c8536355cca32621279e951b9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_71e9a6c8536355cca32621279e951b9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_71e9a6c8536355cca32621279e951b9a = MAKE_FUNCTION_FRAME(codeobj_71e9a6c8536355cca32621279e951b9a, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_71e9a6c8536355cca32621279e951b9a->m_type_description == NULL);
    frame_71e9a6c8536355cca32621279e951b9a = cache_frame_71e9a6c8536355cca32621279e951b9a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_71e9a6c8536355cca32621279e951b9a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_71e9a6c8536355cca32621279e951b9a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_1 != NULL);
        tmp_tuple_element_1 = mod_consts[69];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_label);
            tmp_format_value_1 = par_label;
            tmp_format_spec_1 = mod_consts[70];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_value);
            tmp_format_value_2 = par_value;
            tmp_format_spec_2 = mod_consts[33];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[19], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_71e9a6c8536355cca32621279e951b9a->m_frame.f_lineno = 126;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_71e9a6c8536355cca32621279e951b9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_71e9a6c8536355cca32621279e951b9a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_71e9a6c8536355cca32621279e951b9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_71e9a6c8536355cca32621279e951b9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_71e9a6c8536355cca32621279e951b9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_71e9a6c8536355cca32621279e951b9a,
        type_description_1,
        par_label,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_71e9a6c8536355cca32621279e951b9a == cache_frame_71e9a6c8536355cca32621279e951b9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_71e9a6c8536355cca32621279e951b9a);
        cache_frame_71e9a6c8536355cca32621279e951b9a = NULL;
    }

    assertFrameObject(frame_71e9a6c8536355cca32621279e951b9a);

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
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__6___getattr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *var_obj = NULL;
    PyObject *var_new_name = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b8cdd13fabea0d900a0c4bb30c1decfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd)) {
        Py_XDECREF(cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd = MAKE_FUNCTION_FRAME(codeobj_b8cdd13fabea0d900a0c4bb30c1decfd, module_pyarrow, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_type_description == NULL);
    frame_b8cdd13fabea0d900a0c4bb30c1decfd = cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b8cdd13fabea0d900a0c4bb30c1decfd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b8cdd13fabea0d900a0c4bb30c1decfd) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 325;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 325;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooo";
                    exception_lineno = 325;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[80];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 325;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_obj == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_obj = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_new_name == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_new_name = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 326;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[84]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 326;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        CHECK_OBJECT(var_new_name);
        tmp_args_element_value_2 = var_new_name;
        frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame.f_lineno = 326;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 326;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[86]);
        frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame.f_lineno = 326;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    CHECK_OBJECT(var_obj);
    tmp_return_value = var_obj;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_2 = par_name;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[82]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[84]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame.f_lineno = 330;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[86]);
        frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame.f_lineno = 330;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_2 = par_name;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_7 = mod_consts[89];
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[84]);
        assert(!(tmp_called_value_5 == NULL));
        CHECK_OBJECT(par_name);
        tmp_args_element_value_4 = par_name;
        frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame.f_lineno = 335;
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame.f_lineno = 334;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AttributeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 334;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8cdd13fabea0d900a0c4bb30c1decfd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8cdd13fabea0d900a0c4bb30c1decfd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8cdd13fabea0d900a0c4bb30c1decfd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8cdd13fabea0d900a0c4bb30c1decfd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8cdd13fabea0d900a0c4bb30c1decfd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8cdd13fabea0d900a0c4bb30c1decfd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8cdd13fabea0d900a0c4bb30c1decfd,
        type_description_1,
        par_name,
        var_obj,
        var_new_name
    );


    // Release cached frame if used for exception.
    if (frame_b8cdd13fabea0d900a0c4bb30c1decfd == cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd);
        cache_frame_b8cdd13fabea0d900a0c4bb30c1decfd = NULL;
    }

    assertFrameObject(frame_b8cdd13fabea0d900a0c4bb30c1decfd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_new_name);
    var_new_name = NULL;
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

    Py_XDECREF(var_obj);
    var_obj = NULL;
    Py_XDECREF(var_new_name);
    var_new_name = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__7__plasma_store_entry_point(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_pyarrow = NULL;
    PyObject *var_plasma_store_executable = NULL;
    struct Nuitka_FrameObject *frame_90d8fa7f6a79f9a774c5dcce28305dac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_90d8fa7f6a79f9a774c5dcce28305dac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_90d8fa7f6a79f9a774c5dcce28305dac)) {
        Py_XDECREF(cache_frame_90d8fa7f6a79f9a774c5dcce28305dac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90d8fa7f6a79f9a774c5dcce28305dac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90d8fa7f6a79f9a774c5dcce28305dac = MAKE_FUNCTION_FRAME(codeobj_90d8fa7f6a79f9a774c5dcce28305dac, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_90d8fa7f6a79f9a774c5dcce28305dac->m_type_description == NULL);
    frame_90d8fa7f6a79f9a774c5dcce28305dac = cache_frame_90d8fa7f6a79f9a774c5dcce28305dac;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_90d8fa7f6a79f9a774c5dcce28305dac);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_90d8fa7f6a79f9a774c5dcce28305dac) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[90];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_90d8fa7f6a79f9a774c5dcce28305dac->m_frame.f_lineno = 350;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_pyarrow == NULL);
        var_pyarrow = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[93]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pyarrow);
        tmp_expression_value_4 = var_pyarrow;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[94]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[95];
        frame_90d8fa7f6a79f9a774c5dcce28305dac->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_plasma_store_executable == NULL);
        var_plasma_store_executable = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[96]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_plasma_store_executable);
        tmp_args_element_value_3 = var_plasma_store_executable;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 353;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[98]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 353;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_90d8fa7f6a79f9a774c5dcce28305dac->m_frame.f_lineno = 353;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_90d8fa7f6a79f9a774c5dcce28305dac);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_90d8fa7f6a79f9a774c5dcce28305dac);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_90d8fa7f6a79f9a774c5dcce28305dac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90d8fa7f6a79f9a774c5dcce28305dac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90d8fa7f6a79f9a774c5dcce28305dac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90d8fa7f6a79f9a774c5dcce28305dac,
        type_description_1,
        var_pyarrow,
        var_plasma_store_executable
    );


    // Release cached frame if used for exception.
    if (frame_90d8fa7f6a79f9a774c5dcce28305dac == cache_frame_90d8fa7f6a79f9a774c5dcce28305dac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_90d8fa7f6a79f9a774c5dcce28305dac);
        cache_frame_90d8fa7f6a79f9a774c5dcce28305dac = NULL;
    }

    assertFrameObject(frame_90d8fa7f6a79f9a774c5dcce28305dac);

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
    CHECK_OBJECT(var_pyarrow);
    Py_DECREF(var_pyarrow);
    var_pyarrow = NULL;
    CHECK_OBJECT(var_plasma_store_executable);
    Py_DECREF(var_plasma_store_executable);
    var_plasma_store_executable = NULL;
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

    Py_XDECREF(var_pyarrow);
    var_pyarrow = NULL;
    Py_XDECREF(var_plasma_store_executable);
    var_plasma_store_executable = NULL;
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


static PyObject *impl_pyarrow$$$function__8__deprecate_scalar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ty = python_pars[0];
    PyObject *par_symbol = python_pars[1];
    struct Nuitka_FrameObject *frame_1a207be18027d29686526db7ef07569b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a207be18027d29686526db7ef07569b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a207be18027d29686526db7ef07569b)) {
        Py_XDECREF(cache_frame_1a207be18027d29686526db7ef07569b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a207be18027d29686526db7ef07569b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a207be18027d29686526db7ef07569b = MAKE_FUNCTION_FRAME(codeobj_1a207be18027d29686526db7ef07569b, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1a207be18027d29686526db7ef07569b->m_type_description == NULL);
    frame_1a207be18027d29686526db7ef07569b = cache_frame_1a207be18027d29686526db7ef07569b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1a207be18027d29686526db7ef07569b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1a207be18027d29686526db7ef07569b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = mod_consts[101];
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_ty);
        tmp_args_element_value_2 = par_ty;
        frame_1a207be18027d29686526db7ef07569b->m_frame.f_lineno = 393;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_symbol);
        tmp_args_element_value_3 = par_symbol;
        tmp_args_element_value_4 = mod_consts[102];
        frame_1a207be18027d29686526db7ef07569b->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a207be18027d29686526db7ef07569b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a207be18027d29686526db7ef07569b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a207be18027d29686526db7ef07569b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a207be18027d29686526db7ef07569b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a207be18027d29686526db7ef07569b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a207be18027d29686526db7ef07569b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a207be18027d29686526db7ef07569b,
        type_description_1,
        par_ty,
        par_symbol
    );


    // Release cached frame if used for exception.
    if (frame_1a207be18027d29686526db7ef07569b == cache_frame_1a207be18027d29686526db7ef07569b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1a207be18027d29686526db7ef07569b);
        cache_frame_1a207be18027d29686526db7ef07569b = NULL;
    }

    assertFrameObject(frame_1a207be18027d29686526db7ef07569b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ty);
    Py_DECREF(par_ty);
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ty);
    Py_DECREF(par_ty);
    CHECK_OBJECT(par_symbol);
    Py_DECREF(par_symbol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__9_get_include(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b6cc78f0fceb12e00da973556b8f4478;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6cc78f0fceb12e00da973556b8f4478 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6cc78f0fceb12e00da973556b8f4478)) {
        Py_XDECREF(cache_frame_b6cc78f0fceb12e00da973556b8f4478);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6cc78f0fceb12e00da973556b8f4478 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6cc78f0fceb12e00da973556b8f4478 = MAKE_FUNCTION_FRAME(codeobj_b6cc78f0fceb12e00da973556b8f4478, module_pyarrow, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b6cc78f0fceb12e00da973556b8f4478->m_type_description == NULL);
    frame_b6cc78f0fceb12e00da973556b8f4478 = cache_frame_b6cc78f0fceb12e00da973556b8f4478;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b6cc78f0fceb12e00da973556b8f4478);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b6cc78f0fceb12e00da973556b8f4478) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[93]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[92]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        frame_b6cc78f0fceb12e00da973556b8f4478->m_frame.f_lineno = 449;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[105];
        frame_b6cc78f0fceb12e00da973556b8f4478->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6cc78f0fceb12e00da973556b8f4478);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6cc78f0fceb12e00da973556b8f4478);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b6cc78f0fceb12e00da973556b8f4478);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6cc78f0fceb12e00da973556b8f4478, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6cc78f0fceb12e00da973556b8f4478->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6cc78f0fceb12e00da973556b8f4478, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6cc78f0fceb12e00da973556b8f4478,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b6cc78f0fceb12e00da973556b8f4478 == cache_frame_b6cc78f0fceb12e00da973556b8f4478) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b6cc78f0fceb12e00da973556b8f4478);
        cache_frame_b6cc78f0fceb12e00da973556b8f4478 = NULL;
    }

    assertFrameObject(frame_b6cc78f0fceb12e00da973556b8f4478);

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


static PyObject *impl_pyarrow$$$function__10__get_pkg_config_executable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_926bb0086be25ff76c453c2b47e24ffc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_926bb0086be25ff76c453c2b47e24ffc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_926bb0086be25ff76c453c2b47e24ffc)) {
        Py_XDECREF(cache_frame_926bb0086be25ff76c453c2b47e24ffc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_926bb0086be25ff76c453c2b47e24ffc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_926bb0086be25ff76c453c2b47e24ffc = MAKE_FUNCTION_FRAME(codeobj_926bb0086be25ff76c453c2b47e24ffc, module_pyarrow, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_926bb0086be25ff76c453c2b47e24ffc->m_type_description == NULL);
    frame_926bb0086be25ff76c453c2b47e24ffc = cache_frame_926bb0086be25ff76c453c2b47e24ffc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_926bb0086be25ff76c453c2b47e24ffc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_926bb0086be25ff76c453c2b47e24ffc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[108]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        frame_926bb0086be25ff76c453c2b47e24ffc->m_frame.f_lineno = 453;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[109]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_926bb0086be25ff76c453c2b47e24ffc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_926bb0086be25ff76c453c2b47e24ffc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_926bb0086be25ff76c453c2b47e24ffc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_926bb0086be25ff76c453c2b47e24ffc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_926bb0086be25ff76c453c2b47e24ffc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_926bb0086be25ff76c453c2b47e24ffc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_926bb0086be25ff76c453c2b47e24ffc,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_926bb0086be25ff76c453c2b47e24ffc == cache_frame_926bb0086be25ff76c453c2b47e24ffc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_926bb0086be25ff76c453c2b47e24ffc);
        cache_frame_926bb0086be25ff76c453c2b47e24ffc = NULL;
    }

    assertFrameObject(frame_926bb0086be25ff76c453c2b47e24ffc);

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


static PyObject *impl_pyarrow$$$function__11__has_pkg_config(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pkgname = python_pars[0];
    PyObject *var_subprocess = NULL;
    struct Nuitka_FrameObject *frame_f53b81a0470e5570c49579b841713c6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_f53b81a0470e5570c49579b841713c6b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f53b81a0470e5570c49579b841713c6b)) {
        Py_XDECREF(cache_frame_f53b81a0470e5570c49579b841713c6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f53b81a0470e5570c49579b841713c6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f53b81a0470e5570c49579b841713c6b = MAKE_FUNCTION_FRAME(codeobj_f53b81a0470e5570c49579b841713c6b, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f53b81a0470e5570c49579b841713c6b->m_type_description == NULL);
    frame_f53b81a0470e5570c49579b841713c6b = cache_frame_f53b81a0470e5570c49579b841713c6b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f53b81a0470e5570c49579b841713c6b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f53b81a0470e5570c49579b841713c6b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[110];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_f53b81a0470e5570c49579b841713c6b->m_frame.f_lineno = 457;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_subprocess == NULL);
        var_subprocess = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(var_subprocess);
        tmp_expression_value_1 = var_subprocess;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 459;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_f53b81a0470e5570c49579b841713c6b->m_frame.f_lineno = 459;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 459;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = PyList_New(3);
        PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[113];
        PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_pkgname);
        tmp_list_element_1 = par_pkgname;
        PyList_SET_ITEM0(tmp_args_element_value_1, 2, tmp_list_element_1);
        frame_f53b81a0470e5570c49579b841713c6b->m_frame.f_lineno = 459;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f53b81a0470e5570c49579b841713c6b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f53b81a0470e5570c49579b841713c6b, exception_keeper_lineno_1);
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
        tmp_cmp_expr_right_2 = PyExc_FileNotFoundError;
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
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 458;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f53b81a0470e5570c49579b841713c6b->m_frame) frame_f53b81a0470e5570c49579b841713c6b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto frame_return_exit_1;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f53b81a0470e5570c49579b841713c6b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f53b81a0470e5570c49579b841713c6b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f53b81a0470e5570c49579b841713c6b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f53b81a0470e5570c49579b841713c6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f53b81a0470e5570c49579b841713c6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f53b81a0470e5570c49579b841713c6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f53b81a0470e5570c49579b841713c6b,
        type_description_1,
        par_pkgname,
        var_subprocess
    );


    // Release cached frame if used for exception.
    if (frame_f53b81a0470e5570c49579b841713c6b == cache_frame_f53b81a0470e5570c49579b841713c6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f53b81a0470e5570c49579b841713c6b);
        cache_frame_f53b81a0470e5570c49579b841713c6b = NULL;
    }

    assertFrameObject(frame_f53b81a0470e5570c49579b841713c6b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_subprocess);
    Py_DECREF(var_subprocess);
    var_subprocess = NULL;
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

    Py_XDECREF(var_subprocess);
    var_subprocess = NULL;
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
    CHECK_OBJECT(par_pkgname);
    Py_DECREF(par_pkgname);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pkgname);
    Py_DECREF(par_pkgname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__12__read_pkg_config_variable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pkgname = python_pars[0];
    PyObject *par_cli_args = python_pars[1];
    PyObject *var_subprocess = NULL;
    PyObject *var_cmd = NULL;
    PyObject *var_proc = NULL;
    PyObject *var_out = NULL;
    PyObject *var_err = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_656ff3d65ec3f73a2b5d1ff21d462b9d;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d)) {
        Py_XDECREF(cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d = MAKE_FUNCTION_FRAME(codeobj_656ff3d65ec3f73a2b5d1ff21d462b9d, module_pyarrow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_type_description == NULL);
    frame_656ff3d65ec3f73a2b5d1ff21d462b9d = cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_656ff3d65ec3f73a2b5d1ff21d462b9d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_656ff3d65ec3f73a2b5d1ff21d462b9d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[110];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 466;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_subprocess == NULL);
        var_subprocess = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 467;
        tmp_list_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = PyList_New(2);
        PyList_SET_ITEM(tmp_left_value_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_pkgname);
        tmp_list_element_1 = par_pkgname;
        PyList_SET_ITEM0(tmp_left_value_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_cli_args);
        tmp_right_value_1 = par_cli_args;
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cmd == NULL);
        var_cmd = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_subprocess);
        tmp_expression_value_1 = var_subprocess;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[114]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmd);
        tmp_kw_call_arg_value_0_1 = var_cmd;
        CHECK_OBJECT(var_subprocess);
        tmp_expression_value_2 = var_subprocess;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[115]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 468;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_subprocess);
        tmp_expression_value_3 = var_subprocess;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[115]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 469;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 468;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[116]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proc == NULL);
        var_proc = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_proc);
        tmp_called_instance_1 = var_proc;
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 470;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[117]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 470;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 470;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 470;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[80];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 470;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_out == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_out = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_err = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_proc);
        tmp_expression_value_4 = var_proc;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[118]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        tmp_left_value_2 = mod_consts[119];
        CHECK_OBJECT(var_err);
        tmp_expression_value_5 = var_err;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[120]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 472;
        tmp_right_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[121]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 472;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 472;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_out);
        tmp_expression_value_7 = var_out;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[122]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 473;
        tmp_expression_value_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[120]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame.f_lineno = 473;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[121]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_656ff3d65ec3f73a2b5d1ff21d462b9d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_656ff3d65ec3f73a2b5d1ff21d462b9d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_656ff3d65ec3f73a2b5d1ff21d462b9d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_656ff3d65ec3f73a2b5d1ff21d462b9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_656ff3d65ec3f73a2b5d1ff21d462b9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_656ff3d65ec3f73a2b5d1ff21d462b9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_656ff3d65ec3f73a2b5d1ff21d462b9d,
        type_description_1,
        par_pkgname,
        par_cli_args,
        var_subprocess,
        var_cmd,
        var_proc,
        var_out,
        var_err
    );


    // Release cached frame if used for exception.
    if (frame_656ff3d65ec3f73a2b5d1ff21d462b9d == cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d);
        cache_frame_656ff3d65ec3f73a2b5d1ff21d462b9d = NULL;
    }

    assertFrameObject(frame_656ff3d65ec3f73a2b5d1ff21d462b9d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_subprocess);
    Py_DECREF(var_subprocess);
    var_subprocess = NULL;
    CHECK_OBJECT(var_cmd);
    Py_DECREF(var_cmd);
    var_cmd = NULL;
    CHECK_OBJECT(var_proc);
    Py_DECREF(var_proc);
    var_proc = NULL;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
    CHECK_OBJECT(var_err);
    Py_DECREF(var_err);
    var_err = NULL;
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

    Py_XDECREF(var_subprocess);
    var_subprocess = NULL;
    Py_XDECREF(var_cmd);
    var_cmd = NULL;
    Py_XDECREF(var_proc);
    var_proc = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_err);
    var_err = NULL;
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
    CHECK_OBJECT(par_pkgname);
    Py_DECREF(par_pkgname);
    CHECK_OBJECT(par_cli_args);
    Py_DECREF(par_cli_args);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pkgname);
    Py_DECREF(par_pkgname);
    CHECK_OBJECT(par_cli_args);
    Py_DECREF(par_cli_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__13_get_libraries(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[123]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__14_create_library_symlinks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_glob = NULL;
    PyObject *var_package_cwd = NULL;
    PyObject *var_bundled_libs = NULL;
    PyObject *var_get_symlink_path = NULL;
    PyObject *var_lib_hard_path = NULL;
    PyObject *var_symlink_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_29f217cf293b5ab24fd6ab3a7b3c4039;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039)) {
        Py_XDECREF(cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039 = MAKE_FUNCTION_FRAME(codeobj_29f217cf293b5ab24fd6ab3a7b3c4039, module_pyarrow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_type_description == NULL);
    frame_29f217cf293b5ab24fd6ab3a7b3c4039 = cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_29f217cf293b5ab24fd6ab3a7b3c4039);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_29f217cf293b5ab24fd6ab3a7b3c4039) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[125];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 499;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_glob == NULL);
        var_glob = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[126]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[127];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[92]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[103]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 502;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 502;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_package_cwd == NULL);
        var_package_cwd = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[126]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[128];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_glob);
        tmp_expression_value_5 = var_glob;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[125]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[92]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[93]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_package_cwd);
        tmp_args_element_value_3 = var_package_cwd;
        tmp_args_element_value_4 = mod_consts[129];
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 505;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 505;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bundled_libs == NULL);
        var_bundled_libs = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks$$$function__1_get_symlink_path();

        assert(var_get_symlink_path == NULL);
        var_get_symlink_path = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_glob);
        tmp_expression_value_8 = var_glob;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[125]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[92]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[93]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_package_cwd);
        tmp_args_element_value_6 = var_package_cwd;
        tmp_args_element_value_7 = mod_consts[132];
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 510;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 510;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bundled_libs == NULL);
        var_bundled_libs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks$$$function__2_get_symlink_path();

        assert(var_get_symlink_path == NULL);
        var_get_symlink_path = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_bundled_libs);
        tmp_iter_arg_1 = var_bundled_libs;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 515;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_lib_hard_path;
            var_lib_hard_path = tmp_assign_source_9;
            Py_INCREF(var_lib_hard_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        if (var_get_symlink_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[130]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 516;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_6 = var_get_symlink_path;
        CHECK_OBJECT(var_lib_hard_path);
        tmp_args_element_value_8 = var_lib_hard_path;
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 516;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_symlink_path;
            var_symlink_path = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_9;
        int tmp_truth_name_1;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[92]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_symlink_path);
        tmp_args_element_value_9 = var_symlink_path;
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 517;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[133], tmp_args_element_value_9);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 517;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_1;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_lib_hard_path);
        tmp_args_element_value_10 = var_lib_hard_path;
        CHECK_OBJECT(var_symlink_path);
        tmp_args_element_value_11 = var_symlink_path;
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 520;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[134],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_29f217cf293b5ab24fd6ab3a7b3c4039, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_29f217cf293b5ab24fd6ab3a7b3c4039, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_PermissionError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_7 != NULL);
        frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = 522;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[135]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 519;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame) frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_4;
    branch_end_4:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 515;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29f217cf293b5ab24fd6ab3a7b3c4039);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_29f217cf293b5ab24fd6ab3a7b3c4039);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_29f217cf293b5ab24fd6ab3a7b3c4039);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_29f217cf293b5ab24fd6ab3a7b3c4039, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29f217cf293b5ab24fd6ab3a7b3c4039->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29f217cf293b5ab24fd6ab3a7b3c4039, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29f217cf293b5ab24fd6ab3a7b3c4039,
        type_description_1,
        var_glob,
        var_package_cwd,
        var_bundled_libs,
        var_get_symlink_path,
        var_lib_hard_path,
        var_symlink_path
    );


    // Release cached frame if used for exception.
    if (frame_29f217cf293b5ab24fd6ab3a7b3c4039 == cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039);
        cache_frame_29f217cf293b5ab24fd6ab3a7b3c4039 = NULL;
    }

    assertFrameObject(frame_29f217cf293b5ab24fd6ab3a7b3c4039);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_glob);
    var_glob = NULL;
    Py_XDECREF(var_package_cwd);
    var_package_cwd = NULL;
    Py_XDECREF(var_bundled_libs);
    var_bundled_libs = NULL;
    Py_XDECREF(var_get_symlink_path);
    var_get_symlink_path = NULL;
    Py_XDECREF(var_lib_hard_path);
    var_lib_hard_path = NULL;
    Py_XDECREF(var_symlink_path);
    var_symlink_path = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_glob);
    var_glob = NULL;
    Py_XDECREF(var_package_cwd);
    var_package_cwd = NULL;
    Py_XDECREF(var_bundled_libs);
    var_bundled_libs = NULL;
    Py_XDECREF(var_get_symlink_path);
    var_get_symlink_path = NULL;
    Py_XDECREF(var_lib_hard_path);
    var_lib_hard_path = NULL;
    Py_XDECREF(var_symlink_path);
    var_symlink_path = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_pyarrow$$$function__14_create_library_symlinks$$$function__1_get_symlink_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hard_path = python_pars[0];
    struct Nuitka_FrameObject *frame_050bdc6b2e12c18b98ed8840f3b75152;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_050bdc6b2e12c18b98ed8840f3b75152 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_050bdc6b2e12c18b98ed8840f3b75152)) {
        Py_XDECREF(cache_frame_050bdc6b2e12c18b98ed8840f3b75152);

#if _DEBUG_REFCOUNTS
        if (cache_frame_050bdc6b2e12c18b98ed8840f3b75152 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_050bdc6b2e12c18b98ed8840f3b75152 = MAKE_FUNCTION_FRAME(codeobj_050bdc6b2e12c18b98ed8840f3b75152, module_pyarrow, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_050bdc6b2e12c18b98ed8840f3b75152->m_type_description == NULL);
    frame_050bdc6b2e12c18b98ed8840f3b75152 = cache_frame_050bdc6b2e12c18b98ed8840f3b75152;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_050bdc6b2e12c18b98ed8840f3b75152);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_050bdc6b2e12c18b98ed8840f3b75152) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_hard_path);
        tmp_expression_value_2 = par_hard_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[137]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_050bdc6b2e12c18b98ed8840f3b75152->m_frame.f_lineno = 508;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[138]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_050bdc6b2e12c18b98ed8840f3b75152);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_050bdc6b2e12c18b98ed8840f3b75152);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_050bdc6b2e12c18b98ed8840f3b75152);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_050bdc6b2e12c18b98ed8840f3b75152, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_050bdc6b2e12c18b98ed8840f3b75152->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_050bdc6b2e12c18b98ed8840f3b75152, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_050bdc6b2e12c18b98ed8840f3b75152,
        type_description_1,
        par_hard_path
    );


    // Release cached frame if used for exception.
    if (frame_050bdc6b2e12c18b98ed8840f3b75152 == cache_frame_050bdc6b2e12c18b98ed8840f3b75152) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_050bdc6b2e12c18b98ed8840f3b75152);
        cache_frame_050bdc6b2e12c18b98ed8840f3b75152 = NULL;
    }

    assertFrameObject(frame_050bdc6b2e12c18b98ed8840f3b75152);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hard_path);
    Py_DECREF(par_hard_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hard_path);
    Py_DECREF(par_hard_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__14_create_library_symlinks$$$function__2_get_symlink_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_hard_path = python_pars[0];
    struct Nuitka_FrameObject *frame_61589cd4dff2496b16ef7b3d2f37869c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61589cd4dff2496b16ef7b3d2f37869c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61589cd4dff2496b16ef7b3d2f37869c)) {
        Py_XDECREF(cache_frame_61589cd4dff2496b16ef7b3d2f37869c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61589cd4dff2496b16ef7b3d2f37869c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61589cd4dff2496b16ef7b3d2f37869c = MAKE_FUNCTION_FRAME(codeobj_61589cd4dff2496b16ef7b3d2f37869c, module_pyarrow, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_61589cd4dff2496b16ef7b3d2f37869c->m_type_description == NULL);
    frame_61589cd4dff2496b16ef7b3d2f37869c = cache_frame_61589cd4dff2496b16ef7b3d2f37869c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_61589cd4dff2496b16ef7b3d2f37869c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_61589cd4dff2496b16ef7b3d2f37869c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_str_arg_value_1 = mod_consts[139];
        CHECK_OBJECT(par_hard_path);
        tmp_expression_value_2 = par_hard_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[137]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_61589cd4dff2496b16ef7b3d2f37869c->m_frame.f_lineno = 513;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[140]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[2];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_iterable_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_iterable_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[141];
        PyTuple_SET_ITEM0(tmp_iterable_value_1, 1, tmp_tuple_element_1);
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_61589cd4dff2496b16ef7b3d2f37869c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_61589cd4dff2496b16ef7b3d2f37869c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_61589cd4dff2496b16ef7b3d2f37869c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61589cd4dff2496b16ef7b3d2f37869c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61589cd4dff2496b16ef7b3d2f37869c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61589cd4dff2496b16ef7b3d2f37869c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61589cd4dff2496b16ef7b3d2f37869c,
        type_description_1,
        par_hard_path
    );


    // Release cached frame if used for exception.
    if (frame_61589cd4dff2496b16ef7b3d2f37869c == cache_frame_61589cd4dff2496b16ef7b3d2f37869c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_61589cd4dff2496b16ef7b3d2f37869c);
        cache_frame_61589cd4dff2496b16ef7b3d2f37869c = NULL;
    }

    assertFrameObject(frame_61589cd4dff2496b16ef7b3d2f37869c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_hard_path);
    Py_DECREF(par_hard_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_hard_path);
    Py_DECREF(par_hard_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyarrow$$$function__15_get_library_dirs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_package_cwd = NULL;
    struct Nuitka_CellObject *var_library_dirs = Nuitka_Cell_Empty();
    PyObject *var_append_library_dir = NULL;
    PyObject *var_pkg_config_executable = NULL;
    PyObject *var_pkgname = NULL;
    PyObject *var_library_dir = NULL;
    PyObject *var_python_base_install = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0)) {
        Py_XDECREF(cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0 = MAKE_FUNCTION_FRAME(codeobj_ae1c8a4d041d8bb5dbb7f6c1d34760b0, module_pyarrow, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_type_description == NULL);
    frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0 = cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 532;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 532;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_package_cwd == NULL);
        var_package_cwd = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_package_cwd);
        tmp_list_element_1 = var_package_cwd;
        tmp_assign_source_2 = PyList_New(1);
        PyList_SET_ITEM0(tmp_assign_source_2, 0, tmp_list_element_1);
        assert(Nuitka_Cell_GET(var_library_dirs) == NULL);
        PyCell_SET(var_library_dirs, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_library_dirs;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_3 = MAKE_FUNCTION_pyarrow$$$function__15_get_library_dirs$$$function__1_append_library_dir(tmp_closure_1);

        assert(var_append_library_dir == NULL);
        var_append_library_dir = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[107]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[108]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 542;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[144]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 542;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[145];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_4 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_pkg_config_executable == NULL);
        var_pkg_config_executable = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[146];
        tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ocooooo";
                exception_lineno = 543;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_pkgname;
            var_pkgname = tmp_assign_source_7;
            Py_INCREF(var_pkgname);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_pkgname);
        tmp_args_element_value_2 = var_pkgname;
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 544;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 544;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
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
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_pkgname);
        tmp_args_element_value_3 = var_pkgname;
        tmp_args_element_value_4 = LIST_COPY(mod_consts[149]);
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 545;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_library_dir;
            var_library_dir = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_library_dir);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_library_dir);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_library_dir);
        tmp_expression_value_5 = var_library_dir;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[150]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 550;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[151]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_6 = mod_consts[152];
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[84]);
        assert(!(tmp_called_value_6 == NULL));
        CHECK_OBJECT(var_library_dir);
        tmp_args_element_value_5 = var_library_dir;
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 552;
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 551;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 551;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ocooooo";
        goto try_except_handler_2;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        if (var_append_library_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 554;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_7 = var_append_library_dir;
        CHECK_OBJECT(var_library_dir);
        tmp_expression_value_7 = var_library_dir;
        tmp_subscript_value_1 = mod_consts[153];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 554;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "ocooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 543;
        type_description_1 = "ocooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[126]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[127];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[92]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[103]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 559;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[154]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 559;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 559;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_python_base_install == NULL);
        var_python_base_install = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[92]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[93]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_python_base_install);
        tmp_args_element_value_8 = var_python_base_install;
        tmp_args_element_value_9 = mod_consts[155];
        tmp_args_element_value_10 = mod_consts[156];
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_library_dir;
            var_library_dir = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        int tmp_truth_name_3;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[92]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[133]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[92]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[93]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_library_dir);
        tmp_args_element_value_12 = var_library_dir;
        tmp_args_element_value_13 = mod_consts[157];
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 562;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 562;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_14;
        if (var_append_library_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 563;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_12 = var_append_library_dir;
        CHECK_OBJECT(var_library_dir);
        tmp_args_element_value_14 = var_library_dir;
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 563;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_14);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_4;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[107]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[108]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 566;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[158]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 566;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_17;
        if (var_append_library_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_14 = var_append_library_dir;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[92]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[93]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[107]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[159];
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[156];
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 567;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 567;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_20;
        if (var_append_library_dir == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_16 = var_append_library_dir;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[92]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[103]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[92]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[160]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 570;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_18);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 570;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame.f_lineno = 570;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "ocooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0,
        type_description_1,
        var_package_cwd,
        var_library_dirs,
        var_append_library_dir,
        var_pkg_config_executable,
        var_pkgname,
        var_library_dir,
        var_python_base_install
    );


    // Release cached frame if used for exception.
    if (frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0 == cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0);
        cache_frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0 = NULL;
    }

    assertFrameObject(frame_ae1c8a4d041d8bb5dbb7f6c1d34760b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(Nuitka_Cell_GET(var_library_dirs));
    tmp_return_value = Nuitka_Cell_GET(var_library_dirs);
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_package_cwd);
    Py_DECREF(var_package_cwd);
    var_package_cwd = NULL;
    CHECK_OBJECT(var_library_dirs);
    Py_DECREF(var_library_dirs);
    var_library_dirs = NULL;
    Py_XDECREF(var_append_library_dir);
    var_append_library_dir = NULL;
    CHECK_OBJECT(var_pkg_config_executable);
    Py_DECREF(var_pkg_config_executable);
    var_pkg_config_executable = NULL;
    Py_XDECREF(var_pkgname);
    var_pkgname = NULL;
    Py_XDECREF(var_library_dir);
    var_library_dir = NULL;
    Py_XDECREF(var_python_base_install);
    var_python_base_install = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_package_cwd);
    var_package_cwd = NULL;
    CHECK_OBJECT(var_library_dirs);
    Py_DECREF(var_library_dirs);
    var_library_dirs = NULL;
    Py_XDECREF(var_append_library_dir);
    var_append_library_dir = NULL;
    Py_XDECREF(var_pkg_config_executable);
    var_pkg_config_executable = NULL;
    Py_XDECREF(var_pkgname);
    var_pkgname = NULL;
    Py_XDECREF(var_library_dir);
    var_library_dir = NULL;
    Py_XDECREF(var_python_base_install);
    var_python_base_install = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_pyarrow$$$function__15_get_library_dirs$$$function__1_append_library_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_library_dir = python_pars[0];
    struct Nuitka_FrameObject *frame_94d61c8400cb30c022a82445ba74699b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_94d61c8400cb30c022a82445ba74699b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94d61c8400cb30c022a82445ba74699b)) {
        Py_XDECREF(cache_frame_94d61c8400cb30c022a82445ba74699b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94d61c8400cb30c022a82445ba74699b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94d61c8400cb30c022a82445ba74699b = MAKE_FUNCTION_FRAME(codeobj_94d61c8400cb30c022a82445ba74699b, module_pyarrow, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_94d61c8400cb30c022a82445ba74699b->m_type_description == NULL);
    frame_94d61c8400cb30c022a82445ba74699b = cache_frame_94d61c8400cb30c022a82445ba74699b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_94d61c8400cb30c022a82445ba74699b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_94d61c8400cb30c022a82445ba74699b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_library_dir);
        tmp_cmp_expr_left_1 = par_library_dir;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[162]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 536;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[162]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_library_dir);
        tmp_args_element_value_1 = par_library_dir;
        frame_94d61c8400cb30c022a82445ba74699b->m_frame.f_lineno = 537;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[163], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94d61c8400cb30c022a82445ba74699b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_94d61c8400cb30c022a82445ba74699b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94d61c8400cb30c022a82445ba74699b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94d61c8400cb30c022a82445ba74699b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94d61c8400cb30c022a82445ba74699b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94d61c8400cb30c022a82445ba74699b,
        type_description_1,
        par_library_dir,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_94d61c8400cb30c022a82445ba74699b == cache_frame_94d61c8400cb30c022a82445ba74699b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_94d61c8400cb30c022a82445ba74699b);
        cache_frame_94d61c8400cb30c022a82445ba74699b = NULL;
    }

    assertFrameObject(frame_94d61c8400cb30c022a82445ba74699b);

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
    CHECK_OBJECT(par_library_dir);
    Py_DECREF(par_library_dir);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_library_dir);
    Py_DECREF(par_library_dir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__10__get_pkg_config_executable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__10__get_pkg_config_executable,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_926bb0086be25ff76c453c2b47e24ffc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__11__has_pkg_config() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__11__has_pkg_config,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f53b81a0470e5570c49579b841713c6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__12__read_pkg_config_variable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__12__read_pkg_config_variable,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_656ff3d65ec3f73a2b5d1ff21d462b9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__13_get_libraries() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__13_get_libraries,
        mod_consts[566],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3cea2f02081dc71a593b3eff0f7e0ee6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[124],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__14_create_library_symlinks,
        mod_consts[567],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29f217cf293b5ab24fd6ab3a7b3c4039,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks$$$function__1_get_symlink_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__14_create_library_symlinks$$$function__1_get_symlink_path,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_050bdc6b2e12c18b98ed8840f3b75152,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks$$$function__2_get_symlink_path() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__14_create_library_symlinks$$$function__2_get_symlink_path,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_61589cd4dff2496b16ef7b3d2f37869c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__15_get_library_dirs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__15_get_library_dirs,
        mod_consts[568],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae1c8a4d041d8bb5dbb7f6c1d34760b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[161],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__15_get_library_dirs$$$function__1_append_library_dir(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__15_get_library_dirs$$$function__1_append_library_dir,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_94d61c8400cb30c022a82445ba74699b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__1_parse_git() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__1_parse_git,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a29d95dd9327972bfb8db6645e8db341,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__2_show_versions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__2_show_versions,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f08a56e65acc4e564f5b9b12e43cfb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__2_show_versions$$$function__1_print_entry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__2_show_versions$$$function__1_print_entry,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[8],
#endif
        codeobj_19ebf5f38ba727d7a5aacddf89231ebf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__3__module_is_available() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__3__module_is_available,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4307042a25df150981b0dcba4082ac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__4__filesystem_is_available() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__4__filesystem_is_available,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70376b251992ce2e064d973a4119eae6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__5_show_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__5_show_info,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bfd97ca15017bf912e4e8b44240676de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[78],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__5_show_info$$$function__1_print_entry() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__5_show_info$$$function__1_print_entry,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_71e9a6c8536355cca32621279e951b9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__6___getattr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__6___getattr__,
        mod_consts[466],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b8cdd13fabea0d900a0c4bb30c1decfd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__7__plasma_store_entry_point() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__7__plasma_store_entry_point,
        mod_consts[467],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90d8fa7f6a79f9a774c5dcce28305dac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__8__deprecate_scalar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__8__deprecate_scalar,
        mod_consts[490],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a207be18027d29686526db7ef07569b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyarrow$$$function__9_get_include() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyarrow$$$function__9_get_include,
        mod_consts[565],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b6cc78f0fceb12e00da973556b8f4478,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyarrow,
        mod_consts[106],
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

function_impl_code functable_pyarrow[] = {
    impl_pyarrow$$$function__2_show_versions$$$function__1_print_entry,
    impl_pyarrow$$$function__5_show_info$$$function__1_print_entry,
    impl_pyarrow$$$function__14_create_library_symlinks$$$function__1_get_symlink_path,
    impl_pyarrow$$$function__14_create_library_symlinks$$$function__2_get_symlink_path,
    impl_pyarrow$$$function__15_get_library_dirs$$$function__1_append_library_dir,
    impl_pyarrow$$$function__1_parse_git,
    impl_pyarrow$$$function__2_show_versions,
    impl_pyarrow$$$function__3__module_is_available,
    impl_pyarrow$$$function__4__filesystem_is_available,
    impl_pyarrow$$$function__5_show_info,
    impl_pyarrow$$$function__6___getattr__,
    impl_pyarrow$$$function__7__plasma_store_entry_point,
    impl_pyarrow$$$function__8__deprecate_scalar,
    impl_pyarrow$$$function__9_get_include,
    impl_pyarrow$$$function__10__get_pkg_config_executable,
    impl_pyarrow$$$function__11__has_pkg_config,
    impl_pyarrow$$$function__12__read_pkg_config_variable,
    impl_pyarrow$$$function__13_get_libraries,
    impl_pyarrow$$$function__14_create_library_symlinks,
    impl_pyarrow$$$function__15_get_library_dirs,
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

    function_impl_code *current = functable_pyarrow;
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

    if (offset > sizeof(functable_pyarrow) || offset < 0) {
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
        functable_pyarrow[offset],
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
        module_pyarrow,
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
PyObject *modulecode_pyarrow(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyarrow");

    // Store the module for future use.
    module_pyarrow = module;

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
        PRINT_STRING("pyarrow: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyarrow: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyarrow: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyarrow\n");

    moduledict_pyarrow = MODULE_DICT(module_pyarrow);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyarrow,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyarrow,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[19]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyarrow,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyarrow,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyarrow,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyarrow);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyarrow);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_e4b1d08ee2774d5b8480bc174e21a226;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e4b1d08ee2774d5b8480bc174e21a226 = MAKE_MODULE_FRAME(codeobj_e4b1d08ee2774d5b8480bc174e21a226, module_pyarrow);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e4b1d08ee2774d5b8480bc174e21a226);
    assert(Py_REFCNT(frame_e4b1d08ee2774d5b8480bc174e21a226) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[92]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[107]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[108]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[166]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_subscript_value_1 = mod_consts[2];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[168], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[169], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[170], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[172];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 32;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_IMPORTLIB();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[126];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 35;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[174];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 37;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[175];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[176];
        tmp_level_value_4 = mod_consts[177];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 40;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyarrow,
                mod_consts[16],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_11);
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e4b1d08ee2774d5b8480bc174e21a226, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e4b1d08ee2774d5b8480bc174e21a226, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[179];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 44;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_pyarrow$$$function__1_parse_git();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[181]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_3;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 57;

            goto try_except_handler_3;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 56;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[182], kw_values, mod_consts[1]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_14);
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_e4b1d08ee2774d5b8480bc174e21a226, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_e4b1d08ee2774d5b8480bc174e21a226, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_15);
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 43;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame) frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 39;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame) frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 63;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[183]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_16);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 64;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[185]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[186];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 65;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyarrow,
                mod_consts[156],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_17);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[173]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 67;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[188]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[186];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[189];
        tmp_level_value_7 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 69;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyarrow,
                mod_consts[190],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[190]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyarrow,
                mod_consts[191],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[191]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pyarrow,
                mod_consts[192],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[192]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pyarrow,
                mod_consts[193],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[193]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pyarrow,
                mod_consts[12],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[12]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pyarrow,
                mod_consts[194],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[194]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pyarrow,
                mod_consts[195],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[195]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pyarrow,
                mod_consts[48],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[48]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pyarrow,
                mod_consts[196],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[196]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pyarrow,
                mod_consts[197],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[197]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pyarrow,
                mod_consts[198],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[198]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pyarrow,
                mod_consts[199],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[199]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pyarrow,
                mod_consts[200],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[200]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_31);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_pyarrow$$$function__2_show_versions();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_pyarrow$$$function__3__module_is_available();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_pyarrow$$$function__4__filesystem_is_available();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_pyarrow$$$function__5_show_info();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[186];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[202];
        tmp_level_value_8 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 160;
        tmp_assign_source_36 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pyarrow,
                mod_consts[203],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[203]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pyarrow,
                mod_consts[204],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[204]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pyarrow,
                mod_consts[205],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[205]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_19 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pyarrow,
                mod_consts[206],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[206]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_20 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_pyarrow,
                mod_consts[207],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[207]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_21 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_pyarrow,
                mod_consts[208],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[208]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_22 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_pyarrow,
                mod_consts[209],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[209]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_23 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_pyarrow,
                mod_consts[210],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[210]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_24 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_pyarrow,
                mod_consts[211],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[211]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_25 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_pyarrow,
                mod_consts[212],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[212]);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_26 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_pyarrow,
                mod_consts[213],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[213]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_27 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_pyarrow,
                mod_consts[214],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[214]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_28 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_pyarrow,
                mod_consts[215],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[215]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_29 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_pyarrow,
                mod_consts[216],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[216]);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_30 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_pyarrow,
                mod_consts[217],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[217]);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_31 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_pyarrow,
                mod_consts[218],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[218]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_32 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_pyarrow,
                mod_consts[219],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[219]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_33 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_pyarrow,
                mod_consts[220],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[220]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_34 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_pyarrow,
                mod_consts[221],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[221]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_35 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_pyarrow,
                mod_consts[222],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[222]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_36 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_pyarrow,
                mod_consts[223],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[223]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_37 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_pyarrow,
                mod_consts[224],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[224]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_38 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_pyarrow,
                mod_consts[225],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[225]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_39 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_pyarrow,
                mod_consts[226],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[226]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_40 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_pyarrow,
                mod_consts[227],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[227]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_41 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_pyarrow,
                mod_consts[228],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[228]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_42 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_pyarrow,
                mod_consts[229],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[229]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_43 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_pyarrow,
                mod_consts[230],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[230]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_44 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_pyarrow,
                mod_consts[231],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[231]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_45;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_45 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_pyarrow,
                mod_consts[232],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[232]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_46 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_pyarrow,
                mod_consts[233],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[233]);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_47 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_pyarrow,
                mod_consts[234],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[234]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_48 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_pyarrow,
                mod_consts[235],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[235]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_49 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_pyarrow,
                mod_consts[236],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[236]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_50 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_pyarrow,
                mod_consts[237],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME(tmp_import_name_from_50, mod_consts[237]);
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_51 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_pyarrow,
                mod_consts[238],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME(tmp_import_name_from_51, mod_consts[238]);
        }

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_52 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_pyarrow,
                mod_consts[239],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME(tmp_import_name_from_52, mod_consts[239]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_53;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_53 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_pyarrow,
                mod_consts[240],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME(tmp_import_name_from_53, mod_consts[240]);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_54;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_54 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_pyarrow,
                mod_consts[241],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME(tmp_import_name_from_54, mod_consts[241]);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_55 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_pyarrow,
                mod_consts[242],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME(tmp_import_name_from_55, mod_consts[242]);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_56 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_pyarrow,
                mod_consts[243],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME(tmp_import_name_from_56, mod_consts[243]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_57;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_57 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_pyarrow,
                mod_consts[244],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME(tmp_import_name_from_57, mod_consts[244]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_58;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_58 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_pyarrow,
                mod_consts[245],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME(tmp_import_name_from_58, mod_consts[245]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_59;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_59 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_pyarrow,
                mod_consts[246],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME(tmp_import_name_from_59, mod_consts[246]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_60;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_60 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_pyarrow,
                mod_consts[247],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME(tmp_import_name_from_60, mod_consts[247]);
        }

        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_61 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_pyarrow,
                mod_consts[248],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME(tmp_import_name_from_61, mod_consts[248]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_62 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_pyarrow,
                mod_consts[249],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME(tmp_import_name_from_62, mod_consts[249]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_63 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_pyarrow,
                mod_consts[250],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME(tmp_import_name_from_63, mod_consts[250]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_64 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_pyarrow,
                mod_consts[251],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME(tmp_import_name_from_64, mod_consts[251]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_65;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_65 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_pyarrow,
                mod_consts[252],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME(tmp_import_name_from_65, mod_consts[252]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_66 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_pyarrow,
                mod_consts[253],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME(tmp_import_name_from_66, mod_consts[253]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_67 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_pyarrow,
                mod_consts[254],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME(tmp_import_name_from_67, mod_consts[254]);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_68 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_pyarrow,
                mod_consts[255],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME(tmp_import_name_from_68, mod_consts[255]);
        }

        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_69 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_pyarrow,
                mod_consts[256],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME(tmp_import_name_from_69, mod_consts[256]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_70 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_pyarrow,
                mod_consts[257],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME(tmp_import_name_from_70, mod_consts[257]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_71;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_71 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_pyarrow,
                mod_consts[258],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME(tmp_import_name_from_71, mod_consts[258]);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_72 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_pyarrow,
                mod_consts[259],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME(tmp_import_name_from_72, mod_consts[259]);
        }

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_73 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_pyarrow,
                mod_consts[260],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME(tmp_import_name_from_73, mod_consts[260]);
        }

        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_74;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_74 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_pyarrow,
                mod_consts[261],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME(tmp_import_name_from_74, mod_consts[261]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_75;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_75 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_75,
                (PyObject *)moduledict_pyarrow,
                mod_consts[262],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME(tmp_import_name_from_75, mod_consts[262]);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_76;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_76 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_76,
                (PyObject *)moduledict_pyarrow,
                mod_consts[263],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME(tmp_import_name_from_76, mod_consts[263]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_77 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_77,
                (PyObject *)moduledict_pyarrow,
                mod_consts[264],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME(tmp_import_name_from_77, mod_consts[264]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_78 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_78,
                (PyObject *)moduledict_pyarrow,
                mod_consts[265],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME(tmp_import_name_from_78, mod_consts[265]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_79 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_79,
                (PyObject *)moduledict_pyarrow,
                mod_consts[266],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME(tmp_import_name_from_79, mod_consts[266]);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_80 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_80,
                (PyObject *)moduledict_pyarrow,
                mod_consts[267],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME(tmp_import_name_from_80, mod_consts[267]);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_81 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_81,
                (PyObject *)moduledict_pyarrow,
                mod_consts[268],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME(tmp_import_name_from_81, mod_consts[268]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_82;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_82 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_82,
                (PyObject *)moduledict_pyarrow,
                mod_consts[269],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME(tmp_import_name_from_82, mod_consts[269]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_83;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_83 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_83,
                (PyObject *)moduledict_pyarrow,
                mod_consts[270],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME(tmp_import_name_from_83, mod_consts[270]);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_84;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_84 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_84,
                (PyObject *)moduledict_pyarrow,
                mod_consts[271],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME(tmp_import_name_from_84, mod_consts[271]);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_85;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_85 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_85,
                (PyObject *)moduledict_pyarrow,
                mod_consts[272],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME(tmp_import_name_from_85, mod_consts[272]);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_86;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_86 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_86,
                (PyObject *)moduledict_pyarrow,
                mod_consts[273],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME(tmp_import_name_from_86, mod_consts[273]);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_87 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_87,
                (PyObject *)moduledict_pyarrow,
                mod_consts[274],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME(tmp_import_name_from_87, mod_consts[274]);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_88 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_88,
                (PyObject *)moduledict_pyarrow,
                mod_consts[275],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME(tmp_import_name_from_88, mod_consts[275]);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_89 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_89,
                (PyObject *)moduledict_pyarrow,
                mod_consts[276],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME(tmp_import_name_from_89, mod_consts[276]);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_90 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_90,
                (PyObject *)moduledict_pyarrow,
                mod_consts[277],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_111 = IMPORT_NAME(tmp_import_name_from_90, mod_consts[277]);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_91 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_91,
                (PyObject *)moduledict_pyarrow,
                mod_consts[278],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME(tmp_import_name_from_91, mod_consts[278]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_92 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_92,
                (PyObject *)moduledict_pyarrow,
                mod_consts[279],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME(tmp_import_name_from_92, mod_consts[279]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_93 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_93,
                (PyObject *)moduledict_pyarrow,
                mod_consts[280],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME(tmp_import_name_from_93, mod_consts[280]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_94 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_94,
                (PyObject *)moduledict_pyarrow,
                mod_consts[281],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME(tmp_import_name_from_94, mod_consts[281]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_95 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_95,
                (PyObject *)moduledict_pyarrow,
                mod_consts[282],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME(tmp_import_name_from_95, mod_consts[282]);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_96 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_96,
                (PyObject *)moduledict_pyarrow,
                mod_consts[283],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME(tmp_import_name_from_96, mod_consts[283]);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_97 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_97,
                (PyObject *)moduledict_pyarrow,
                mod_consts[284],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME(tmp_import_name_from_97, mod_consts[284]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_98 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_98,
                (PyObject *)moduledict_pyarrow,
                mod_consts[285],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME(tmp_import_name_from_98, mod_consts[285]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_99 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_99,
                (PyObject *)moduledict_pyarrow,
                mod_consts[286],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME(tmp_import_name_from_99, mod_consts[286]);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_100 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_100,
                (PyObject *)moduledict_pyarrow,
                mod_consts[287],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME(tmp_import_name_from_100, mod_consts[287]);
        }

        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_101 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_101,
                (PyObject *)moduledict_pyarrow,
                mod_consts[288],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME(tmp_import_name_from_101, mod_consts[288]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_102 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_102,
                (PyObject *)moduledict_pyarrow,
                mod_consts[289],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME(tmp_import_name_from_102, mod_consts[289]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_103 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_103,
                (PyObject *)moduledict_pyarrow,
                mod_consts[290],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME(tmp_import_name_from_103, mod_consts[290]);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_104 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_104,
                (PyObject *)moduledict_pyarrow,
                mod_consts[291],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME(tmp_import_name_from_104, mod_consts[291]);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_105 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_105,
                (PyObject *)moduledict_pyarrow,
                mod_consts[292],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME(tmp_import_name_from_105, mod_consts[292]);
        }

        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_106 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_106,
                (PyObject *)moduledict_pyarrow,
                mod_consts[293],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME(tmp_import_name_from_106, mod_consts[293]);
        }

        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_107;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_107 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_107,
                (PyObject *)moduledict_pyarrow,
                mod_consts[294],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME(tmp_import_name_from_107, mod_consts[294]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_108;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_108 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_108,
                (PyObject *)moduledict_pyarrow,
                mod_consts[295],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME(tmp_import_name_from_108, mod_consts[295]);
        }

        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_109;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_109 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_109,
                (PyObject *)moduledict_pyarrow,
                mod_consts[296],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME(tmp_import_name_from_109, mod_consts[296]);
        }

        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_110;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_110 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_110,
                (PyObject *)moduledict_pyarrow,
                mod_consts[297],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME(tmp_import_name_from_110, mod_consts[297]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_111;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_111 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_111,
                (PyObject *)moduledict_pyarrow,
                mod_consts[298],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME(tmp_import_name_from_111, mod_consts[298]);
        }

        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_112;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_112 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_112,
                (PyObject *)moduledict_pyarrow,
                mod_consts[299],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME(tmp_import_name_from_112, mod_consts[299]);
        }

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_113 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_113,
                (PyObject *)moduledict_pyarrow,
                mod_consts[300],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME(tmp_import_name_from_113, mod_consts[300]);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_114 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_114,
                (PyObject *)moduledict_pyarrow,
                mod_consts[301],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME(tmp_import_name_from_114, mod_consts[301]);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_115 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_115,
                (PyObject *)moduledict_pyarrow,
                mod_consts[302],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME(tmp_import_name_from_115, mod_consts[302]);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_116 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_116,
                (PyObject *)moduledict_pyarrow,
                mod_consts[303],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_137 = IMPORT_NAME(tmp_import_name_from_116, mod_consts[303]);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_117 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_117,
                (PyObject *)moduledict_pyarrow,
                mod_consts[304],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_138 = IMPORT_NAME(tmp_import_name_from_117, mod_consts[304]);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_118 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_118,
                (PyObject *)moduledict_pyarrow,
                mod_consts[305],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME(tmp_import_name_from_118, mod_consts[305]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_119 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_119,
                (PyObject *)moduledict_pyarrow,
                mod_consts[306],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME(tmp_import_name_from_119, mod_consts[306]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_120 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_120,
                (PyObject *)moduledict_pyarrow,
                mod_consts[307],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME(tmp_import_name_from_120, mod_consts[307]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_121;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_121 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_121,
                (PyObject *)moduledict_pyarrow,
                mod_consts[308],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME(tmp_import_name_from_121, mod_consts[308]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_122;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_122 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_122,
                (PyObject *)moduledict_pyarrow,
                mod_consts[309],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME(tmp_import_name_from_122, mod_consts[309]);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_123 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_123,
                (PyObject *)moduledict_pyarrow,
                mod_consts[310],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME(tmp_import_name_from_123, mod_consts[310]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_124 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_124,
                (PyObject *)moduledict_pyarrow,
                mod_consts[311],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME(tmp_import_name_from_124, mod_consts[311]);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_125 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_125,
                (PyObject *)moduledict_pyarrow,
                mod_consts[312],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME(tmp_import_name_from_125, mod_consts[312]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_126 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_126,
                (PyObject *)moduledict_pyarrow,
                mod_consts[313],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME(tmp_import_name_from_126, mod_consts[313]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_127 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_127,
                (PyObject *)moduledict_pyarrow,
                mod_consts[314],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME(tmp_import_name_from_127, mod_consts[314]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_128 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_128,
                (PyObject *)moduledict_pyarrow,
                mod_consts[315],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME(tmp_import_name_from_128, mod_consts[315]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_129 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_129,
                (PyObject *)moduledict_pyarrow,
                mod_consts[316],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME(tmp_import_name_from_129, mod_consts[316]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_130 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_130,
                (PyObject *)moduledict_pyarrow,
                mod_consts[317],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME(tmp_import_name_from_130, mod_consts[317]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_131 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_131,
                (PyObject *)moduledict_pyarrow,
                mod_consts[318],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME(tmp_import_name_from_131, mod_consts[318]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_132 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_153 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_132,
                (PyObject *)moduledict_pyarrow,
                mod_consts[319],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_153 = IMPORT_NAME(tmp_import_name_from_132, mod_consts[319]);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_133 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_133,
                (PyObject *)moduledict_pyarrow,
                mod_consts[320],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME(tmp_import_name_from_133, mod_consts[320]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_134 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_134,
                (PyObject *)moduledict_pyarrow,
                mod_consts[322],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME(tmp_import_name_from_134, mod_consts[322]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_135 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_135,
                (PyObject *)moduledict_pyarrow,
                mod_consts[323],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME(tmp_import_name_from_135, mod_consts[323]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_136 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_136,
                (PyObject *)moduledict_pyarrow,
                mod_consts[324],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME(tmp_import_name_from_136, mod_consts[324]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_137;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_137 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_137,
                (PyObject *)moduledict_pyarrow,
                mod_consts[325],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME(tmp_import_name_from_137, mod_consts[325]);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_138;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_138 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_138,
                (PyObject *)moduledict_pyarrow,
                mod_consts[326],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME(tmp_import_name_from_138, mod_consts[326]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_139;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_139 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_139,
                (PyObject *)moduledict_pyarrow,
                mod_consts[327],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME(tmp_import_name_from_139, mod_consts[327]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_140;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_140 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_161 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_140,
                (PyObject *)moduledict_pyarrow,
                mod_consts[328],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_161 = IMPORT_NAME(tmp_import_name_from_140, mod_consts[328]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_141;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_141 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_162 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_141,
                (PyObject *)moduledict_pyarrow,
                mod_consts[329],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_162 = IMPORT_NAME(tmp_import_name_from_141, mod_consts[329]);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_142;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_142 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_163 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_142,
                (PyObject *)moduledict_pyarrow,
                mod_consts[330],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_163 = IMPORT_NAME(tmp_import_name_from_142, mod_consts[330]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_import_name_from_143;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_143 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_164 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_143,
                (PyObject *)moduledict_pyarrow,
                mod_consts[331],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_164 = IMPORT_NAME(tmp_import_name_from_143, mod_consts[331]);
        }

        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_import_name_from_144;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_144 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_165 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_144,
                (PyObject *)moduledict_pyarrow,
                mod_consts[332],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_165 = IMPORT_NAME(tmp_import_name_from_144, mod_consts[332]);
        }

        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_import_name_from_145;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_145 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_166 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_145,
                (PyObject *)moduledict_pyarrow,
                mod_consts[333],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_166 = IMPORT_NAME(tmp_import_name_from_145, mod_consts[333]);
        }

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_import_name_from_146;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_146 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_167 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_146,
                (PyObject *)moduledict_pyarrow,
                mod_consts[334],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_167 = IMPORT_NAME(tmp_import_name_from_146, mod_consts[334]);
        }

        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_import_name_from_147;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_147 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_168 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_147,
                (PyObject *)moduledict_pyarrow,
                mod_consts[335],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_168 = IMPORT_NAME(tmp_import_name_from_147, mod_consts[335]);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_import_name_from_148;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_148 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_169 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_148,
                (PyObject *)moduledict_pyarrow,
                mod_consts[336],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_169 = IMPORT_NAME(tmp_import_name_from_148, mod_consts[336]);
        }

        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_149 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_170 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_149,
                (PyObject *)moduledict_pyarrow,
                mod_consts[337],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_170 = IMPORT_NAME(tmp_import_name_from_149, mod_consts[337]);
        }

        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_import_name_from_150;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_150 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_150)) {
            tmp_assign_source_171 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_150,
                (PyObject *)moduledict_pyarrow,
                mod_consts[338],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_171 = IMPORT_NAME(tmp_import_name_from_150, mod_consts[338]);
        }

        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_import_name_from_151;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_151 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_151)) {
            tmp_assign_source_172 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_151,
                (PyObject *)moduledict_pyarrow,
                mod_consts[339],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_172 = IMPORT_NAME(tmp_import_name_from_151, mod_consts[339]);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_import_name_from_152;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_152 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_152)) {
            tmp_assign_source_173 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_152,
                (PyObject *)moduledict_pyarrow,
                mod_consts[340],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_173 = IMPORT_NAME(tmp_import_name_from_152, mod_consts[340]);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_import_name_from_153;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_153 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_153)) {
            tmp_assign_source_174 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_153,
                (PyObject *)moduledict_pyarrow,
                mod_consts[341],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_174 = IMPORT_NAME(tmp_import_name_from_153, mod_consts[341]);
        }

        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_154;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_154 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_154)) {
            tmp_assign_source_175 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_154,
                (PyObject *)moduledict_pyarrow,
                mod_consts[342],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_175 = IMPORT_NAME(tmp_import_name_from_154, mod_consts[342]);
        }

        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_import_name_from_155;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_155 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_155)) {
            tmp_assign_source_176 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_155,
                (PyObject *)moduledict_pyarrow,
                mod_consts[343],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_176 = IMPORT_NAME(tmp_import_name_from_155, mod_consts[343]);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_import_name_from_156;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_156 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_156)) {
            tmp_assign_source_177 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_156,
                (PyObject *)moduledict_pyarrow,
                mod_consts[344],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_177 = IMPORT_NAME(tmp_import_name_from_156, mod_consts[344]);
        }

        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_import_name_from_157;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_157 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_157)) {
            tmp_assign_source_178 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_157,
                (PyObject *)moduledict_pyarrow,
                mod_consts[345],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_178 = IMPORT_NAME(tmp_import_name_from_157, mod_consts[345]);
        }

        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_import_name_from_158;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_158 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_158)) {
            tmp_assign_source_179 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_158,
                (PyObject *)moduledict_pyarrow,
                mod_consts[346],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_179 = IMPORT_NAME(tmp_import_name_from_158, mod_consts[346]);
        }

        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_import_name_from_159;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_159 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_159)) {
            tmp_assign_source_180 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_159,
                (PyObject *)moduledict_pyarrow,
                mod_consts[347],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_180 = IMPORT_NAME(tmp_import_name_from_159, mod_consts[347]);
        }

        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_import_name_from_160;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_160 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_160)) {
            tmp_assign_source_181 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_160,
                (PyObject *)moduledict_pyarrow,
                mod_consts[348],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_181 = IMPORT_NAME(tmp_import_name_from_160, mod_consts[348]);
        }

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_import_name_from_161;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_161 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_161)) {
            tmp_assign_source_182 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_161,
                (PyObject *)moduledict_pyarrow,
                mod_consts[349],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_182 = IMPORT_NAME(tmp_import_name_from_161, mod_consts[349]);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_import_name_from_162;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_162 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_162)) {
            tmp_assign_source_183 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_162,
                (PyObject *)moduledict_pyarrow,
                mod_consts[350],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_183 = IMPORT_NAME(tmp_import_name_from_162, mod_consts[350]);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_import_name_from_163;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_163 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_163)) {
            tmp_assign_source_184 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_163,
                (PyObject *)moduledict_pyarrow,
                mod_consts[351],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_184 = IMPORT_NAME(tmp_import_name_from_163, mod_consts[351]);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_import_name_from_164;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_164 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_164)) {
            tmp_assign_source_185 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_164,
                (PyObject *)moduledict_pyarrow,
                mod_consts[352],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_185 = IMPORT_NAME(tmp_import_name_from_164, mod_consts[352]);
        }

        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_import_name_from_165;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_165 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_165)) {
            tmp_assign_source_186 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_165,
                (PyObject *)moduledict_pyarrow,
                mod_consts[353],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_186 = IMPORT_NAME(tmp_import_name_from_165, mod_consts[353]);
        }

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_import_name_from_166;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_166 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_166)) {
            tmp_assign_source_187 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_166,
                (PyObject *)moduledict_pyarrow,
                mod_consts[354],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_187 = IMPORT_NAME(tmp_import_name_from_166, mod_consts[354]);
        }

        if (tmp_assign_source_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_import_name_from_167;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_167 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_167)) {
            tmp_assign_source_188 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_167,
                (PyObject *)moduledict_pyarrow,
                mod_consts[355],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_188 = IMPORT_NAME(tmp_import_name_from_167, mod_consts[355]);
        }

        if (tmp_assign_source_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_import_name_from_168;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_168 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_168)) {
            tmp_assign_source_189 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_168,
                (PyObject *)moduledict_pyarrow,
                mod_consts[356],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_189 = IMPORT_NAME(tmp_import_name_from_168, mod_consts[356]);
        }

        if (tmp_assign_source_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_import_name_from_169;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_169 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_169)) {
            tmp_assign_source_190 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_169,
                (PyObject *)moduledict_pyarrow,
                mod_consts[357],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_190 = IMPORT_NAME(tmp_import_name_from_169, mod_consts[357]);
        }

        if (tmp_assign_source_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_190);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[186];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[358];
        tmp_level_value_9 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 228;
        tmp_assign_source_191 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_191;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_import_name_from_170;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_170 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_170)) {
            tmp_assign_source_192 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_170,
                (PyObject *)moduledict_pyarrow,
                mod_consts[359],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_192 = IMPORT_NAME(tmp_import_name_from_170, mod_consts[359]);
        }

        if (tmp_assign_source_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_import_name_from_171;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_171 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_171)) {
            tmp_assign_source_193 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_171,
                (PyObject *)moduledict_pyarrow,
                mod_consts[360],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_193 = IMPORT_NAME(tmp_import_name_from_171, mod_consts[360]);
        }

        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_import_name_from_172;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_172 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_172)) {
            tmp_assign_source_194 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_172,
                (PyObject *)moduledict_pyarrow,
                mod_consts[361],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_194 = IMPORT_NAME(tmp_import_name_from_172, mod_consts[361]);
        }

        if (tmp_assign_source_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_import_name_from_173;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_173 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_173)) {
            tmp_assign_source_195 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_173,
                (PyObject *)moduledict_pyarrow,
                mod_consts[362],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_195 = IMPORT_NAME(tmp_import_name_from_173, mod_consts[362]);
        }

        if (tmp_assign_source_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_import_name_from_174;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_174 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_174)) {
            tmp_assign_source_196 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_174,
                (PyObject *)moduledict_pyarrow,
                mod_consts[76],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_196 = IMPORT_NAME(tmp_import_name_from_174, mod_consts[76]);
        }

        if (tmp_assign_source_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_import_name_from_175;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_175 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_175)) {
            tmp_assign_source_197 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_175,
                (PyObject *)moduledict_pyarrow,
                mod_consts[363],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_197 = IMPORT_NAME(tmp_import_name_from_175, mod_consts[363]);
        }

        if (tmp_assign_source_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_import_name_from_176;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_176 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_176)) {
            tmp_assign_source_198 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_176,
                (PyObject *)moduledict_pyarrow,
                mod_consts[364],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_198 = IMPORT_NAME(tmp_import_name_from_176, mod_consts[364]);
        }

        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[364], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_import_name_from_177;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_177 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_177)) {
            tmp_assign_source_199 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_177,
                (PyObject *)moduledict_pyarrow,
                mod_consts[365],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_199 = IMPORT_NAME(tmp_import_name_from_177, mod_consts[365]);
        }

        if (tmp_assign_source_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_199);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[186];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[366];
        tmp_level_value_10 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 231;
        tmp_assign_source_200 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_200;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_import_name_from_178;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_178 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_178)) {
            tmp_assign_source_201 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_178,
                (PyObject *)moduledict_pyarrow,
                mod_consts[367],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_201 = IMPORT_NAME(tmp_import_name_from_178, mod_consts[367]);
        }

        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_import_name_from_179;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_179 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_179)) {
            tmp_assign_source_202 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_179,
                (PyObject *)moduledict_pyarrow,
                mod_consts[368],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_202 = IMPORT_NAME(tmp_import_name_from_179, mod_consts[368]);
        }

        if (tmp_assign_source_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_import_name_from_180;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_180 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_180)) {
            tmp_assign_source_203 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_180,
                (PyObject *)moduledict_pyarrow,
                mod_consts[369],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_203 = IMPORT_NAME(tmp_import_name_from_180, mod_consts[369]);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_import_name_from_181;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_181 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_181)) {
            tmp_assign_source_204 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_181,
                (PyObject *)moduledict_pyarrow,
                mod_consts[370],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_204 = IMPORT_NAME(tmp_import_name_from_181, mod_consts[370]);
        }

        if (tmp_assign_source_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_import_name_from_182;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_182 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_182)) {
            tmp_assign_source_205 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_182,
                (PyObject *)moduledict_pyarrow,
                mod_consts[371],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_205 = IMPORT_NAME(tmp_import_name_from_182, mod_consts[371]);
        }

        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_import_name_from_183;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_183 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_183)) {
            tmp_assign_source_206 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_183,
                (PyObject *)moduledict_pyarrow,
                mod_consts[52],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_206 = IMPORT_NAME(tmp_import_name_from_183, mod_consts[52]);
        }

        if (tmp_assign_source_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_import_name_from_184;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_184 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_184)) {
            tmp_assign_source_207 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_184,
                (PyObject *)moduledict_pyarrow,
                mod_consts[372],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_207 = IMPORT_NAME(tmp_import_name_from_184, mod_consts[372]);
        }

        if (tmp_assign_source_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_import_name_from_185;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_185 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_185)) {
            tmp_assign_source_208 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_185,
                (PyObject *)moduledict_pyarrow,
                mod_consts[373],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_208 = IMPORT_NAME(tmp_import_name_from_185, mod_consts[373]);
        }

        if (tmp_assign_source_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_import_name_from_186;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_186 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_186)) {
            tmp_assign_source_209 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_186,
                (PyObject *)moduledict_pyarrow,
                mod_consts[374],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_209 = IMPORT_NAME(tmp_import_name_from_186, mod_consts[374]);
        }

        if (tmp_assign_source_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_import_name_from_187;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_187 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_187)) {
            tmp_assign_source_210 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_187,
                (PyObject *)moduledict_pyarrow,
                mod_consts[375],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_210 = IMPORT_NAME(tmp_import_name_from_187, mod_consts[375]);
        }

        if (tmp_assign_source_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_import_name_from_188;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_188 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_188)) {
            tmp_assign_source_211 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_188,
                (PyObject *)moduledict_pyarrow,
                mod_consts[376],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_211 = IMPORT_NAME(tmp_import_name_from_188, mod_consts[376]);
        }

        if (tmp_assign_source_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[376], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_import_name_from_189;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_189 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_189)) {
            tmp_assign_source_212 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_189,
                (PyObject *)moduledict_pyarrow,
                mod_consts[377],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_212 = IMPORT_NAME(tmp_import_name_from_189, mod_consts[377]);
        }

        if (tmp_assign_source_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_import_name_from_190;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_190 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_190)) {
            tmp_assign_source_213 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_190,
                (PyObject *)moduledict_pyarrow,
                mod_consts[378],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_213 = IMPORT_NAME(tmp_import_name_from_190, mod_consts[378]);
        }

        if (tmp_assign_source_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_import_name_from_191;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_191 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_191)) {
            tmp_assign_source_214 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_191,
                (PyObject *)moduledict_pyarrow,
                mod_consts[63],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_214 = IMPORT_NAME(tmp_import_name_from_191, mod_consts[63]);
        }

        if (tmp_assign_source_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_214);
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[186];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[379];
        tmp_level_value_11 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 240;
        tmp_assign_source_215 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_215;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_import_name_from_192;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_192 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_192)) {
            tmp_assign_source_216 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_192,
                (PyObject *)moduledict_pyarrow,
                mod_consts[380],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_216 = IMPORT_NAME(tmp_import_name_from_192, mod_consts[380]);
        }

        if (tmp_assign_source_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_import_name_from_193;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_193 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_193)) {
            tmp_assign_source_217 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_193,
                (PyObject *)moduledict_pyarrow,
                mod_consts[381],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_217 = IMPORT_NAME(tmp_import_name_from_193, mod_consts[381]);
        }

        if (tmp_assign_source_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_import_name_from_194;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_194 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_194)) {
            tmp_assign_source_218 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_194,
                (PyObject *)moduledict_pyarrow,
                mod_consts[382],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_218 = IMPORT_NAME(tmp_import_name_from_194, mod_consts[382]);
        }

        if (tmp_assign_source_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_import_name_from_195;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_195 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_195)) {
            tmp_assign_source_219 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_195,
                (PyObject *)moduledict_pyarrow,
                mod_consts[383],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_219 = IMPORT_NAME(tmp_import_name_from_195, mod_consts[383]);
        }

        if (tmp_assign_source_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_import_name_from_196;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_196 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_196)) {
            tmp_assign_source_220 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_196,
                (PyObject *)moduledict_pyarrow,
                mod_consts[384],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_220 = IMPORT_NAME(tmp_import_name_from_196, mod_consts[384]);
        }

        if (tmp_assign_source_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_import_name_from_197;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_197 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_197)) {
            tmp_assign_source_221 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_197,
                (PyObject *)moduledict_pyarrow,
                mod_consts[385],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_221 = IMPORT_NAME(tmp_import_name_from_197, mod_consts[385]);
        }

        if (tmp_assign_source_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_import_name_from_198;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_198 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_198)) {
            tmp_assign_source_222 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_198,
                (PyObject *)moduledict_pyarrow,
                mod_consts[386],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_222 = IMPORT_NAME(tmp_import_name_from_198, mod_consts[386]);
        }

        if (tmp_assign_source_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_import_name_from_199;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_199 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_199)) {
            tmp_assign_source_223 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_199,
                (PyObject *)moduledict_pyarrow,
                mod_consts[387],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_223 = IMPORT_NAME(tmp_import_name_from_199, mod_consts[387]);
        }

        if (tmp_assign_source_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_import_name_from_200;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_200 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_200)) {
            tmp_assign_source_224 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_200,
                (PyObject *)moduledict_pyarrow,
                mod_consts[388],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_224 = IMPORT_NAME(tmp_import_name_from_200, mod_consts[388]);
        }

        if (tmp_assign_source_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_import_name_from_201;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_201 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_201)) {
            tmp_assign_source_225 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_201,
                (PyObject *)moduledict_pyarrow,
                mod_consts[389],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_225 = IMPORT_NAME(tmp_import_name_from_201, mod_consts[389]);
        }

        if (tmp_assign_source_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_import_name_from_202;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_202 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_202)) {
            tmp_assign_source_226 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_202,
                (PyObject *)moduledict_pyarrow,
                mod_consts[390],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_226 = IMPORT_NAME(tmp_import_name_from_202, mod_consts[390]);
        }

        if (tmp_assign_source_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_import_name_from_203;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_203 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_203)) {
            tmp_assign_source_227 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_203,
                (PyObject *)moduledict_pyarrow,
                mod_consts[391],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_227 = IMPORT_NAME(tmp_import_name_from_203, mod_consts[391]);
        }

        if (tmp_assign_source_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_import_name_from_204;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_204 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_204)) {
            tmp_assign_source_228 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_204,
                (PyObject *)moduledict_pyarrow,
                mod_consts[392],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_228 = IMPORT_NAME(tmp_import_name_from_204, mod_consts[392]);
        }

        if (tmp_assign_source_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_import_name_from_205;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_205 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_205)) {
            tmp_assign_source_229 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_205,
                (PyObject *)moduledict_pyarrow,
                mod_consts[393],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_229 = IMPORT_NAME(tmp_import_name_from_205, mod_consts[393]);
        }

        if (tmp_assign_source_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_import_name_from_206;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_206 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_206)) {
            tmp_assign_source_230 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_206,
                (PyObject *)moduledict_pyarrow,
                mod_consts[394],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_230 = IMPORT_NAME(tmp_import_name_from_206, mod_consts[394]);
        }

        if (tmp_assign_source_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_import_name_from_207;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_207 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_207)) {
            tmp_assign_source_231 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_207,
                (PyObject *)moduledict_pyarrow,
                mod_consts[395],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_231 = IMPORT_NAME(tmp_import_name_from_207, mod_consts[395]);
        }

        if (tmp_assign_source_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_import_name_from_208;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_208 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_208)) {
            tmp_assign_source_232 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_208,
                (PyObject *)moduledict_pyarrow,
                mod_consts[396],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_232 = IMPORT_NAME(tmp_import_name_from_208, mod_consts[396]);
        }

        if (tmp_assign_source_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_import_name_from_209;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_209 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_209)) {
            tmp_assign_source_233 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_209,
                (PyObject *)moduledict_pyarrow,
                mod_consts[397],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_233 = IMPORT_NAME(tmp_import_name_from_209, mod_consts[397]);
        }

        if (tmp_assign_source_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_233);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[398];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[399];
        tmp_level_value_12 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 250;
        tmp_assign_source_234 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_234;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_import_name_from_210;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_210 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_210)) {
            tmp_assign_source_235 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_210,
                (PyObject *)moduledict_pyarrow,
                mod_consts[400],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_235 = IMPORT_NAME(tmp_import_name_from_210, mod_consts[400]);
        }

        if (tmp_assign_source_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_import_name_from_211;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_211 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_211)) {
            tmp_assign_source_236 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_211,
                (PyObject *)moduledict_pyarrow,
                mod_consts[401],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_236 = IMPORT_NAME(tmp_import_name_from_211, mod_consts[401]);
        }

        if (tmp_assign_source_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_236);
    }
    goto try_end_10;
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[186];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[402];
        tmp_level_value_13 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 252;
        tmp_assign_source_237 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_237;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_import_name_from_212;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_212 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_212)) {
            tmp_assign_source_238 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_212,
                (PyObject *)moduledict_pyarrow,
                mod_consts[403],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_238 = IMPORT_NAME(tmp_import_name_from_212, mod_consts[403]);
        }

        if (tmp_assign_source_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_import_name_from_213;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_213 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_213)) {
            tmp_assign_source_239 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_213,
                (PyObject *)moduledict_pyarrow,
                mod_consts[404],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_239 = IMPORT_NAME(tmp_import_name_from_213, mod_consts[404]);
        }

        if (tmp_assign_source_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_import_name_from_214;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_214 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_214)) {
            tmp_assign_source_240 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_214,
                (PyObject *)moduledict_pyarrow,
                mod_consts[405],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_240 = IMPORT_NAME(tmp_import_name_from_214, mod_consts[405]);
        }

        if (tmp_assign_source_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_import_name_from_215;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_215 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_215)) {
            tmp_assign_source_241 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_215,
                (PyObject *)moduledict_pyarrow,
                mod_consts[406],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_241 = IMPORT_NAME(tmp_import_name_from_215, mod_consts[406]);
        }

        if (tmp_assign_source_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_import_name_from_216;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_216 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_216)) {
            tmp_assign_source_242 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_216,
                (PyObject *)moduledict_pyarrow,
                mod_consts[407],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_242 = IMPORT_NAME(tmp_import_name_from_216, mod_consts[407]);
        }

        if (tmp_assign_source_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_import_name_from_217;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_217 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_217)) {
            tmp_assign_source_243 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_217,
                (PyObject *)moduledict_pyarrow,
                mod_consts[408],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_243 = IMPORT_NAME(tmp_import_name_from_217, mod_consts[408]);
        }

        if (tmp_assign_source_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_import_name_from_218;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_218 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_218)) {
            tmp_assign_source_244 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_218,
                (PyObject *)moduledict_pyarrow,
                mod_consts[409],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_244 = IMPORT_NAME(tmp_import_name_from_218, mod_consts[409]);
        }

        if (tmp_assign_source_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_244);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_245;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[186];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[410];
        tmp_level_value_14 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 256;
        tmp_assign_source_245 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_245;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_246;
        PyObject *tmp_import_name_from_219;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_219 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_219)) {
            tmp_assign_source_246 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_219,
                (PyObject *)moduledict_pyarrow,
                mod_consts[411],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_246 = IMPORT_NAME(tmp_import_name_from_219, mod_consts[411]);
        }

        if (tmp_assign_source_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        PyObject *tmp_import_name_from_220;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_220 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_220)) {
            tmp_assign_source_247 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_220,
                (PyObject *)moduledict_pyarrow,
                mod_consts[412],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_247 = IMPORT_NAME(tmp_import_name_from_220, mod_consts[412]);
        }

        if (tmp_assign_source_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        PyObject *tmp_import_name_from_221;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_221 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_221)) {
            tmp_assign_source_248 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_221,
                (PyObject *)moduledict_pyarrow,
                mod_consts[413],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_248 = IMPORT_NAME(tmp_import_name_from_221, mod_consts[413]);
        }

        if (tmp_assign_source_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        PyObject *tmp_import_name_from_222;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_222 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_222)) {
            tmp_assign_source_249 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_222,
                (PyObject *)moduledict_pyarrow,
                mod_consts[414],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_249 = IMPORT_NAME(tmp_import_name_from_222, mod_consts[414]);
        }

        if (tmp_assign_source_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        PyObject *tmp_import_name_from_223;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_223 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_223)) {
            tmp_assign_source_250 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_223,
                (PyObject *)moduledict_pyarrow,
                mod_consts[415],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_250 = IMPORT_NAME(tmp_import_name_from_223, mod_consts[415]);
        }

        if (tmp_assign_source_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_import_name_from_224;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_224 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_224)) {
            tmp_assign_source_251 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_224,
                (PyObject *)moduledict_pyarrow,
                mod_consts[416],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_251 = IMPORT_NAME(tmp_import_name_from_224, mod_consts[416]);
        }

        if (tmp_assign_source_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_import_name_from_225;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_225 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_225)) {
            tmp_assign_source_252 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_225,
                (PyObject *)moduledict_pyarrow,
                mod_consts[417],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_252 = IMPORT_NAME(tmp_import_name_from_225, mod_consts[417]);
        }

        if (tmp_assign_source_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        PyObject *tmp_import_name_from_226;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_226 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_226)) {
            tmp_assign_source_253 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_226,
                (PyObject *)moduledict_pyarrow,
                mod_consts[418],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_253 = IMPORT_NAME(tmp_import_name_from_226, mod_consts[418]);
        }

        if (tmp_assign_source_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        PyObject *tmp_import_name_from_227;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_227 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_227)) {
            tmp_assign_source_254 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_227,
                (PyObject *)moduledict_pyarrow,
                mod_consts[419],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_254 = IMPORT_NAME(tmp_import_name_from_227, mod_consts[419]);
        }

        if (tmp_assign_source_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        PyObject *tmp_import_name_from_228;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_228 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_228)) {
            tmp_assign_source_255 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_228,
                (PyObject *)moduledict_pyarrow,
                mod_consts[420],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_255 = IMPORT_NAME(tmp_import_name_from_228, mod_consts[420]);
        }

        if (tmp_assign_source_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        PyObject *tmp_import_name_from_229;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_229 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_229)) {
            tmp_assign_source_256 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_229,
                (PyObject *)moduledict_pyarrow,
                mod_consts[421],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_256 = IMPORT_NAME(tmp_import_name_from_229, mod_consts[421]);
        }

        if (tmp_assign_source_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_256);
    }
    goto try_end_12;
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

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_257;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[186];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[422];
        tmp_level_value_15 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 269;
        tmp_assign_source_257 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_257;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_258;
        PyObject *tmp_import_name_from_230;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_230 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_230)) {
            tmp_assign_source_258 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_230,
                (PyObject *)moduledict_pyarrow,
                mod_consts[423],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_258 = IMPORT_NAME(tmp_import_name_from_230, mod_consts[423]);
        }

        if (tmp_assign_source_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        PyObject *tmp_import_name_from_231;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_231 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_231)) {
            tmp_assign_source_259 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_231,
                (PyObject *)moduledict_pyarrow,
                mod_consts[424],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_259 = IMPORT_NAME(tmp_import_name_from_231, mod_consts[424]);
        }

        if (tmp_assign_source_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        PyObject *tmp_import_name_from_232;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_232 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_232)) {
            tmp_assign_source_260 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_232,
                (PyObject *)moduledict_pyarrow,
                mod_consts[425],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_260 = IMPORT_NAME(tmp_import_name_from_232, mod_consts[425]);
        }

        if (tmp_assign_source_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        PyObject *tmp_import_name_from_233;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_233 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_233)) {
            tmp_assign_source_261 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_233,
                (PyObject *)moduledict_pyarrow,
                mod_consts[426],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_261 = IMPORT_NAME(tmp_import_name_from_233, mod_consts[426]);
        }

        if (tmp_assign_source_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        PyObject *tmp_import_name_from_234;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_234 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_234)) {
            tmp_assign_source_262 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_234,
                (PyObject *)moduledict_pyarrow,
                mod_consts[427],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_262 = IMPORT_NAME(tmp_import_name_from_234, mod_consts[427]);
        }

        if (tmp_assign_source_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        PyObject *tmp_import_name_from_235;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_235 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_235)) {
            tmp_assign_source_263 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_235,
                (PyObject *)moduledict_pyarrow,
                mod_consts[428],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_263 = IMPORT_NAME(tmp_import_name_from_235, mod_consts[428]);
        }

        if (tmp_assign_source_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        PyObject *tmp_import_name_from_236;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_236 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_236)) {
            tmp_assign_source_264 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_236,
                (PyObject *)moduledict_pyarrow,
                mod_consts[429],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_264 = IMPORT_NAME(tmp_import_name_from_236, mod_consts[429]);
        }

        if (tmp_assign_source_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        PyObject *tmp_import_name_from_237;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_237 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_237)) {
            tmp_assign_source_265 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_237,
                (PyObject *)moduledict_pyarrow,
                mod_consts[430],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_265 = IMPORT_NAME(tmp_import_name_from_237, mod_consts[430]);
        }

        if (tmp_assign_source_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_265);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_266;
        PyObject *tmp_import_name_from_238;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[431];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = Py_None;
        tmp_level_value_16 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 275;
        tmp_import_name_from_238 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_238)) {
            tmp_assign_source_266 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_238,
                (PyObject *)moduledict_pyarrow,
                mod_consts[432],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_266 = IMPORT_NAME(tmp_import_name_from_238, mod_consts[432]);
        }

        Py_DECREF(tmp_import_name_from_238);
        if (tmp_assign_source_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[433];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[434];
        tmp_level_value_17 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 277;
        tmp_assign_source_267 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_267;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_import_name_from_239;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_239 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_239)) {
            tmp_assign_source_268 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_239,
                (PyObject *)moduledict_pyarrow,
                mod_consts[435],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_268 = IMPORT_NAME(tmp_import_name_from_239, mod_consts[435]);
        }

        if (tmp_assign_source_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_import_name_from_240;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_240 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_240)) {
            tmp_assign_source_269 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_240,
                (PyObject *)moduledict_pyarrow,
                mod_consts[436],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_269 = IMPORT_NAME(tmp_import_name_from_240, mod_consts[436]);
        }

        if (tmp_assign_source_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_269);
    }
    goto try_end_14;
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

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_import_name_from_241;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[433];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = Py_None;
        tmp_level_value_18 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 278;
        tmp_import_name_from_241 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_241)) {
            tmp_assign_source_270 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_241,
                (PyObject *)moduledict_pyarrow,
                mod_consts[437],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_270 = IMPORT_NAME(tmp_import_name_from_241, mod_consts[437]);
        }

        Py_DECREF(tmp_import_name_from_241);
        if (tmp_assign_source_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[438];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[439];
        tmp_level_value_19 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 280;
        tmp_assign_source_271 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_assign_source_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_271;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_import_name_from_242;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_242 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_242)) {
            tmp_assign_source_272 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_242,
                (PyObject *)moduledict_pyarrow,
                mod_consts[440],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_272 = IMPORT_NAME(tmp_import_name_from_242, mod_consts[440]);
        }

        if (tmp_assign_source_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_import_name_from_243;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_243 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_243)) {
            tmp_assign_source_273 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_243,
                (PyObject *)moduledict_pyarrow,
                mod_consts[441],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_273 = IMPORT_NAME(tmp_import_name_from_243, mod_consts[441]);
        }

        if (tmp_assign_source_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_import_name_from_244;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_244 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_244)) {
            tmp_assign_source_274 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_244,
                (PyObject *)moduledict_pyarrow,
                mod_consts[442],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_274 = IMPORT_NAME(tmp_import_name_from_244, mod_consts[442]);
        }

        if (tmp_assign_source_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_274);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_import_name_from_245;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[443];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = Py_None;
        tmp_level_value_20 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 284;
        tmp_import_name_from_245 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_245)) {
            tmp_assign_source_275 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_245,
                (PyObject *)moduledict_pyarrow,
                mod_consts[444],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_275 = IMPORT_NAME(tmp_import_name_from_245, mod_consts[444]);
        }

        Py_DECREF(tmp_import_name_from_245);
        if (tmp_assign_source_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_import_name_from_246;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[445];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[446];
        tmp_level_value_21 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 290;
        tmp_import_name_from_246 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_246)) {
            tmp_assign_source_276 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_246,
                (PyObject *)moduledict_pyarrow,
                mod_consts[447],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_276 = IMPORT_NAME(tmp_import_name_from_246, mod_consts[447]);
        }

        Py_DECREF(tmp_import_name_from_246);
        if (tmp_assign_source_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_import_name_from_247;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[445];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[449];
        tmp_level_value_22 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 291;
        tmp_import_name_from_247 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_247)) {
            tmp_assign_source_277 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_247,
                (PyObject *)moduledict_pyarrow,
                mod_consts[450],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_277 = IMPORT_NAME(tmp_import_name_from_247, mod_consts[450]);
        }

        Py_DECREF(tmp_import_name_from_247);
        if (tmp_assign_source_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_import_name_from_248;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[431];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[452];
        tmp_level_value_23 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 292;
        tmp_import_name_from_248 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_248)) {
            tmp_assign_source_278 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_248,
                (PyObject *)moduledict_pyarrow,
                mod_consts[453],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_278 = IMPORT_NAME(tmp_import_name_from_248, mod_consts[453]);
        }

        Py_DECREF(tmp_import_name_from_248);
        if (tmp_assign_source_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_import_name_from_249;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[186];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[455];
        tmp_level_value_24 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 294;
        tmp_import_name_from_249 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_249)) {
            tmp_assign_source_279 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_249,
                (PyObject *)moduledict_pyarrow,
                mod_consts[456],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_279 = IMPORT_NAME(tmp_import_name_from_249, mod_consts[456]);
        }

        Py_DECREF(tmp_import_name_from_249);
        if (tmp_assign_source_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_import_name_from_250;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[186];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[458];
        tmp_level_value_25 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 295;
        tmp_import_name_from_250 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_250)) {
            tmp_assign_source_280 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_250,
                (PyObject *)moduledict_pyarrow,
                mod_consts[459],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_280 = IMPORT_NAME(tmp_import_name_from_250, mod_consts[459]);
        }

        Py_DECREF(tmp_import_name_from_250);
        if (tmp_assign_source_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[460], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[451]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[451]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 298;
        tmp_assign_source_281 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[461]);
        if (tmp_assign_source_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[462], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[463];
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[464];
        UPDATE_STRING_DICT0(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_1 = mod_consts[465];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[462]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[462]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        tmp_dict_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[450];
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_assign_source_284 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            tmp_res = PyDict_SetItem(tmp_assign_source_284, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[447];
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[448]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[448]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[447];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
            tmp_res = PyDict_SetItem(tmp_assign_source_284, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[450];
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[451]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[451]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[450];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
            tmp_res = PyDict_SetItem(tmp_assign_source_284, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[453];
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[454]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[454]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[453];
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
            tmp_res = PyDict_SetItem(tmp_assign_source_284, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_284);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[456];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[457]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[457]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_285 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_285, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[459];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[460]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[460]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_285, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_285);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;


        tmp_assign_source_286 = MAKE_FUNCTION_pyarrow$$$function__6___getattr__();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[466], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;


        tmp_assign_source_287 = MAKE_FUNCTION_pyarrow$$$function__7__plasma_store_entry_point();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[468];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[469];
        tmp_level_value_26 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 359;
        tmp_assign_source_288 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_assign_source_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_288;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_import_name_from_251;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_251 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_251)) {
            tmp_assign_source_289 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_251,
                (PyObject *)moduledict_pyarrow,
                mod_consts[470],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_289 = IMPORT_NAME(tmp_import_name_from_251, mod_consts[470]);
        }

        if (tmp_assign_source_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_import_name_from_252;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_252 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_252)) {
            tmp_assign_source_290 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_252,
                (PyObject *)moduledict_pyarrow,
                mod_consts[100],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_290 = IMPORT_NAME(tmp_import_name_from_252, mod_consts[100]);
        }

        if (tmp_assign_source_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_290);
    }
    goto try_end_16;
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

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[471];
        tmp_args_element_value_3 = mod_consts[472];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[471]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_291 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[474];
        tmp_args_element_value_7 = mod_consts[475];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[474]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 364;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_292 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[474], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[476];
        tmp_args_element_value_11 = mod_consts[477];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[476]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_293 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[476], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = mod_consts[478];
        tmp_args_element_value_15 = mod_consts[479];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[478]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 371;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_294 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[480];
        tmp_args_element_value_19 = mod_consts[481];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[480]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_295 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[482];
        tmp_args_element_value_23 = mod_consts[483];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[482]);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 377;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_296 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_assign_source_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[482], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[484];
        tmp_args_element_value_27 = mod_consts[485];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[484]);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_297 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_33;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = mod_consts[486];
        tmp_args_element_value_31 = mod_consts[487];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[486]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_assign_source_298 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[486], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_37;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[488];
        tmp_args_element_value_35 = mod_consts[489];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[437]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[437]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[488]);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[473];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_299 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;


        tmp_assign_source_300 = MAKE_FUNCTION_pyarrow$$$function__8__deprecate_scalar();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = mod_consts[491];
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[322]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[322]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[102];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assign_source_301 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = mod_consts[492];
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[323]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[323]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = mod_consts[102];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_assign_source_302 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        if (tmp_assign_source_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[493];
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[324]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 399;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_assign_source_303 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[494], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[495];
        tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[325]);

        if (unlikely(tmp_args_element_value_47 == NULL)) {
            tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[325]);
        }

        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_assign_source_304 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_16, call_args);
        }

        if (tmp_assign_source_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = mod_consts[497];
        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[326]);

        if (unlikely(tmp_args_element_value_49 == NULL)) {
            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[326]);
        }

        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_assign_source_305 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_17, call_args);
        }

        if (tmp_assign_source_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[498], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = mod_consts[499];
        tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[327]);

        if (unlikely(tmp_args_element_value_51 == NULL)) {
            tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[327]);
        }

        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_assign_source_306 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        if (tmp_assign_source_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[500], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[501];
        tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[328]);

        if (unlikely(tmp_args_element_value_53 == NULL)) {
            tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[328]);
        }

        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_assign_source_307 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_19, call_args);
        }

        if (tmp_assign_source_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = mod_consts[503];
        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[329]);

        if (unlikely(tmp_args_element_value_55 == NULL)) {
            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[329]);
        }

        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_assign_source_308 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_20, call_args);
        }

        if (tmp_assign_source_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[504], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = mod_consts[505];
        tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[330]);

        if (unlikely(tmp_args_element_value_57 == NULL)) {
            tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[330]);
        }

        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_assign_source_309 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        if (tmp_assign_source_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[506], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[507];
        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[331]);

        if (unlikely(tmp_args_element_value_59 == NULL)) {
            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[331]);
        }

        if (tmp_args_element_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 406;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_assign_source_310 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_22, call_args);
        }

        if (tmp_assign_source_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[508], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = mod_consts[509];
        tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_args_element_value_61 == NULL)) {
            tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 407;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_assign_source_311 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
        }

        if (tmp_assign_source_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[510], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = mod_consts[511];
        tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[333]);

        if (unlikely(tmp_args_element_value_63 == NULL)) {
            tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[333]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 408;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_assign_source_312 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        if (tmp_assign_source_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[512], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[513];
        tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[334]);

        if (unlikely(tmp_args_element_value_65 == NULL)) {
            tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[334]);
        }

        if (tmp_args_element_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 409;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_assign_source_313 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        if (tmp_assign_source_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[514], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = mod_consts[515];
        tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[335]);

        if (unlikely(tmp_args_element_value_67 == NULL)) {
            tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[335]);
        }

        if (tmp_args_element_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_assign_source_314 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        if (tmp_assign_source_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[516], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[517];
        tmp_args_element_value_69 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[338]);

        if (unlikely(tmp_args_element_value_69 == NULL)) {
            tmp_args_element_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[338]);
        }

        if (tmp_args_element_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_assign_source_315 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        if (tmp_assign_source_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[519];
        tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[339]);

        if (unlikely(tmp_args_element_value_71 == NULL)) {
            tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[339]);
        }

        if (tmp_args_element_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_assign_source_316 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_28, call_args);
        }

        if (tmp_assign_source_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = mod_consts[521];
        tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[354]);

        if (unlikely(tmp_args_element_value_73 == NULL)) {
            tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[354]);
        }

        if (tmp_args_element_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_assign_source_317 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        if (tmp_assign_source_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[522], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = mod_consts[523];
        tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[340]);

        if (unlikely(tmp_args_element_value_75 == NULL)) {
            tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[340]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_assign_source_318 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        if (tmp_assign_source_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[524], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = mod_consts[525];
        tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[348]);

        if (unlikely(tmp_args_element_value_77 == NULL)) {
            tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[348]);
        }

        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 415;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_assign_source_319 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        if (tmp_assign_source_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[526], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[527];
        tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[350]);

        if (unlikely(tmp_args_element_value_79 == NULL)) {
            tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[350]);
        }

        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_assign_source_320 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        if (tmp_assign_source_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[528], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = mod_consts[529];
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[349]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[349]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_assign_source_321 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_33, call_args);
        }

        if (tmp_assign_source_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[530], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[531];
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[351]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[351]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_assign_source_322 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_34, call_args);
        }

        if (tmp_assign_source_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_args_element_value_85;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = mod_consts[533];
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[352]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_assign_source_323 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        if (tmp_assign_source_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[534], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = mod_consts[535];
        tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[336]);

        if (unlikely(tmp_args_element_value_87 == NULL)) {
            tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[336]);
        }

        if (tmp_args_element_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_assign_source_324 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        if (tmp_assign_source_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[536], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = mod_consts[537];
        tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[337]);

        if (unlikely(tmp_args_element_value_89 == NULL)) {
            tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[337]);
        }

        if (tmp_args_element_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_assign_source_325 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_37, call_args);
        }

        if (tmp_assign_source_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[538], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = mod_consts[539];
        tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_args_element_value_91 == NULL)) {
            tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[356]);
        }

        if (tmp_args_element_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_assign_source_326 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_38, call_args);
        }

        if (tmp_assign_source_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = mod_consts[541];
        tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_93 == NULL)) {
            tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[355]);
        }

        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_assign_source_327 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_39, call_args);
        }

        if (tmp_assign_source_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[542], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = mod_consts[543];
        tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[353]);

        if (unlikely(tmp_args_element_value_95 == NULL)) {
            tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[353]);
        }

        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
            tmp_assign_source_328 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_40, call_args);
        }

        if (tmp_assign_source_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[544], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_args_element_value_97;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = mod_consts[545];
        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[341]);

        if (unlikely(tmp_args_element_value_97 == NULL)) {
            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[341]);
        }

        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 426;
        {
            PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_assign_source_329 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_41, call_args);
        }

        if (tmp_assign_source_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[546], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = mod_consts[547];
        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[342]);

        if (unlikely(tmp_args_element_value_99 == NULL)) {
            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[342]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99};
            tmp_assign_source_330 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        if (tmp_assign_source_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[548], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = mod_consts[549];
        tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_args_element_value_101 == NULL)) {
            tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101};
            tmp_assign_source_331 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[550], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_args_element_value_103;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = mod_consts[551];
        tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[344]);

        if (unlikely(tmp_args_element_value_103 == NULL)) {
            tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[344]);
        }

        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103};
            tmp_assign_source_332 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_44, call_args);
        }

        if (tmp_assign_source_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[552], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_104 = mod_consts[553];
        tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[345]);

        if (unlikely(tmp_args_element_value_105 == NULL)) {
            tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[345]);
        }

        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_assign_source_333 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_45, call_args);
        }

        if (tmp_assign_source_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[554], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[490]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[490]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = mod_consts[555];
        tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[346]);

        if (unlikely(tmp_args_element_value_107 == NULL)) {
            tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[346]);
        }

        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 431;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107};
            tmp_assign_source_334 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_46, call_args);
        }

        if (tmp_assign_source_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[556], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[433];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_pyarrow;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[557];
        tmp_level_value_27 = mod_consts[2];
        frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame.f_lineno = 435;
        tmp_assign_source_335 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_assign_source_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_13__module == NULL);
        tmp_import_from_13__module = tmp_assign_source_335;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_336;
        PyObject *tmp_import_name_from_253;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_253 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_253)) {
            tmp_assign_source_336 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_253,
                (PyObject *)moduledict_pyarrow,
                mod_consts[558],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_336 = IMPORT_NAME(tmp_import_name_from_253, mod_consts[558]);
        }

        if (tmp_assign_source_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[558], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        PyObject *tmp_import_name_from_254;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_254 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_254)) {
            tmp_assign_source_337 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_254,
                (PyObject *)moduledict_pyarrow,
                mod_consts[559],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_337 = IMPORT_NAME(tmp_import_name_from_254, mod_consts[559]);
        }

        if (tmp_assign_source_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        PyObject *tmp_import_name_from_255;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_255 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_255)) {
            tmp_assign_source_338 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_255,
                (PyObject *)moduledict_pyarrow,
                mod_consts[560],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_338 = IMPORT_NAME(tmp_import_name_from_255, mod_consts[560]);
        }

        if (tmp_assign_source_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[560], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        PyObject *tmp_import_name_from_256;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_256 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_256)) {
            tmp_assign_source_339 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_256,
                (PyObject *)moduledict_pyarrow,
                mod_consts[561],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_339 = IMPORT_NAME(tmp_import_name_from_256, mod_consts[561]);
        }

        if (tmp_assign_source_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        PyObject *tmp_import_name_from_257;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_257 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_257)) {
            tmp_assign_source_340 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_257,
                (PyObject *)moduledict_pyarrow,
                mod_consts[562],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_340 = IMPORT_NAME(tmp_import_name_from_257, mod_consts[562]);
        }

        if (tmp_assign_source_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[562], tmp_assign_source_340);
    }
    {
        PyObject *tmp_assign_source_341;
        PyObject *tmp_import_name_from_258;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_258 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_258)) {
            tmp_assign_source_341 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_258,
                (PyObject *)moduledict_pyarrow,
                mod_consts[563],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_341 = IMPORT_NAME(tmp_import_name_from_258, mod_consts[563]);
        }

        if (tmp_assign_source_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_341);
    }
    {
        PyObject *tmp_assign_source_342;
        PyObject *tmp_import_name_from_259;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_259 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_259)) {
            tmp_assign_source_342 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_259,
                (PyObject *)moduledict_pyarrow,
                mod_consts[564],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_342 = IMPORT_NAME(tmp_import_name_from_259, mod_consts[564]);
        }

        if (tmp_assign_source_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[564], tmp_assign_source_342);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4b1d08ee2774d5b8480bc174e21a226);
#endif
    popFrameStack();

    assertFrameObject(frame_e4b1d08ee2774d5b8480bc174e21a226);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e4b1d08ee2774d5b8480bc174e21a226);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4b1d08ee2774d5b8480bc174e21a226, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4b1d08ee2774d5b8480bc174e21a226->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4b1d08ee2774d5b8480bc174e21a226, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    {
        PyObject *tmp_assign_source_343;


        tmp_assign_source_343 = MAKE_FUNCTION_pyarrow$$$function__9_get_include();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_343);
    }
    {
        PyObject *tmp_assign_source_344;


        tmp_assign_source_344 = MAKE_FUNCTION_pyarrow$$$function__10__get_pkg_config_executable();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_344);
    }
    {
        PyObject *tmp_assign_source_345;


        tmp_assign_source_345 = MAKE_FUNCTION_pyarrow$$$function__11__has_pkg_config();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_345);
    }
    {
        PyObject *tmp_assign_source_346;


        tmp_assign_source_346 = MAKE_FUNCTION_pyarrow$$$function__12__read_pkg_config_variable();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_346);
    }
    {
        PyObject *tmp_assign_source_347;


        tmp_assign_source_347 = MAKE_FUNCTION_pyarrow$$$function__13_get_libraries();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[566], tmp_assign_source_347);
    }
    {
        PyObject *tmp_assign_source_348;


        tmp_assign_source_348 = MAKE_FUNCTION_pyarrow$$$function__14_create_library_symlinks();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_348);
    }
    {
        PyObject *tmp_assign_source_349;


        tmp_assign_source_349 = MAKE_FUNCTION_pyarrow$$$function__15_get_library_dirs();

        UPDATE_STRING_DICT1(moduledict_pyarrow, (Nuitka_StringObject *)mod_consts[568], tmp_assign_source_349);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyarrow", false);

    return module_pyarrow;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyarrow, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyarrow", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
