/* Generated code for Python module 'Packages.apply_to_sap.create_order_script'
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

/* The "module_Packages$apply_to_sap$create_order_script" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Packages$apply_to_sap$create_order_script;
PyDictObject *moduledict_Packages$apply_to_sap$create_order_script;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[81];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[81];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Packages.apply_to_sap.create_order_script"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 81; i++) {
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
void checkModuleConstants_Packages$apply_to_sap$create_order_script(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 81; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5b2e9aa1679e6b3fb504d2607022b21e;
static PyCodeObject *codeobj_7e6fe433413974bc1d1f5628c3d57faa;
static PyCodeObject *codeobj_b4972321f7b772ef2af1ed8eb9f3e3ff;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[75]); CHECK_OBJECT(module_filename_obj);
    codeobj_5b2e9aa1679e6b3fb504d2607022b21e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_7e6fe433413974bc1d1f5628c3d57faa = MAKE_CODEOBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[77], NULL, 6, 0, 0);
    codeobj_b4972321f7b772ef2af1ed8eb9f3e3ff = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[0], mod_consts[78], mod_consts[79], 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script(PyObject *annotations);


static PyObject *MAKE_FUNCTION_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script$$$function__1_simulate_enter(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_session = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_order_number = python_pars[1];
    PyObject *par_ship_out_date = python_pars[2];
    PyObject *par_quantity = python_pars[3];
    PyObject *par_sap_code = python_pars[4];
    PyObject *par_reference = python_pars[5];
    PyObject *var_simulate_enter = NULL;
    PyObject *var_now_time_dt = NULL;
    PyObject *var_now_time = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_10__for_iterator = NULL;
    PyObject *tmp_for_loop_10__iter_value = NULL;
    PyObject *tmp_for_loop_11__for_iterator = NULL;
    PyObject *tmp_for_loop_11__iter_value = NULL;
    PyObject *tmp_for_loop_12__for_iterator = NULL;
    PyObject *tmp_for_loop_12__iter_value = NULL;
    PyObject *tmp_for_loop_13__for_iterator = NULL;
    PyObject *tmp_for_loop_13__iter_value = NULL;
    PyObject *tmp_for_loop_14__for_iterator = NULL;
    PyObject *tmp_for_loop_14__iter_value = NULL;
    PyObject *tmp_for_loop_15__for_iterator = NULL;
    PyObject *tmp_for_loop_15__iter_value = NULL;
    PyObject *tmp_for_loop_16__for_iterator = NULL;
    PyObject *tmp_for_loop_16__iter_value = NULL;
    PyObject *tmp_for_loop_17__for_iterator = NULL;
    PyObject *tmp_for_loop_17__iter_value = NULL;
    PyObject *tmp_for_loop_18__for_iterator = NULL;
    PyObject *tmp_for_loop_18__iter_value = NULL;
    PyObject *tmp_for_loop_19__for_iterator = NULL;
    PyObject *tmp_for_loop_19__iter_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_20__for_iterator = NULL;
    PyObject *tmp_for_loop_20__iter_value = NULL;
    PyObject *tmp_for_loop_21__for_iterator = NULL;
    PyObject *tmp_for_loop_21__iter_value = NULL;
    PyObject *tmp_for_loop_22__for_iterator = NULL;
    PyObject *tmp_for_loop_22__iter_value = NULL;
    PyObject *tmp_for_loop_23__for_iterator = NULL;
    PyObject *tmp_for_loop_23__iter_value = NULL;
    PyObject *tmp_for_loop_24__for_iterator = NULL;
    PyObject *tmp_for_loop_24__iter_value = NULL;
    PyObject *tmp_for_loop_25__for_iterator = NULL;
    PyObject *tmp_for_loop_25__iter_value = NULL;
    PyObject *tmp_for_loop_26__for_iterator = NULL;
    PyObject *tmp_for_loop_26__iter_value = NULL;
    PyObject *tmp_for_loop_27__for_iterator = NULL;
    PyObject *tmp_for_loop_27__iter_value = NULL;
    PyObject *tmp_for_loop_28__for_iterator = NULL;
    PyObject *tmp_for_loop_28__iter_value = NULL;
    PyObject *tmp_for_loop_29__for_iterator = NULL;
    PyObject *tmp_for_loop_29__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_30__for_iterator = NULL;
    PyObject *tmp_for_loop_30__iter_value = NULL;
    PyObject *tmp_for_loop_31__for_iterator = NULL;
    PyObject *tmp_for_loop_31__iter_value = NULL;
    PyObject *tmp_for_loop_32__for_iterator = NULL;
    PyObject *tmp_for_loop_32__iter_value = NULL;
    PyObject *tmp_for_loop_33__for_iterator = NULL;
    PyObject *tmp_for_loop_33__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7e6fe433413974bc1d1f5628c3d57faa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
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
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
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
    PyObject *exception_preserved_type_6;
    PyObject *exception_preserved_value_6;
    PyTracebackObject *exception_preserved_tb_6;
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
    PyObject *exception_preserved_type_7;
    PyObject *exception_preserved_value_7;
    PyTracebackObject *exception_preserved_tb_7;
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
    PyObject *exception_preserved_type_8;
    PyObject *exception_preserved_value_8;
    PyTracebackObject *exception_preserved_tb_8;
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
    PyObject *exception_preserved_type_9;
    PyObject *exception_preserved_value_9;
    PyTracebackObject *exception_preserved_tb_9;
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
    PyObject *exception_preserved_type_10;
    PyObject *exception_preserved_value_10;
    PyTracebackObject *exception_preserved_tb_10;
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
    PyObject *exception_preserved_type_11;
    PyObject *exception_preserved_value_11;
    PyTracebackObject *exception_preserved_tb_11;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_preserved_type_12;
    PyObject *exception_preserved_value_12;
    PyTracebackObject *exception_preserved_tb_12;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_preserved_type_13;
    PyObject *exception_preserved_value_13;
    PyTracebackObject *exception_preserved_tb_13;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_preserved_type_14;
    PyObject *exception_preserved_value_14;
    PyTracebackObject *exception_preserved_tb_14;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_preserved_type_15;
    PyObject *exception_preserved_value_15;
    PyTracebackObject *exception_preserved_tb_15;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_preserved_type_16;
    PyObject *exception_preserved_value_16;
    PyTracebackObject *exception_preserved_tb_16;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_preserved_type_17;
    PyObject *exception_preserved_value_17;
    PyTracebackObject *exception_preserved_tb_17;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_preserved_type_18;
    PyObject *exception_preserved_value_18;
    PyTracebackObject *exception_preserved_tb_18;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_preserved_type_19;
    PyObject *exception_preserved_value_19;
    PyTracebackObject *exception_preserved_tb_19;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_preserved_type_20;
    PyObject *exception_preserved_value_20;
    PyTracebackObject *exception_preserved_tb_20;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_preserved_type_21;
    PyObject *exception_preserved_value_21;
    PyTracebackObject *exception_preserved_tb_21;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_preserved_type_22;
    PyObject *exception_preserved_value_22;
    PyTracebackObject *exception_preserved_tb_22;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_preserved_type_23;
    PyObject *exception_preserved_value_23;
    PyTracebackObject *exception_preserved_tb_23;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_preserved_type_24;
    PyObject *exception_preserved_value_24;
    PyTracebackObject *exception_preserved_tb_24;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_preserved_type_25;
    PyObject *exception_preserved_value_25;
    PyTracebackObject *exception_preserved_tb_25;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    PyObject *exception_preserved_type_26;
    PyObject *exception_preserved_value_26;
    PyTracebackObject *exception_preserved_tb_26;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;
    PyObject *exception_keeper_type_78;
    PyObject *exception_keeper_value_78;
    PyTracebackObject *exception_keeper_tb_78;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_78;
    PyObject *exception_keeper_type_79;
    PyObject *exception_keeper_value_79;
    PyTracebackObject *exception_keeper_tb_79;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_79;
    PyObject *exception_preserved_type_27;
    PyObject *exception_preserved_value_27;
    PyTracebackObject *exception_preserved_tb_27;
    PyObject *exception_keeper_type_80;
    PyObject *exception_keeper_value_80;
    PyTracebackObject *exception_keeper_tb_80;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_80;
    PyObject *exception_keeper_type_81;
    PyObject *exception_keeper_value_81;
    PyTracebackObject *exception_keeper_tb_81;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_81;
    PyObject *exception_keeper_type_82;
    PyObject *exception_keeper_value_82;
    PyTracebackObject *exception_keeper_tb_82;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_82;
    PyObject *exception_preserved_type_28;
    PyObject *exception_preserved_value_28;
    PyTracebackObject *exception_preserved_tb_28;
    PyObject *exception_keeper_type_83;
    PyObject *exception_keeper_value_83;
    PyTracebackObject *exception_keeper_tb_83;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_83;
    PyObject *exception_keeper_type_84;
    PyObject *exception_keeper_value_84;
    PyTracebackObject *exception_keeper_tb_84;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_84;
    PyObject *exception_keeper_type_85;
    PyObject *exception_keeper_value_85;
    PyTracebackObject *exception_keeper_tb_85;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_85;
    PyObject *exception_preserved_type_29;
    PyObject *exception_preserved_value_29;
    PyTracebackObject *exception_preserved_tb_29;
    PyObject *exception_keeper_type_86;
    PyObject *exception_keeper_value_86;
    PyTracebackObject *exception_keeper_tb_86;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_86;
    PyObject *exception_keeper_type_87;
    PyObject *exception_keeper_value_87;
    PyTracebackObject *exception_keeper_tb_87;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_87;
    PyObject *exception_keeper_type_88;
    PyObject *exception_keeper_value_88;
    PyTracebackObject *exception_keeper_tb_88;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_88;
    PyObject *exception_preserved_type_30;
    PyObject *exception_preserved_value_30;
    PyTracebackObject *exception_preserved_tb_30;
    PyObject *exception_keeper_type_89;
    PyObject *exception_keeper_value_89;
    PyTracebackObject *exception_keeper_tb_89;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_89;
    PyObject *exception_keeper_type_90;
    PyObject *exception_keeper_value_90;
    PyTracebackObject *exception_keeper_tb_90;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_90;
    PyObject *exception_keeper_type_91;
    PyObject *exception_keeper_value_91;
    PyTracebackObject *exception_keeper_tb_91;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_91;
    PyObject *exception_preserved_type_31;
    PyObject *exception_preserved_value_31;
    PyTracebackObject *exception_preserved_tb_31;
    PyObject *exception_keeper_type_92;
    PyObject *exception_keeper_value_92;
    PyTracebackObject *exception_keeper_tb_92;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_92;
    PyObject *exception_keeper_type_93;
    PyObject *exception_keeper_value_93;
    PyTracebackObject *exception_keeper_tb_93;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_93;
    PyObject *exception_keeper_type_94;
    PyObject *exception_keeper_value_94;
    PyTracebackObject *exception_keeper_tb_94;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_94;
    PyObject *exception_preserved_type_32;
    PyObject *exception_preserved_value_32;
    PyTracebackObject *exception_preserved_tb_32;
    PyObject *exception_keeper_type_95;
    PyObject *exception_keeper_value_95;
    PyTracebackObject *exception_keeper_tb_95;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_95;
    PyObject *exception_keeper_type_96;
    PyObject *exception_keeper_value_96;
    PyTracebackObject *exception_keeper_tb_96;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_96;
    PyObject *exception_keeper_type_97;
    PyObject *exception_keeper_value_97;
    PyTracebackObject *exception_keeper_tb_97;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_97;
    PyObject *exception_preserved_type_33;
    PyObject *exception_preserved_value_33;
    PyTracebackObject *exception_preserved_tb_33;
    PyObject *exception_keeper_type_98;
    PyObject *exception_keeper_value_98;
    PyTracebackObject *exception_keeper_tb_98;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_98;
    PyObject *exception_keeper_type_99;
    PyObject *exception_keeper_value_99;
    PyTracebackObject *exception_keeper_tb_99;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_99;
    static struct Nuitka_FrameObject *cache_frame_7e6fe433413974bc1d1f5628c3d57faa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_100;
    PyObject *exception_keeper_value_100;
    PyTracebackObject *exception_keeper_tb_100;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_100;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_session;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script$$$function__1_simulate_enter(tmp_closure_1);

        assert(var_simulate_enter == NULL);
        var_simulate_enter = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_7e6fe433413974bc1d1f5628c3d57faa)) {
        Py_XDECREF(cache_frame_7e6fe433413974bc1d1f5628c3d57faa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e6fe433413974bc1d1f5628c3d57faa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e6fe433413974bc1d1f5628c3d57faa = MAKE_FUNCTION_FRAME(codeobj_7e6fe433413974bc1d1f5628c3d57faa, module_Packages$apply_to_sap$create_order_script, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7e6fe433413974bc1d1f5628c3d57faa->m_type_description == NULL);
    frame_7e6fe433413974bc1d1f5628c3d57faa = cache_frame_7e6fe433413974bc1d1f5628c3d57faa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7e6fe433413974bc1d1f5628c3d57faa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7e6fe433413974bc1d1f5628c3d57faa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_1 != NULL);
        tmp_expression_value_1 = mod_consts[3];
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_order_number);
        tmp_args_element_value_2 = par_order_number;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 20;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 20;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 21;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_now_time_dt == NULL);
        var_now_time_dt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_now_time_dt);
        tmp_called_instance_2 = var_now_time_dt;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 22;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[7],
            PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_now_time == NULL);
        var_now_time = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_4 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 25;
        tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 25;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[11]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_called_instance_5;
        tmp_assattr_value_1 = mod_consts[12];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_5 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 26;
        tmp_assattr_target_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_7 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 27;
        tmp_called_instance_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 27;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_called_instance_8;
        tmp_assattr_value_2 = mod_consts[17];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_8 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 28;
        tmp_assattr_target_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_called_instance_9;
        tmp_assattr_value_3 = mod_consts[19];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_9 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 29;
        tmp_assattr_target_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[14], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_called_instance_10;
        tmp_assattr_value_4 = mod_consts[21];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_10 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 30;
        tmp_assattr_target_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[14], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_called_instance_11;
        tmp_assattr_value_5 = mod_consts[23];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_11 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 31;
        tmp_assattr_target_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[14], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_13 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 32;
        tmp_called_instance_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 32;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[25]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_called_instance_14;
        tmp_assattr_value_6 = mod_consts[26];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_14 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 33;
        tmp_assattr_target_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[27], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_16 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 34;
        tmp_called_instance_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 34;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_called_instance_17;
        CHECK_OBJECT(par_order_number);
        tmp_assattr_value_7 = par_order_number;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_17 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 35;
        tmp_assattr_target_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[14], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        PyObject *tmp_called_instance_18;
        CHECK_OBJECT(par_sap_code);
        tmp_assattr_value_8 = par_sap_code;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_18 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 36;
        tmp_assattr_target_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[14], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_target_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_20 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 38;
        tmp_called_instance_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 38;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[25]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_called_instance_21;
        tmp_assattr_value_9 = mod_consts[30];
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_21 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 39;
        tmp_assattr_target_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_21,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[27], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_22;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_session));
        tmp_called_instance_23 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 40;
        tmp_called_instance_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_23,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 40;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_22,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_22);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[31];
        tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_4 == NULL));
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
                type_description_1 = "cooooooooo";
                exception_lineno = 41;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_6;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_called_instance_24;
        CHECK_OBJECT(par_reference);
        tmp_assattr_value_10 = par_reference;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 43;
            type_description_1 = "cooooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_24 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 43;
        tmp_assattr_target_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_24,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "cooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[14], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "cooooooooo";
            goto try_except_handler_3;
        }
    }
    goto loop_end_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_8;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "cooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_3 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 47;
        tmp_call_result_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "cooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto try_end_1;
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
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 41;
        type_description_1 = "cooooooooo";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[31];
        tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 48;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_9 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_9;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_called_instance_25;
        tmp_assattr_value_11 = mod_consts[30];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "cooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_25 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 50;
        tmp_assattr_target_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_25,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "cooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[27], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "cooooooooo";
            goto try_except_handler_6;
        }
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_9;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 53;
            type_description_1 = "cooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_value_4 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 53;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "cooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;
        type_description_1 = "cooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[31];
        tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 54;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_12 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_call_result_10;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "cooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_27 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 56;
        tmp_called_instance_26 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_27,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "cooooooooo";
            goto try_except_handler_9;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 56;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_26,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_26);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "cooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto try_end_7;
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

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_11;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "cooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_value_5 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 58;
        tmp_call_result_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "cooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_11);
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 54;
        type_description_1 = "cooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = mod_consts[31];
        tmp_assign_source_13 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        assert(!(tmp_assign_source_13 == NULL));
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 59;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_15 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_15;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_call_result_12;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "cooooooooo";
            goto try_except_handler_12;
        }

        tmp_called_instance_29 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 61;
        tmp_called_instance_28 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_29,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "cooooooooo";
            goto try_except_handler_12;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 61;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, mod_consts[25]);
        Py_DECREF(tmp_called_instance_28);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "cooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_12);
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

    // Preserve existing published exception id 4.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_4, &exception_preserved_value_4, &exception_preserved_tb_4);

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_10);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_10, exception_keeper_tb_10);
    PUBLISH_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_13;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "cooooooooo";
            goto try_except_handler_13;
        }

        tmp_called_value_6 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 64;
        tmp_call_result_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "cooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto try_end_11;
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

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_11:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 59;
        type_description_1 = "cooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_5;
        tmp_iter_arg_5 = mod_consts[31];
        tmp_assign_source_16 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        assert(!(tmp_assign_source_16 == NULL));
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_16;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 65;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_18 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_18;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_called_instance_30;
        tmp_assattr_value_12 = mod_consts[35];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "cooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_instance_30 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 67;
        tmp_assattr_target_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_30,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "cooooooooo";
            goto try_except_handler_15;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[27], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "cooooooooo";
            goto try_except_handler_15;
        }
    }
    goto try_end_13;
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

    // Preserve existing published exception id 5.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_5, &exception_preserved_value_5, &exception_preserved_tb_5);

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_13);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_13, exception_keeper_tb_13);
    PUBLISH_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_14;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "cooooooooo";
            goto try_except_handler_16;
        }

        tmp_called_value_7 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 70;
        tmp_call_result_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "cooooooooo";
            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_14);
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

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_14;
    // End of try:
    try_end_14:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 65;
        type_description_1 = "cooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_6;
        tmp_iter_arg_6 = mod_consts[31];
        tmp_assign_source_19 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        assert(!(tmp_assign_source_19 == NULL));
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 71;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_21 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_21;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_31;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_call_result_15;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "cooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_instance_32 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 73;
        tmp_called_instance_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_32,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "cooooooooo";
            goto try_except_handler_18;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 73;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_31,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        Py_DECREF(tmp_called_instance_31);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "cooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_15);
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

    // Preserve existing published exception id 6.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_6, &exception_preserved_value_6, &exception_preserved_tb_6);

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_16);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_16, exception_keeper_tb_16);
    PUBLISH_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_16;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "cooooooooo";
            goto try_except_handler_19;
        }

        tmp_called_value_8 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 75;
        tmp_call_result_16 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "cooooooooo";
            goto try_except_handler_19;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_17;
    // End of try:
    try_end_17:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6);

    goto try_end_16;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_16:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 71;
        type_description_1 = "cooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_7;
        tmp_iter_arg_7 = mod_consts[31];
        tmp_assign_source_22 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        assert(!(tmp_assign_source_22 == NULL));
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 76;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_24 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_24;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_call_result_17;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;
            type_description_1 = "cooooooooo";
            goto try_except_handler_21;
        }

        tmp_called_instance_34 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 78;
        tmp_called_instance_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_34,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "cooooooooo";
            goto try_except_handler_21;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 78;
        tmp_call_result_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_33, mod_consts[38]);
        Py_DECREF(tmp_called_instance_33);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "cooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_7, &exception_preserved_value_7, &exception_preserved_tb_7);

    if (exception_keeper_tb_19 == NULL) {
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_19);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_19, exception_keeper_tb_19);
    PUBLISH_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_18;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;
            type_description_1 = "cooooooooo";
            goto try_except_handler_22;
        }

        tmp_called_value_9 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 80;
        tmp_call_result_18 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "cooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_18);
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

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_20:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7);

    goto try_end_19;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_19:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 76;
        type_description_1 = "cooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_8;
        tmp_iter_arg_8 = mod_consts[31];
        tmp_assign_source_25 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
        assert(!(tmp_assign_source_25 == NULL));
        assert(tmp_for_loop_8__for_iterator == NULL);
        tmp_for_loop_8__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_8__for_iterator);
        tmp_next_source_8 = tmp_for_loop_8__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 81;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_8__iter_value;
            tmp_for_loop_8__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_8__iter_value);
        tmp_assign_source_27 = tmp_for_loop_8__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_27;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_called_instance_35;
        tmp_assattr_value_13 = mod_consts[39];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "cooooooooo";
            goto try_except_handler_24;
        }

        tmp_called_instance_35 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 83;
        tmp_assattr_target_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_35,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cooooooooo";
            goto try_except_handler_24;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[14], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cooooooooo";
            goto try_except_handler_24;
        }
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

    // Preserve existing published exception id 8.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_8, &exception_preserved_value_8, &exception_preserved_tb_8);

    if (exception_keeper_tb_22 == NULL) {
        exception_keeper_tb_22 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_22);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_keeper_tb_22 = ADD_TRACEBACK(exception_keeper_tb_22, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_22);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_22, exception_keeper_tb_22);
    PUBLISH_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    // Tried code:
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_19;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "cooooooooo";
            goto try_except_handler_25;
        }

        tmp_called_value_10 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 86;
        tmp_call_result_19 = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "cooooooooo";
            goto try_except_handler_25;
        }
        Py_DECREF(tmp_call_result_19);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8);

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_23:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8);

    goto try_end_22;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_22:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 81;
        type_description_1 = "cooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    Py_XDECREF(tmp_for_loop_8__iter_value);
    tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_8__for_iterator);
    Py_DECREF(tmp_for_loop_8__for_iterator);
    tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_9;
        tmp_iter_arg_9 = mod_consts[31];
        tmp_assign_source_28 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_9);
        assert(!(tmp_assign_source_28 == NULL));
        assert(tmp_for_loop_9__for_iterator == NULL);
        tmp_for_loop_9__for_iterator = tmp_assign_source_28;
    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_9__for_iterator);
        tmp_next_source_9 = tmp_for_loop_9__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 87;
                goto try_except_handler_26;
            }
        }

        {
            PyObject *old = tmp_for_loop_9__iter_value;
            tmp_for_loop_9__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_for_loop_9__iter_value);
        tmp_assign_source_30 = tmp_for_loop_9__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_30;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_20;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "cooooooooo";
            goto try_except_handler_27;
        }

        tmp_called_instance_37 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 89;
        tmp_called_instance_36 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_37,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "cooooooooo";
            goto try_except_handler_27;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 89;
        tmp_call_result_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_36, mod_consts[25]);
        Py_DECREF(tmp_called_instance_36);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "cooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto try_end_25;
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

    // Preserve existing published exception id 9.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_9, &exception_preserved_value_9, &exception_preserved_tb_9);

    if (exception_keeper_tb_25 == NULL) {
        exception_keeper_tb_25 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_25);
    } else if (exception_keeper_lineno_25 != 0) {
        exception_keeper_tb_25 = ADD_TRACEBACK(exception_keeper_tb_25, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_25);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_25, exception_keeper_tb_25);
    PUBLISH_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    // Tried code:
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_21;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "cooooooooo";
            goto try_except_handler_28;
        }

        tmp_called_value_11 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 92;
        tmp_call_result_21 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "cooooooooo";
            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_21);
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

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(exception_preserved_type_9, exception_preserved_value_9, exception_preserved_tb_9);

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_26;
    // End of try:
    try_end_26:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(exception_preserved_type_9, exception_preserved_value_9, exception_preserved_tb_9);

    goto try_end_25;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_25:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;
        type_description_1 = "cooooooooo";
        goto try_except_handler_26;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    Py_XDECREF(tmp_for_loop_9__iter_value);
    tmp_for_loop_9__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_9__for_iterator);
    Py_DECREF(tmp_for_loop_9__for_iterator);
    tmp_for_loop_9__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_10;
        tmp_iter_arg_10 = mod_consts[31];
        tmp_assign_source_31 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_10);
        assert(!(tmp_assign_source_31 == NULL));
        assert(tmp_for_loop_10__for_iterator == NULL);
        tmp_for_loop_10__for_iterator = tmp_assign_source_31;
    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_10__for_iterator);
        tmp_next_source_10 = tmp_for_loop_10__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_32 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 93;
                goto try_except_handler_29;
            }
        }

        {
            PyObject *old = tmp_for_loop_10__iter_value;
            tmp_for_loop_10__iter_value = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_10__iter_value);
        tmp_assign_source_33 = tmp_for_loop_10__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_33;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_called_instance_38;
        tmp_assattr_value_14 = mod_consts[35];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "cooooooooo";
            goto try_except_handler_30;
        }

        tmp_called_instance_38 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 95;
        tmp_assattr_target_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_38,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooo";
            goto try_except_handler_30;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[27], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "cooooooooo";
            goto try_except_handler_30;
        }
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

    // Preserve existing published exception id 10.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_10, &exception_preserved_value_10, &exception_preserved_tb_10);

    if (exception_keeper_tb_28 == NULL) {
        exception_keeper_tb_28 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_28);
    } else if (exception_keeper_lineno_28 != 0) {
        exception_keeper_tb_28 = ADD_TRACEBACK(exception_keeper_tb_28, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_28);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_28, exception_keeper_tb_28);
    PUBLISH_EXCEPTION(&exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28);
    // Tried code:
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_22;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "cooooooooo";
            goto try_except_handler_31;
        }

        tmp_called_value_12 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 98;
        tmp_call_result_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "cooooooooo";
            goto try_except_handler_31;
        }
        Py_DECREF(tmp_call_result_22);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(exception_preserved_type_10, exception_preserved_value_10, exception_preserved_tb_10);

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_29;
    // End of try:
    try_end_29:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(exception_preserved_type_10, exception_preserved_value_10, exception_preserved_tb_10);

    goto try_end_28;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_28:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 93;
        type_description_1 = "cooooooooo";
        goto try_except_handler_29;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_10__iter_value);
    tmp_for_loop_10__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_10__for_iterator);
    Py_DECREF(tmp_for_loop_10__for_iterator);
    tmp_for_loop_10__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    Py_XDECREF(tmp_for_loop_10__iter_value);
    tmp_for_loop_10__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_10__for_iterator);
    Py_DECREF(tmp_for_loop_10__for_iterator);
    tmp_for_loop_10__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_11;
        tmp_iter_arg_11 = mod_consts[31];
        tmp_assign_source_34 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
        assert(!(tmp_assign_source_34 == NULL));
        assert(tmp_for_loop_11__for_iterator == NULL);
        tmp_for_loop_11__for_iterator = tmp_assign_source_34;
    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_for_loop_11__for_iterator);
        tmp_next_source_11 = tmp_for_loop_11__for_iterator;
        tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_35 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 99;
                goto try_except_handler_32;
            }
        }

        {
            PyObject *old = tmp_for_loop_11__iter_value;
            tmp_for_loop_11__iter_value = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_11__iter_value);
        tmp_assign_source_36 = tmp_for_loop_11__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_36;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_call_result_23;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "cooooooooo";
            goto try_except_handler_33;
        }

        tmp_called_instance_40 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 101;
        tmp_called_instance_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_40,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "cooooooooo";
            goto try_except_handler_33;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 101;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_39,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_39);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "cooooooooo";
            goto try_except_handler_33;
        }
        Py_DECREF(tmp_call_result_23);
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 11.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_11, &exception_preserved_value_11, &exception_preserved_tb_11);

    if (exception_keeper_tb_31 == NULL) {
        exception_keeper_tb_31 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_31);
    } else if (exception_keeper_lineno_31 != 0) {
        exception_keeper_tb_31 = ADD_TRACEBACK(exception_keeper_tb_31, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_31);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_31, exception_keeper_tb_31);
    PUBLISH_EXCEPTION(&exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31);
    // Tried code:
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_24;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "cooooooooo";
            goto try_except_handler_34;
        }

        tmp_called_value_13 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 103;
        tmp_call_result_24 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "cooooooooo";
            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_24);
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_32;
    // End of try:
    try_end_32:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    goto try_end_31;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_31:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 99;
        type_description_1 = "cooooooooo";
        goto try_except_handler_32;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_11__iter_value);
    tmp_for_loop_11__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_11__for_iterator);
    Py_DECREF(tmp_for_loop_11__for_iterator);
    tmp_for_loop_11__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    Py_XDECREF(tmp_for_loop_11__iter_value);
    tmp_for_loop_11__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_11__for_iterator);
    Py_DECREF(tmp_for_loop_11__for_iterator);
    tmp_for_loop_11__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_12;
        tmp_iter_arg_12 = mod_consts[31];
        tmp_assign_source_37 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_12);
        assert(!(tmp_assign_source_37 == NULL));
        assert(tmp_for_loop_12__for_iterator == NULL);
        tmp_for_loop_12__for_iterator = tmp_assign_source_37;
    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_for_loop_12__for_iterator);
        tmp_next_source_12 = tmp_for_loop_12__for_iterator;
        tmp_assign_source_38 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_38 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 104;
                goto try_except_handler_35;
            }
        }

        {
            PyObject *old = tmp_for_loop_12__iter_value;
            tmp_for_loop_12__iter_value = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_for_loop_12__iter_value);
        tmp_assign_source_39 = tmp_for_loop_12__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_39;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_call_result_25;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "cooooooooo";
            goto try_except_handler_36;
        }

        tmp_called_instance_42 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 106;
        tmp_called_instance_41 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_42,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "cooooooooo";
            goto try_except_handler_36;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 106;
        tmp_call_result_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_41, mod_consts[38]);
        Py_DECREF(tmp_called_instance_41);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "cooooooooo";
            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_25);
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_12, &exception_preserved_value_12, &exception_preserved_tb_12);

    if (exception_keeper_tb_34 == NULL) {
        exception_keeper_tb_34 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_34);
    } else if (exception_keeper_lineno_34 != 0) {
        exception_keeper_tb_34 = ADD_TRACEBACK(exception_keeper_tb_34, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_34);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_34, exception_keeper_tb_34);
    PUBLISH_EXCEPTION(&exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    // Tried code:
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_26;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "cooooooooo";
            goto try_except_handler_37;
        }

        tmp_called_value_14 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 108;
        tmp_call_result_26 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "cooooooooo";
            goto try_except_handler_37;
        }
        Py_DECREF(tmp_call_result_26);
    }
    goto try_end_35;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_35;
    // End of try:
    try_end_35:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    goto try_end_34;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_34:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 104;
        type_description_1 = "cooooooooo";
        goto try_except_handler_35;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_12__iter_value);
    tmp_for_loop_12__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_12__for_iterator);
    Py_DECREF(tmp_for_loop_12__for_iterator);
    tmp_for_loop_12__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_36:;
    Py_XDECREF(tmp_for_loop_12__iter_value);
    tmp_for_loop_12__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_12__for_iterator);
    Py_DECREF(tmp_for_loop_12__for_iterator);
    tmp_for_loop_12__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_13;
        tmp_iter_arg_13 = mod_consts[31];
        tmp_assign_source_40 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_13);
        assert(!(tmp_assign_source_40 == NULL));
        assert(tmp_for_loop_13__for_iterator == NULL);
        tmp_for_loop_13__for_iterator = tmp_assign_source_40;
    }
    // Tried code:
    loop_start_13:;
    {
        PyObject *tmp_next_source_13;
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_for_loop_13__for_iterator);
        tmp_next_source_13 = tmp_for_loop_13__for_iterator;
        tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_13);
        if (tmp_assign_source_41 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_13;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 109;
                goto try_except_handler_38;
            }
        }

        {
            PyObject *old = tmp_for_loop_13__iter_value;
            tmp_for_loop_13__iter_value = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_for_loop_13__iter_value);
        tmp_assign_source_42 = tmp_for_loop_13__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_42;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        PyObject *tmp_called_instance_43;
        CHECK_OBJECT(par_reference);
        tmp_assattr_value_15 = par_reference;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "cooooooooo";
            goto try_except_handler_39;
        }

        tmp_called_instance_43 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 111;
        tmp_assattr_target_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_43,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "cooooooooo";
            goto try_except_handler_39;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[14], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_target_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "cooooooooo";
            goto try_except_handler_39;
        }
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_13, &exception_preserved_value_13, &exception_preserved_tb_13);

    if (exception_keeper_tb_37 == NULL) {
        exception_keeper_tb_37 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_37);
    } else if (exception_keeper_lineno_37 != 0) {
        exception_keeper_tb_37 = ADD_TRACEBACK(exception_keeper_tb_37, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_37);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_37, &exception_keeper_value_37, &exception_keeper_tb_37);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_37, exception_keeper_tb_37);
    PUBLISH_EXCEPTION(&exception_keeper_type_37, &exception_keeper_value_37, &exception_keeper_tb_37);
    // Tried code:
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_27;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "cooooooooo";
            goto try_except_handler_40;
        }

        tmp_called_value_15 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 114;
        tmp_call_result_27 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "cooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_27);
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto try_except_handler_38;
    // End of try:
    try_end_38:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    goto try_end_37;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_37:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 109;
        type_description_1 = "cooooooooo";
        goto try_except_handler_38;
    }
    goto loop_start_13;
    loop_end_13:;
    goto try_end_39;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_13__iter_value);
    tmp_for_loop_13__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_13__for_iterator);
    Py_DECREF(tmp_for_loop_13__for_iterator);
    tmp_for_loop_13__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_39:;
    Py_XDECREF(tmp_for_loop_13__iter_value);
    tmp_for_loop_13__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_13__for_iterator);
    Py_DECREF(tmp_for_loop_13__for_iterator);
    tmp_for_loop_13__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_14;
        tmp_iter_arg_14 = mod_consts[31];
        tmp_assign_source_43 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_14);
        assert(!(tmp_assign_source_43 == NULL));
        assert(tmp_for_loop_14__for_iterator == NULL);
        tmp_for_loop_14__for_iterator = tmp_assign_source_43;
    }
    // Tried code:
    loop_start_14:;
    {
        PyObject *tmp_next_source_14;
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_14__for_iterator);
        tmp_next_source_14 = tmp_for_loop_14__for_iterator;
        tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_14);
        if (tmp_assign_source_44 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_14;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 115;
                goto try_except_handler_41;
            }
        }

        {
            PyObject *old = tmp_for_loop_14__iter_value;
            tmp_for_loop_14__iter_value = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_for_loop_14__iter_value);
        tmp_assign_source_45 = tmp_for_loop_14__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_45;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_call_result_28;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "cooooooooo";
            goto try_except_handler_42;
        }

        tmp_called_instance_45 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 117;
        tmp_called_instance_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_45,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "cooooooooo";
            goto try_except_handler_42;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 117;
        tmp_call_result_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_44, mod_consts[25]);
        Py_DECREF(tmp_called_instance_44);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "cooooooooo";
            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_28);
    }
    goto try_end_40;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_14, &exception_preserved_value_14, &exception_preserved_tb_14);

    if (exception_keeper_tb_40 == NULL) {
        exception_keeper_tb_40 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_40);
    } else if (exception_keeper_lineno_40 != 0) {
        exception_keeper_tb_40 = ADD_TRACEBACK(exception_keeper_tb_40, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_40);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_40, &exception_keeper_value_40, &exception_keeper_tb_40);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_40, exception_keeper_tb_40);
    PUBLISH_EXCEPTION(&exception_keeper_type_40, &exception_keeper_value_40, &exception_keeper_tb_40);
    // Tried code:
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_29;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "cooooooooo";
            goto try_except_handler_43;
        }

        tmp_called_value_16 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 120;
        tmp_call_result_29 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "cooooooooo";
            goto try_except_handler_43;
        }
        Py_DECREF(tmp_call_result_29);
    }
    goto try_end_41;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto try_except_handler_41;
    // End of try:
    try_end_41:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    goto try_end_40;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_40:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 115;
        type_description_1 = "cooooooooo";
        goto try_except_handler_41;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_42;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_14__iter_value);
    tmp_for_loop_14__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_14__for_iterator);
    Py_DECREF(tmp_for_loop_14__for_iterator);
    tmp_for_loop_14__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_42:;
    Py_XDECREF(tmp_for_loop_14__iter_value);
    tmp_for_loop_14__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_14__for_iterator);
    Py_DECREF(tmp_for_loop_14__for_iterator);
    tmp_for_loop_14__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_15;
        tmp_iter_arg_15 = mod_consts[31];
        tmp_assign_source_46 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_15);
        assert(!(tmp_assign_source_46 == NULL));
        assert(tmp_for_loop_15__for_iterator == NULL);
        tmp_for_loop_15__for_iterator = tmp_assign_source_46;
    }
    // Tried code:
    loop_start_15:;
    {
        PyObject *tmp_next_source_15;
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_for_loop_15__for_iterator);
        tmp_next_source_15 = tmp_for_loop_15__for_iterator;
        tmp_assign_source_47 = ITERATOR_NEXT(tmp_next_source_15);
        if (tmp_assign_source_47 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_15;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 121;
                goto try_except_handler_44;
            }
        }

        {
            PyObject *old = tmp_for_loop_15__iter_value;
            tmp_for_loop_15__iter_value = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_for_loop_15__iter_value);
        tmp_assign_source_48 = tmp_for_loop_15__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_48;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        PyObject *tmp_called_instance_46;
        tmp_assattr_value_16 = mod_consts[30];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "cooooooooo";
            goto try_except_handler_45;
        }

        tmp_called_instance_46 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 123;
        tmp_assattr_target_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_46,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "cooooooooo";
            goto try_except_handler_45;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[27], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_target_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "cooooooooo";
            goto try_except_handler_45;
        }
    }
    goto try_end_43;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_15, &exception_preserved_value_15, &exception_preserved_tb_15);

    if (exception_keeper_tb_43 == NULL) {
        exception_keeper_tb_43 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_43);
    } else if (exception_keeper_lineno_43 != 0) {
        exception_keeper_tb_43 = ADD_TRACEBACK(exception_keeper_tb_43, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_43);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_43, &exception_keeper_value_43, &exception_keeper_tb_43);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_43, exception_keeper_tb_43);
    PUBLISH_EXCEPTION(&exception_keeper_type_43, &exception_keeper_value_43, &exception_keeper_tb_43);
    // Tried code:
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_30;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "cooooooooo";
            goto try_except_handler_46;
        }

        tmp_called_value_17 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 126;
        tmp_call_result_30 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "cooooooooo";
            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_30);
    }
    goto try_end_44;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto try_except_handler_44;
    // End of try:
    try_end_44:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    goto try_end_43;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_43:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 121;
        type_description_1 = "cooooooooo";
        goto try_except_handler_44;
    }
    goto loop_start_15;
    loop_end_15:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_15__iter_value);
    tmp_for_loop_15__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_15__for_iterator);
    Py_DECREF(tmp_for_loop_15__for_iterator);
    tmp_for_loop_15__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    Py_XDECREF(tmp_for_loop_15__iter_value);
    tmp_for_loop_15__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_15__for_iterator);
    Py_DECREF(tmp_for_loop_15__for_iterator);
    tmp_for_loop_15__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_16;
        tmp_iter_arg_16 = mod_consts[31];
        tmp_assign_source_49 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_16);
        assert(!(tmp_assign_source_49 == NULL));
        assert(tmp_for_loop_16__for_iterator == NULL);
        tmp_for_loop_16__for_iterator = tmp_assign_source_49;
    }
    // Tried code:
    loop_start_16:;
    {
        PyObject *tmp_next_source_16;
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_for_loop_16__for_iterator);
        tmp_next_source_16 = tmp_for_loop_16__for_iterator;
        tmp_assign_source_50 = ITERATOR_NEXT(tmp_next_source_16);
        if (tmp_assign_source_50 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_16;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 127;
                goto try_except_handler_47;
            }
        }

        {
            PyObject *old = tmp_for_loop_16__iter_value;
            tmp_for_loop_16__iter_value = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_16__iter_value);
        tmp_assign_source_51 = tmp_for_loop_16__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_51;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_47;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_call_result_31;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "cooooooooo";
            goto try_except_handler_48;
        }

        tmp_called_instance_48 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 129;
        tmp_called_instance_47 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_48,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "cooooooooo";
            goto try_except_handler_48;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 129;
        tmp_call_result_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_47,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_47);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "cooooooooo";
            goto try_except_handler_48;
        }
        Py_DECREF(tmp_call_result_31);
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_16, &exception_preserved_value_16, &exception_preserved_tb_16);

    if (exception_keeper_tb_46 == NULL) {
        exception_keeper_tb_46 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_46);
    } else if (exception_keeper_lineno_46 != 0) {
        exception_keeper_tb_46 = ADD_TRACEBACK(exception_keeper_tb_46, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_46);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_46, &exception_keeper_value_46, &exception_keeper_tb_46);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_46, exception_keeper_tb_46);
    PUBLISH_EXCEPTION(&exception_keeper_type_46, &exception_keeper_value_46, &exception_keeper_tb_46);
    // Tried code:
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_32;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "cooooooooo";
            goto try_except_handler_49;
        }

        tmp_called_value_18 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 131;
        tmp_call_result_32 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "cooooooooo";
            goto try_except_handler_49;
        }
        Py_DECREF(tmp_call_result_32);
    }
    goto try_end_47;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto try_except_handler_47;
    // End of try:
    try_end_47:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    goto try_end_46;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_46:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 127;
        type_description_1 = "cooooooooo";
        goto try_except_handler_47;
    }
    goto loop_start_16;
    loop_end_16:;
    goto try_end_48;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_16__iter_value);
    tmp_for_loop_16__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_16__for_iterator);
    Py_DECREF(tmp_for_loop_16__for_iterator);
    tmp_for_loop_16__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_48:;
    Py_XDECREF(tmp_for_loop_16__iter_value);
    tmp_for_loop_16__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_16__for_iterator);
    Py_DECREF(tmp_for_loop_16__for_iterator);
    tmp_for_loop_16__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_17;
        tmp_iter_arg_17 = mod_consts[31];
        tmp_assign_source_52 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_17);
        assert(!(tmp_assign_source_52 == NULL));
        assert(tmp_for_loop_17__for_iterator == NULL);
        tmp_for_loop_17__for_iterator = tmp_assign_source_52;
    }
    // Tried code:
    loop_start_17:;
    {
        PyObject *tmp_next_source_17;
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_for_loop_17__for_iterator);
        tmp_next_source_17 = tmp_for_loop_17__for_iterator;
        tmp_assign_source_53 = ITERATOR_NEXT(tmp_next_source_17);
        if (tmp_assign_source_53 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_17;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 132;
                goto try_except_handler_50;
            }
        }

        {
            PyObject *old = tmp_for_loop_17__iter_value;
            tmp_for_loop_17__iter_value = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_17__iter_value);
        tmp_assign_source_54 = tmp_for_loop_17__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_54;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_called_instance_50;
        PyObject *tmp_call_result_33;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "cooooooooo";
            goto try_except_handler_51;
        }

        tmp_called_instance_50 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 134;
        tmp_called_instance_49 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_50,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "cooooooooo";
            goto try_except_handler_51;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 134;
        tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_49,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_49);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "cooooooooo";
            goto try_except_handler_51;
        }
        Py_DECREF(tmp_call_result_33);
    }
    goto try_end_49;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_17, &exception_preserved_value_17, &exception_preserved_tb_17);

    if (exception_keeper_tb_49 == NULL) {
        exception_keeper_tb_49 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_49);
    } else if (exception_keeper_lineno_49 != 0) {
        exception_keeper_tb_49 = ADD_TRACEBACK(exception_keeper_tb_49, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_49);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_49, &exception_keeper_value_49, &exception_keeper_tb_49);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_49, exception_keeper_tb_49);
    PUBLISH_EXCEPTION(&exception_keeper_type_49, &exception_keeper_value_49, &exception_keeper_tb_49);
    // Tried code:
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_34;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "cooooooooo";
            goto try_except_handler_52;
        }

        tmp_called_value_19 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 136;
        tmp_call_result_34 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "cooooooooo";
            goto try_except_handler_52;
        }
        Py_DECREF(tmp_call_result_34);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto try_except_handler_50;
    // End of try:
    try_end_50:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    goto try_end_49;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_49:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_1 = "cooooooooo";
        goto try_except_handler_50;
    }
    goto loop_start_17;
    loop_end_17:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_17__iter_value);
    tmp_for_loop_17__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_17__for_iterator);
    Py_DECREF(tmp_for_loop_17__for_iterator);
    tmp_for_loop_17__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_51:;
    Py_XDECREF(tmp_for_loop_17__iter_value);
    tmp_for_loop_17__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_17__for_iterator);
    Py_DECREF(tmp_for_loop_17__for_iterator);
    tmp_for_loop_17__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_iter_arg_18;
        tmp_iter_arg_18 = mod_consts[31];
        tmp_assign_source_55 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_18);
        assert(!(tmp_assign_source_55 == NULL));
        assert(tmp_for_loop_18__for_iterator == NULL);
        tmp_for_loop_18__for_iterator = tmp_assign_source_55;
    }
    // Tried code:
    loop_start_18:;
    {
        PyObject *tmp_next_source_18;
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_for_loop_18__for_iterator);
        tmp_next_source_18 = tmp_for_loop_18__for_iterator;
        tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_18);
        if (tmp_assign_source_56 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_18;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 137;
                goto try_except_handler_53;
            }
        }

        {
            PyObject *old = tmp_for_loop_18__iter_value;
            tmp_for_loop_18__iter_value = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_for_loop_18__iter_value);
        tmp_assign_source_57 = tmp_for_loop_18__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_57;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_51;
        PyObject *tmp_called_instance_52;
        PyObject *tmp_call_result_35;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "cooooooooo";
            goto try_except_handler_54;
        }

        tmp_called_instance_52 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 139;
        tmp_called_instance_51 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_52,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "cooooooooo";
            goto try_except_handler_54;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 139;
        tmp_call_result_35 = CALL_METHOD_NO_ARGS(tmp_called_instance_51, mod_consts[38]);
        Py_DECREF(tmp_called_instance_51);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "cooooooooo";
            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_35);
    }
    goto try_end_52;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 18.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_18, &exception_preserved_value_18, &exception_preserved_tb_18);

    if (exception_keeper_tb_52 == NULL) {
        exception_keeper_tb_52 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_52);
    } else if (exception_keeper_lineno_52 != 0) {
        exception_keeper_tb_52 = ADD_TRACEBACK(exception_keeper_tb_52, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_52);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_52, &exception_keeper_value_52, &exception_keeper_tb_52);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_52, exception_keeper_tb_52);
    PUBLISH_EXCEPTION(&exception_keeper_type_52, &exception_keeper_value_52, &exception_keeper_tb_52);
    // Tried code:
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_36;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "cooooooooo";
            goto try_except_handler_55;
        }

        tmp_called_value_20 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 141;
        tmp_call_result_36 = CALL_FUNCTION_NO_ARGS(tmp_called_value_20);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "cooooooooo";
            goto try_except_handler_55;
        }
        Py_DECREF(tmp_call_result_36);
    }
    goto try_end_53;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(exception_preserved_type_18, exception_preserved_value_18, exception_preserved_tb_18);

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto try_except_handler_53;
    // End of try:
    try_end_53:;
    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(exception_preserved_type_18, exception_preserved_value_18, exception_preserved_tb_18);

    goto try_end_52;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_52:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 137;
        type_description_1 = "cooooooooo";
        goto try_except_handler_53;
    }
    goto loop_start_18;
    loop_end_18:;
    goto try_end_54;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_18__iter_value);
    tmp_for_loop_18__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_18__for_iterator);
    Py_DECREF(tmp_for_loop_18__for_iterator);
    tmp_for_loop_18__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_54:;
    Py_XDECREF(tmp_for_loop_18__iter_value);
    tmp_for_loop_18__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_18__for_iterator);
    Py_DECREF(tmp_for_loop_18__for_iterator);
    tmp_for_loop_18__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_19;
        tmp_iter_arg_19 = mod_consts[31];
        tmp_assign_source_58 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_19);
        assert(!(tmp_assign_source_58 == NULL));
        assert(tmp_for_loop_19__for_iterator == NULL);
        tmp_for_loop_19__for_iterator = tmp_assign_source_58;
    }
    // Tried code:
    loop_start_19:;
    {
        PyObject *tmp_next_source_19;
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_for_loop_19__for_iterator);
        tmp_next_source_19 = tmp_for_loop_19__for_iterator;
        tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_19);
        if (tmp_assign_source_59 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_19;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 142;
                goto try_except_handler_56;
            }
        }

        {
            PyObject *old = tmp_for_loop_19__iter_value;
            tmp_for_loop_19__iter_value = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_for_loop_19__iter_value);
        tmp_assign_source_60 = tmp_for_loop_19__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_60;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        PyObject *tmp_called_instance_53;
        tmp_assattr_value_17 = mod_consts[44];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "cooooooooo";
            goto try_except_handler_57;
        }

        tmp_called_instance_53 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 144;
        tmp_assattr_target_17 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_53,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_assattr_target_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "cooooooooo";
            goto try_except_handler_57;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[14], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_target_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "cooooooooo";
            goto try_except_handler_57;
        }
    }
    goto try_end_55;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 19.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_19, &exception_preserved_value_19, &exception_preserved_tb_19);

    if (exception_keeper_tb_55 == NULL) {
        exception_keeper_tb_55 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_55);
    } else if (exception_keeper_lineno_55 != 0) {
        exception_keeper_tb_55 = ADD_TRACEBACK(exception_keeper_tb_55, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_55);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_55, &exception_keeper_value_55, &exception_keeper_tb_55);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_55, exception_keeper_tb_55);
    PUBLISH_EXCEPTION(&exception_keeper_type_55, &exception_keeper_value_55, &exception_keeper_tb_55);
    // Tried code:
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_37;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 147;
            type_description_1 = "cooooooooo";
            goto try_except_handler_58;
        }

        tmp_called_value_21 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 147;
        tmp_call_result_37 = CALL_FUNCTION_NO_ARGS(tmp_called_value_21);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "cooooooooo";
            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_37);
    }
    goto try_end_56;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(exception_preserved_type_19, exception_preserved_value_19, exception_preserved_tb_19);

    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto try_except_handler_56;
    // End of try:
    try_end_56:;
    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(exception_preserved_type_19, exception_preserved_value_19, exception_preserved_tb_19);

    goto try_end_55;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_55:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 142;
        type_description_1 = "cooooooooo";
        goto try_except_handler_56;
    }
    goto loop_start_19;
    loop_end_19:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_19__iter_value);
    tmp_for_loop_19__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_19__for_iterator);
    Py_DECREF(tmp_for_loop_19__for_iterator);
    tmp_for_loop_19__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_57:;
    Py_XDECREF(tmp_for_loop_19__iter_value);
    tmp_for_loop_19__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_19__for_iterator);
    Py_DECREF(tmp_for_loop_19__for_iterator);
    tmp_for_loop_19__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_iter_arg_20;
        tmp_iter_arg_20 = mod_consts[31];
        tmp_assign_source_61 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_20);
        assert(!(tmp_assign_source_61 == NULL));
        assert(tmp_for_loop_20__for_iterator == NULL);
        tmp_for_loop_20__for_iterator = tmp_assign_source_61;
    }
    // Tried code:
    loop_start_20:;
    {
        PyObject *tmp_next_source_20;
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_for_loop_20__for_iterator);
        tmp_next_source_20 = tmp_for_loop_20__for_iterator;
        tmp_assign_source_62 = ITERATOR_NEXT(tmp_next_source_20);
        if (tmp_assign_source_62 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_20;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 148;
                goto try_except_handler_59;
            }
        }

        {
            PyObject *old = tmp_for_loop_20__iter_value;
            tmp_for_loop_20__iter_value = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_for_loop_20__iter_value);
        tmp_assign_source_63 = tmp_for_loop_20__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_63;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_called_instance_54;
        CHECK_OBJECT(var_now_time);
        tmp_assattr_value_18 = var_now_time;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "cooooooooo";
            goto try_except_handler_60;
        }

        tmp_called_instance_54 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 150;
        tmp_assattr_target_18 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_54,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "cooooooooo";
            goto try_except_handler_60;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[14], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "cooooooooo";
            goto try_except_handler_60;
        }
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 20.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_20, &exception_preserved_value_20, &exception_preserved_tb_20);

    if (exception_keeper_tb_58 == NULL) {
        exception_keeper_tb_58 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_58);
    } else if (exception_keeper_lineno_58 != 0) {
        exception_keeper_tb_58 = ADD_TRACEBACK(exception_keeper_tb_58, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_58);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_58, exception_keeper_tb_58);
    PUBLISH_EXCEPTION(&exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    // Tried code:
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_38;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "cooooooooo";
            goto try_except_handler_61;
        }

        tmp_called_value_22 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 153;
        tmp_call_result_38 = CALL_FUNCTION_NO_ARGS(tmp_called_value_22);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "cooooooooo";
            goto try_except_handler_61;
        }
        Py_DECREF(tmp_call_result_38);
    }
    goto try_end_59;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(exception_preserved_type_20, exception_preserved_value_20, exception_preserved_tb_20);

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto try_except_handler_59;
    // End of try:
    try_end_59:;
    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(exception_preserved_type_20, exception_preserved_value_20, exception_preserved_tb_20);

    goto try_end_58;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_58:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 148;
        type_description_1 = "cooooooooo";
        goto try_except_handler_59;
    }
    goto loop_start_20;
    loop_end_20:;
    goto try_end_60;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_20__iter_value);
    tmp_for_loop_20__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_20__for_iterator);
    Py_DECREF(tmp_for_loop_20__for_iterator);
    tmp_for_loop_20__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto frame_exception_exit_1;
    // End of try:
    try_end_60:;
    Py_XDECREF(tmp_for_loop_20__iter_value);
    tmp_for_loop_20__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_20__for_iterator);
    Py_DECREF(tmp_for_loop_20__for_iterator);
    tmp_for_loop_20__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_iter_arg_21;
        tmp_iter_arg_21 = mod_consts[31];
        tmp_assign_source_64 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_21);
        assert(!(tmp_assign_source_64 == NULL));
        assert(tmp_for_loop_21__for_iterator == NULL);
        tmp_for_loop_21__for_iterator = tmp_assign_source_64;
    }
    // Tried code:
    loop_start_21:;
    {
        PyObject *tmp_next_source_21;
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_for_loop_21__for_iterator);
        tmp_next_source_21 = tmp_for_loop_21__for_iterator;
        tmp_assign_source_65 = ITERATOR_NEXT(tmp_next_source_21);
        if (tmp_assign_source_65 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_21;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 154;
                goto try_except_handler_62;
            }
        }

        {
            PyObject *old = tmp_for_loop_21__iter_value;
            tmp_for_loop_21__iter_value = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_for_loop_21__iter_value);
        tmp_assign_source_66 = tmp_for_loop_21__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_66;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_called_instance_56;
        PyObject *tmp_call_result_39;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "cooooooooo";
            goto try_except_handler_63;
        }

        tmp_called_instance_56 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 156;
        tmp_called_instance_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_56,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "cooooooooo";
            goto try_except_handler_63;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 156;
        tmp_call_result_39 = CALL_METHOD_NO_ARGS(tmp_called_instance_55, mod_consts[25]);
        Py_DECREF(tmp_called_instance_55);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "cooooooooo";
            goto try_except_handler_63;
        }
        Py_DECREF(tmp_call_result_39);
    }
    goto try_end_61;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 21.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_21, &exception_preserved_value_21, &exception_preserved_tb_21);

    if (exception_keeper_tb_61 == NULL) {
        exception_keeper_tb_61 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_61);
    } else if (exception_keeper_lineno_61 != 0) {
        exception_keeper_tb_61 = ADD_TRACEBACK(exception_keeper_tb_61, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_61);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_61, &exception_keeper_value_61, &exception_keeper_tb_61);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_61, exception_keeper_tb_61);
    PUBLISH_EXCEPTION(&exception_keeper_type_61, &exception_keeper_value_61, &exception_keeper_tb_61);
    // Tried code:
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_40;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 159;
            type_description_1 = "cooooooooo";
            goto try_except_handler_64;
        }

        tmp_called_value_23 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 159;
        tmp_call_result_40 = CALL_FUNCTION_NO_ARGS(tmp_called_value_23);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "cooooooooo";
            goto try_except_handler_64;
        }
        Py_DECREF(tmp_call_result_40);
    }
    goto try_end_62;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(exception_preserved_type_21, exception_preserved_value_21, exception_preserved_tb_21);

    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto try_except_handler_62;
    // End of try:
    try_end_62:;
    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(exception_preserved_type_21, exception_preserved_value_21, exception_preserved_tb_21);

    goto try_end_61;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_61:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 154;
        type_description_1 = "cooooooooo";
        goto try_except_handler_62;
    }
    goto loop_start_21;
    loop_end_21:;
    goto try_end_63;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_21__iter_value);
    tmp_for_loop_21__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_21__for_iterator);
    Py_DECREF(tmp_for_loop_21__for_iterator);
    tmp_for_loop_21__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_63:;
    Py_XDECREF(tmp_for_loop_21__iter_value);
    tmp_for_loop_21__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_21__for_iterator);
    Py_DECREF(tmp_for_loop_21__for_iterator);
    tmp_for_loop_21__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_22;
        tmp_iter_arg_22 = mod_consts[31];
        tmp_assign_source_67 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_22);
        assert(!(tmp_assign_source_67 == NULL));
        assert(tmp_for_loop_22__for_iterator == NULL);
        tmp_for_loop_22__for_iterator = tmp_assign_source_67;
    }
    // Tried code:
    loop_start_22:;
    {
        PyObject *tmp_next_source_22;
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_for_loop_22__for_iterator);
        tmp_next_source_22 = tmp_for_loop_22__for_iterator;
        tmp_assign_source_68 = ITERATOR_NEXT(tmp_next_source_22);
        if (tmp_assign_source_68 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_22;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 160;
                goto try_except_handler_65;
            }
        }

        {
            PyObject *old = tmp_for_loop_22__iter_value;
            tmp_for_loop_22__iter_value = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_for_loop_22__iter_value);
        tmp_assign_source_69 = tmp_for_loop_22__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_69;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_called_instance_57;
        tmp_assattr_value_19 = mod_consts[47];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "cooooooooo";
            goto try_except_handler_66;
        }

        tmp_called_instance_57 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 162;
        tmp_assattr_target_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_57,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_assattr_target_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "cooooooooo";
            goto try_except_handler_66;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[27], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "cooooooooo";
            goto try_except_handler_66;
        }
    }
    goto try_end_64;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 22.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_22, &exception_preserved_value_22, &exception_preserved_tb_22);

    if (exception_keeper_tb_64 == NULL) {
        exception_keeper_tb_64 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_64);
    } else if (exception_keeper_lineno_64 != 0) {
        exception_keeper_tb_64 = ADD_TRACEBACK(exception_keeper_tb_64, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_64);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_64, &exception_keeper_value_64, &exception_keeper_tb_64);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_64, exception_keeper_tb_64);
    PUBLISH_EXCEPTION(&exception_keeper_type_64, &exception_keeper_value_64, &exception_keeper_tb_64);
    // Tried code:
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_41;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "cooooooooo";
            goto try_except_handler_67;
        }

        tmp_called_value_24 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 165;
        tmp_call_result_41 = CALL_FUNCTION_NO_ARGS(tmp_called_value_24);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "cooooooooo";
            goto try_except_handler_67;
        }
        Py_DECREF(tmp_call_result_41);
    }
    goto try_end_65;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(exception_preserved_type_22, exception_preserved_value_22, exception_preserved_tb_22);

    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto try_except_handler_65;
    // End of try:
    try_end_65:;
    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(exception_preserved_type_22, exception_preserved_value_22, exception_preserved_tb_22);

    goto try_end_64;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_64:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;
        type_description_1 = "cooooooooo";
        goto try_except_handler_65;
    }
    goto loop_start_22;
    loop_end_22:;
    goto try_end_66;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_22__iter_value);
    tmp_for_loop_22__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_22__for_iterator);
    Py_DECREF(tmp_for_loop_22__for_iterator);
    tmp_for_loop_22__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_66:;
    Py_XDECREF(tmp_for_loop_22__iter_value);
    tmp_for_loop_22__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_22__for_iterator);
    Py_DECREF(tmp_for_loop_22__for_iterator);
    tmp_for_loop_22__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_iter_arg_23;
        tmp_iter_arg_23 = mod_consts[31];
        tmp_assign_source_70 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_23);
        assert(!(tmp_assign_source_70 == NULL));
        assert(tmp_for_loop_23__for_iterator == NULL);
        tmp_for_loop_23__for_iterator = tmp_assign_source_70;
    }
    // Tried code:
    loop_start_23:;
    {
        PyObject *tmp_next_source_23;
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_for_loop_23__for_iterator);
        tmp_next_source_23 = tmp_for_loop_23__for_iterator;
        tmp_assign_source_71 = ITERATOR_NEXT(tmp_next_source_23);
        if (tmp_assign_source_71 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_23;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 166;
                goto try_except_handler_68;
            }
        }

        {
            PyObject *old = tmp_for_loop_23__iter_value;
            tmp_for_loop_23__iter_value = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_for_loop_23__iter_value);
        tmp_assign_source_72 = tmp_for_loop_23__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_72;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_called_instance_59;
        PyObject *tmp_call_result_42;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "cooooooooo";
            goto try_except_handler_69;
        }

        tmp_called_instance_59 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 168;
        tmp_called_instance_58 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_59,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "cooooooooo";
            goto try_except_handler_69;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 168;
        tmp_call_result_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_58,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_58);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "cooooooooo";
            goto try_except_handler_69;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_25 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_called_value_25 != NULL);
        tmp_expression_value_3 = mod_consts[48];
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        assert(!(tmp_called_value_26 == NULL));
        if (par_ship_out_date == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "cooooooooo";
            goto try_except_handler_69;
        }

        tmp_args_element_value_4 = par_ship_out_date;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 169;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_26);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "cooooooooo";
            goto try_except_handler_69;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 169;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "cooooooooo";
            goto try_except_handler_69;
        }
        Py_DECREF(tmp_call_result_43);
    }
    goto try_end_67;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 23.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_23, &exception_preserved_value_23, &exception_preserved_tb_23);

    if (exception_keeper_tb_67 == NULL) {
        exception_keeper_tb_67 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_67);
    } else if (exception_keeper_lineno_67 != 0) {
        exception_keeper_tb_67 = ADD_TRACEBACK(exception_keeper_tb_67, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_67);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_67, &exception_keeper_value_67, &exception_keeper_tb_67);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_67, exception_keeper_tb_67);
    PUBLISH_EXCEPTION(&exception_keeper_type_67, &exception_keeper_value_67, &exception_keeper_tb_67);
    // Tried code:
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_44;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "cooooooooo";
            goto try_except_handler_70;
        }

        tmp_called_value_27 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 171;
        tmp_call_result_44 = CALL_FUNCTION_NO_ARGS(tmp_called_value_27);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "cooooooooo";
            goto try_except_handler_70;
        }
        Py_DECREF(tmp_call_result_44);
    }
    goto try_end_68;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 23.
    SET_CURRENT_EXCEPTION(exception_preserved_type_23, exception_preserved_value_23, exception_preserved_tb_23);

    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto try_except_handler_68;
    // End of try:
    try_end_68:;
    // Restore previous exception id 23.
    SET_CURRENT_EXCEPTION(exception_preserved_type_23, exception_preserved_value_23, exception_preserved_tb_23);

    goto try_end_67;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_67:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 166;
        type_description_1 = "cooooooooo";
        goto try_except_handler_68;
    }
    goto loop_start_23;
    loop_end_23:;
    goto try_end_69;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_23__iter_value);
    tmp_for_loop_23__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_23__for_iterator);
    Py_DECREF(tmp_for_loop_23__for_iterator);
    tmp_for_loop_23__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_69:;
    Py_XDECREF(tmp_for_loop_23__iter_value);
    tmp_for_loop_23__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_23__for_iterator);
    Py_DECREF(tmp_for_loop_23__for_iterator);
    tmp_for_loop_23__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_60;
        PyObject *tmp_called_instance_61;
        PyObject *tmp_call_result_45;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_61 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 173;
        tmp_called_instance_60 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_61,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 173;
        tmp_call_result_45 = CALL_METHOD_NO_ARGS(tmp_called_instance_60, mod_consts[11]);
        Py_DECREF(tmp_called_instance_60);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_instance_62;
        PyObject *tmp_called_instance_63;
        PyObject *tmp_call_result_46;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_63 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 174;
        tmp_called_instance_62 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_63,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[50], 0)
        );

        if (tmp_called_instance_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 174;
        tmp_call_result_46 = CALL_METHOD_NO_ARGS(tmp_called_instance_62, mod_consts[51]);
        Py_DECREF(tmp_called_instance_62);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_called_instance_64;
        tmp_assattr_value_20 = mod_consts[52];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_64 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 176;
        tmp_assattr_target_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_64,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_assattr_target_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[54], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_65;
        PyObject *tmp_called_instance_66;
        PyObject *tmp_call_result_47;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_66 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 177;
        tmp_called_instance_65 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_66,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        if (tmp_called_instance_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 177;
        tmp_call_result_47 = CALL_METHOD_NO_ARGS(tmp_called_instance_65, mod_consts[51]);
        Py_DECREF(tmp_called_instance_65);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_iter_arg_24;
        tmp_iter_arg_24 = mod_consts[31];
        tmp_assign_source_73 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_24);
        assert(!(tmp_assign_source_73 == NULL));
        assert(tmp_for_loop_24__for_iterator == NULL);
        tmp_for_loop_24__for_iterator = tmp_assign_source_73;
    }
    // Tried code:
    loop_start_24:;
    {
        PyObject *tmp_next_source_24;
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_for_loop_24__for_iterator);
        tmp_next_source_24 = tmp_for_loop_24__for_iterator;
        tmp_assign_source_74 = ITERATOR_NEXT(tmp_next_source_24);
        if (tmp_assign_source_74 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_24;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 179;
                goto try_except_handler_71;
            }
        }

        {
            PyObject *old = tmp_for_loop_24__iter_value;
            tmp_for_loop_24__iter_value = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(tmp_for_loop_24__iter_value);
        tmp_assign_source_75 = tmp_for_loop_24__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_75;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_called_instance_67;
        if (par_ship_out_date == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "cooooooooo";
            goto try_except_handler_72;
        }

        tmp_assattr_value_21 = par_ship_out_date;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "cooooooooo";
            goto try_except_handler_72;
        }

        tmp_called_instance_67 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 181;
        tmp_assattr_target_21 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_67,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_assattr_target_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "cooooooooo";
            goto try_except_handler_72;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[14], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "cooooooooo";
            goto try_except_handler_72;
        }
    }
    goto try_end_70;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 24.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_24, &exception_preserved_value_24, &exception_preserved_tb_24);

    if (exception_keeper_tb_70 == NULL) {
        exception_keeper_tb_70 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_70);
    } else if (exception_keeper_lineno_70 != 0) {
        exception_keeper_tb_70 = ADD_TRACEBACK(exception_keeper_tb_70, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_70);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_70, &exception_keeper_value_70, &exception_keeper_tb_70);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_70, exception_keeper_tb_70);
    PUBLISH_EXCEPTION(&exception_keeper_type_70, &exception_keeper_value_70, &exception_keeper_tb_70);
    // Tried code:
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_48;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "cooooooooo";
            goto try_except_handler_73;
        }

        tmp_called_value_28 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 184;
        tmp_call_result_48 = CALL_FUNCTION_NO_ARGS(tmp_called_value_28);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "cooooooooo";
            goto try_except_handler_73;
        }
        Py_DECREF(tmp_call_result_48);
    }
    goto try_end_71;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 24.
    SET_CURRENT_EXCEPTION(exception_preserved_type_24, exception_preserved_value_24, exception_preserved_tb_24);

    // Re-raise.
    exception_type = exception_keeper_type_71;
    exception_value = exception_keeper_value_71;
    exception_tb = exception_keeper_tb_71;
    exception_lineno = exception_keeper_lineno_71;

    goto try_except_handler_71;
    // End of try:
    try_end_71:;
    // Restore previous exception id 24.
    SET_CURRENT_EXCEPTION(exception_preserved_type_24, exception_preserved_value_24, exception_preserved_tb_24);

    goto try_end_70;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_70:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 179;
        type_description_1 = "cooooooooo";
        goto try_except_handler_71;
    }
    goto loop_start_24;
    loop_end_24:;
    goto try_end_72;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_24__iter_value);
    tmp_for_loop_24__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_24__for_iterator);
    Py_DECREF(tmp_for_loop_24__for_iterator);
    tmp_for_loop_24__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_72;
    exception_value = exception_keeper_value_72;
    exception_tb = exception_keeper_tb_72;
    exception_lineno = exception_keeper_lineno_72;

    goto frame_exception_exit_1;
    // End of try:
    try_end_72:;
    Py_XDECREF(tmp_for_loop_24__iter_value);
    tmp_for_loop_24__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_24__for_iterator);
    Py_DECREF(tmp_for_loop_24__for_iterator);
    tmp_for_loop_24__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iter_arg_25;
        tmp_iter_arg_25 = mod_consts[31];
        tmp_assign_source_76 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_25);
        assert(!(tmp_assign_source_76 == NULL));
        assert(tmp_for_loop_25__for_iterator == NULL);
        tmp_for_loop_25__for_iterator = tmp_assign_source_76;
    }
    // Tried code:
    loop_start_25:;
    {
        PyObject *tmp_next_source_25;
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_for_loop_25__for_iterator);
        tmp_next_source_25 = tmp_for_loop_25__for_iterator;
        tmp_assign_source_77 = ITERATOR_NEXT(tmp_next_source_25);
        if (tmp_assign_source_77 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_25;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 185;
                goto try_except_handler_74;
            }
        }

        {
            PyObject *old = tmp_for_loop_25__iter_value;
            tmp_for_loop_25__iter_value = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_for_loop_25__iter_value);
        tmp_assign_source_78 = tmp_for_loop_25__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_78;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_called_instance_68;
        CHECK_OBJECT(par_quantity);
        tmp_assattr_value_22 = par_quantity;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "cooooooooo";
            goto try_except_handler_75;
        }

        tmp_called_instance_68 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 187;
        tmp_assattr_target_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_68,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_assattr_target_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "cooooooooo";
            goto try_except_handler_75;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[14], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "cooooooooo";
            goto try_except_handler_75;
        }
    }
    goto try_end_73;
    // Exception handler code:
    try_except_handler_75:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 25.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_25, &exception_preserved_value_25, &exception_preserved_tb_25);

    if (exception_keeper_tb_73 == NULL) {
        exception_keeper_tb_73 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_73);
    } else if (exception_keeper_lineno_73 != 0) {
        exception_keeper_tb_73 = ADD_TRACEBACK(exception_keeper_tb_73, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_73);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_73, &exception_keeper_value_73, &exception_keeper_tb_73);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_73, exception_keeper_tb_73);
    PUBLISH_EXCEPTION(&exception_keeper_type_73, &exception_keeper_value_73, &exception_keeper_tb_73);
    // Tried code:
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_49;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "cooooooooo";
            goto try_except_handler_76;
        }

        tmp_called_value_29 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 190;
        tmp_call_result_49 = CALL_FUNCTION_NO_ARGS(tmp_called_value_29);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "cooooooooo";
            goto try_except_handler_76;
        }
        Py_DECREF(tmp_call_result_49);
    }
    goto try_end_74;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 25.
    SET_CURRENT_EXCEPTION(exception_preserved_type_25, exception_preserved_value_25, exception_preserved_tb_25);

    // Re-raise.
    exception_type = exception_keeper_type_74;
    exception_value = exception_keeper_value_74;
    exception_tb = exception_keeper_tb_74;
    exception_lineno = exception_keeper_lineno_74;

    goto try_except_handler_74;
    // End of try:
    try_end_74:;
    // Restore previous exception id 25.
    SET_CURRENT_EXCEPTION(exception_preserved_type_25, exception_preserved_value_25, exception_preserved_tb_25);

    goto try_end_73;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_73:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 185;
        type_description_1 = "cooooooooo";
        goto try_except_handler_74;
    }
    goto loop_start_25;
    loop_end_25:;
    goto try_end_75;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_25__iter_value);
    tmp_for_loop_25__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_25__for_iterator);
    Py_DECREF(tmp_for_loop_25__for_iterator);
    tmp_for_loop_25__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_75;
    exception_value = exception_keeper_value_75;
    exception_tb = exception_keeper_tb_75;
    exception_lineno = exception_keeper_lineno_75;

    goto frame_exception_exit_1;
    // End of try:
    try_end_75:;
    Py_XDECREF(tmp_for_loop_25__iter_value);
    tmp_for_loop_25__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_25__for_iterator);
    Py_DECREF(tmp_for_loop_25__for_iterator);
    tmp_for_loop_25__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_iter_arg_26;
        tmp_iter_arg_26 = mod_consts[31];
        tmp_assign_source_79 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_26);
        assert(!(tmp_assign_source_79 == NULL));
        assert(tmp_for_loop_26__for_iterator == NULL);
        tmp_for_loop_26__for_iterator = tmp_assign_source_79;
    }
    // Tried code:
    loop_start_26:;
    {
        PyObject *tmp_next_source_26;
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_for_loop_26__for_iterator);
        tmp_next_source_26 = tmp_for_loop_26__for_iterator;
        tmp_assign_source_80 = ITERATOR_NEXT(tmp_next_source_26);
        if (tmp_assign_source_80 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_26;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 191;
                goto try_except_handler_77;
            }
        }

        {
            PyObject *old = tmp_for_loop_26__iter_value;
            tmp_for_loop_26__iter_value = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_for_loop_26__iter_value);
        tmp_assign_source_81 = tmp_for_loop_26__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_81;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_69;
        PyObject *tmp_called_instance_70;
        PyObject *tmp_call_result_50;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "cooooooooo";
            goto try_except_handler_78;
        }

        tmp_called_instance_70 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 193;
        tmp_called_instance_69 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_70,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_called_instance_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "cooooooooo";
            goto try_except_handler_78;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 193;
        tmp_call_result_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_69, mod_consts[25]);
        Py_DECREF(tmp_called_instance_69);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "cooooooooo";
            goto try_except_handler_78;
        }
        Py_DECREF(tmp_call_result_50);
    }
    goto try_end_76;
    // Exception handler code:
    try_except_handler_78:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 26.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_26, &exception_preserved_value_26, &exception_preserved_tb_26);

    if (exception_keeper_tb_76 == NULL) {
        exception_keeper_tb_76 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_76);
    } else if (exception_keeper_lineno_76 != 0) {
        exception_keeper_tb_76 = ADD_TRACEBACK(exception_keeper_tb_76, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_76);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_76, &exception_keeper_value_76, &exception_keeper_tb_76);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_76, exception_keeper_tb_76);
    PUBLISH_EXCEPTION(&exception_keeper_type_76, &exception_keeper_value_76, &exception_keeper_tb_76);
    // Tried code:
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_51;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "cooooooooo";
            goto try_except_handler_79;
        }

        tmp_called_value_30 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 196;
        tmp_call_result_51 = CALL_FUNCTION_NO_ARGS(tmp_called_value_30);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "cooooooooo";
            goto try_except_handler_79;
        }
        Py_DECREF(tmp_call_result_51);
    }
    goto try_end_77;
    // Exception handler code:
    try_except_handler_79:;
    exception_keeper_type_77 = exception_type;
    exception_keeper_value_77 = exception_value;
    exception_keeper_tb_77 = exception_tb;
    exception_keeper_lineno_77 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 26.
    SET_CURRENT_EXCEPTION(exception_preserved_type_26, exception_preserved_value_26, exception_preserved_tb_26);

    // Re-raise.
    exception_type = exception_keeper_type_77;
    exception_value = exception_keeper_value_77;
    exception_tb = exception_keeper_tb_77;
    exception_lineno = exception_keeper_lineno_77;

    goto try_except_handler_77;
    // End of try:
    try_end_77:;
    // Restore previous exception id 26.
    SET_CURRENT_EXCEPTION(exception_preserved_type_26, exception_preserved_value_26, exception_preserved_tb_26);

    goto try_end_76;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_76:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 191;
        type_description_1 = "cooooooooo";
        goto try_except_handler_77;
    }
    goto loop_start_26;
    loop_end_26:;
    goto try_end_78;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_78 = exception_type;
    exception_keeper_value_78 = exception_value;
    exception_keeper_tb_78 = exception_tb;
    exception_keeper_lineno_78 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_26__iter_value);
    tmp_for_loop_26__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_26__for_iterator);
    Py_DECREF(tmp_for_loop_26__for_iterator);
    tmp_for_loop_26__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_78;
    exception_value = exception_keeper_value_78;
    exception_tb = exception_keeper_tb_78;
    exception_lineno = exception_keeper_lineno_78;

    goto frame_exception_exit_1;
    // End of try:
    try_end_78:;
    Py_XDECREF(tmp_for_loop_26__iter_value);
    tmp_for_loop_26__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_26__for_iterator);
    Py_DECREF(tmp_for_loop_26__for_iterator);
    tmp_for_loop_26__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iter_arg_27;
        tmp_iter_arg_27 = mod_consts[31];
        tmp_assign_source_82 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_27);
        assert(!(tmp_assign_source_82 == NULL));
        assert(tmp_for_loop_27__for_iterator == NULL);
        tmp_for_loop_27__for_iterator = tmp_assign_source_82;
    }
    // Tried code:
    loop_start_27:;
    {
        PyObject *tmp_next_source_27;
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_for_loop_27__for_iterator);
        tmp_next_source_27 = tmp_for_loop_27__for_iterator;
        tmp_assign_source_83 = ITERATOR_NEXT(tmp_next_source_27);
        if (tmp_assign_source_83 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_27;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 197;
                goto try_except_handler_80;
            }
        }

        {
            PyObject *old = tmp_for_loop_27__iter_value;
            tmp_for_loop_27__iter_value = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT(tmp_for_loop_27__iter_value);
        tmp_assign_source_84 = tmp_for_loop_27__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_84;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_called_instance_71;
        tmp_assattr_value_23 = mod_consts[58];
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 199;
            type_description_1 = "cooooooooo";
            goto try_except_handler_81;
        }

        tmp_called_instance_71 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 199;
        tmp_assattr_target_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_71,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_assattr_target_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "cooooooooo";
            goto try_except_handler_81;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[27], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "cooooooooo";
            goto try_except_handler_81;
        }
    }
    goto try_end_79;
    // Exception handler code:
    try_except_handler_81:;
    exception_keeper_type_79 = exception_type;
    exception_keeper_value_79 = exception_value;
    exception_keeper_tb_79 = exception_tb;
    exception_keeper_lineno_79 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 27.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_27, &exception_preserved_value_27, &exception_preserved_tb_27);

    if (exception_keeper_tb_79 == NULL) {
        exception_keeper_tb_79 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_79);
    } else if (exception_keeper_lineno_79 != 0) {
        exception_keeper_tb_79 = ADD_TRACEBACK(exception_keeper_tb_79, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_79);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_79, &exception_keeper_value_79, &exception_keeper_tb_79);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_79, exception_keeper_tb_79);
    PUBLISH_EXCEPTION(&exception_keeper_type_79, &exception_keeper_value_79, &exception_keeper_tb_79);
    // Tried code:
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_52;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "cooooooooo";
            goto try_except_handler_82;
        }

        tmp_called_value_31 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 202;
        tmp_call_result_52 = CALL_FUNCTION_NO_ARGS(tmp_called_value_31);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "cooooooooo";
            goto try_except_handler_82;
        }
        Py_DECREF(tmp_call_result_52);
    }
    goto try_end_80;
    // Exception handler code:
    try_except_handler_82:;
    exception_keeper_type_80 = exception_type;
    exception_keeper_value_80 = exception_value;
    exception_keeper_tb_80 = exception_tb;
    exception_keeper_lineno_80 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 27.
    SET_CURRENT_EXCEPTION(exception_preserved_type_27, exception_preserved_value_27, exception_preserved_tb_27);

    // Re-raise.
    exception_type = exception_keeper_type_80;
    exception_value = exception_keeper_value_80;
    exception_tb = exception_keeper_tb_80;
    exception_lineno = exception_keeper_lineno_80;

    goto try_except_handler_80;
    // End of try:
    try_end_80:;
    // Restore previous exception id 27.
    SET_CURRENT_EXCEPTION(exception_preserved_type_27, exception_preserved_value_27, exception_preserved_tb_27);

    goto try_end_79;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_79:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 197;
        type_description_1 = "cooooooooo";
        goto try_except_handler_80;
    }
    goto loop_start_27;
    loop_end_27:;
    goto try_end_81;
    // Exception handler code:
    try_except_handler_80:;
    exception_keeper_type_81 = exception_type;
    exception_keeper_value_81 = exception_value;
    exception_keeper_tb_81 = exception_tb;
    exception_keeper_lineno_81 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_27__iter_value);
    tmp_for_loop_27__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_27__for_iterator);
    Py_DECREF(tmp_for_loop_27__for_iterator);
    tmp_for_loop_27__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_81;
    exception_value = exception_keeper_value_81;
    exception_tb = exception_keeper_tb_81;
    exception_lineno = exception_keeper_lineno_81;

    goto frame_exception_exit_1;
    // End of try:
    try_end_81:;
    Py_XDECREF(tmp_for_loop_27__iter_value);
    tmp_for_loop_27__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_27__for_iterator);
    Py_DECREF(tmp_for_loop_27__for_iterator);
    tmp_for_loop_27__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_iter_arg_28;
        tmp_iter_arg_28 = mod_consts[31];
        tmp_assign_source_85 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_28);
        assert(!(tmp_assign_source_85 == NULL));
        assert(tmp_for_loop_28__for_iterator == NULL);
        tmp_for_loop_28__for_iterator = tmp_assign_source_85;
    }
    // Tried code:
    loop_start_28:;
    {
        PyObject *tmp_next_source_28;
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_for_loop_28__for_iterator);
        tmp_next_source_28 = tmp_for_loop_28__for_iterator;
        tmp_assign_source_86 = ITERATOR_NEXT(tmp_next_source_28);
        if (tmp_assign_source_86 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_28;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 203;
                goto try_except_handler_83;
            }
        }

        {
            PyObject *old = tmp_for_loop_28__iter_value;
            tmp_for_loop_28__iter_value = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(tmp_for_loop_28__iter_value);
        tmp_assign_source_87 = tmp_for_loop_28__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_87;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_72;
        PyObject *tmp_called_instance_73;
        PyObject *tmp_call_result_53;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "cooooooooo";
            goto try_except_handler_84;
        }

        tmp_called_instance_73 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 205;
        tmp_called_instance_72 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_73,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "cooooooooo";
            goto try_except_handler_84;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 205;
        tmp_call_result_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_72,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_72);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "cooooooooo";
            goto try_except_handler_84;
        }
        Py_DECREF(tmp_call_result_53);
    }
    goto try_end_82;
    // Exception handler code:
    try_except_handler_84:;
    exception_keeper_type_82 = exception_type;
    exception_keeper_value_82 = exception_value;
    exception_keeper_tb_82 = exception_tb;
    exception_keeper_lineno_82 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 28.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_28, &exception_preserved_value_28, &exception_preserved_tb_28);

    if (exception_keeper_tb_82 == NULL) {
        exception_keeper_tb_82 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_82);
    } else if (exception_keeper_lineno_82 != 0) {
        exception_keeper_tb_82 = ADD_TRACEBACK(exception_keeper_tb_82, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_82);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_82, &exception_keeper_value_82, &exception_keeper_tb_82);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_82, exception_keeper_tb_82);
    PUBLISH_EXCEPTION(&exception_keeper_type_82, &exception_keeper_value_82, &exception_keeper_tb_82);
    // Tried code:
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_54;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "cooooooooo";
            goto try_except_handler_85;
        }

        tmp_called_value_32 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 207;
        tmp_call_result_54 = CALL_FUNCTION_NO_ARGS(tmp_called_value_32);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "cooooooooo";
            goto try_except_handler_85;
        }
        Py_DECREF(tmp_call_result_54);
    }
    goto try_end_83;
    // Exception handler code:
    try_except_handler_85:;
    exception_keeper_type_83 = exception_type;
    exception_keeper_value_83 = exception_value;
    exception_keeper_tb_83 = exception_tb;
    exception_keeper_lineno_83 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 28.
    SET_CURRENT_EXCEPTION(exception_preserved_type_28, exception_preserved_value_28, exception_preserved_tb_28);

    // Re-raise.
    exception_type = exception_keeper_type_83;
    exception_value = exception_keeper_value_83;
    exception_tb = exception_keeper_tb_83;
    exception_lineno = exception_keeper_lineno_83;

    goto try_except_handler_83;
    // End of try:
    try_end_83:;
    // Restore previous exception id 28.
    SET_CURRENT_EXCEPTION(exception_preserved_type_28, exception_preserved_value_28, exception_preserved_tb_28);

    goto try_end_82;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_82:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 203;
        type_description_1 = "cooooooooo";
        goto try_except_handler_83;
    }
    goto loop_start_28;
    loop_end_28:;
    goto try_end_84;
    // Exception handler code:
    try_except_handler_83:;
    exception_keeper_type_84 = exception_type;
    exception_keeper_value_84 = exception_value;
    exception_keeper_tb_84 = exception_tb;
    exception_keeper_lineno_84 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_28__iter_value);
    tmp_for_loop_28__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_28__for_iterator);
    Py_DECREF(tmp_for_loop_28__for_iterator);
    tmp_for_loop_28__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_84;
    exception_value = exception_keeper_value_84;
    exception_tb = exception_keeper_tb_84;
    exception_lineno = exception_keeper_lineno_84;

    goto frame_exception_exit_1;
    // End of try:
    try_end_84:;
    Py_XDECREF(tmp_for_loop_28__iter_value);
    tmp_for_loop_28__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_28__for_iterator);
    Py_DECREF(tmp_for_loop_28__for_iterator);
    tmp_for_loop_28__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_iter_arg_29;
        tmp_iter_arg_29 = mod_consts[31];
        tmp_assign_source_88 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_29);
        assert(!(tmp_assign_source_88 == NULL));
        assert(tmp_for_loop_29__for_iterator == NULL);
        tmp_for_loop_29__for_iterator = tmp_assign_source_88;
    }
    // Tried code:
    loop_start_29:;
    {
        PyObject *tmp_next_source_29;
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_for_loop_29__for_iterator);
        tmp_next_source_29 = tmp_for_loop_29__for_iterator;
        tmp_assign_source_89 = ITERATOR_NEXT(tmp_next_source_29);
        if (tmp_assign_source_89 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_29;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 208;
                goto try_except_handler_86;
            }
        }

        {
            PyObject *old = tmp_for_loop_29__iter_value;
            tmp_for_loop_29__iter_value = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_for_loop_29__iter_value);
        tmp_assign_source_90 = tmp_for_loop_29__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_90;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_74;
        PyObject *tmp_called_instance_75;
        PyObject *tmp_call_result_55;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "cooooooooo";
            goto try_except_handler_87;
        }

        tmp_called_instance_75 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 210;
        tmp_called_instance_74 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_75,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_called_instance_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "cooooooooo";
            goto try_except_handler_87;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 210;
        tmp_call_result_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_74,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_74);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "cooooooooo";
            goto try_except_handler_87;
        }
        Py_DECREF(tmp_call_result_55);
    }
    goto try_end_85;
    // Exception handler code:
    try_except_handler_87:;
    exception_keeper_type_85 = exception_type;
    exception_keeper_value_85 = exception_value;
    exception_keeper_tb_85 = exception_tb;
    exception_keeper_lineno_85 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 29.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_29, &exception_preserved_value_29, &exception_preserved_tb_29);

    if (exception_keeper_tb_85 == NULL) {
        exception_keeper_tb_85 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_85);
    } else if (exception_keeper_lineno_85 != 0) {
        exception_keeper_tb_85 = ADD_TRACEBACK(exception_keeper_tb_85, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_85);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_85, &exception_keeper_value_85, &exception_keeper_tb_85);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_85, exception_keeper_tb_85);
    PUBLISH_EXCEPTION(&exception_keeper_type_85, &exception_keeper_value_85, &exception_keeper_tb_85);
    // Tried code:
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_56;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "cooooooooo";
            goto try_except_handler_88;
        }

        tmp_called_value_33 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 212;
        tmp_call_result_56 = CALL_FUNCTION_NO_ARGS(tmp_called_value_33);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "cooooooooo";
            goto try_except_handler_88;
        }
        Py_DECREF(tmp_call_result_56);
    }
    goto try_end_86;
    // Exception handler code:
    try_except_handler_88:;
    exception_keeper_type_86 = exception_type;
    exception_keeper_value_86 = exception_value;
    exception_keeper_tb_86 = exception_tb;
    exception_keeper_lineno_86 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 29.
    SET_CURRENT_EXCEPTION(exception_preserved_type_29, exception_preserved_value_29, exception_preserved_tb_29);

    // Re-raise.
    exception_type = exception_keeper_type_86;
    exception_value = exception_keeper_value_86;
    exception_tb = exception_keeper_tb_86;
    exception_lineno = exception_keeper_lineno_86;

    goto try_except_handler_86;
    // End of try:
    try_end_86:;
    // Restore previous exception id 29.
    SET_CURRENT_EXCEPTION(exception_preserved_type_29, exception_preserved_value_29, exception_preserved_tb_29);

    goto try_end_85;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_85:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 208;
        type_description_1 = "cooooooooo";
        goto try_except_handler_86;
    }
    goto loop_start_29;
    loop_end_29:;
    goto try_end_87;
    // Exception handler code:
    try_except_handler_86:;
    exception_keeper_type_87 = exception_type;
    exception_keeper_value_87 = exception_value;
    exception_keeper_tb_87 = exception_tb;
    exception_keeper_lineno_87 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_29__iter_value);
    tmp_for_loop_29__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_29__for_iterator);
    Py_DECREF(tmp_for_loop_29__for_iterator);
    tmp_for_loop_29__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_87;
    exception_value = exception_keeper_value_87;
    exception_tb = exception_keeper_tb_87;
    exception_lineno = exception_keeper_lineno_87;

    goto frame_exception_exit_1;
    // End of try:
    try_end_87:;
    Py_XDECREF(tmp_for_loop_29__iter_value);
    tmp_for_loop_29__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_29__for_iterator);
    Py_DECREF(tmp_for_loop_29__for_iterator);
    tmp_for_loop_29__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_iter_arg_30;
        tmp_iter_arg_30 = mod_consts[31];
        tmp_assign_source_91 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_30);
        assert(!(tmp_assign_source_91 == NULL));
        assert(tmp_for_loop_30__for_iterator == NULL);
        tmp_for_loop_30__for_iterator = tmp_assign_source_91;
    }
    // Tried code:
    loop_start_30:;
    {
        PyObject *tmp_next_source_30;
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_for_loop_30__for_iterator);
        tmp_next_source_30 = tmp_for_loop_30__for_iterator;
        tmp_assign_source_92 = ITERATOR_NEXT(tmp_next_source_30);
        if (tmp_assign_source_92 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_30;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 213;
                goto try_except_handler_89;
            }
        }

        {
            PyObject *old = tmp_for_loop_30__iter_value;
            tmp_for_loop_30__iter_value = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_for_loop_30__iter_value);
        tmp_assign_source_93 = tmp_for_loop_30__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_93;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_76;
        PyObject *tmp_called_instance_77;
        PyObject *tmp_call_result_57;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "cooooooooo";
            goto try_except_handler_90;
        }

        tmp_called_instance_77 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 215;
        tmp_called_instance_76 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_77,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_called_instance_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "cooooooooo";
            goto try_except_handler_90;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 215;
        tmp_call_result_57 = CALL_METHOD_NO_ARGS(tmp_called_instance_76, mod_consts[51]);
        Py_DECREF(tmp_called_instance_76);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "cooooooooo";
            goto try_except_handler_90;
        }
        Py_DECREF(tmp_call_result_57);
    }
    goto try_end_88;
    // Exception handler code:
    try_except_handler_90:;
    exception_keeper_type_88 = exception_type;
    exception_keeper_value_88 = exception_value;
    exception_keeper_tb_88 = exception_tb;
    exception_keeper_lineno_88 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 30.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_30, &exception_preserved_value_30, &exception_preserved_tb_30);

    if (exception_keeper_tb_88 == NULL) {
        exception_keeper_tb_88 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_88);
    } else if (exception_keeper_lineno_88 != 0) {
        exception_keeper_tb_88 = ADD_TRACEBACK(exception_keeper_tb_88, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_88);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_88, &exception_keeper_value_88, &exception_keeper_tb_88);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_88, exception_keeper_tb_88);
    PUBLISH_EXCEPTION(&exception_keeper_type_88, &exception_keeper_value_88, &exception_keeper_tb_88);
    // Tried code:
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_58;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "cooooooooo";
            goto try_except_handler_91;
        }

        tmp_called_value_34 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 217;
        tmp_call_result_58 = CALL_FUNCTION_NO_ARGS(tmp_called_value_34);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "cooooooooo";
            goto try_except_handler_91;
        }
        Py_DECREF(tmp_call_result_58);
    }
    goto try_end_89;
    // Exception handler code:
    try_except_handler_91:;
    exception_keeper_type_89 = exception_type;
    exception_keeper_value_89 = exception_value;
    exception_keeper_tb_89 = exception_tb;
    exception_keeper_lineno_89 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 30.
    SET_CURRENT_EXCEPTION(exception_preserved_type_30, exception_preserved_value_30, exception_preserved_tb_30);

    // Re-raise.
    exception_type = exception_keeper_type_89;
    exception_value = exception_keeper_value_89;
    exception_tb = exception_keeper_tb_89;
    exception_lineno = exception_keeper_lineno_89;

    goto try_except_handler_89;
    // End of try:
    try_end_89:;
    // Restore previous exception id 30.
    SET_CURRENT_EXCEPTION(exception_preserved_type_30, exception_preserved_value_30, exception_preserved_tb_30);

    goto try_end_88;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_88:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 213;
        type_description_1 = "cooooooooo";
        goto try_except_handler_89;
    }
    goto loop_start_30;
    loop_end_30:;
    goto try_end_90;
    // Exception handler code:
    try_except_handler_89:;
    exception_keeper_type_90 = exception_type;
    exception_keeper_value_90 = exception_value;
    exception_keeper_tb_90 = exception_tb;
    exception_keeper_lineno_90 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_30__iter_value);
    tmp_for_loop_30__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_30__for_iterator);
    Py_DECREF(tmp_for_loop_30__for_iterator);
    tmp_for_loop_30__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_90;
    exception_value = exception_keeper_value_90;
    exception_tb = exception_keeper_tb_90;
    exception_lineno = exception_keeper_lineno_90;

    goto frame_exception_exit_1;
    // End of try:
    try_end_90:;
    Py_XDECREF(tmp_for_loop_30__iter_value);
    tmp_for_loop_30__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_30__for_iterator);
    Py_DECREF(tmp_for_loop_30__for_iterator);
    tmp_for_loop_30__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_iter_arg_31;
        tmp_iter_arg_31 = mod_consts[31];
        tmp_assign_source_94 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_31);
        assert(!(tmp_assign_source_94 == NULL));
        assert(tmp_for_loop_31__for_iterator == NULL);
        tmp_for_loop_31__for_iterator = tmp_assign_source_94;
    }
    // Tried code:
    loop_start_31:;
    {
        PyObject *tmp_next_source_31;
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_for_loop_31__for_iterator);
        tmp_next_source_31 = tmp_for_loop_31__for_iterator;
        tmp_assign_source_95 = ITERATOR_NEXT(tmp_next_source_31);
        if (tmp_assign_source_95 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_31;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 218;
                goto try_except_handler_92;
            }
        }

        {
            PyObject *old = tmp_for_loop_31__iter_value;
            tmp_for_loop_31__iter_value = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_for_loop_31__iter_value);
        tmp_assign_source_96 = tmp_for_loop_31__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_96;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_78;
        PyObject *tmp_called_instance_79;
        PyObject *tmp_call_result_59;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "cooooooooo";
            goto try_except_handler_93;
        }

        tmp_called_instance_79 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 220;
        tmp_called_instance_78 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_79,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "cooooooooo";
            goto try_except_handler_93;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 220;
        tmp_call_result_59 = CALL_METHOD_NO_ARGS(tmp_called_instance_78, mod_consts[11]);
        Py_DECREF(tmp_called_instance_78);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "cooooooooo";
            goto try_except_handler_93;
        }
        Py_DECREF(tmp_call_result_59);
    }
    goto try_end_91;
    // Exception handler code:
    try_except_handler_93:;
    exception_keeper_type_91 = exception_type;
    exception_keeper_value_91 = exception_value;
    exception_keeper_tb_91 = exception_tb;
    exception_keeper_lineno_91 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 31.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_31, &exception_preserved_value_31, &exception_preserved_tb_31);

    if (exception_keeper_tb_91 == NULL) {
        exception_keeper_tb_91 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_91);
    } else if (exception_keeper_lineno_91 != 0) {
        exception_keeper_tb_91 = ADD_TRACEBACK(exception_keeper_tb_91, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_91);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_91, &exception_keeper_value_91, &exception_keeper_tb_91);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_91, exception_keeper_tb_91);
    PUBLISH_EXCEPTION(&exception_keeper_type_91, &exception_keeper_value_91, &exception_keeper_tb_91);
    // Tried code:
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_60;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "cooooooooo";
            goto try_except_handler_94;
        }

        tmp_called_value_35 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 222;
        tmp_call_result_60 = CALL_FUNCTION_NO_ARGS(tmp_called_value_35);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "cooooooooo";
            goto try_except_handler_94;
        }
        Py_DECREF(tmp_call_result_60);
    }
    goto try_end_92;
    // Exception handler code:
    try_except_handler_94:;
    exception_keeper_type_92 = exception_type;
    exception_keeper_value_92 = exception_value;
    exception_keeper_tb_92 = exception_tb;
    exception_keeper_lineno_92 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 31.
    SET_CURRENT_EXCEPTION(exception_preserved_type_31, exception_preserved_value_31, exception_preserved_tb_31);

    // Re-raise.
    exception_type = exception_keeper_type_92;
    exception_value = exception_keeper_value_92;
    exception_tb = exception_keeper_tb_92;
    exception_lineno = exception_keeper_lineno_92;

    goto try_except_handler_92;
    // End of try:
    try_end_92:;
    // Restore previous exception id 31.
    SET_CURRENT_EXCEPTION(exception_preserved_type_31, exception_preserved_value_31, exception_preserved_tb_31);

    goto try_end_91;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_91:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 218;
        type_description_1 = "cooooooooo";
        goto try_except_handler_92;
    }
    goto loop_start_31;
    loop_end_31:;
    goto try_end_93;
    // Exception handler code:
    try_except_handler_92:;
    exception_keeper_type_93 = exception_type;
    exception_keeper_value_93 = exception_value;
    exception_keeper_tb_93 = exception_tb;
    exception_keeper_lineno_93 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_31__iter_value);
    tmp_for_loop_31__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_31__for_iterator);
    Py_DECREF(tmp_for_loop_31__for_iterator);
    tmp_for_loop_31__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_93;
    exception_value = exception_keeper_value_93;
    exception_tb = exception_keeper_tb_93;
    exception_lineno = exception_keeper_lineno_93;

    goto frame_exception_exit_1;
    // End of try:
    try_end_93:;
    Py_XDECREF(tmp_for_loop_31__iter_value);
    tmp_for_loop_31__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_31__for_iterator);
    Py_DECREF(tmp_for_loop_31__for_iterator);
    tmp_for_loop_31__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_iter_arg_32;
        tmp_iter_arg_32 = mod_consts[31];
        tmp_assign_source_97 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_32);
        assert(!(tmp_assign_source_97 == NULL));
        assert(tmp_for_loop_32__for_iterator == NULL);
        tmp_for_loop_32__for_iterator = tmp_assign_source_97;
    }
    // Tried code:
    loop_start_32:;
    {
        PyObject *tmp_next_source_32;
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_for_loop_32__for_iterator);
        tmp_next_source_32 = tmp_for_loop_32__for_iterator;
        tmp_assign_source_98 = ITERATOR_NEXT(tmp_next_source_32);
        if (tmp_assign_source_98 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_32;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 223;
                goto try_except_handler_95;
            }
        }

        {
            PyObject *old = tmp_for_loop_32__iter_value;
            tmp_for_loop_32__iter_value = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_for_loop_32__iter_value);
        tmp_assign_source_99 = tmp_for_loop_32__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_99;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_80;
        PyObject *tmp_called_instance_81;
        PyObject *tmp_call_result_61;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "cooooooooo";
            goto try_except_handler_96;
        }

        tmp_called_instance_81 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 225;
        tmp_called_instance_80 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_81,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_called_instance_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "cooooooooo";
            goto try_except_handler_96;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 225;
        tmp_call_result_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_80, mod_consts[51]);
        Py_DECREF(tmp_called_instance_80);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "cooooooooo";
            goto try_except_handler_96;
        }
        Py_DECREF(tmp_call_result_61);
    }
    goto try_end_94;
    // Exception handler code:
    try_except_handler_96:;
    exception_keeper_type_94 = exception_type;
    exception_keeper_value_94 = exception_value;
    exception_keeper_tb_94 = exception_tb;
    exception_keeper_lineno_94 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 32.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_32, &exception_preserved_value_32, &exception_preserved_tb_32);

    if (exception_keeper_tb_94 == NULL) {
        exception_keeper_tb_94 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_94);
    } else if (exception_keeper_lineno_94 != 0) {
        exception_keeper_tb_94 = ADD_TRACEBACK(exception_keeper_tb_94, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_94);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_94, &exception_keeper_value_94, &exception_keeper_tb_94);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_94, exception_keeper_tb_94);
    PUBLISH_EXCEPTION(&exception_keeper_type_94, &exception_keeper_value_94, &exception_keeper_tb_94);
    // Tried code:
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_62;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "cooooooooo";
            goto try_except_handler_97;
        }

        tmp_called_value_36 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 227;
        tmp_call_result_62 = CALL_FUNCTION_NO_ARGS(tmp_called_value_36);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "cooooooooo";
            goto try_except_handler_97;
        }
        Py_DECREF(tmp_call_result_62);
    }
    goto try_end_95;
    // Exception handler code:
    try_except_handler_97:;
    exception_keeper_type_95 = exception_type;
    exception_keeper_value_95 = exception_value;
    exception_keeper_tb_95 = exception_tb;
    exception_keeper_lineno_95 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 32.
    SET_CURRENT_EXCEPTION(exception_preserved_type_32, exception_preserved_value_32, exception_preserved_tb_32);

    // Re-raise.
    exception_type = exception_keeper_type_95;
    exception_value = exception_keeper_value_95;
    exception_tb = exception_keeper_tb_95;
    exception_lineno = exception_keeper_lineno_95;

    goto try_except_handler_95;
    // End of try:
    try_end_95:;
    // Restore previous exception id 32.
    SET_CURRENT_EXCEPTION(exception_preserved_type_32, exception_preserved_value_32, exception_preserved_tb_32);

    goto try_end_94;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_94:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 223;
        type_description_1 = "cooooooooo";
        goto try_except_handler_95;
    }
    goto loop_start_32;
    loop_end_32:;
    goto try_end_96;
    // Exception handler code:
    try_except_handler_95:;
    exception_keeper_type_96 = exception_type;
    exception_keeper_value_96 = exception_value;
    exception_keeper_tb_96 = exception_tb;
    exception_keeper_lineno_96 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_32__iter_value);
    tmp_for_loop_32__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_32__for_iterator);
    Py_DECREF(tmp_for_loop_32__for_iterator);
    tmp_for_loop_32__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_96;
    exception_value = exception_keeper_value_96;
    exception_tb = exception_keeper_tb_96;
    exception_lineno = exception_keeper_lineno_96;

    goto frame_exception_exit_1;
    // End of try:
    try_end_96:;
    Py_XDECREF(tmp_for_loop_32__iter_value);
    tmp_for_loop_32__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_32__for_iterator);
    Py_DECREF(tmp_for_loop_32__for_iterator);
    tmp_for_loop_32__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iter_arg_33;
        tmp_iter_arg_33 = mod_consts[31];
        tmp_assign_source_100 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_33);
        assert(!(tmp_assign_source_100 == NULL));
        assert(tmp_for_loop_33__for_iterator == NULL);
        tmp_for_loop_33__for_iterator = tmp_assign_source_100;
    }
    // Tried code:
    loop_start_33:;
    {
        PyObject *tmp_next_source_33;
        PyObject *tmp_assign_source_101;
        CHECK_OBJECT(tmp_for_loop_33__for_iterator);
        tmp_next_source_33 = tmp_for_loop_33__for_iterator;
        tmp_assign_source_101 = ITERATOR_NEXT(tmp_next_source_33);
        if (tmp_assign_source_101 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_33;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "cooooooooo";
                exception_lineno = 228;
                goto try_except_handler_98;
            }
        }

        {
            PyObject *old = tmp_for_loop_33__iter_value;
            tmp_for_loop_33__iter_value = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_for_loop_33__iter_value);
        tmp_assign_source_102 = tmp_for_loop_33__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_102;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_82;
        PyObject *tmp_called_instance_83;
        PyObject *tmp_call_result_63;
        if (Nuitka_Cell_GET(par_session) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "cooooooooo";
            goto try_except_handler_99;
        }

        tmp_called_instance_83 = Nuitka_Cell_GET(par_session);
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 230;
        tmp_called_instance_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_83,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_called_instance_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "cooooooooo";
            goto try_except_handler_99;
        }
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 230;
        tmp_call_result_63 = CALL_METHOD_NO_ARGS(tmp_called_instance_82, mod_consts[51]);
        Py_DECREF(tmp_called_instance_82);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "cooooooooo";
            goto try_except_handler_99;
        }
        Py_DECREF(tmp_call_result_63);
    }
    goto try_end_97;
    // Exception handler code:
    try_except_handler_99:;
    exception_keeper_type_97 = exception_type;
    exception_keeper_value_97 = exception_value;
    exception_keeper_tb_97 = exception_tb;
    exception_keeper_lineno_97 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 33.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_33, &exception_preserved_value_33, &exception_preserved_tb_33);

    if (exception_keeper_tb_97 == NULL) {
        exception_keeper_tb_97 = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_97);
    } else if (exception_keeper_lineno_97 != 0) {
        exception_keeper_tb_97 = ADD_TRACEBACK(exception_keeper_tb_97, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_keeper_lineno_97);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_97, &exception_keeper_value_97, &exception_keeper_tb_97);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_97, exception_keeper_tb_97);
    PUBLISH_EXCEPTION(&exception_keeper_type_97, &exception_keeper_value_97, &exception_keeper_tb_97);
    // Tried code:
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_64;
        if (var_simulate_enter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "cooooooooo";
            goto try_except_handler_100;
        }

        tmp_called_value_37 = var_simulate_enter;
        frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame.f_lineno = 232;
        tmp_call_result_64 = CALL_FUNCTION_NO_ARGS(tmp_called_value_37);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "cooooooooo";
            goto try_except_handler_100;
        }
        Py_DECREF(tmp_call_result_64);
    }
    goto try_end_98;
    // Exception handler code:
    try_except_handler_100:;
    exception_keeper_type_98 = exception_type;
    exception_keeper_value_98 = exception_value;
    exception_keeper_tb_98 = exception_tb;
    exception_keeper_lineno_98 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 33.
    SET_CURRENT_EXCEPTION(exception_preserved_type_33, exception_preserved_value_33, exception_preserved_tb_33);

    // Re-raise.
    exception_type = exception_keeper_type_98;
    exception_value = exception_keeper_value_98;
    exception_tb = exception_keeper_tb_98;
    exception_lineno = exception_keeper_lineno_98;

    goto try_except_handler_98;
    // End of try:
    try_end_98:;
    // Restore previous exception id 33.
    SET_CURRENT_EXCEPTION(exception_preserved_type_33, exception_preserved_value_33, exception_preserved_tb_33);

    goto try_end_97;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_97:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 228;
        type_description_1 = "cooooooooo";
        goto try_except_handler_98;
    }
    goto loop_start_33;
    loop_end_33:;
    goto try_end_99;
    // Exception handler code:
    try_except_handler_98:;
    exception_keeper_type_99 = exception_type;
    exception_keeper_value_99 = exception_value;
    exception_keeper_tb_99 = exception_tb;
    exception_keeper_lineno_99 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_33__iter_value);
    tmp_for_loop_33__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_33__for_iterator);
    Py_DECREF(tmp_for_loop_33__for_iterator);
    tmp_for_loop_33__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_99;
    exception_value = exception_keeper_value_99;
    exception_tb = exception_keeper_tb_99;
    exception_lineno = exception_keeper_lineno_99;

    goto frame_exception_exit_1;
    // End of try:
    try_end_99:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e6fe433413974bc1d1f5628c3d57faa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7e6fe433413974bc1d1f5628c3d57faa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7e6fe433413974bc1d1f5628c3d57faa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e6fe433413974bc1d1f5628c3d57faa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e6fe433413974bc1d1f5628c3d57faa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e6fe433413974bc1d1f5628c3d57faa,
        type_description_1,
        par_session,
        par_order_number,
        par_ship_out_date,
        par_quantity,
        par_sap_code,
        par_reference,
        var_simulate_enter,
        var_now_time_dt,
        var_now_time,
        var_i
    );


    // Release cached frame if used for exception.
    if (frame_7e6fe433413974bc1d1f5628c3d57faa == cache_frame_7e6fe433413974bc1d1f5628c3d57faa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7e6fe433413974bc1d1f5628c3d57faa);
        cache_frame_7e6fe433413974bc1d1f5628c3d57faa = NULL;
    }

    assertFrameObject(frame_7e6fe433413974bc1d1f5628c3d57faa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_33__iter_value);
    tmp_for_loop_33__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_33__for_iterator);
    Py_DECREF(tmp_for_loop_33__for_iterator);
    tmp_for_loop_33__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_simulate_enter);
    var_simulate_enter = NULL;
    CHECK_OBJECT(var_now_time_dt);
    Py_DECREF(var_now_time_dt);
    var_now_time_dt = NULL;
    CHECK_OBJECT(var_now_time);
    Py_DECREF(var_now_time);
    var_now_time = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_100 = exception_type;
    exception_keeper_value_100 = exception_value;
    exception_keeper_tb_100 = exception_tb;
    exception_keeper_lineno_100 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_simulate_enter);
    var_simulate_enter = NULL;
    Py_XDECREF(var_now_time_dt);
    var_now_time_dt = NULL;
    Py_XDECREF(var_now_time);
    var_now_time = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_100;
    exception_value = exception_keeper_value_100;
    exception_tb = exception_keeper_tb_100;
    exception_lineno = exception_keeper_lineno_100;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_session);
    Py_DECREF(par_session);
    CHECK_OBJECT(par_order_number);
    Py_DECREF(par_order_number);
    CHECK_OBJECT(par_ship_out_date);
    Py_DECREF(par_ship_out_date);
    CHECK_OBJECT(par_quantity);
    Py_DECREF(par_quantity);
    CHECK_OBJECT(par_sap_code);
    Py_DECREF(par_sap_code);
    CHECK_OBJECT(par_reference);
    Py_DECREF(par_reference);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_session);
    Py_DECREF(par_session);
    CHECK_OBJECT(par_order_number);
    Py_DECREF(par_order_number);
    CHECK_OBJECT(par_ship_out_date);
    Py_DECREF(par_ship_out_date);
    CHECK_OBJECT(par_quantity);
    Py_DECREF(par_quantity);
    CHECK_OBJECT(par_sap_code);
    Py_DECREF(par_sap_code);
    CHECK_OBJECT(par_reference);
    Py_DECREF(par_reference);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script$$$function__1_simulate_enter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_i = NULL;
    PyObject *var_e1 = NULL;
    PyObject *var_e2 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b4972321f7b772ef2af1ed8eb9f3e3ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[31];
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff)) {
        Py_XDECREF(cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff = MAKE_FUNCTION_FRAME(codeobj_b4972321f7b772ef2af1ed8eb9f3e3ff, module_Packages$apply_to_sap$create_order_script, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_type_description == NULL);
    frame_b4972321f7b772ef2af1ed8eb9f3e3ff = cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b4972321f7b772ef2af1ed8eb9f3e3ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b4972321f7b772ef2af1ed8eb9f3e3ff) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooc";
                exception_lineno = 9;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 12;
            type_description_1 = "oooc";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame.f_lineno = 12;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooc";
            goto try_except_handler_3;
        }
        frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame.f_lineno = 12;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b4972321f7b772ef2af1ed8eb9f3e3ff, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b4972321f7b772ef2af1ed8eb9f3e3ff, exception_keeper_lineno_1);
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
        tmp_cmp_expr_right_1 = PyExc_Exception;
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
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e1;
            var_e1 = tmp_assign_source_4;
            Py_INCREF(var_e1);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 16;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame.f_lineno = 16;
        tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[9],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }
        frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame.f_lineno = 16;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_b4972321f7b772ef2af1ed8eb9f3e3ff, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_b4972321f7b772ef2af1ed8eb9f3e3ff, exception_keeper_lineno_2);
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
        tmp_cmp_expr_right_2 = PyExc_Exception;
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
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e2;
            var_e2 = tmp_assign_source_5;
            Py_INCREF(var_e2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(var_e2);
    var_e2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 14;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame) frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooc";
    goto try_except_handler_7;
    branch_end_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
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

    Py_XDECREF(var_e1);
    var_e1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF(var_e1);
    var_e1 = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 10;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame) frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooc";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 9;
        type_description_1 = "oooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4972321f7b772ef2af1ed8eb9f3e3ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4972321f7b772ef2af1ed8eb9f3e3ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4972321f7b772ef2af1ed8eb9f3e3ff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4972321f7b772ef2af1ed8eb9f3e3ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4972321f7b772ef2af1ed8eb9f3e3ff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4972321f7b772ef2af1ed8eb9f3e3ff,
        type_description_1,
        var_i,
        var_e1,
        var_e2,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b4972321f7b772ef2af1ed8eb9f3e3ff == cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff);
        cache_frame_b4972321f7b772ef2af1ed8eb9f3e3ff = NULL;
    }

    assertFrameObject(frame_b4972321f7b772ef2af1ed8eb9f3e3ff);

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
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_e1);
    var_e1 = NULL;
    Py_XDECREF(var_e2);
    var_e2 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_e1);
    var_e1 = NULL;
    Py_XDECREF(var_e2);
    var_e2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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



static PyObject *MAKE_FUNCTION_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e6fe433413974bc1d1f5628c3d57faa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_Packages$apply_to_sap$create_order_script,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script$$$function__1_simulate_enter(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script$$$function__1_simulate_enter,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_b4972321f7b772ef2af1ed8eb9f3e3ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Packages$apply_to_sap$create_order_script,
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

function_impl_code functable_Packages$apply_to_sap$create_order_script[] = {
    impl_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script$$$function__1_simulate_enter,
    impl_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script,
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

    function_impl_code *current = functable_Packages$apply_to_sap$create_order_script;
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

    if (offset > sizeof(functable_Packages$apply_to_sap$create_order_script) || offset < 0) {
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
        functable_Packages$apply_to_sap$create_order_script[offset],
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
        module_Packages$apply_to_sap$create_order_script,
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
PyObject *modulecode_Packages$apply_to_sap$create_order_script(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Packages.apply_to_sap.create_order_script");

    // Store the module for future use.
    module_Packages$apply_to_sap$create_order_script = module;

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
        PRINT_STRING("Packages.apply_to_sap.create_order_script: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Packages.apply_to_sap.create_order_script: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Packages.apply_to_sap.create_order_script: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initPackages$apply_to_sap$create_order_script\n");

    moduledict_Packages$apply_to_sap$create_order_script = MODULE_DICT(module_Packages$apply_to_sap$create_order_script);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Packages$apply_to_sap$create_order_script,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Packages$apply_to_sap$create_order_script,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[80]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Packages$apply_to_sap$create_order_script,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Packages$apply_to_sap$create_order_script,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Packages$apply_to_sap$create_order_script,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Packages$apply_to_sap$create_order_script);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Packages$apply_to_sap$create_order_script);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5b2e9aa1679e6b3fb504d2607022b21e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5b2e9aa1679e6b3fb504d2607022b21e = MAKE_MODULE_FRAME(codeobj_5b2e9aa1679e6b3fb504d2607022b21e, module_Packages$apply_to_sap$create_order_script);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5b2e9aa1679e6b3fb504d2607022b21e);
    assert(Py_REFCNT(frame_5b2e9aa1679e6b3fb504d2607022b21e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[67], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[5];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Packages$apply_to_sap$create_order_script;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[69];
        frame_5b2e9aa1679e6b3fb504d2607022b21e->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[70];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Packages$apply_to_sap$create_order_script;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[71];
        tmp_level_value_2 = mod_consts[69];
        frame_5b2e9aa1679e6b3fb504d2607022b21e->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Packages$apply_to_sap$create_order_script,
                mod_consts[72],
                mod_consts[69]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_5);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2e9aa1679e6b3fb504d2607022b21e);
#endif
    popFrameStack();

    assertFrameObject(frame_5b2e9aa1679e6b3fb504d2607022b21e);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b2e9aa1679e6b3fb504d2607022b21e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b2e9aa1679e6b3fb504d2607022b21e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b2e9aa1679e6b3fb504d2607022b21e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b2e9aa1679e6b3fb504d2607022b21e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = PyDict_Copy(mod_consts[73]);


        tmp_assign_source_6 = MAKE_FUNCTION_Packages$apply_to_sap$create_order_script$$$function__1_create_order_script(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_6);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Packages.apply_to_sap.create_order_script", false);

    return module_Packages$apply_to_sap$create_order_script;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Packages$apply_to_sap$create_order_script, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Packages$apply_to_sap$create_order_script", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
