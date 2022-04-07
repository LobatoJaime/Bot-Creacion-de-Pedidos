/* Generated code for Python module 'prompt_toolkit.filters.cli'
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

/* The "module_prompt_toolkit$filters$cli" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$filters$cli;
PyDictObject *moduledict_prompt_toolkit$filters$cli;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[65];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[65];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("prompt_toolkit.filters.cli"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 65; i++) {
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
void checkModuleConstants_prompt_toolkit$filters$cli(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 65; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d49260586605a14c8f4324795ac7d175;
static PyCodeObject *codeobj_0a142e24747acce596dc8813fea30138;
static PyCodeObject *codeobj_b08424dd9744515a0892049db1c39c19;
static PyCodeObject *codeobj_86d943b62d7a7324fe937074027426d8;
static PyCodeObject *codeobj_cae2a4cd385ba47b2f307da9b05bca1b;
static PyCodeObject *codeobj_b9262278bfa20ecae7f26ae52a0c7cbb;
static PyCodeObject *codeobj_12fb169b2fa178b8404767fc9601ab26;
static PyCodeObject *codeobj_ae85d4a7376cd5efae1eec6246c98b15;
static PyCodeObject *codeobj_1ec2d0aa3badc192714ef36ffe4dae40;
static PyCodeObject *codeobj_ffcae1e32167d7c64a1fcb50e87e1363;
static PyCodeObject *codeobj_1ddfafb594dd1143d7dbdfaeb52e8dbf;
static PyCodeObject *codeobj_7d5aac4df7c5d9d1239a41673c773542;
static PyCodeObject *codeobj_b182c650ceef28d1184256f6d8c83ad3;
static PyCodeObject *codeobj_8a82036e5287ba4b4b4776ac24c62916;
static PyCodeObject *codeobj_1fa9dd90d2132e212ede3ce05322cb00;
static PyCodeObject *codeobj_81e55691a437b829df92c2f6276856ae;
static PyCodeObject *codeobj_73719c670a3f087da4154a93c52dfb6c;
static PyCodeObject *codeobj_0abc74d7af29e0d7a4e1cc32225429f9;
static PyCodeObject *codeobj_afe1a7e844244d7e38e72f6c18c7c247;
static PyCodeObject *codeobj_d1eee4ead7ec3181991ae0a3cda42dca;
static PyCodeObject *codeobj_ee63b96bdcaaeb92e792569549dbb4d0;
static PyCodeObject *codeobj_2fc7e55ceb8bbea85563d1b9009f6c9d;
static PyCodeObject *codeobj_9139b41c6fcc15528451e6411e07fc16;
static PyCodeObject *codeobj_ad241998ee1c69052697f1eed65cbea0;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[62]); CHECK_OBJECT(module_filename_obj);
    codeobj_d49260586605a14c8f4324795ac7d175 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_0a142e24747acce596dc8813fea30138 = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_b08424dd9744515a0892049db1c39c19 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_86d943b62d7a7324fe937074027426d8 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_cae2a4cd385ba47b2f307da9b05bca1b = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_b9262278bfa20ecae7f26ae52a0c7cbb = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_12fb169b2fa178b8404767fc9601ab26 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_ae85d4a7376cd5efae1eec6246c98b15 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_1ec2d0aa3badc192714ef36ffe4dae40 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_ffcae1e32167d7c64a1fcb50e87e1363 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_1ddfafb594dd1143d7dbdfaeb52e8dbf = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_7d5aac4df7c5d9d1239a41673c773542 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_b182c650ceef28d1184256f6d8c83ad3 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_8a82036e5287ba4b4b4776ac24c62916 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_1fa9dd90d2132e212ede3ce05322cb00 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_81e55691a437b829df92c2f6276856ae = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_73719c670a3f087da4154a93c52dfb6c = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_0abc74d7af29e0d7a4e1cc32225429f9 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_afe1a7e844244d7e38e72f6c18c7c247 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_d1eee4ead7ec3181991ae0a3cda42dca = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_ee63b96bdcaaeb92e792569549dbb4d0 = MAKE_CODEOBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_2fc7e55ceb8bbea85563d1b9009f6c9d = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_9139b41c6fcc15528451e6411e07fc16 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], NULL, NULL, 0, 0, 0);
    codeobj_ad241998ee1c69052697f1eed65cbea0 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[63], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda();


// The module function definitions.
static PyObject *impl_prompt_toolkit$filters$cli$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d49260586605a14c8f4324795ac7d175;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d49260586605a14c8f4324795ac7d175 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d49260586605a14c8f4324795ac7d175)) {
        Py_XDECREF(cache_frame_d49260586605a14c8f4324795ac7d175);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d49260586605a14c8f4324795ac7d175 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d49260586605a14c8f4324795ac7d175 = MAKE_FUNCTION_FRAME(codeobj_d49260586605a14c8f4324795ac7d175, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d49260586605a14c8f4324795ac7d175->m_type_description == NULL);
    frame_d49260586605a14c8f4324795ac7d175 = cache_frame_d49260586605a14c8f4324795ac7d175;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d49260586605a14c8f4324795ac7d175);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d49260586605a14c8f4324795ac7d175) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d49260586605a14c8f4324795ac7d175);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d49260586605a14c8f4324795ac7d175);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d49260586605a14c8f4324795ac7d175);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d49260586605a14c8f4324795ac7d175, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d49260586605a14c8f4324795ac7d175->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d49260586605a14c8f4324795ac7d175, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d49260586605a14c8f4324795ac7d175,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d49260586605a14c8f4324795ac7d175 == cache_frame_d49260586605a14c8f4324795ac7d175) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d49260586605a14c8f4324795ac7d175);
        cache_frame_d49260586605a14c8f4324795ac7d175 = NULL;
    }

    assertFrameObject(frame_d49260586605a14c8f4324795ac7d175);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0a142e24747acce596dc8813fea30138;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0a142e24747acce596dc8813fea30138 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a142e24747acce596dc8813fea30138)) {
        Py_XDECREF(cache_frame_0a142e24747acce596dc8813fea30138);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a142e24747acce596dc8813fea30138 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a142e24747acce596dc8813fea30138 = MAKE_FUNCTION_FRAME(codeobj_0a142e24747acce596dc8813fea30138, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a142e24747acce596dc8813fea30138->m_type_description == NULL);
    frame_0a142e24747acce596dc8813fea30138 = cache_frame_0a142e24747acce596dc8813fea30138;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a142e24747acce596dc8813fea30138);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a142e24747acce596dc8813fea30138) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[1]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a142e24747acce596dc8813fea30138);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a142e24747acce596dc8813fea30138);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a142e24747acce596dc8813fea30138);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a142e24747acce596dc8813fea30138, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a142e24747acce596dc8813fea30138->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a142e24747acce596dc8813fea30138, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a142e24747acce596dc8813fea30138,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0a142e24747acce596dc8813fea30138 == cache_frame_0a142e24747acce596dc8813fea30138) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a142e24747acce596dc8813fea30138);
        cache_frame_0a142e24747acce596dc8813fea30138 = NULL;
    }

    assertFrameObject(frame_0a142e24747acce596dc8813fea30138);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b08424dd9744515a0892049db1c39c19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b08424dd9744515a0892049db1c39c19 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b08424dd9744515a0892049db1c39c19)) {
        Py_XDECREF(cache_frame_b08424dd9744515a0892049db1c39c19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b08424dd9744515a0892049db1c39c19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b08424dd9744515a0892049db1c39c19 = MAKE_FUNCTION_FRAME(codeobj_b08424dd9744515a0892049db1c39c19, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b08424dd9744515a0892049db1c39c19->m_type_description == NULL);
    frame_b08424dd9744515a0892049db1c39c19 = cache_frame_b08424dd9744515a0892049db1c39c19;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b08424dd9744515a0892049db1c39c19);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b08424dd9744515a0892049db1c39c19) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[2]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b08424dd9744515a0892049db1c39c19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b08424dd9744515a0892049db1c39c19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b08424dd9744515a0892049db1c39c19);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b08424dd9744515a0892049db1c39c19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b08424dd9744515a0892049db1c39c19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b08424dd9744515a0892049db1c39c19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b08424dd9744515a0892049db1c39c19,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b08424dd9744515a0892049db1c39c19 == cache_frame_b08424dd9744515a0892049db1c39c19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b08424dd9744515a0892049db1c39c19);
        cache_frame_b08424dd9744515a0892049db1c39c19 = NULL;
    }

    assertFrameObject(frame_b08424dd9744515a0892049db1c39c19);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_86d943b62d7a7324fe937074027426d8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_86d943b62d7a7324fe937074027426d8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_86d943b62d7a7324fe937074027426d8)) {
        Py_XDECREF(cache_frame_86d943b62d7a7324fe937074027426d8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_86d943b62d7a7324fe937074027426d8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_86d943b62d7a7324fe937074027426d8 = MAKE_FUNCTION_FRAME(codeobj_86d943b62d7a7324fe937074027426d8, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_86d943b62d7a7324fe937074027426d8->m_type_description == NULL);
    frame_86d943b62d7a7324fe937074027426d8 = cache_frame_86d943b62d7a7324fe937074027426d8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_86d943b62d7a7324fe937074027426d8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_86d943b62d7a7324fe937074027426d8) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[3]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_86d943b62d7a7324fe937074027426d8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_86d943b62d7a7324fe937074027426d8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_86d943b62d7a7324fe937074027426d8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_86d943b62d7a7324fe937074027426d8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_86d943b62d7a7324fe937074027426d8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_86d943b62d7a7324fe937074027426d8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_86d943b62d7a7324fe937074027426d8,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_86d943b62d7a7324fe937074027426d8 == cache_frame_86d943b62d7a7324fe937074027426d8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_86d943b62d7a7324fe937074027426d8);
        cache_frame_86d943b62d7a7324fe937074027426d8 = NULL;
    }

    assertFrameObject(frame_86d943b62d7a7324fe937074027426d8);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_cae2a4cd385ba47b2f307da9b05bca1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cae2a4cd385ba47b2f307da9b05bca1b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cae2a4cd385ba47b2f307da9b05bca1b)) {
        Py_XDECREF(cache_frame_cae2a4cd385ba47b2f307da9b05bca1b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cae2a4cd385ba47b2f307da9b05bca1b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cae2a4cd385ba47b2f307da9b05bca1b = MAKE_FUNCTION_FRAME(codeobj_cae2a4cd385ba47b2f307da9b05bca1b, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cae2a4cd385ba47b2f307da9b05bca1b->m_type_description == NULL);
    frame_cae2a4cd385ba47b2f307da9b05bca1b = cache_frame_cae2a4cd385ba47b2f307da9b05bca1b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cae2a4cd385ba47b2f307da9b05bca1b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cae2a4cd385ba47b2f307da9b05bca1b) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[4]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cae2a4cd385ba47b2f307da9b05bca1b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cae2a4cd385ba47b2f307da9b05bca1b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cae2a4cd385ba47b2f307da9b05bca1b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cae2a4cd385ba47b2f307da9b05bca1b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cae2a4cd385ba47b2f307da9b05bca1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cae2a4cd385ba47b2f307da9b05bca1b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cae2a4cd385ba47b2f307da9b05bca1b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_cae2a4cd385ba47b2f307da9b05bca1b == cache_frame_cae2a4cd385ba47b2f307da9b05bca1b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cae2a4cd385ba47b2f307da9b05bca1b);
        cache_frame_cae2a4cd385ba47b2f307da9b05bca1b = NULL;
    }

    assertFrameObject(frame_cae2a4cd385ba47b2f307da9b05bca1b);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b9262278bfa20ecae7f26ae52a0c7cbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb)) {
        Py_XDECREF(cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb = MAKE_FUNCTION_FRAME(codeobj_b9262278bfa20ecae7f26ae52a0c7cbb, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb->m_type_description == NULL);
    frame_b9262278bfa20ecae7f26ae52a0c7cbb = cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b9262278bfa20ecae7f26ae52a0c7cbb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b9262278bfa20ecae7f26ae52a0c7cbb) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[5]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9262278bfa20ecae7f26ae52a0c7cbb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9262278bfa20ecae7f26ae52a0c7cbb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9262278bfa20ecae7f26ae52a0c7cbb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9262278bfa20ecae7f26ae52a0c7cbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9262278bfa20ecae7f26ae52a0c7cbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9262278bfa20ecae7f26ae52a0c7cbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9262278bfa20ecae7f26ae52a0c7cbb,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b9262278bfa20ecae7f26ae52a0c7cbb == cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb);
        cache_frame_b9262278bfa20ecae7f26ae52a0c7cbb = NULL;
    }

    assertFrameObject(frame_b9262278bfa20ecae7f26ae52a0c7cbb);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__7_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_12fb169b2fa178b8404767fc9601ab26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12fb169b2fa178b8404767fc9601ab26 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12fb169b2fa178b8404767fc9601ab26)) {
        Py_XDECREF(cache_frame_12fb169b2fa178b8404767fc9601ab26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12fb169b2fa178b8404767fc9601ab26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12fb169b2fa178b8404767fc9601ab26 = MAKE_FUNCTION_FRAME(codeobj_12fb169b2fa178b8404767fc9601ab26, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_12fb169b2fa178b8404767fc9601ab26->m_type_description == NULL);
    frame_12fb169b2fa178b8404767fc9601ab26 = cache_frame_12fb169b2fa178b8404767fc9601ab26;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_12fb169b2fa178b8404767fc9601ab26);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_12fb169b2fa178b8404767fc9601ab26) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12fb169b2fa178b8404767fc9601ab26);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_12fb169b2fa178b8404767fc9601ab26);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_12fb169b2fa178b8404767fc9601ab26);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_12fb169b2fa178b8404767fc9601ab26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12fb169b2fa178b8404767fc9601ab26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12fb169b2fa178b8404767fc9601ab26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12fb169b2fa178b8404767fc9601ab26,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_12fb169b2fa178b8404767fc9601ab26 == cache_frame_12fb169b2fa178b8404767fc9601ab26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_12fb169b2fa178b8404767fc9601ab26);
        cache_frame_12fb169b2fa178b8404767fc9601ab26 = NULL;
    }

    assertFrameObject(frame_12fb169b2fa178b8404767fc9601ab26);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__8_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ae85d4a7376cd5efae1eec6246c98b15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae85d4a7376cd5efae1eec6246c98b15 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae85d4a7376cd5efae1eec6246c98b15)) {
        Py_XDECREF(cache_frame_ae85d4a7376cd5efae1eec6246c98b15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae85d4a7376cd5efae1eec6246c98b15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae85d4a7376cd5efae1eec6246c98b15 = MAKE_FUNCTION_FRAME(codeobj_ae85d4a7376cd5efae1eec6246c98b15, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae85d4a7376cd5efae1eec6246c98b15->m_type_description == NULL);
    frame_ae85d4a7376cd5efae1eec6246c98b15 = cache_frame_ae85d4a7376cd5efae1eec6246c98b15;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae85d4a7376cd5efae1eec6246c98b15);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae85d4a7376cd5efae1eec6246c98b15) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[7]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae85d4a7376cd5efae1eec6246c98b15);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae85d4a7376cd5efae1eec6246c98b15);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae85d4a7376cd5efae1eec6246c98b15);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae85d4a7376cd5efae1eec6246c98b15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae85d4a7376cd5efae1eec6246c98b15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae85d4a7376cd5efae1eec6246c98b15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae85d4a7376cd5efae1eec6246c98b15,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ae85d4a7376cd5efae1eec6246c98b15 == cache_frame_ae85d4a7376cd5efae1eec6246c98b15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ae85d4a7376cd5efae1eec6246c98b15);
        cache_frame_ae85d4a7376cd5efae1eec6246c98b15 = NULL;
    }

    assertFrameObject(frame_ae85d4a7376cd5efae1eec6246c98b15);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__9_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1ec2d0aa3badc192714ef36ffe4dae40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ec2d0aa3badc192714ef36ffe4dae40 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ec2d0aa3badc192714ef36ffe4dae40)) {
        Py_XDECREF(cache_frame_1ec2d0aa3badc192714ef36ffe4dae40);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ec2d0aa3badc192714ef36ffe4dae40 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ec2d0aa3badc192714ef36ffe4dae40 = MAKE_FUNCTION_FRAME(codeobj_1ec2d0aa3badc192714ef36ffe4dae40, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1ec2d0aa3badc192714ef36ffe4dae40->m_type_description == NULL);
    frame_1ec2d0aa3badc192714ef36ffe4dae40 = cache_frame_1ec2d0aa3badc192714ef36ffe4dae40;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1ec2d0aa3badc192714ef36ffe4dae40);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1ec2d0aa3badc192714ef36ffe4dae40) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[8]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ec2d0aa3badc192714ef36ffe4dae40);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ec2d0aa3badc192714ef36ffe4dae40);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ec2d0aa3badc192714ef36ffe4dae40);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ec2d0aa3badc192714ef36ffe4dae40, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ec2d0aa3badc192714ef36ffe4dae40->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ec2d0aa3badc192714ef36ffe4dae40, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ec2d0aa3badc192714ef36ffe4dae40,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1ec2d0aa3badc192714ef36ffe4dae40 == cache_frame_1ec2d0aa3badc192714ef36ffe4dae40) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1ec2d0aa3badc192714ef36ffe4dae40);
        cache_frame_1ec2d0aa3badc192714ef36ffe4dae40 = NULL;
    }

    assertFrameObject(frame_1ec2d0aa3badc192714ef36ffe4dae40);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__10_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ffcae1e32167d7c64a1fcb50e87e1363;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffcae1e32167d7c64a1fcb50e87e1363 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffcae1e32167d7c64a1fcb50e87e1363)) {
        Py_XDECREF(cache_frame_ffcae1e32167d7c64a1fcb50e87e1363);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffcae1e32167d7c64a1fcb50e87e1363 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffcae1e32167d7c64a1fcb50e87e1363 = MAKE_FUNCTION_FRAME(codeobj_ffcae1e32167d7c64a1fcb50e87e1363, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ffcae1e32167d7c64a1fcb50e87e1363->m_type_description == NULL);
    frame_ffcae1e32167d7c64a1fcb50e87e1363 = cache_frame_ffcae1e32167d7c64a1fcb50e87e1363;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffcae1e32167d7c64a1fcb50e87e1363);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffcae1e32167d7c64a1fcb50e87e1363) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffcae1e32167d7c64a1fcb50e87e1363);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffcae1e32167d7c64a1fcb50e87e1363);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffcae1e32167d7c64a1fcb50e87e1363);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffcae1e32167d7c64a1fcb50e87e1363, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffcae1e32167d7c64a1fcb50e87e1363->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffcae1e32167d7c64a1fcb50e87e1363, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffcae1e32167d7c64a1fcb50e87e1363,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ffcae1e32167d7c64a1fcb50e87e1363 == cache_frame_ffcae1e32167d7c64a1fcb50e87e1363) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ffcae1e32167d7c64a1fcb50e87e1363);
        cache_frame_ffcae1e32167d7c64a1fcb50e87e1363 = NULL;
    }

    assertFrameObject(frame_ffcae1e32167d7c64a1fcb50e87e1363);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__11_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1ddfafb594dd1143d7dbdfaeb52e8dbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf)) {
        Py_XDECREF(cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf = MAKE_FUNCTION_FRAME(codeobj_1ddfafb594dd1143d7dbdfaeb52e8dbf, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf->m_type_description == NULL);
    frame_1ddfafb594dd1143d7dbdfaeb52e8dbf = cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ddfafb594dd1143d7dbdfaeb52e8dbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ddfafb594dd1143d7dbdfaeb52e8dbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ddfafb594dd1143d7dbdfaeb52e8dbf,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1ddfafb594dd1143d7dbdfaeb52e8dbf == cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);
        cache_frame_1ddfafb594dd1143d7dbdfaeb52e8dbf = NULL;
    }

    assertFrameObject(frame_1ddfafb594dd1143d7dbdfaeb52e8dbf);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__12_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7d5aac4df7c5d9d1239a41673c773542;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d5aac4df7c5d9d1239a41673c773542 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d5aac4df7c5d9d1239a41673c773542)) {
        Py_XDECREF(cache_frame_7d5aac4df7c5d9d1239a41673c773542);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d5aac4df7c5d9d1239a41673c773542 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d5aac4df7c5d9d1239a41673c773542 = MAKE_FUNCTION_FRAME(codeobj_7d5aac4df7c5d9d1239a41673c773542, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d5aac4df7c5d9d1239a41673c773542->m_type_description == NULL);
    frame_7d5aac4df7c5d9d1239a41673c773542 = cache_frame_7d5aac4df7c5d9d1239a41673c773542;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d5aac4df7c5d9d1239a41673c773542);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d5aac4df7c5d9d1239a41673c773542) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[10]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d5aac4df7c5d9d1239a41673c773542);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d5aac4df7c5d9d1239a41673c773542);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d5aac4df7c5d9d1239a41673c773542);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d5aac4df7c5d9d1239a41673c773542, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d5aac4df7c5d9d1239a41673c773542->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d5aac4df7c5d9d1239a41673c773542, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d5aac4df7c5d9d1239a41673c773542,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7d5aac4df7c5d9d1239a41673c773542 == cache_frame_7d5aac4df7c5d9d1239a41673c773542) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d5aac4df7c5d9d1239a41673c773542);
        cache_frame_7d5aac4df7c5d9d1239a41673c773542 = NULL;
    }

    assertFrameObject(frame_7d5aac4df7c5d9d1239a41673c773542);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__13_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b182c650ceef28d1184256f6d8c83ad3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b182c650ceef28d1184256f6d8c83ad3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b182c650ceef28d1184256f6d8c83ad3)) {
        Py_XDECREF(cache_frame_b182c650ceef28d1184256f6d8c83ad3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b182c650ceef28d1184256f6d8c83ad3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b182c650ceef28d1184256f6d8c83ad3 = MAKE_FUNCTION_FRAME(codeobj_b182c650ceef28d1184256f6d8c83ad3, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b182c650ceef28d1184256f6d8c83ad3->m_type_description == NULL);
    frame_b182c650ceef28d1184256f6d8c83ad3 = cache_frame_b182c650ceef28d1184256f6d8c83ad3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b182c650ceef28d1184256f6d8c83ad3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b182c650ceef28d1184256f6d8c83ad3) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[11]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b182c650ceef28d1184256f6d8c83ad3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b182c650ceef28d1184256f6d8c83ad3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b182c650ceef28d1184256f6d8c83ad3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b182c650ceef28d1184256f6d8c83ad3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b182c650ceef28d1184256f6d8c83ad3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b182c650ceef28d1184256f6d8c83ad3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b182c650ceef28d1184256f6d8c83ad3,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b182c650ceef28d1184256f6d8c83ad3 == cache_frame_b182c650ceef28d1184256f6d8c83ad3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b182c650ceef28d1184256f6d8c83ad3);
        cache_frame_b182c650ceef28d1184256f6d8c83ad3 = NULL;
    }

    assertFrameObject(frame_b182c650ceef28d1184256f6d8c83ad3);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__14_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8a82036e5287ba4b4b4776ac24c62916;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a82036e5287ba4b4b4776ac24c62916 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a82036e5287ba4b4b4776ac24c62916)) {
        Py_XDECREF(cache_frame_8a82036e5287ba4b4b4776ac24c62916);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a82036e5287ba4b4b4776ac24c62916 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a82036e5287ba4b4b4776ac24c62916 = MAKE_FUNCTION_FRAME(codeobj_8a82036e5287ba4b4b4776ac24c62916, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8a82036e5287ba4b4b4776ac24c62916->m_type_description == NULL);
    frame_8a82036e5287ba4b4b4776ac24c62916 = cache_frame_8a82036e5287ba4b4b4776ac24c62916;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8a82036e5287ba4b4b4776ac24c62916);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8a82036e5287ba4b4b4776ac24c62916) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[12]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a82036e5287ba4b4b4776ac24c62916);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a82036e5287ba4b4b4776ac24c62916);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a82036e5287ba4b4b4776ac24c62916);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a82036e5287ba4b4b4776ac24c62916, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a82036e5287ba4b4b4776ac24c62916->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a82036e5287ba4b4b4776ac24c62916, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a82036e5287ba4b4b4776ac24c62916,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8a82036e5287ba4b4b4776ac24c62916 == cache_frame_8a82036e5287ba4b4b4776ac24c62916) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8a82036e5287ba4b4b4776ac24c62916);
        cache_frame_8a82036e5287ba4b4b4776ac24c62916 = NULL;
    }

    assertFrameObject(frame_8a82036e5287ba4b4b4776ac24c62916);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__15_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1fa9dd90d2132e212ede3ce05322cb00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1fa9dd90d2132e212ede3ce05322cb00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1fa9dd90d2132e212ede3ce05322cb00)) {
        Py_XDECREF(cache_frame_1fa9dd90d2132e212ede3ce05322cb00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fa9dd90d2132e212ede3ce05322cb00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fa9dd90d2132e212ede3ce05322cb00 = MAKE_FUNCTION_FRAME(codeobj_1fa9dd90d2132e212ede3ce05322cb00, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1fa9dd90d2132e212ede3ce05322cb00->m_type_description == NULL);
    frame_1fa9dd90d2132e212ede3ce05322cb00 = cache_frame_1fa9dd90d2132e212ede3ce05322cb00;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1fa9dd90d2132e212ede3ce05322cb00);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1fa9dd90d2132e212ede3ce05322cb00) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[13]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fa9dd90d2132e212ede3ce05322cb00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fa9dd90d2132e212ede3ce05322cb00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fa9dd90d2132e212ede3ce05322cb00);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fa9dd90d2132e212ede3ce05322cb00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fa9dd90d2132e212ede3ce05322cb00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fa9dd90d2132e212ede3ce05322cb00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fa9dd90d2132e212ede3ce05322cb00,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1fa9dd90d2132e212ede3ce05322cb00 == cache_frame_1fa9dd90d2132e212ede3ce05322cb00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1fa9dd90d2132e212ede3ce05322cb00);
        cache_frame_1fa9dd90d2132e212ede3ce05322cb00 = NULL;
    }

    assertFrameObject(frame_1fa9dd90d2132e212ede3ce05322cb00);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__16_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_81e55691a437b829df92c2f6276856ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81e55691a437b829df92c2f6276856ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81e55691a437b829df92c2f6276856ae)) {
        Py_XDECREF(cache_frame_81e55691a437b829df92c2f6276856ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81e55691a437b829df92c2f6276856ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81e55691a437b829df92c2f6276856ae = MAKE_FUNCTION_FRAME(codeobj_81e55691a437b829df92c2f6276856ae, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_81e55691a437b829df92c2f6276856ae->m_type_description == NULL);
    frame_81e55691a437b829df92c2f6276856ae = cache_frame_81e55691a437b829df92c2f6276856ae;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_81e55691a437b829df92c2f6276856ae);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_81e55691a437b829df92c2f6276856ae) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[14]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81e55691a437b829df92c2f6276856ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_81e55691a437b829df92c2f6276856ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81e55691a437b829df92c2f6276856ae);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81e55691a437b829df92c2f6276856ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81e55691a437b829df92c2f6276856ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81e55691a437b829df92c2f6276856ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81e55691a437b829df92c2f6276856ae,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_81e55691a437b829df92c2f6276856ae == cache_frame_81e55691a437b829df92c2f6276856ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_81e55691a437b829df92c2f6276856ae);
        cache_frame_81e55691a437b829df92c2f6276856ae = NULL;
    }

    assertFrameObject(frame_81e55691a437b829df92c2f6276856ae);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__17_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_73719c670a3f087da4154a93c52dfb6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_73719c670a3f087da4154a93c52dfb6c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_73719c670a3f087da4154a93c52dfb6c)) {
        Py_XDECREF(cache_frame_73719c670a3f087da4154a93c52dfb6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_73719c670a3f087da4154a93c52dfb6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_73719c670a3f087da4154a93c52dfb6c = MAKE_FUNCTION_FRAME(codeobj_73719c670a3f087da4154a93c52dfb6c, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_73719c670a3f087da4154a93c52dfb6c->m_type_description == NULL);
    frame_73719c670a3f087da4154a93c52dfb6c = cache_frame_73719c670a3f087da4154a93c52dfb6c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_73719c670a3f087da4154a93c52dfb6c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_73719c670a3f087da4154a93c52dfb6c) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[15]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73719c670a3f087da4154a93c52dfb6c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_73719c670a3f087da4154a93c52dfb6c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_73719c670a3f087da4154a93c52dfb6c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_73719c670a3f087da4154a93c52dfb6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_73719c670a3f087da4154a93c52dfb6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_73719c670a3f087da4154a93c52dfb6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_73719c670a3f087da4154a93c52dfb6c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_73719c670a3f087da4154a93c52dfb6c == cache_frame_73719c670a3f087da4154a93c52dfb6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_73719c670a3f087da4154a93c52dfb6c);
        cache_frame_73719c670a3f087da4154a93c52dfb6c = NULL;
    }

    assertFrameObject(frame_73719c670a3f087da4154a93c52dfb6c);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__18_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0abc74d7af29e0d7a4e1cc32225429f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0abc74d7af29e0d7a4e1cc32225429f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0abc74d7af29e0d7a4e1cc32225429f9)) {
        Py_XDECREF(cache_frame_0abc74d7af29e0d7a4e1cc32225429f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0abc74d7af29e0d7a4e1cc32225429f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0abc74d7af29e0d7a4e1cc32225429f9 = MAKE_FUNCTION_FRAME(codeobj_0abc74d7af29e0d7a4e1cc32225429f9, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0abc74d7af29e0d7a4e1cc32225429f9->m_type_description == NULL);
    frame_0abc74d7af29e0d7a4e1cc32225429f9 = cache_frame_0abc74d7af29e0d7a4e1cc32225429f9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0abc74d7af29e0d7a4e1cc32225429f9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0abc74d7af29e0d7a4e1cc32225429f9) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[16]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0abc74d7af29e0d7a4e1cc32225429f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0abc74d7af29e0d7a4e1cc32225429f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0abc74d7af29e0d7a4e1cc32225429f9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0abc74d7af29e0d7a4e1cc32225429f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0abc74d7af29e0d7a4e1cc32225429f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0abc74d7af29e0d7a4e1cc32225429f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0abc74d7af29e0d7a4e1cc32225429f9,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0abc74d7af29e0d7a4e1cc32225429f9 == cache_frame_0abc74d7af29e0d7a4e1cc32225429f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0abc74d7af29e0d7a4e1cc32225429f9);
        cache_frame_0abc74d7af29e0d7a4e1cc32225429f9 = NULL;
    }

    assertFrameObject(frame_0abc74d7af29e0d7a4e1cc32225429f9);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__19_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_afe1a7e844244d7e38e72f6c18c7c247;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afe1a7e844244d7e38e72f6c18c7c247 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afe1a7e844244d7e38e72f6c18c7c247)) {
        Py_XDECREF(cache_frame_afe1a7e844244d7e38e72f6c18c7c247);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afe1a7e844244d7e38e72f6c18c7c247 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afe1a7e844244d7e38e72f6c18c7c247 = MAKE_FUNCTION_FRAME(codeobj_afe1a7e844244d7e38e72f6c18c7c247, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_afe1a7e844244d7e38e72f6c18c7c247->m_type_description == NULL);
    frame_afe1a7e844244d7e38e72f6c18c7c247 = cache_frame_afe1a7e844244d7e38e72f6c18c7c247;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_afe1a7e844244d7e38e72f6c18c7c247);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_afe1a7e844244d7e38e72f6c18c7c247) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[17]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_afe1a7e844244d7e38e72f6c18c7c247);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_afe1a7e844244d7e38e72f6c18c7c247);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_afe1a7e844244d7e38e72f6c18c7c247);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afe1a7e844244d7e38e72f6c18c7c247, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afe1a7e844244d7e38e72f6c18c7c247->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afe1a7e844244d7e38e72f6c18c7c247, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afe1a7e844244d7e38e72f6c18c7c247,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_afe1a7e844244d7e38e72f6c18c7c247 == cache_frame_afe1a7e844244d7e38e72f6c18c7c247) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_afe1a7e844244d7e38e72f6c18c7c247);
        cache_frame_afe1a7e844244d7e38e72f6c18c7c247 = NULL;
    }

    assertFrameObject(frame_afe1a7e844244d7e38e72f6c18c7c247);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__20_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d1eee4ead7ec3181991ae0a3cda42dca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1eee4ead7ec3181991ae0a3cda42dca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1eee4ead7ec3181991ae0a3cda42dca)) {
        Py_XDECREF(cache_frame_d1eee4ead7ec3181991ae0a3cda42dca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1eee4ead7ec3181991ae0a3cda42dca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1eee4ead7ec3181991ae0a3cda42dca = MAKE_FUNCTION_FRAME(codeobj_d1eee4ead7ec3181991ae0a3cda42dca, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d1eee4ead7ec3181991ae0a3cda42dca->m_type_description == NULL);
    frame_d1eee4ead7ec3181991ae0a3cda42dca = cache_frame_d1eee4ead7ec3181991ae0a3cda42dca;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d1eee4ead7ec3181991ae0a3cda42dca);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d1eee4ead7ec3181991ae0a3cda42dca) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[18]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1eee4ead7ec3181991ae0a3cda42dca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1eee4ead7ec3181991ae0a3cda42dca);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1eee4ead7ec3181991ae0a3cda42dca);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1eee4ead7ec3181991ae0a3cda42dca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1eee4ead7ec3181991ae0a3cda42dca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1eee4ead7ec3181991ae0a3cda42dca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1eee4ead7ec3181991ae0a3cda42dca,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d1eee4ead7ec3181991ae0a3cda42dca == cache_frame_d1eee4ead7ec3181991ae0a3cda42dca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d1eee4ead7ec3181991ae0a3cda42dca);
        cache_frame_d1eee4ead7ec3181991ae0a3cda42dca = NULL;
    }

    assertFrameObject(frame_d1eee4ead7ec3181991ae0a3cda42dca);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__21_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ee63b96bdcaaeb92e792569549dbb4d0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee63b96bdcaaeb92e792569549dbb4d0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee63b96bdcaaeb92e792569549dbb4d0)) {
        Py_XDECREF(cache_frame_ee63b96bdcaaeb92e792569549dbb4d0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee63b96bdcaaeb92e792569549dbb4d0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee63b96bdcaaeb92e792569549dbb4d0 = MAKE_FUNCTION_FRAME(codeobj_ee63b96bdcaaeb92e792569549dbb4d0, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee63b96bdcaaeb92e792569549dbb4d0->m_type_description == NULL);
    frame_ee63b96bdcaaeb92e792569549dbb4d0 = cache_frame_ee63b96bdcaaeb92e792569549dbb4d0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee63b96bdcaaeb92e792569549dbb4d0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee63b96bdcaaeb92e792569549dbb4d0) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[19]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee63b96bdcaaeb92e792569549dbb4d0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee63b96bdcaaeb92e792569549dbb4d0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee63b96bdcaaeb92e792569549dbb4d0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee63b96bdcaaeb92e792569549dbb4d0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee63b96bdcaaeb92e792569549dbb4d0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee63b96bdcaaeb92e792569549dbb4d0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee63b96bdcaaeb92e792569549dbb4d0,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ee63b96bdcaaeb92e792569549dbb4d0 == cache_frame_ee63b96bdcaaeb92e792569549dbb4d0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee63b96bdcaaeb92e792569549dbb4d0);
        cache_frame_ee63b96bdcaaeb92e792569549dbb4d0 = NULL;
    }

    assertFrameObject(frame_ee63b96bdcaaeb92e792569549dbb4d0);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__22_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2fc7e55ceb8bbea85563d1b9009f6c9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d)) {
        Py_XDECREF(cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d = MAKE_FUNCTION_FRAME(codeobj_2fc7e55ceb8bbea85563d1b9009f6c9d, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d->m_type_description == NULL);
    frame_2fc7e55ceb8bbea85563d1b9009f6c9d = cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2fc7e55ceb8bbea85563d1b9009f6c9d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2fc7e55ceb8bbea85563d1b9009f6c9d) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[20]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fc7e55ceb8bbea85563d1b9009f6c9d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fc7e55ceb8bbea85563d1b9009f6c9d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fc7e55ceb8bbea85563d1b9009f6c9d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2fc7e55ceb8bbea85563d1b9009f6c9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fc7e55ceb8bbea85563d1b9009f6c9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fc7e55ceb8bbea85563d1b9009f6c9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fc7e55ceb8bbea85563d1b9009f6c9d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_2fc7e55ceb8bbea85563d1b9009f6c9d == cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d);
        cache_frame_2fc7e55ceb8bbea85563d1b9009f6c9d = NULL;
    }

    assertFrameObject(frame_2fc7e55ceb8bbea85563d1b9009f6c9d);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__23_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9139b41c6fcc15528451e6411e07fc16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9139b41c6fcc15528451e6411e07fc16 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9139b41c6fcc15528451e6411e07fc16)) {
        Py_XDECREF(cache_frame_9139b41c6fcc15528451e6411e07fc16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9139b41c6fcc15528451e6411e07fc16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9139b41c6fcc15528451e6411e07fc16 = MAKE_FUNCTION_FRAME(codeobj_9139b41c6fcc15528451e6411e07fc16, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9139b41c6fcc15528451e6411e07fc16->m_type_description == NULL);
    frame_9139b41c6fcc15528451e6411e07fc16 = cache_frame_9139b41c6fcc15528451e6411e07fc16;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9139b41c6fcc15528451e6411e07fc16);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9139b41c6fcc15528451e6411e07fc16) == 2); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[21]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9139b41c6fcc15528451e6411e07fc16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9139b41c6fcc15528451e6411e07fc16);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9139b41c6fcc15528451e6411e07fc16);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9139b41c6fcc15528451e6411e07fc16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9139b41c6fcc15528451e6411e07fc16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9139b41c6fcc15528451e6411e07fc16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9139b41c6fcc15528451e6411e07fc16,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9139b41c6fcc15528451e6411e07fc16 == cache_frame_9139b41c6fcc15528451e6411e07fc16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9139b41c6fcc15528451e6411e07fc16);
        cache_frame_9139b41c6fcc15528451e6411e07fc16 = NULL;
    }

    assertFrameObject(frame_9139b41c6fcc15528451e6411e07fc16);

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



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__10_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ffcae1e32167d7c64a1fcb50e87e1363,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__11_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1ddfafb594dd1143d7dbdfaeb52e8dbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__12_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d5aac4df7c5d9d1239a41673c773542,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__13_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b182c650ceef28d1184256f6d8c83ad3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__14_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8a82036e5287ba4b4b4776ac24c62916,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__15_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1fa9dd90d2132e212ede3ce05322cb00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__16_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81e55691a437b829df92c2f6276856ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__17_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_73719c670a3f087da4154a93c52dfb6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__18_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0abc74d7af29e0d7a4e1cc32225429f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__19_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_afe1a7e844244d7e38e72f6c18c7c247,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__1_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d49260586605a14c8f4324795ac7d175,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__20_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d1eee4ead7ec3181991ae0a3cda42dca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__21_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee63b96bdcaaeb92e792569549dbb4d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__22_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2fc7e55ceb8bbea85563d1b9009f6c9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__23_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9139b41c6fcc15528451e6411e07fc16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__2_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a142e24747acce596dc8813fea30138,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__3_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b08424dd9744515a0892049db1c39c19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__4_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_86d943b62d7a7324fe937074027426d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__5_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cae2a4cd385ba47b2f307da9b05bca1b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__6_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b9262278bfa20ecae7f26ae52a0c7cbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__7_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12fb169b2fa178b8404767fc9601ab26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__8_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae85d4a7376cd5efae1eec6246c98b15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__9_lambda,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1ec2d0aa3badc192714ef36ffe4dae40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
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

function_impl_code functable_prompt_toolkit$filters$cli[] = {
    impl_prompt_toolkit$filters$cli$$$function__1_lambda,
    impl_prompt_toolkit$filters$cli$$$function__2_lambda,
    impl_prompt_toolkit$filters$cli$$$function__3_lambda,
    impl_prompt_toolkit$filters$cli$$$function__4_lambda,
    impl_prompt_toolkit$filters$cli$$$function__5_lambda,
    impl_prompt_toolkit$filters$cli$$$function__6_lambda,
    impl_prompt_toolkit$filters$cli$$$function__7_lambda,
    impl_prompt_toolkit$filters$cli$$$function__8_lambda,
    impl_prompt_toolkit$filters$cli$$$function__9_lambda,
    impl_prompt_toolkit$filters$cli$$$function__10_lambda,
    impl_prompt_toolkit$filters$cli$$$function__11_lambda,
    impl_prompt_toolkit$filters$cli$$$function__12_lambda,
    impl_prompt_toolkit$filters$cli$$$function__13_lambda,
    impl_prompt_toolkit$filters$cli$$$function__14_lambda,
    impl_prompt_toolkit$filters$cli$$$function__15_lambda,
    impl_prompt_toolkit$filters$cli$$$function__16_lambda,
    impl_prompt_toolkit$filters$cli$$$function__17_lambda,
    impl_prompt_toolkit$filters$cli$$$function__18_lambda,
    impl_prompt_toolkit$filters$cli$$$function__19_lambda,
    impl_prompt_toolkit$filters$cli$$$function__20_lambda,
    impl_prompt_toolkit$filters$cli$$$function__21_lambda,
    impl_prompt_toolkit$filters$cli$$$function__22_lambda,
    impl_prompt_toolkit$filters$cli$$$function__23_lambda,
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

    function_impl_code *current = functable_prompt_toolkit$filters$cli;
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

    if (offset > sizeof(functable_prompt_toolkit$filters$cli) || offset < 0) {
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
        functable_prompt_toolkit$filters$cli[offset],
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
        module_prompt_toolkit$filters$cli,
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
PyObject *modulecode_prompt_toolkit$filters$cli(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit.filters.cli");

    // Store the module for future use.
    module_prompt_toolkit$filters$cli = module;

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
        PRINT_STRING("prompt_toolkit.filters.cli: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.filters.cli: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("prompt_toolkit.filters.cli: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$filters$cli\n");

    moduledict_prompt_toolkit$filters$cli = MODULE_DICT(module_prompt_toolkit$filters$cli);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$filters$cli,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$filters$cli,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[64]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$filters$cli,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$filters$cli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$filters$cli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$filters$cli);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_prompt_toolkit$filters$cli);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ad241998ee1c69052697f1eed65cbea0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ad241998ee1c69052697f1eed65cbea0 = MAKE_MODULE_FRAME(codeobj_ad241998ee1c69052697f1eed65cbea0, module_prompt_toolkit$filters$cli);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ad241998ee1c69052697f1eed65cbea0);
    assert(Py_REFCNT(frame_ad241998ee1c69052697f1eed65cbea0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[27], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$filters$cli;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$filters$cli;
        tmp_fromlist_value_1 = mod_consts[30];
        tmp_level_value_1 = mod_consts[31];
        frame_ad241998ee1c69052697f1eed65cbea0->m_frame.f_lineno = 5;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_prompt_toolkit$filters$cli, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[32]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assign_source_28 == NULL)) {
            tmp_assign_source_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_29 == NULL)) {
            tmp_assign_source_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_29);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad241998ee1c69052697f1eed65cbea0);
#endif
    popFrameStack();

    assertFrameObject(frame_ad241998ee1c69052697f1eed65cbea0);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ad241998ee1c69052697f1eed65cbea0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad241998ee1c69052697f1eed65cbea0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad241998ee1c69052697f1eed65cbea0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad241998ee1c69052697f1eed65cbea0, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit.filters.cli", false);

    return module_prompt_toolkit$filters$cli;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$filters$cli", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
