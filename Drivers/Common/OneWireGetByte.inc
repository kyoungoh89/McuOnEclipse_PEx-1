%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetByte)
%;**     Description :
%;**         Get a single byte from the bus
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to were to store the data
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine