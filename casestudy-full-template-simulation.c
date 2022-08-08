/* Includes */
#include "user.h"

/* Defines */

/* Global variables for general use */

/* Global variables for SPNP parameters */

/* Global variables for input parameters */

/* Global functions declarations */
int _0_cardinality_Conn1Interrupte_trFail_to_flush();
int _10_cardinality_PLC_HWf_to_flush();
int _11_guard_PLC_comm_flush();
double _12_leaf_trans_dist_func__getWeatherData();
int _13_cardinality_getWeatherData_end_to_flush();
int _14_guard_getWeatherData_HW_fail();
int _15_cardinality_getWeatherData_HW_fail_to_flush();
int _16_cardinality_getWeatherData_FT_to_flush();
int _17_guard_getWeatherData_leaf_start();
double _19_leaf_trans_dist_func__getHistoricalDa();
int _1_guard_PLC_HW_fail();
int _20_cardinality_getHistoricalDa_end_to_flush();
int _21_guard_getHistoricalDa_HW_fail();
int _22_cardinality_getHistoricalDa_HW_fail_to_flush();
int _23_cardinality_getHistoricalDa_FT_to_flush();
int _24_guard_getHistoricalDa_leaf_start();
int _25_guard_getHistoricalDa_leaf_flush();
double _26_leaf_trans_dist_func__computeTOUs();
int _27_cardinality_computeTOUs_end_to_flush();
int _28_guard_computeTOUs_HW_fail();
int _29_cardinality_computeTOUs_HW_fail_to_flush();
int _2_cardinality_PLC_HWf_to_flush();
int _30_cardinality_computeTOUs_FT_to_flush();
int _31_guard_computeTOUs_leaf_start();
int _32_guard_computeTOUs_leaf_flush();
double _33_leaf_trans_dist_func__uploadTOU();
int _34_cardinality_uploadTOU_end_to_flush();
int _35_guard_uploadTOU_HW_fail();
int _36_cardinality_uploadTOU_HW_fail_to_flush();
int _37_cardinality_uploadTOU_FT_to_flush();
int _38_guard_uploadTOU_leaf_start();
int _39_guard_uploadTOU_leaf_flush();
int _40_halting_DCServer();
int _41_guard_loop_flush();
int _42_cardinality_getWeatherData_loop_control_to_flush();
int _43_cardinality_getWeatherData_loop_control_to_flush();
int _44_guard_PLC_comm_flush();
int _45_guard_getWeatherData_leaf_flush();
int _46_guard_DatabaseWM_state_to_down();
double _47_comm_trans_dist_func__PLC();
int _48_cardinality_PLC_trEnd_to_flush();
int _49_guard_PLC_comm_start();
int _4_cardinality_Conn2Interrupte_trFail_to_flush();
double _50_comm_trans_dist_func__PLC();
int _51_cardinality_PLC_trEnd_to_flush();
int _52_guard_PLC_comm_start();
double _53_comm_trans_dist_func__PLC();
int _54_cardinality_PLC_trEnd_to_flush();
int _55_guard_PLC_comm_start();
int _5_guard_PLC_HW_fail();
int _6_cardinality_PLC_HWf_to_flush();
int _7_guard_PLC_comm_flush();
int _8_cardinality_Conn3Interrupte_trFail_to_flush();
int _9_guard_PLC_HW_fail();

