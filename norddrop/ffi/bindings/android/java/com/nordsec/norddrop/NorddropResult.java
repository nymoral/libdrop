/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.nordsec.norddrop;

public final class NorddropResult {
  public final static NorddropResult NORDDROP_RES_OK = new NorddropResult("NORDDROP_RES_OK", libnorddropJNI.NORDDROP_RES_OK_get());
  public final static NorddropResult NORDDROP_RES_ERROR = new NorddropResult("NORDDROP_RES_ERROR", libnorddropJNI.NORDDROP_RES_ERROR_get());
  public final static NorddropResult NORDDROP_RES_INVALID_STRING = new NorddropResult("NORDDROP_RES_INVALID_STRING", libnorddropJNI.NORDDROP_RES_INVALID_STRING_get());
  public final static NorddropResult NORDDROP_RES_BAD_INPUT = new NorddropResult("NORDDROP_RES_BAD_INPUT", libnorddropJNI.NORDDROP_RES_BAD_INPUT_get());

  public final int swigValue() {
    return swigValue;
  }

  public String toString() {
    return swigName;
  }

  public static NorddropResult swigToEnum(int swigValue) {
    if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
      return swigValues[swigValue];
    for (int i = 0; i < swigValues.length; i++)
      if (swigValues[i].swigValue == swigValue)
        return swigValues[i];
    throw new IllegalArgumentException("No enum " + NorddropResult.class + " with value " + swigValue);
  }

  private NorddropResult(String swigName) {
    this.swigName = swigName;
    this.swigValue = swigNext++;
  }

  private NorddropResult(String swigName, int swigValue) {
    this.swigName = swigName;
    this.swigValue = swigValue;
    swigNext = swigValue+1;
  }

  private NorddropResult(String swigName, NorddropResult swigEnum) {
    this.swigName = swigName;
    this.swigValue = swigEnum.swigValue;
    swigNext = this.swigValue+1;
  }

  private static NorddropResult[] swigValues = { NORDDROP_RES_OK, NORDDROP_RES_ERROR, NORDDROP_RES_INVALID_STRING, NORDDROP_RES_BAD_INPUT };
  private static int swigNext = 0;
  private final int swigValue;
  private final String swigName;
}

