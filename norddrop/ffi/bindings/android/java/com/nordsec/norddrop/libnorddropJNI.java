/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package com.nordsec.norddrop;

public class libnorddropJNI {
  public final static native int NORDDROP_LOG_CRITICAL_get();
  public final static native int NORDDROP_LOG_ERROR_get();
  public final static native int NORDDROP_LOG_WARNING_get();
  public final static native int NORDDROP_LOG_INFO_get();
  public final static native int NORDDROP_LOG_DEBUG_get();
  public final static native int NORDDROP_LOG_TRACE_get();
  public final static native int NORDDROP_RES_OK_get();
  public final static native int NORDDROP_RES_ERROR_get();
  public final static native int NORDDROP_RES_INVALID_STRING_get();
  public final static native int NORDDROP_RES_BAD_INPUT_get();
  public final static native long new_NordDrop(INordDropEventCb jarg1, int jarg2, INordDropLoggerCb jarg3);
  public final static native void delete_NordDrop(long jarg1);
  public final static native int NordDrop_start(long jarg1, NordDrop jarg1_, String jarg2, String jarg3);
  public final static native int NordDrop_stop(long jarg1, NordDrop jarg1_);
  public final static native int NordDrop_cancelTransfer(long jarg1, NordDrop jarg1_, String jarg2);
  public final static native int NordDrop_cancelFile(long jarg1, NordDrop jarg1_, String jarg2, String jarg3);
  public final static native int NordDrop_download(long jarg1, NordDrop jarg1_, String jarg2, String jarg3, String jarg4);
  public final static native String NordDrop_newTransfer(long jarg1, NordDrop jarg1_, String jarg2, String jarg3);
  public final static native String NordDrop_version();
}