/* Global functions definitions */
int _0_cardinality_Conn1Interrupte_trFail_to_flush() {
	return mark("PConn1Int_trFail_12");
}
int _10_cardinality_PLC_HWf_to_flush() {
	return mark("PPLC_HWf_22");
}
int _11_guard_PLC_comm_flush() {
	return (mark("PPLC_trEnd_21") || mark("PPLC_HWf_22") || mark("PConn3Int_trFail_20")) &&
	       (0);
}
double _12_leaf_trans_dist_func__getWeatherData() {
	return 1 / ((mark("PWeatherS_UP_2") * 4.000000 * 1.000000));
}
int _13_cardinality_getWeatherData_end_to_flush() {
	return mark("PgetWeath_end_27");
}
int _14_guard_getWeatherData_HW_fail() {
	return mark("PDCServer_DOWN_1") || mark("PWeatherS_DOWN_3");
}
int _15_cardinality_getWeatherData_HW_fail_to_flush() {
	return mark("PgetWeath_HW_fail_28");
}
int _16_cardinality_getWeatherData_FT_to_flush() {
	return mark("PgetWeath_FT_Inva_29");
}
int _17_guard_getWeatherData_leaf_start() {
	return mark("PL_getWea_Weather_25") && !(mark("PgetWeath_start_26") || mark("PgetWeath_end_27") || mark("PgetWeath_FT_Inva_29") || mark("PgetWeath_HW_fail_28"));
}
double _19_leaf_trans_dist_func__getHistoricalDa() {
	return 1 / ((mark("PDatabase_UP_4") * 2.000000 * 1.000000));
}
int _1_guard_PLC_HW_fail() {
	return mark("PWeatherS_DOWN_3") || mark("PDCServer_DOWN_1");
}
int _20_cardinality_getHistoricalDa_end_to_flush() {
	return mark("PgetHisto_end_32");
}
int _21_guard_getHistoricalDa_HW_fail() {
	return mark("PDCServer_DOWN_1") || mark("PDatabase_DOWN_5");
}
int _22_cardinality_getHistoricalDa_HW_fail_to_flush() {
	return mark("PgetHisto_HW_fail_33");
}
int _23_cardinality_getHistoricalDa_FT_to_flush() {
	return mark("PgetHisto_FT_DBQu_34");
}
int _24_guard_getHistoricalDa_leaf_start() {
	return mark("PL_getHis_Databas_30") && !(mark("PgetHisto_start_31") || mark("PgetHisto_end_32") || mark("PgetHisto_FT_DBQu_34") || mark("PgetHisto_HW_fail_33"));
}
int _25_guard_getHistoricalDa_leaf_flush() {
	return (mark("PgetHisto_end_32") || mark("PgetHisto_HW_fail_33") || mark("PgetHisto_FT_DBQu_34")) &&
	       (0);
}
double _26_leaf_trans_dist_func__computeTOUs() {
	return 1 / ((mark("PDCServer_UP_0") * 100.000000 * 1.000000));
}
int _27_cardinality_computeTOUs_end_to_flush() {
	return mark("PcomputeT_end_37");
}
int _28_guard_computeTOUs_HW_fail() {
	return mark("PDCServer_DOWN_1");
}
int _29_cardinality_computeTOUs_HW_fail_to_flush() {
	return mark("PcomputeT_HW_fail_38");
}
int _2_cardinality_PLC_HWf_to_flush() {
	return mark("PPLC_HWf_14");
}
int _30_cardinality_computeTOUs_FT_to_flush() {
	return mark("PcomputeT_FT_Inva_39");
}
int _31_guard_computeTOUs_leaf_start() {
	return mark("PL_comput_DCServe_35") && !(mark("PcomputeT_start_36") || mark("PcomputeT_end_37") || mark("PcomputeT_FT_Inva_39") || mark("PcomputeT_HW_fail_38"));
}
int _32_guard_computeTOUs_leaf_flush() {
	return (mark("PcomputeT_end_37") || mark("PcomputeT_HW_fail_38") || mark("PcomputeT_FT_Inva_39")) &&
	       (0);
}
double _33_leaf_trans_dist_func__uploadTOU() {
	return 1 / ((mark("PSmartMet_UP_8") * 5.000000 * 1.000000) + (mark("PSmartMet_SAFE_MO_10") * 5.000000 * 1.000000));
}
int _34_cardinality_uploadTOU_end_to_flush() {
	return mark("PuploadTO_end_44");
}
int _35_guard_uploadTOU_HW_fail() {
	return mark("PSmartMet_DOWN_9") || mark("PSmartMet_SAFE_MO_10") || mark("PDataConc_DOWN_7") || mark("PDCServer_DOWN_1");
}
int _36_cardinality_uploadTOU_HW_fail_to_flush() {
	return mark("PuploadTO_HW_fail_45");
}
int _37_cardinality_uploadTOU_FT_to_flush() {
	return mark("PuploadTO_FT_Uplo_46");
}
int _38_guard_uploadTOU_leaf_start() {
	return mark("PL_upload_SmartMe_42") && !(mark("PuploadTO_start_43") || mark("PuploadTO_end_44") || mark("PuploadTO_FT_Uplo_46") || mark("PuploadTO_HW_fail_45"));
}
int _39_guard_uploadTOU_leaf_flush() {
	return (mark("PuploadTO_end_44") || mark("PuploadTO_HW_fail_45") || mark("PuploadTO_FT_Uplo_46")) &&
	       (0);
}
int _40_halting_DCServer() {
	return !mark("Pcontrol_end_47");
}
int _41_guard_loop_flush() {
	return ((mark("PConn1Int_trFail_12") || mark("PPLC_HWf_14")) || (mark("PgetWeath_FT_Inva_29") || mark("PgetWeath_HW_fail_28"))) &&
	       (mark("PC_getWea_Weather_24") || mark("PL_getWea_Weather_25"));
}
int _42_cardinality_getWeatherData_loop_control_to_flush() {
	return mark("PC_getWea_Weather_24");
}
int _43_cardinality_getWeatherData_loop_control_to_flush() {
	return mark("PL_getWea_Weather_25");
}
int _44_guard_PLC_comm_flush() {
	return (mark("PPLC_trEnd_13") || mark("PPLC_HWf_14") || mark("PConn1Int_trFail_12")) &&
	       (mark("Ploop_flush_48"));
}
int _45_guard_getWeatherData_leaf_flush() {
	return (mark("PgetWeath_end_27") || mark("PgetWeath_HW_fail_28") || mark("PgetWeath_FT_Inva_29")) &&
	       (mark("Ploop_flush_48"));
}
int _46_guard_DatabaseWM_state_to_down() {
	return mark("PDCServer_DOWN_1");
}
double _47_comm_trans_dist_func__PLC() {
	return mark("PC_getWea_Weather_24") * 200;
}
int _48_cardinality_PLC_trEnd_to_flush() {
	return mark("PPLC_trEnd_13");
}
int _49_guard_PLC_comm_start() {
	return (mark("PC_getWea_Weather_24")) && !(mark("PPLC_trStart_11") || mark("PPLC_trEnd_13") || mark("PConn1Int_trFail_12") || mark("PPLC_HWf_14"));
}
int _4_cardinality_Conn2Interrupte_trFail_to_flush() {
	return mark("PConn2Int_trFail_16");
}
double _50_comm_trans_dist_func__PLC() {
	return mark("PC_sendTO_DataCon_40") * 1.3;
}
int _51_cardinality_PLC_trEnd_to_flush() {
	return mark("PPLC_trEnd_17");
}
int _52_guard_PLC_comm_start() {
	return (mark("PC_sendTO_DataCon_40")) && !(mark("PPLC_trStart_15") || mark("PPLC_trEnd_17") || mark("PConn2Int_trFail_16") || mark("PPLC_HWf_18"));
}
double _53_comm_trans_dist_func__PLC() {
	return mark("PC_upload_SmartMe_41") * 0.937000;
}
int _54_cardinality_PLC_trEnd_to_flush() {
	return mark("PPLC_trEnd_21");
}
int _55_guard_PLC_comm_start() {
	return (mark("PC_upload_SmartMe_41")) && !(mark("PPLC_trStart_19") || mark("PPLC_trEnd_21") || mark("PConn3Int_trFail_20") || mark("PPLC_HWf_22"));
}
int _5_guard_PLC_HW_fail() {
	return mark("PDataConc_DOWN_7") || mark("PDCServer_DOWN_1");
}
int _6_cardinality_PLC_HWf_to_flush() {
	return mark("PPLC_HWf_18");
}
int _7_guard_PLC_comm_flush() {
	return (mark("PPLC_trEnd_17") || mark("PPLC_HWf_18") || mark("PConn2Int_trFail_16")) &&
	       (0);
}
int _8_cardinality_Conn3Interrupte_trFail_to_flush() {
	return mark("PConn3Int_trFail_20");
}
int _9_guard_PLC_HW_fail() {
	return mark("PDataConc_DOWN_7") || mark("PSmartMet_DOWN_9");
}

void options() {
	// /* Options Analytical*/
	//iopt(IOP_MC, VAL_CTMC);
	//iopt(IOP_SSMETHOD, VAL_POWER);
	//iopt(IOP_SSDETECT, VAL_YES);
	//fopt(FOP_SSPRES, 0.25);
	//iopt(IOP_TSMETHOD, VAL_FOXUNIF);
	//iopt(IOP_CUMULATIVE, VAL_YES);
	//iopt(IOP_SENSITIVITY, VAL_NO);
	//iopt(IOP_ITERATIONS, 2000);
	//fopt(FOP_PRECISION, 0.000001);
	//iopt(IOP_SIMULATION, VAL_NO);

	/* Options - Simulation */
	 iopt(IOP_SIMULATION, VAL_YES);
	 iopt(IOP_SIM_RUNS, 100000);
	 iopt(IOP_SIM_RUNMETHOD, VAL_REPL);
	 iopt(IOP_SIM_SEED, 52836);
	 iopt(IOP_SIM_CUMULATIVE, VAL_YES);
	 iopt(IOP_SIM_STD_REPORT, VAL_YES);
	 iopt(IOP_SPLIT_LEVEL_DOWN, 60);
	 iopt(IOP_SPLIT_PRESIM, VAL_YES);
	 iopt(IOP_SPLIT_NUMBER, 6);
	 iopt(IOP_SPLIT_RESTART_FINISH, VAL_NO);
	 iopt(IOP_SPLIT_PRESIM_RUNS, 10);
	 fopt(FOP_SIM_LENGTH, 10000.0);
	 fopt(FOP_SIM_CONFIDENCE, 0.95);
	 fopt(FOP_SIM_ERROR, 0.1);



	/* Input parameters initialization */
}

void net() {
	/* SPNP parameters creation */

	/* Places */
	// Control segment - Control place of communication segment ("getWeatherData()")
	place("PC_getWea_Weather_24");
	// Control segment - Control place of communication segment ("sendTOUs()")
	place("PC_sendTO_DataCon_40");
	// Control segment - Control place of communication segment ("uploadTOU()")
	place("PC_upload_SmartMe_41");
	// Communication segment "PLC" [WeatherService - DC Server] - Failure place ("Conn1Interrupted")
	place("PConn1Int_trFail_12");
	// Communication segment "PLC" [DataConcentrator - DC Server] - Failure place ("Conn2Interrupted")
	place("PConn2Int_trFail_16");
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Failure place ("Conn3Interrupted")
	place("PConn3Int_trFail_20");
	// Physical segment "DC Server" - State "DOWN" place
	place("PDCServer_DOWN_1");
	// Physical segment "DC Server" - State "UP" place
	place("PDCServer_UP_0");
	init("PDCServer_UP_0", 1);
	// Physical segment "DataConcentrator" - State "DOWN" place
	place("PDataConc_DOWN_7");
	// Physical segment "DataConcentrator" - State "UP" place
	place("PDataConc_UP_6");
	init("PDataConc_UP_6", 1);
	// Physical segment "DatabaseWM" - State "DOWN" place
	place("PDatabase_DOWN_5");
	// Physical segment "DatabaseWM" - State "UP" place
	place("PDatabase_UP_4");
	init("PDatabase_UP_4", 1);
	// Control segment - Control place of execution segment ("computeTOUs()")
	place("PL_comput_DCServe_35");
	// Control segment - Control place of execution segment ("getHistoricalData()")
	place("PL_getHis_Databas_30");
	// Control segment - Control place of execution segment ("getWeatherData()")
	place("PL_getWea_Weather_25");
	// Control segment - Control place of execution segment ("uploadTOU()")
	place("PL_upload_SmartMe_42");
	// Communication segment "PLC" [WeatherService - DC Server] - Hardware failure place
	place("PPLC_HWf_14");
	// Communication segment "PLC" [DataConcentrator - DC Server] - Hardware failure place
	place("PPLC_HWf_18");
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Hardware failure place
	place("PPLC_HWf_22");
	// Communication segment "PLC" [WeatherService - DC Server] - End place
	place("PPLC_trEnd_13");
	// Communication segment "PLC" [DataConcentrator - DC Server] - End place
	place("PPLC_trEnd_17");
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - End place
	place("PPLC_trEnd_21");
	// Communication segment "PLC" [WeatherService - DC Server] - Start place
	place("PPLC_trStart_11");
	// Communication segment "PLC" [DataConcentrator - DC Server] - Start place
	place("PPLC_trStart_15");
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Start place
	place("PPLC_trStart_19");
	// Physical segment "Smart Meter" - State "DOWN" place
	place("PSmartMet_DOWN_9");
	// Physical segment "Smart Meter" - State "SAFE_MODE" place
	place("PSmartMet_SAFE_MO_10");
	// Physical segment "Smart Meter" - State "UP" place
	place("PSmartMet_UP_8");
	init("PSmartMet_UP_8", 1);
	// Physical segment "WeatherService" - State "DOWN" place
	place("PWeatherS_DOWN_3");
	// Physical segment "WeatherService" - State "UP" place
	place("PWeatherS_UP_2");
	init("PWeatherS_UP_2", 1);
	// Execution service segment ["computeTOUs()"] - Failure place ("InvalidTOU")
	place("PcomputeT_FT_Inva_39");
	// Execution service segment ["computeTOUs()"] - Hardware failure place
	place("PcomputeT_HW_fail_38");
	// Execution service segment ["computeTOUs()"] - End place
	place("PcomputeT_end_37");
	// Execution service segment ["computeTOUs()"] - Start place
	place("PcomputeT_start_36");
	// Control segment - Control end place
	place("Pcontrol_end_47");
	// Control segment - Control start place
	place("Pcontrol_start_23");
	init("Pcontrol_start_23", 1);
	// Execution service segment ["getHistoricalData()"] - Failure place ("DBQueryError")
	place("PgetHisto_FT_DBQu_34");
	// Execution service segment ["getHistoricalData()"] - Hardware failure place
	place("PgetHisto_HW_fail_33");
	// Execution service segment ["getHistoricalData()"] - End place
	place("PgetHisto_end_32");
	// Execution service segment ["getHistoricalData()"] - Start place
	place("PgetHisto_start_31");
	// Execution service segment ["getWeatherData()"] - Failure place ("InvalidDataError")
	place("PgetWeath_FT_Inva_29");
	// Execution service segment ["getWeatherData()"] - Hardware failure place
	place("PgetWeath_HW_fail_28");
	// Execution service segment ["getWeatherData()"] - End place
	place("PgetWeath_end_27");
	// Execution service segment ["getWeatherData()"] - Start place
	place("PgetWeath_start_26");
	// Loop segment [iterations: 2 rate: 0.0000] - Flush place
	place("Ploop_flush_48");
	// Loop segment [iterations: 2 rate: 0.0000] - Repeats place
	place("Ploop_repeats_49");
	// Execution service segment ["uploadTOU()"] - Failure place ("UploadError")
	place("PuploadTO_FT_Uplo_46");
	// Execution service segment ["uploadTOU()"] - Hardware failure place
	place("PuploadTO_HW_fail_45");
	// Execution service segment ["uploadTOU()"] - End place
	place("PuploadTO_end_44");
	// Execution service segment ["uploadTOU()"] - Start place
	place("PuploadTO_start_43");

	/* Transitions */
	// Control segment - Control transition of communication segment ("getWeatherData()")
	imm("TC_getWeatherData_24");
	priority("TC_getWeatherData_24", 1);
	probval("TC_getWeatherData_24", 1.0);
	// Control segment - Control transition of communication segment ("sendTOUs()")
	imm("TC_sendTOUs_43");
	priority("TC_sendTOUs_43", 1);
	probval("TC_sendTOUs_43", 1.0);
	// Control segment - Control transition of communication segment ("uploadTOU()")
	imm("TC_uploadTOU_44");
	priority("TC_uploadTOU_44", 1);
	probval("TC_uploadTOU_44", 1.0);
	// Communication segment "PLC" [WeatherService - DC Server] - Failure transition ("Conn1Interrupted")
	rateval("TConn1Int_trFail_13", 0.0001);
	priority("TConn1Int_trFail_13", 0);
	// Communication segment "PLC" [DataConcentrator - DC Server] - Failure transition ("Conn2Interrupted")
	rateval("TConn2Int_trFail_17", 0.001);
	priority("TConn2Int_trFail_17", 0);
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Failure transition ("Conn3Interrupted")
	rateval("TConn3Int_trFail_21", 0.001);
	priority("TConn3Int_trFail_21", 0);
	// Physical segment "DC Server" - State transition ["UP" -> "DOWN"] 
	rateval("TDCServer_Failure_0", 0.000001);
	priority("TDCServer_Failure_0", 0);
	// Physical segment "DC Server" - State transition ["DOWN" -> "UP"] 
	rateval("TDCServer_Restart_1", 0.003);
	priority("TDCServer_Restart_1", 0);
	// Physical segment "DataConcentrator" - State transition ["UP" -> "DOWN"] 
	rateval("TDataConc_Failure_6", 0.000001);
	priority("TDataConc_Failure_6", 0);
	// Physical segment "DataConcentrator" - State transition ["DOWN" -> "UP"] 
	rateval("TDataConc_Restart_7", 0.008);
	priority("TDataConc_Restart_7", 0);
	// Physical segment "DatabaseWM" - State transition ["UP" -> "DOWN"] 
	rateval("TDatabase_Failure_4", 0.000001);
	priority("TDatabase_Failure_4", 0);
	// Physical segment "DatabaseWM" - State transition ["DOWN" -> "UP"] 
	rateval("TDatabase_Restart_5", 0.5);
	priority("TDatabase_Restart_5", 0);
	// Physical segment "DatabaseWM" - State to down transition [state "UP"]
	imm("TDatabase_parent_53");
	priority("TDatabase_parent_53", 30);
	guard("TDatabase_parent_53", _46_guard_DatabaseWM_state_to_down);
	probval("TDatabase_parent_53", 1.0);
	// Control segment - Control transition of execution segment ("computeTOUs()")
	imm("TL_computeTOUs_42");
	priority("TL_computeTOUs_42", 1);
	probval("TL_computeTOUs_42", 1.0);
	// Control segment - Control transition of execution segment ("getHistoricalData()")
	imm("TL_getHistoricalD_36");
	priority("TL_getHistoricalD_36", 1);
	probval("TL_getHistoricalD_36", 1.0);
	// Control segment - Control transition of execution segment ("getWeatherData()")
	imm("TL_getWeatherData_30");
	priority("TL_getWeatherData_30", 1);
	probval("TL_getWeatherData_30", 1.0);
	// Control segment - Control transition of execution segment ("uploadTOU()")
	imm("TL_uploadTOU_50");
	priority("TL_uploadTOU_50", 1);
	probval("TL_uploadTOU_50", 1.0);
	// Communication segment "PLC" [WeatherService - DC Server] - Hardware failure transition
	imm("TPLC_HWf_14");
	priority("TPLC_HWf_14", 1);
	guard("TPLC_HWf_14", _1_guard_PLC_HW_fail);
	probval("TPLC_HWf_14", 1.0);
	// Communication segment "PLC" [DataConcentrator - DC Server] - Hardware failure transition
	imm("TPLC_HWf_18");
	priority("TPLC_HWf_18", 1);
	guard("TPLC_HWf_18", _5_guard_PLC_HW_fail);
	probval("TPLC_HWf_18", 1.0);
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Hardware failure transition
	imm("TPLC_HWf_22");
	priority("TPLC_HWf_22", 1);
	guard("TPLC_HWf_22", _9_guard_PLC_HW_fail);
	probval("TPLC_HWf_22", 1.0);
	// Communication segment "PLC" [WeatherService - DC Server] - Flush transition
	imm("TPLC_comFlush_12");
	priority("TPLC_comFlush_12", 10);
	guard("TPLC_comFlush_12", _44_guard_PLC_comm_flush);
	probval("TPLC_comFlush_12", 1.0);
	// Communication segment "PLC" [DataConcentrator - DC Server] - Flush transition
	imm("TPLC_comFlush_16");
	priority("TPLC_comFlush_16", 10);
	guard("TPLC_comFlush_16", _7_guard_PLC_comm_flush);
	probval("TPLC_comFlush_16", 1.0);
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Flush transition
	imm("TPLC_comFlush_20");
	priority("TPLC_comFlush_20", 10);
	guard("TPLC_comFlush_20", _11_guard_PLC_comm_flush);
	probval("TPLC_comFlush_20", 1.0);
	// Communication segment "PLC" [WeatherService - DC Server] - Initial transition
	imm("TPLC_comStart_11");
	priority("TPLC_comStart_11", 1);
	guard("TPLC_comStart_11", _49_guard_PLC_comm_start);
	probval("TPLC_comStart_11", 1.0);
	// Communication segment "PLC" [DataConcentrator - DC Server] - Initial transition
	imm("TPLC_comStart_15");
	priority("TPLC_comStart_15", 1);
	guard("TPLC_comStart_15", _52_guard_PLC_comm_start);
	probval("TPLC_comStart_15", 1.0);
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - Initial transition
	imm("TPLC_comStart_19");
	priority("TPLC_comStart_19", 1);
	guard("TPLC_comStart_19", _55_guard_PLC_comm_start);
	probval("TPLC_comStart_19", 1.0);
	// Communication segment "PLC" [WeatherService - DC Server] - End transition
	ratefun("TPLC_trEnd_54", _47_comm_trans_dist_func__PLC);
	priority("TPLC_trEnd_54", 0);
	// Communication segment "PLC" [DataConcentrator - DC Server] - End transition
	ratefun("TPLC_trEnd_55", _50_comm_trans_dist_func__PLC);
	priority("TPLC_trEnd_55", 0);
	// Communication segment "PLC" [DataConcentrator - Smart Meter] - End transition
	ratefun("TPLC_trEnd_56", _53_comm_trans_dist_func__PLC);
	priority("TPLC_trEnd_56", 0);
	// Physical segment "Smart Meter" - State transition ["UP" -> "DOWN"] 
	rateval("TSmartMet_Failure_8", 0.0001);
	priority("TSmartMet_Failure_8", 0);
	// Physical segment "Smart Meter" - State transition ["UP" -> "SAFE_MODE"] 
	rateval("TSmartMet_MemoryO_10", 0.001);
	priority("TSmartMet_MemoryO_10", 0);
	// Physical segment "Smart Meter" - State transition ["DOWN" -> "UP"] 
	rateval("TSmartMet_Restart_9", 0.008);
	priority("TSmartMet_Restart_9", 0);
	// Physical segment "WeatherService" - State transition ["UP" -> "DOWN"] 
	rateval("TWeatherS_Failure_2", 0.000001);
	priority("TWeatherS_Failure_2", 0);
	// Physical segment "WeatherService" - State transition ["DOWN" -> "UP"] 
	rateval("TWeatherS_Restart_3", 0.003);
	priority("TWeatherS_Restart_3", 0);
	// Execution service segment ["computeTOUs()"] - Failure transition ("InvalidTOU")
	rateval("TcomputeT_FT_Inva_41", 0.0001);
	priority("TcomputeT_FT_Inva_41", 0);
	// Execution service segment ["computeTOUs()"] - Hardware failure transition
	imm("TcomputeT_HW_fail_40");
	priority("TcomputeT_HW_fail_40", 1);
	guard("TcomputeT_HW_fail_40", _28_guard_computeTOUs_HW_fail);
	probval("TcomputeT_HW_fail_40", 1.0);
	// Execution service segment ["computeTOUs()"] - End transition
	ratefun("TcomputeT_end_39", _26_leaf_trans_dist_func__computeTOUs);
	priority("TcomputeT_end_39", 0);
	// Execution service segment ["computeTOUs()"] - Flush transition
	imm("TcomputeT_flush_38");
	priority("TcomputeT_flush_38", 10);
	guard("TcomputeT_flush_38", _32_guard_computeTOUs_leaf_flush);
	probval("TcomputeT_flush_38", 1.0);
	// Execution service segment ["computeTOUs()"] - Initial transition
	imm("TcomputeT_start_37");
	priority("TcomputeT_start_37", 1);
	guard("TcomputeT_start_37", _31_guard_computeTOUs_leaf_start);
	probval("TcomputeT_start_37", 1.0);
	// Control segment - Control start transition
	imm("Tcontrol_start_23");
	priority("Tcontrol_start_23", 1);
	probval("Tcontrol_start_23", 1.0);
	// Execution service segment ["getHistoricalData()"] - Failure transition ("DBQueryError")
	rateval("TgetHisto_FT_DBQu_35", 0.0001);
	priority("TgetHisto_FT_DBQu_35", 0);
	// Execution service segment ["getHistoricalData()"] - Hardware failure transition
	imm("TgetHisto_HW_fail_34");
	priority("TgetHisto_HW_fail_34", 1);
	guard("TgetHisto_HW_fail_34", _21_guard_getHistoricalDa_HW_fail);
	probval("TgetHisto_HW_fail_34", 1.0);
	// Execution service segment ["getHistoricalData()"] - End transition
	ratefun("TgetHisto_end_33", _19_leaf_trans_dist_func__getHistoricalDa);
	priority("TgetHisto_end_33", 0);
	// Execution service segment ["getHistoricalData()"] - Flush transition
	imm("TgetHisto_flush_32");
	priority("TgetHisto_flush_32", 10);
	guard("TgetHisto_flush_32", _25_guard_getHistoricalDa_leaf_flush);
	probval("TgetHisto_flush_32", 1.0);
	// Execution service segment ["getHistoricalData()"] - Initial transition
	imm("TgetHisto_start_31");
	priority("TgetHisto_start_31", 1);
	guard("TgetHisto_start_31", _24_guard_getHistoricalDa_leaf_start);
	probval("TgetHisto_start_31", 1.0);
	// Execution service segment ["getWeatherData()"] - Failure transition ("InvalidDataError")
	rateval("TgetWeath_FT_Inva_29", 0.001);
	priority("TgetWeath_FT_Inva_29", 0);
	// Execution service segment ["getWeatherData()"] - Hardware failure transition
	imm("TgetWeath_HW_fail_28");
	priority("TgetWeath_HW_fail_28", 1);
	guard("TgetWeath_HW_fail_28", _14_guard_getWeatherData_HW_fail);
	probval("TgetWeath_HW_fail_28", 1.0);
	// Execution service segment ["getWeatherData()"] - End transition
	ratefun("TgetWeath_end_27", _12_leaf_trans_dist_func__getWeatherData);
	priority("TgetWeath_end_27", 0);
	// Execution service segment ["getWeatherData()"] - Flush transition
	imm("TgetWeath_flush_26");
	priority("TgetWeath_flush_26", 10);
	guard("TgetWeath_flush_26", _45_guard_getWeatherData_leaf_flush);
	probval("TgetWeath_flush_26", 1.0);
	// Execution service segment ["getWeatherData()"] - Initial transition
	imm("TgetWeath_start_25");
	priority("TgetWeath_start_25", 1);
	guard("TgetWeath_start_25", _17_guard_getWeatherData_leaf_start);
	probval("TgetWeath_start_25", 1.0);
	// Loop segment [iterations: 2 rate: 0.0000] - Flush transition
	imm("Tloop_flush_51");
	priority("Tloop_flush_51", 20);
	guard("Tloop_flush_51", _41_guard_loop_flush);
	probval("Tloop_flush_51", 1.0);
	// Loop segment [iterations: 2 rate: 0.0000] - Restart transition
	imm("Tloop_restart_52");
	priority("Tloop_restart_52", 5);
	probval("Tloop_restart_52", 1.0);
	// Execution service segment ["uploadTOU()"] - Failure transition ("UploadError")
	rateval("TuploadTO_FT_Uplo_49", 0.0001);
	priority("TuploadTO_FT_Uplo_49", 0);
	// Execution service segment ["uploadTOU()"] - Hardware failure transition
	imm("TuploadTO_HW_fail_48");
	priority("TuploadTO_HW_fail_48", 1);
	guard("TuploadTO_HW_fail_48", _35_guard_uploadTOU_HW_fail);
	probval("TuploadTO_HW_fail_48", 1.0);
	// Execution service segment ["uploadTOU()"] - End transition
	ratefun("TuploadTO_end_47", _33_leaf_trans_dist_func__uploadTOU);
	priority("TuploadTO_end_47", 0);
	// Execution service segment ["uploadTOU()"] - Flush transition
	imm("TuploadTO_flush_46");
	priority("TuploadTO_flush_46", 10);
	guard("TuploadTO_flush_46", _39_guard_uploadTOU_leaf_flush);
	probval("TuploadTO_flush_46", 1.0);
	// Execution service segment ["uploadTOU()"] - Initial transition
	imm("TuploadTO_start_45");
	priority("TuploadTO_start_45", 1);
	guard("TuploadTO_start_45", _38_guard_uploadTOU_leaf_start);
	probval("TuploadTO_start_45", 1.0);

	/* Arcs */
	iarc("TDCServer_Failure_0", "PDCServer_UP_0");
	oarc("TDCServer_Failure_0", "PDCServer_DOWN_1");
	iarc("TDCServer_Restart_1", "PDCServer_DOWN_1");
	oarc("TDCServer_Restart_1", "PDCServer_UP_0");
	iarc("TWeatherS_Failure_2", "PWeatherS_UP_2");
	oarc("TWeatherS_Failure_2", "PWeatherS_DOWN_3");
	iarc("TWeatherS_Restart_3", "PWeatherS_DOWN_3");
	oarc("TWeatherS_Restart_3", "PWeatherS_UP_2");
	iarc("TDatabase_Failure_4", "PDatabase_UP_4");
	oarc("TDatabase_Failure_4", "PDatabase_DOWN_5");
	iarc("TDatabase_Restart_5", "PDatabase_DOWN_5");
	oarc("TDatabase_Restart_5", "PDatabase_UP_4");
	iarc("TDataConc_Failure_6", "PDataConc_UP_6");
	oarc("TDataConc_Failure_6", "PDataConc_DOWN_7");
	iarc("TDataConc_Restart_7", "PDataConc_DOWN_7");
	oarc("TDataConc_Restart_7", "PDataConc_UP_6");
	iarc("TSmartMet_Failure_8", "PSmartMet_UP_8");
	oarc("TSmartMet_Failure_8", "PSmartMet_DOWN_9");
	iarc("TSmartMet_Restart_9", "PSmartMet_DOWN_9");
	oarc("TSmartMet_Restart_9", "PSmartMet_UP_8");
	iarc("TSmartMet_MemoryO_10", "PSmartMet_UP_8");
	oarc("TSmartMet_MemoryO_10", "PSmartMet_SAFE_MO_10");
	oarc("TPLC_comStart_11", "PPLC_trStart_11");
	iarc("TConn1Int_trFail_13", "PPLC_trStart_11");
	oarc("TConn1Int_trFail_13", "PConn1Int_trFail_12");
	viarc("TPLC_comFlush_12", "PConn1Int_trFail_12", _0_cardinality_Conn1Interrupte_trFail_to_flush);
	iarc("TPLC_HWf_14", "PPLC_trStart_11");
	oarc("TPLC_HWf_14", "PPLC_HWf_14");
	viarc("TPLC_comFlush_12", "PPLC_HWf_14", _2_cardinality_PLC_HWf_to_flush);
	oarc("TPLC_comStart_15", "PPLC_trStart_15");
	iarc("TConn2Int_trFail_17", "PPLC_trStart_15");
	oarc("TConn2Int_trFail_17", "PConn2Int_trFail_16");
	viarc("TPLC_comFlush_16", "PConn2Int_trFail_16", _4_cardinality_Conn2Interrupte_trFail_to_flush);
	iarc("TPLC_HWf_18", "PPLC_trStart_15");
	oarc("TPLC_HWf_18", "PPLC_HWf_18");
	viarc("TPLC_comFlush_16", "PPLC_HWf_18", _6_cardinality_PLC_HWf_to_flush);
	oarc("TPLC_comStart_19", "PPLC_trStart_19");
	iarc("TConn3Int_trFail_21", "PPLC_trStart_19");
	oarc("TConn3Int_trFail_21", "PConn3Int_trFail_20");
	viarc("TPLC_comFlush_20", "PConn3Int_trFail_20", _8_cardinality_Conn3Interrupte_trFail_to_flush);
	iarc("TPLC_HWf_22", "PPLC_trStart_19");
	oarc("TPLC_HWf_22", "PPLC_HWf_22");
	viarc("TPLC_comFlush_20", "PPLC_HWf_22", _10_cardinality_PLC_HWf_to_flush);
	iarc("Tcontrol_start_23", "Pcontrol_start_23");
	oarc("Tcontrol_start_23", "PC_getWea_Weather_24");
	iarc("TC_getWeatherData_24", "PPLC_trEnd_13");
	iarc("TC_getWeatherData_24", "PC_getWea_Weather_24");
	oarc("TC_getWeatherData_24", "PL_getWea_Weather_25");
	oarc("TgetWeath_start_25", "PgetWeath_start_26");
	iarc("TgetWeath_end_27", "PgetWeath_start_26");
	oarc("TgetWeath_end_27", "PgetWeath_end_27");
	viarc("TgetWeath_flush_26", "PgetWeath_end_27", _13_cardinality_getWeatherData_end_to_flush);
	iarc("TgetWeath_HW_fail_28", "PgetWeath_start_26");
	oarc("TgetWeath_HW_fail_28", "PgetWeath_HW_fail_28");
	viarc("TgetWeath_flush_26", "PgetWeath_HW_fail_28", _15_cardinality_getWeatherData_HW_fail_to_flush);
	iarc("TgetWeath_FT_Inva_29", "PgetWeath_start_26");
	oarc("TgetWeath_FT_Inva_29", "PgetWeath_FT_Inva_29");
	viarc("TgetWeath_flush_26", "PgetWeath_FT_Inva_29", _16_cardinality_getWeatherData_FT_to_flush);
	iarc("TL_getWeatherData_30", "PgetWeath_end_27");
	iarc("TL_getWeatherData_30", "PL_getWea_Weather_25");
	oarc("TL_getWeatherData_30", "PL_getHis_Databas_30");
	oarc("TgetHisto_start_31", "PgetHisto_start_31");
	iarc("TgetHisto_end_33", "PgetHisto_start_31");
	oarc("TgetHisto_end_33", "PgetHisto_end_32");
	viarc("TgetHisto_flush_32", "PgetHisto_end_32", _20_cardinality_getHistoricalDa_end_to_flush);
	iarc("TgetHisto_HW_fail_34", "PgetHisto_start_31");
	oarc("TgetHisto_HW_fail_34", "PgetHisto_HW_fail_33");
	viarc("TgetHisto_flush_32", "PgetHisto_HW_fail_33", _22_cardinality_getHistoricalDa_HW_fail_to_flush);
	iarc("TgetHisto_FT_DBQu_35", "PgetHisto_start_31");
	oarc("TgetHisto_FT_DBQu_35", "PgetHisto_FT_DBQu_34");
	viarc("TgetHisto_flush_32", "PgetHisto_FT_DBQu_34", _23_cardinality_getHistoricalDa_FT_to_flush);
	iarc("TL_getHistoricalD_36", "PgetHisto_end_32");
	iarc("TL_getHistoricalD_36", "PL_getHis_Databas_30");
	oarc("TL_getHistoricalD_36", "PL_comput_DCServe_35");
	oarc("TcomputeT_start_37", "PcomputeT_start_36");
	iarc("TcomputeT_end_39", "PcomputeT_start_36");
	oarc("TcomputeT_end_39", "PcomputeT_end_37");
	viarc("TcomputeT_flush_38", "PcomputeT_end_37", _27_cardinality_computeTOUs_end_to_flush);
	iarc("TcomputeT_HW_fail_40", "PcomputeT_start_36");
	oarc("TcomputeT_HW_fail_40", "PcomputeT_HW_fail_38");
	viarc("TcomputeT_flush_38", "PcomputeT_HW_fail_38", _29_cardinality_computeTOUs_HW_fail_to_flush);
	iarc("TcomputeT_FT_Inva_41", "PcomputeT_start_36");
	oarc("TcomputeT_FT_Inva_41", "PcomputeT_FT_Inva_39");
	viarc("TcomputeT_flush_38", "PcomputeT_FT_Inva_39", _30_cardinality_computeTOUs_FT_to_flush);
	iarc("TL_computeTOUs_42", "PcomputeT_end_37");
	iarc("TL_computeTOUs_42", "PL_comput_DCServe_35");
	oarc("TL_computeTOUs_42", "PC_sendTO_DataCon_40");
	iarc("TC_sendTOUs_43", "PPLC_trEnd_17");
	iarc("TC_sendTOUs_43", "PC_sendTO_DataCon_40");
	oarc("TC_sendTOUs_43", "PC_upload_SmartMe_41");
	iarc("TC_uploadTOU_44", "PPLC_trEnd_21");
	iarc("TC_uploadTOU_44", "PC_upload_SmartMe_41");
	oarc("TC_uploadTOU_44", "PL_upload_SmartMe_42");
	oarc("TuploadTO_start_45", "PuploadTO_start_43");
	iarc("TuploadTO_end_47", "PuploadTO_start_43");
	oarc("TuploadTO_end_47", "PuploadTO_end_44");
	viarc("TuploadTO_flush_46", "PuploadTO_end_44", _34_cardinality_uploadTOU_end_to_flush);
	iarc("TuploadTO_HW_fail_48", "PuploadTO_start_43");
	oarc("TuploadTO_HW_fail_48", "PuploadTO_HW_fail_45");
	viarc("TuploadTO_flush_46", "PuploadTO_HW_fail_45", _36_cardinality_uploadTOU_HW_fail_to_flush);
	iarc("TuploadTO_FT_Uplo_49", "PuploadTO_start_43");
	oarc("TuploadTO_FT_Uplo_49", "PuploadTO_FT_Uplo_46");
	viarc("TuploadTO_flush_46", "PuploadTO_FT_Uplo_46", _37_cardinality_uploadTOU_FT_to_flush);
	iarc("TL_uploadTOU_50", "PuploadTO_end_44");
	iarc("TL_uploadTOU_50", "PL_upload_SmartMe_42");
	oarc("TL_uploadTOU_50", "Pcontrol_end_47");
	viarc("Tloop_flush_51", "PC_getWea_Weather_24", _42_cardinality_getWeatherData_loop_control_to_flush);
	viarc("Tloop_flush_51", "PL_getWea_Weather_25", _43_cardinality_getWeatherData_loop_control_to_flush);
	oarc("Tloop_flush_51", "Ploop_flush_48");
	iarc("Tloop_restart_52", "Ploop_flush_48");
	oarc("Tloop_restart_52", "PC_getWea_Weather_24");
	oarc("Tloop_restart_52", "Ploop_repeats_49");
	mharc("Tloop_flush_51", "Ploop_repeats_49", 2);
	oarc("TDatabase_parent_53", "PDatabase_DOWN_5");
	iarc("TDatabase_parent_53", "PDatabase_UP_4");
	iarc("TPLC_trEnd_54", "PPLC_trStart_11");
	oarc("TPLC_trEnd_54", "PPLC_trEnd_13");
	viarc("TPLC_comFlush_12", "PPLC_trEnd_13", _48_cardinality_PLC_trEnd_to_flush);
	iarc("TPLC_trEnd_55", "PPLC_trStart_15");
	oarc("TPLC_trEnd_55", "PPLC_trEnd_17");
	viarc("TPLC_comFlush_16", "PPLC_trEnd_17", _51_cardinality_PLC_trEnd_to_flush);
	iarc("TPLC_trEnd_56", "PPLC_trStart_19");
	oarc("TPLC_trEnd_56", "PPLC_trEnd_21");
	viarc("TPLC_comFlush_20", "PPLC_trEnd_21", _54_cardinality_PLC_trEnd_to_flush);

	/* SPNP parameters bindings */

	/* Halting conditions */
	halting_condition(_40_halting_DCServer);
}

double reward_success() {
  if(mark("Pcontrol_end_47") == 1) 
    return (1.0); 
  else 
    return(0.0);
}

double reward_comm_inter() {
  if(mark("PConn1Int_trFail_12") == 1 || mark("PConn3Int_trFail_20") == 1 || mark("PConn2Int_trFail_16")==1) 
    return (1.0); 
  else 
    return(0.0);
}

double reward_sw_hw_unavail() {
  if(mark("PgetWeath_HW_fail_28") == 1 || mark("PgetHisto_HW_fail_33") == 1 || mark("PcomputeT_HW_fail_38")==1 || mark("PuploadTO_HW_fail_45")==1) 
    return (1.0); 
  else 
    return(0.0);
}

double reward_weather_fail() {
  if(mark("PgetWeath_HW_fail_28") == 1 || mark("PgetWeath_FT_Inva_29")==1 || mark("PConn1Int_trFail_12") == 1 || mark("PPLC_HWf_14")==1) 
    return (1.0); 
  else 
    return(0.0);
}

double reward_computeTOUs_fail() {
  if(mark("PcomputeT_FT_Inva_39") == 1 || mark("PcomputeT_HW_fail_38")==1) 
    return (1.0); 
  else 
    return(0.0);
}


int assert() {
	
}

void ac_init() {
	/* Information on the net structure */
	pr_net_info();
}

void ac_reach() {
	/* Information on the reachability graph */
	pr_rg_info();
}

void ac_final() {
	solve(INFINITY);
	//solve(100);



	print_qcol();
	print_rgraph();
	print_qrow();
	pr_mc_info();
	pr_std_average();
}

