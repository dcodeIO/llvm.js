#include "llvm.h"

LLVM_API LLVMBool VerifyModule(
  LLVMModuleRef M,
  LLVMVerifierFailureAction Action,
  char **OutMessage
) { return LLVMVerifyModule(M, Action, OutMessage); }

LLVM_API LLVMBool VerifyFunction(
  LLVMValueRef Fn,
  LLVMVerifierFailureAction Action
) { return LLVMVerifyFunction(Fn, Action); }

LLVM_API void ViewFunctionCFG(
  LLVMValueRef Fn
) { return LLVMViewFunctionCFG(Fn); }

LLVM_API void ViewFunctionCFGOnly(
  LLVMValueRef Fn
) { return LLVMViewFunctionCFGOnly(Fn); }

LLVM_API LLVMBool ParseBitcode(
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutModule,
  char **OutMessage
) { return LLVMParseBitcode(MemBuf, OutModule, OutMessage); }

LLVM_API LLVMBool ParseBitcode2(
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutModule
) { return LLVMParseBitcode2(MemBuf, OutModule); }

LLVM_API LLVMBool ParseBitcodeInContext(
  LLVMContextRef ContextRef,
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutModule,
  char **OutMessage
) { return LLVMParseBitcodeInContext(ContextRef, MemBuf, OutModule, OutMessage); }

LLVM_API LLVMBool ParseBitcodeInContext2(
  LLVMContextRef ContextRef,
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutModule
) { return LLVMParseBitcodeInContext2(ContextRef, MemBuf, OutModule); }

LLVM_API LLVMBool GetBitcodeModuleInContext(
  LLVMContextRef ContextRef,
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutM,
  char **OutMessage
) { return LLVMGetBitcodeModuleInContext(ContextRef, MemBuf, OutM, OutMessage); }

LLVM_API LLVMBool GetBitcodeModuleInContext2(
  LLVMContextRef ContextRef,
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutM
) { return LLVMGetBitcodeModuleInContext2(ContextRef, MemBuf, OutM); }

LLVM_API LLVMBool GetBitcodeModule(
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutM,
  char **OutMessage
) { return LLVMGetBitcodeModule(MemBuf, OutM, OutMessage); }

LLVM_API LLVMBool GetBitcodeModule2(
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutM
) { return LLVMGetBitcodeModule2(MemBuf, OutM); }

LLVM_API int WriteBitcodeToFile(
  LLVMModuleRef M,
  const char *Path
) { return LLVMWriteBitcodeToFile(M, Path); }

LLVM_API int WriteBitcodeToFD(
  LLVMModuleRef M,
  int FD,
  int ShouldClose,
  int Unbuffered
) { return LLVMWriteBitcodeToFD(M, FD, ShouldClose, Unbuffered); }

LLVM_API int WriteBitcodeToFileHandle(
  LLVMModuleRef M,
  int Handle
) { return LLVMWriteBitcodeToFileHandle(M, Handle); }

LLVM_API LLVMMemoryBufferRef WriteBitcodeToMemoryBuffer(
  LLVMModuleRef M
) { return LLVMWriteBitcodeToMemoryBuffer(M); }

LLVM_API LLVMComdatRef GetOrInsertComdat(
  LLVMModuleRef M,
  const char *Name
) { return LLVMGetOrInsertComdat(M, Name); }

LLVM_API LLVMComdatRef GetComdat(
  LLVMValueRef V
) { return LLVMGetComdat(V); }

LLVM_API void SetComdat(
  LLVMValueRef V,
  LLVMComdatRef C
) { return LLVMSetComdat(V, C); }

LLVM_API LLVMComdatSelectionKind GetComdatSelectionKind(
  LLVMComdatRef C
) { return LLVMGetComdatSelectionKind(C); }

LLVM_API void SetComdatSelectionKind(
  LLVMComdatRef C,
  LLVMComdatSelectionKind Kind
) { return LLVMSetComdatSelectionKind(C, Kind); }

LLVM_API void InitializeCore(
  LLVMPassRegistryRef R
) { return LLVMInitializeCore(R); }

LLVM_API void Shutdown(void) { return LLVMShutdown(); }

LLVM_API char *CreateMessage(
  const char *Message
) { return LLVMCreateMessage(Message); }

LLVM_API void DisposeMessage(
  char *Message
) { return LLVMDisposeMessage(Message); }

LLVM_API LLVMContextRef ContextCreate(void) { return LLVMContextCreate(); }

LLVM_API LLVMContextRef GetGlobalContext(void) { return LLVMGetGlobalContext(); }

LLVM_API void ContextSetDiagnosticHandler(
  LLVMContextRef C,
  LLVMDiagnosticHandler Handler,
  void *DiagnosticContext
) { return LLVMContextSetDiagnosticHandler(C, Handler, DiagnosticContext); }

LLVM_API LLVMDiagnosticHandler ContextGetDiagnosticHandler(
  LLVMContextRef C
) { return LLVMContextGetDiagnosticHandler(C); }

LLVM_API void *ContextGetDiagnosticContext(
  LLVMContextRef C
) { return LLVMContextGetDiagnosticContext(C); }

LLVM_API void ContextSetYieldCallback(
  LLVMContextRef C,
  LLVMYieldCallback Callback,
  void *OpaqueHandle
) { return LLVMContextSetYieldCallback(C, Callback, OpaqueHandle); }

LLVM_API LLVMBool ContextShouldDiscardValueNames(
  LLVMContextRef C
) { return LLVMContextShouldDiscardValueNames(C); }

LLVM_API void ContextSetDiscardValueNames(
  LLVMContextRef C,
  LLVMBool Discard
) { return LLVMContextSetDiscardValueNames(C, Discard); }

LLVM_API void ContextDispose(
  LLVMContextRef C
) { return LLVMContextDispose(C); }

LLVM_API char *GetDiagInfoDescription(
  LLVMDiagnosticInfoRef DI
) { return LLVMGetDiagInfoDescription(DI); }

LLVM_API LLVMDiagnosticSeverity GetDiagInfoSeverity(
  LLVMDiagnosticInfoRef DI
) { return LLVMGetDiagInfoSeverity(DI); }

LLVM_API unsigned GetMDKindIDInContext(
  LLVMContextRef C,
  const char *Name,
  unsigned SLen
) { return LLVMGetMDKindIDInContext(C, Name, SLen); }

LLVM_API unsigned GetMDKindID(
  const char *Name,
  unsigned SLen
) { return LLVMGetMDKindID(Name, SLen); }

LLVM_API unsigned GetEnumAttributeKindForName(
  const char *Name,
  size_t SLen
) { return LLVMGetEnumAttributeKindForName(Name, SLen); }

LLVM_API unsigned GetLastEnumAttributeKind(void) { return LLVMGetLastEnumAttributeKind(); }

LLVM_API LLVMAttributeRef CreateEnumAttribute(
  LLVMContextRef C,
  unsigned KindID,
  uint64_t Val
) { return LLVMCreateEnumAttribute(C, KindID, Val); }

LLVM_API unsigned GetEnumAttributeKind(
  LLVMAttributeRef A
) { return LLVMGetEnumAttributeKind(A); }

LLVM_API uint64_t GetEnumAttributeValue(
  LLVMAttributeRef A
) { return LLVMGetEnumAttributeValue(A); }

LLVM_API LLVMAttributeRef CreateStringAttribute(
  LLVMContextRef C,
  const char *K,
  unsigned KLength,
  const char *V,
  unsigned VLength
) { return LLVMCreateStringAttribute(C, K, KLength, V, VLength); }

LLVM_API LLVMBool IsEnumAttribute(
  LLVMAttributeRef A
) { return LLVMIsEnumAttribute(A); }

LLVM_API LLVMBool IsStringAttribute(
  LLVMAttributeRef A
) { return LLVMIsStringAttribute(A); }

LLVM_API LLVMModuleRef ModuleCreateWithName(
  const char *ModuleID
) { return LLVMModuleCreateWithName(ModuleID); }

LLVM_API LLVMModuleRef ModuleCreateWithNameInContext(
  const char *ModuleID,
  LLVMContextRef C
) { return LLVMModuleCreateWithNameInContext(ModuleID, C); }

LLVM_API LLVMModuleRef CloneModule(
  LLVMModuleRef M
) { return LLVMCloneModule(M); }

LLVM_API void DisposeModule(
  LLVMModuleRef M
) { return LLVMDisposeModule(M); }

LLVM_API void SetModuleIdentifier(
  LLVMModuleRef M,
  const char *Ident,
  size_t Len
) { return LLVMSetModuleIdentifier(M, Ident, Len); }

LLVM_API void SetSourceFileName(
  LLVMModuleRef M,
  const char *Name,
  size_t Len
) { return LLVMSetSourceFileName(M, Name, Len); }

LLVM_API void SetDataLayout(
  LLVMModuleRef M,
  const char *DataLayoutStr
) { return LLVMSetDataLayout(M, DataLayoutStr); }

LLVM_API void SetTarget(
  LLVMModuleRef M,
  const char *Triple
) { return LLVMSetTarget(M, Triple); }

LLVM_API LLVMModuleFlagEntry *CopyModuleFlagsMetadata(
  LLVMModuleRef M,
  size_t *Len
) { return LLVMCopyModuleFlagsMetadata(M, Len); }

LLVM_API void DisposeModuleFlagsMetadata(
  LLVMModuleFlagEntry *Entries
) { return LLVMDisposeModuleFlagsMetadata(Entries); }

LLVM_API LLVMMetadataRef ModuleFlagEntriesGetMetadata(
  LLVMModuleFlagEntry *Entries,
  unsigned Index
) { return LLVMModuleFlagEntriesGetMetadata(Entries, Index); }

LLVM_API LLVMMetadataRef GetModuleFlag(
  LLVMModuleRef M,
  const char *Key,
  size_t KeyLen
) { return LLVMGetModuleFlag(M, Key, KeyLen); }

LLVM_API void AddModuleFlag(
  LLVMModuleRef M,
  LLVMModuleFlagBehavior Behavior,
  const char *Key,
  size_t KeyLen,
  LLVMMetadataRef Val
) { return LLVMAddModuleFlag(M, Behavior, Key, KeyLen, Val); }

LLVM_API void DumpModule(
  LLVMModuleRef M
) { return LLVMDumpModule(M); }

LLVM_API LLVMBool PrintModuleToFile(
  LLVMModuleRef M,
  const char *Filename,
  char **ErrorMessage
) { return LLVMPrintModuleToFile(M, Filename, ErrorMessage); }

LLVM_API char *PrintModuleToString(
  LLVMModuleRef M
) { return LLVMPrintModuleToString(M); }

LLVM_API void SetModuleInlineAsm2(
  LLVMModuleRef M,
  const char *Asm,
  size_t Len
) { return LLVMSetModuleInlineAsm2(M, Asm, Len); }

LLVM_API void AppendModuleInlineAsm(
  LLVMModuleRef M,
  const char *Asm,
  size_t Len
) { return LLVMAppendModuleInlineAsm(M, Asm, Len); }

LLVM_API LLVMValueRef GetInlineAsm(
  LLVMTypeRef Ty,
  char *AsmString,
  size_t AsmStringSize,
  char *Constraints,
  size_t ConstraintsSize,
  LLVMBool HasSideEffects,
  LLVMBool IsAlignStack,
  LLVMInlineAsmDialect Dialect
) { return LLVMGetInlineAsm(Ty, AsmString, AsmStringSize, Constraints, ConstraintsSize, HasSideEffects, IsAlignStack, Dialect); }

LLVM_API LLVMContextRef GetModuleContext(
  LLVMModuleRef M
) { return LLVMGetModuleContext(M); }

LLVM_API LLVMTypeRef GetTypeByName(
  LLVMModuleRef M,
  const char *Name
) { return LLVMGetTypeByName(M, Name); }

LLVM_API LLVMNamedMDNodeRef GetFirstNamedMetadata(
  LLVMModuleRef M
) { return LLVMGetFirstNamedMetadata(M); }

LLVM_API LLVMNamedMDNodeRef GetLastNamedMetadata(
  LLVMModuleRef M
) { return LLVMGetLastNamedMetadata(M); }

LLVM_API LLVMNamedMDNodeRef GetNextNamedMetadata(
  LLVMNamedMDNodeRef NamedMDNode
) { return LLVMGetNextNamedMetadata(NamedMDNode); }

LLVM_API LLVMNamedMDNodeRef GetPreviousNamedMetadata(
  LLVMNamedMDNodeRef NamedMDNode
) { return LLVMGetPreviousNamedMetadata(NamedMDNode); }

LLVM_API LLVMNamedMDNodeRef GetNamedMetadata(
  LLVMModuleRef M,
  const char *Name,
  size_t NameLen
) { return LLVMGetNamedMetadata(M, Name, NameLen); }

LLVM_API LLVMNamedMDNodeRef GetOrInsertNamedMetadata(
  LLVMModuleRef M,
  const char *Name,
  size_t NameLen
) { return LLVMGetOrInsertNamedMetadata(M, Name, NameLen); }

LLVM_API unsigned GetNamedMetadataNumOperands(
  LLVMModuleRef M,
  const char *Name
) { return LLVMGetNamedMetadataNumOperands(M, Name); }

LLVM_API void GetNamedMetadataOperands(
  LLVMModuleRef M,
  const char *Name,
  LLVMValueRef *Dest
) { return LLVMGetNamedMetadataOperands(M, Name, Dest); }

LLVM_API void AddNamedMetadataOperand(
  LLVMModuleRef M,
  const char *Name,
  LLVMValueRef Val
) { return LLVMAddNamedMetadataOperand(M, Name, Val); }

LLVM_API unsigned GetDebugLocLine(
  LLVMValueRef Val
) { return LLVMGetDebugLocLine(Val); }

LLVM_API unsigned GetDebugLocColumn(
  LLVMValueRef Val
) { return LLVMGetDebugLocColumn(Val); }

LLVM_API LLVMValueRef AddFunction(
  LLVMModuleRef M,
  const char *Name,
  LLVMTypeRef FunctionTy
) { return LLVMAddFunction(M, Name, FunctionTy); }

LLVM_API LLVMValueRef GetNamedFunction(
  LLVMModuleRef M,
  const char *Name
) { return LLVMGetNamedFunction(M, Name); }

LLVM_API LLVMValueRef GetFirstFunction(
  LLVMModuleRef M
) { return LLVMGetFirstFunction(M); }

LLVM_API LLVMValueRef GetLastFunction(
  LLVMModuleRef M
) { return LLVMGetLastFunction(M); }

LLVM_API LLVMValueRef GetNextFunction(
  LLVMValueRef Fn
) { return LLVMGetNextFunction(Fn); }

LLVM_API LLVMValueRef GetPreviousFunction(
  LLVMValueRef Fn
) { return LLVMGetPreviousFunction(Fn); }

LLVM_API void SetModuleInlineAsm(
  LLVMModuleRef M,
  const char *Asm
) { return LLVMSetModuleInlineAsm(M, Asm); }

LLVM_API LLVMTypeKind GetTypeKind(
  LLVMTypeRef Ty
) { return LLVMGetTypeKind(Ty); }

LLVM_API LLVMBool TypeIsSized(
  LLVMTypeRef Ty
) { return LLVMTypeIsSized(Ty); }

LLVM_API LLVMContextRef GetTypeContext(
  LLVMTypeRef Ty
) { return LLVMGetTypeContext(Ty); }

LLVM_API void DumpType(
  LLVMTypeRef Val
) { return LLVMDumpType(Val); }

LLVM_API char *PrintTypeToString(
  LLVMTypeRef Val
) { return LLVMPrintTypeToString(Val); }

LLVM_API LLVMTypeRef Int1TypeInContext(
  LLVMContextRef C
) { return LLVMInt1TypeInContext(C); }

LLVM_API LLVMTypeRef Int8TypeInContext(
  LLVMContextRef C
) { return LLVMInt8TypeInContext(C); }

LLVM_API LLVMTypeRef Int16TypeInContext(
  LLVMContextRef C
) { return LLVMInt16TypeInContext(C); }

LLVM_API LLVMTypeRef Int32TypeInContext(
  LLVMContextRef C
) { return LLVMInt32TypeInContext(C); }

LLVM_API LLVMTypeRef Int64TypeInContext(
  LLVMContextRef C
) { return LLVMInt64TypeInContext(C); }

LLVM_API LLVMTypeRef Int128TypeInContext(
  LLVMContextRef C
) { return LLVMInt128TypeInContext(C); }

LLVM_API LLVMTypeRef IntTypeInContext(
  LLVMContextRef C,
  unsigned NumBits
) { return LLVMIntTypeInContext(C, NumBits); }

LLVM_API LLVMTypeRef Int1Type(void) { return LLVMInt1Type(); }

LLVM_API LLVMTypeRef Int8Type(void) { return LLVMInt8Type(); }

LLVM_API LLVMTypeRef Int16Type(void) { return LLVMInt16Type(); }

LLVM_API LLVMTypeRef Int32Type(void) { return LLVMInt32Type(); }

LLVM_API LLVMTypeRef Int64Type(void) { return LLVMInt64Type(); }

LLVM_API LLVMTypeRef Int128Type(void) { return LLVMInt128Type(); }

LLVM_API LLVMTypeRef IntType(
  unsigned NumBits
) { return LLVMIntType(NumBits); }

LLVM_API unsigned GetIntTypeWidth(
  LLVMTypeRef IntegerTy
) { return LLVMGetIntTypeWidth(IntegerTy); }

LLVM_API LLVMTypeRef HalfTypeInContext(
  LLVMContextRef C
) { return LLVMHalfTypeInContext(C); }

LLVM_API LLVMTypeRef FloatTypeInContext(
  LLVMContextRef C
) { return LLVMFloatTypeInContext(C); }

LLVM_API LLVMTypeRef DoubleTypeInContext(
  LLVMContextRef C
) { return LLVMDoubleTypeInContext(C); }

LLVM_API LLVMTypeRef X86FP80TypeInContext(
  LLVMContextRef C
) { return LLVMX86FP80TypeInContext(C); }

LLVM_API LLVMTypeRef FP128TypeInContext(
  LLVMContextRef C
) { return LLVMFP128TypeInContext(C); }

LLVM_API LLVMTypeRef PPCFP128TypeInContext(
  LLVMContextRef C
) { return LLVMPPCFP128TypeInContext(C); }

LLVM_API LLVMTypeRef HalfType(void) { return LLVMHalfType(); }

LLVM_API LLVMTypeRef FloatType(void) { return LLVMFloatType(); }

LLVM_API LLVMTypeRef DoubleType(void) { return LLVMDoubleType(); }

LLVM_API LLVMTypeRef X86FP80Type(void) { return LLVMX86FP80Type(); }

LLVM_API LLVMTypeRef FP128Type(void) { return LLVMFP128Type(); }

LLVM_API LLVMTypeRef PPCFP128Type(void) { return LLVMPPCFP128Type(); }

LLVM_API LLVMTypeRef FunctionType(
  LLVMTypeRef ReturnType,
  LLVMTypeRef *ParamTypes,
  unsigned ParamCount,
  LLVMBool IsVarArg
) { return LLVMFunctionType(ReturnType, ParamTypes, ParamCount, IsVarArg); }

LLVM_API LLVMBool IsFunctionVarArg(
  LLVMTypeRef FunctionTy
) { return LLVMIsFunctionVarArg(FunctionTy); }

LLVM_API LLVMTypeRef GetReturnType(
  LLVMTypeRef FunctionTy
) { return LLVMGetReturnType(FunctionTy); }

LLVM_API unsigned CountParamTypes(
  LLVMTypeRef FunctionTy
) { return LLVMCountParamTypes(FunctionTy); }

LLVM_API void GetParamTypes(
  LLVMTypeRef FunctionTy,
  LLVMTypeRef *Dest
) { return LLVMGetParamTypes(FunctionTy, Dest); }

LLVM_API LLVMTypeRef StructTypeInContext(
  LLVMContextRef C,
  LLVMTypeRef *ElementTypes,
  unsigned ElementCount,
  LLVMBool Packed
) { return LLVMStructTypeInContext(C, ElementTypes, ElementCount, Packed); }

LLVM_API LLVMTypeRef StructType(
  LLVMTypeRef *ElementTypes,
  unsigned ElementCount,
  LLVMBool Packed
) { return LLVMStructType(ElementTypes, ElementCount, Packed); }

LLVM_API LLVMTypeRef StructCreateNamed(
  LLVMContextRef C,
  const char *Name
) { return LLVMStructCreateNamed(C, Name); }

LLVM_API void StructSetBody(
  LLVMTypeRef StructTy,
  LLVMTypeRef *ElementTypes,
  unsigned ElementCount,
  LLVMBool Packed
) { return LLVMStructSetBody(StructTy, ElementTypes, ElementCount, Packed); }

LLVM_API unsigned CountStructElementTypes(
  LLVMTypeRef StructTy
) { return LLVMCountStructElementTypes(StructTy); }

LLVM_API void GetStructElementTypes(
  LLVMTypeRef StructTy,
  LLVMTypeRef *Dest
) { return LLVMGetStructElementTypes(StructTy, Dest); }

LLVM_API LLVMTypeRef StructGetTypeAtIndex(
  LLVMTypeRef StructTy,
  unsigned i
) { return LLVMStructGetTypeAtIndex(StructTy, i); }

LLVM_API LLVMBool IsPackedStruct(
  LLVMTypeRef StructTy
) { return LLVMIsPackedStruct(StructTy); }

LLVM_API LLVMBool IsOpaqueStruct(
  LLVMTypeRef StructTy
) { return LLVMIsOpaqueStruct(StructTy); }

LLVM_API LLVMBool IsLiteralStruct(
  LLVMTypeRef StructTy
) { return LLVMIsLiteralStruct(StructTy); }

LLVM_API LLVMTypeRef GetElementType(
  LLVMTypeRef Ty
) { return LLVMGetElementType(Ty); }

LLVM_API void GetSubtypes(
  LLVMTypeRef Tp,
  LLVMTypeRef *Arr
) { return LLVMGetSubtypes(Tp, Arr); }

LLVM_API unsigned GetNumContainedTypes(
  LLVMTypeRef Tp
) { return LLVMGetNumContainedTypes(Tp); }

LLVM_API LLVMTypeRef ArrayType(
  LLVMTypeRef ElementType,
  unsigned ElementCount
) { return LLVMArrayType(ElementType, ElementCount); }

LLVM_API unsigned GetArrayLength(
  LLVMTypeRef ArrayTy
) { return LLVMGetArrayLength(ArrayTy); }

LLVM_API LLVMTypeRef PointerType(
  LLVMTypeRef ElementType,
  unsigned AddressSpace
) { return LLVMPointerType(ElementType, AddressSpace); }

LLVM_API unsigned GetPointerAddressSpace(
  LLVMTypeRef PointerTy
) { return LLVMGetPointerAddressSpace(PointerTy); }

LLVM_API LLVMTypeRef VectorType(
  LLVMTypeRef ElementType,
  unsigned ElementCount
) { return LLVMVectorType(ElementType, ElementCount); }

LLVM_API unsigned GetVectorSize(
  LLVMTypeRef VectorTy
) { return LLVMGetVectorSize(VectorTy); }

LLVM_API LLVMTypeRef VoidTypeInContext(
  LLVMContextRef C
) { return LLVMVoidTypeInContext(C); }

LLVM_API LLVMTypeRef LabelTypeInContext(
  LLVMContextRef C
) { return LLVMLabelTypeInContext(C); }

LLVM_API LLVMTypeRef X86MMXTypeInContext(
  LLVMContextRef C
) { return LLVMX86MMXTypeInContext(C); }

LLVM_API LLVMTypeRef TokenTypeInContext(
  LLVMContextRef C
) { return LLVMTokenTypeInContext(C); }

LLVM_API LLVMTypeRef MetadataTypeInContext(
  LLVMContextRef C
) { return LLVMMetadataTypeInContext(C); }

LLVM_API LLVMTypeRef VoidType(void) { return LLVMVoidType(); }

LLVM_API LLVMTypeRef LabelType(void) { return LLVMLabelType(); }

LLVM_API LLVMTypeRef X86MMXType(void) { return LLVMX86MMXType(); }

LLVM_API LLVMTypeRef TypeOf(
  LLVMValueRef Val
) { return LLVMTypeOf(Val); }

LLVM_API LLVMValueKind GetValueKind(
  LLVMValueRef Val
) { return LLVMGetValueKind(Val); }

LLVM_API void SetValueName2(
  LLVMValueRef Val,
  const char *Name,
  size_t NameLen
) { return LLVMSetValueName2(Val, Name, NameLen); }

LLVM_API void DumpValue(
  LLVMValueRef Val
) { return LLVMDumpValue(Val); }

LLVM_API char *PrintValueToString(
  LLVMValueRef Val
) { return LLVMPrintValueToString(Val); }

LLVM_API void ReplaceAllUsesWith(
  LLVMValueRef OldVal,
  LLVMValueRef NewVal
) { return LLVMReplaceAllUsesWith(OldVal, NewVal); }

LLVM_API LLVMBool IsConstant(
  LLVMValueRef Val
) { return LLVMIsConstant(Val); }

LLVM_API LLVMBool IsUndef(
  LLVMValueRef Val
) { return LLVMIsUndef(Val); }

LLVM_API LLVMValueRef IsAMDNode(
  LLVMValueRef Val
) { return LLVMIsAMDNode(Val); }

LLVM_API LLVMValueRef IsAMDString(
  LLVMValueRef Val
) { return LLVMIsAMDString(Val); }

LLVM_API void SetValueName(
  LLVMValueRef Val,
  const char *Name
) { return LLVMSetValueName(Val, Name); }

LLVM_API LLVMUseRef GetFirstUse(
  LLVMValueRef Val
) { return LLVMGetFirstUse(Val); }

LLVM_API LLVMUseRef GetNextUse(
  LLVMUseRef U
) { return LLVMGetNextUse(U); }

LLVM_API LLVMValueRef GetUser(
  LLVMUseRef U
) { return LLVMGetUser(U); }

LLVM_API LLVMValueRef GetUsedValue(
  LLVMUseRef U
) { return LLVMGetUsedValue(U); }

LLVM_API LLVMValueRef GetOperand(
  LLVMValueRef Val,
  unsigned Index
) { return LLVMGetOperand(Val, Index); }

LLVM_API LLVMUseRef GetOperandUse(
  LLVMValueRef Val,
  unsigned Index
) { return LLVMGetOperandUse(Val, Index); }

LLVM_API void SetOperand(
  LLVMValueRef User,
  unsigned Index,
  LLVMValueRef Val
) { return LLVMSetOperand(User, Index, Val); }

LLVM_API int GetNumOperands(
  LLVMValueRef Val
) { return LLVMGetNumOperands(Val); }

LLVM_API LLVMValueRef ConstNull(
  LLVMTypeRef Ty
) { return LLVMConstNull(Ty); }

LLVM_API LLVMValueRef ConstAllOnes(
  LLVMTypeRef Ty
) { return LLVMConstAllOnes(Ty); }

LLVM_API LLVMValueRef GetUndef(
  LLVMTypeRef Ty
) { return LLVMGetUndef(Ty); }

LLVM_API LLVMBool IsNull(
  LLVMValueRef Val
) { return LLVMIsNull(Val); }

LLVM_API LLVMValueRef ConstPointerNull(
  LLVMTypeRef Ty
) { return LLVMConstPointerNull(Ty); }

LLVM_API LLVMValueRef ConstInt(
  LLVMTypeRef IntTy,
  unsigned long long N,
  LLVMBool SignExtend
) { return LLVMConstInt(IntTy, N, SignExtend); }

LLVM_API LLVMValueRef ConstIntOfArbitraryPrecision(
  LLVMTypeRef IntTy,
  unsigned NumWords,
  const uint64_t Words[]
) { return LLVMConstIntOfArbitraryPrecision(IntTy, NumWords, Words); }

LLVM_API LLVMValueRef ConstIntOfString(
  LLVMTypeRef IntTy,
  const char *Text,
  uint8_t Radix
) { return LLVMConstIntOfString(IntTy, Text, Radix); }

LLVM_API LLVMValueRef ConstIntOfStringAndSize(
  LLVMTypeRef IntTy,
  const char *Text,
  unsigned SLen,
  uint8_t Radix
) { return LLVMConstIntOfStringAndSize(IntTy, Text, SLen, Radix); }

LLVM_API LLVMValueRef ConstReal(
  LLVMTypeRef RealTy,
  double N
) { return LLVMConstReal(RealTy, N); }

LLVM_API LLVMValueRef ConstRealOfString(
  LLVMTypeRef RealTy,
  const char *Text
) { return LLVMConstRealOfString(RealTy, Text); }

LLVM_API LLVMValueRef ConstRealOfStringAndSize(
  LLVMTypeRef RealTy,
  const char *Text,
  unsigned SLen
) { return LLVMConstRealOfStringAndSize(RealTy, Text, SLen); }

LLVM_API double ConstRealGetDouble(
  LLVMValueRef ConstantVal,
  LLVMBool *losesInfo
) { return LLVMConstRealGetDouble(ConstantVal, losesInfo); }

LLVM_API LLVMValueRef ConstStringInContext(
  LLVMContextRef C,
  const char *Str,
  unsigned Length,
  LLVMBool DontNullTerminate
) { return LLVMConstStringInContext(C, Str, Length, DontNullTerminate); }

LLVM_API LLVMValueRef ConstString(
  const char *Str,
  unsigned Length,
  LLVMBool DontNullTerminate
) { return LLVMConstString(Str, Length, DontNullTerminate); }

LLVM_API LLVMBool IsConstantString(
  LLVMValueRef c
) { return LLVMIsConstantString(c); }

LLVM_API LLVMValueRef ConstStructInContext(
  LLVMContextRef C,
  LLVMValueRef *ConstantVals,
  unsigned Count,
  LLVMBool Packed
) { return LLVMConstStructInContext(C, ConstantVals, Count, Packed); }

LLVM_API LLVMValueRef ConstStruct(
  LLVMValueRef *ConstantVals,
  unsigned Count,
  LLVMBool Packed
) { return LLVMConstStruct(ConstantVals, Count, Packed); }

LLVM_API LLVMValueRef ConstArray(
  LLVMTypeRef ElementTy,
  LLVMValueRef *ConstantVals,
  unsigned Length
) { return LLVMConstArray(ElementTy, ConstantVals, Length); }

LLVM_API LLVMValueRef ConstNamedStruct(
  LLVMTypeRef StructTy,
  LLVMValueRef *ConstantVals,
  unsigned Count
) { return LLVMConstNamedStruct(StructTy, ConstantVals, Count); }

LLVM_API LLVMValueRef GetElementAsConstant(
  LLVMValueRef C,
  unsigned idx
) { return LLVMGetElementAsConstant(C, idx); }

LLVM_API LLVMValueRef ConstVector(
  LLVMValueRef *ScalarConstantVals,
  unsigned Size
) { return LLVMConstVector(ScalarConstantVals, Size); }

LLVM_API LLVMOpcode GetConstOpcode(
  LLVMValueRef ConstantVal
) { return LLVMGetConstOpcode(ConstantVal); }

LLVM_API LLVMValueRef AlignOf(
  LLVMTypeRef Ty
) { return LLVMAlignOf(Ty); }

LLVM_API LLVMValueRef SizeOf(
  LLVMTypeRef Ty
) { return LLVMSizeOf(Ty); }

LLVM_API LLVMValueRef ConstNeg(
  LLVMValueRef ConstantVal
) { return LLVMConstNeg(ConstantVal); }

LLVM_API LLVMValueRef ConstNSWNeg(
  LLVMValueRef ConstantVal
) { return LLVMConstNSWNeg(ConstantVal); }

LLVM_API LLVMValueRef ConstNUWNeg(
  LLVMValueRef ConstantVal
) { return LLVMConstNUWNeg(ConstantVal); }

LLVM_API LLVMValueRef ConstFNeg(
  LLVMValueRef ConstantVal
) { return LLVMConstFNeg(ConstantVal); }

LLVM_API LLVMValueRef ConstNot(
  LLVMValueRef ConstantVal
) { return LLVMConstNot(ConstantVal); }

LLVM_API LLVMValueRef ConstAdd(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstAdd(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstNSWAdd(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstNSWAdd(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstNUWAdd(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstNUWAdd(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstFAdd(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstFAdd(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstSub(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstSub(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstNSWSub(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstNSWSub(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstNUWSub(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstNUWSub(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstFSub(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstFSub(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstMul(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstMul(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstNSWMul(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstNSWMul(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstNUWMul(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstNUWMul(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstFMul(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstFMul(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstUDiv(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstUDiv(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstExactUDiv(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstExactUDiv(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstSDiv(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstSDiv(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstExactSDiv(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstExactSDiv(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstFDiv(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstFDiv(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstURem(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstURem(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstSRem(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstSRem(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstFRem(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstFRem(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstAnd(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstAnd(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstOr(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstOr(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstXor(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstXor(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstICmp(
  LLVMIntPredicate Predicate,
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstICmp(Predicate, LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstFCmp(
  LLVMRealPredicate Predicate,
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstFCmp(Predicate, LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstShl(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstShl(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstLShr(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstLShr(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstAShr(
  LLVMValueRef LHSConstant,
  LLVMValueRef RHSConstant
) { return LLVMConstAShr(LHSConstant, RHSConstant); }

LLVM_API LLVMValueRef ConstGEP(
  LLVMValueRef ConstantVal,
  LLVMValueRef *ConstantIndices,
  unsigned NumIndices
) { return LLVMConstGEP(ConstantVal, ConstantIndices, NumIndices); }

LLVM_API LLVMValueRef ConstGEP2(
  LLVMTypeRef Ty,
  LLVMValueRef ConstantVal,
  LLVMValueRef *ConstantIndices,
  unsigned NumIndices
) { return LLVMConstGEP2(Ty, ConstantVal, ConstantIndices, NumIndices); }

LLVM_API LLVMValueRef ConstInBoundsGEP(
  LLVMValueRef ConstantVal,
  LLVMValueRef *ConstantIndices,
  unsigned NumIndices
) { return LLVMConstInBoundsGEP(ConstantVal, ConstantIndices, NumIndices); }

LLVM_API LLVMValueRef ConstInBoundsGEP2(
  LLVMTypeRef Ty,
  LLVMValueRef ConstantVal,
  LLVMValueRef *ConstantIndices,
  unsigned NumIndices
) { return LLVMConstInBoundsGEP2(Ty, ConstantVal, ConstantIndices, NumIndices); }

LLVM_API LLVMValueRef ConstTrunc(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstTrunc(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstSExt(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstSExt(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstZExt(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstZExt(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstFPTrunc(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstFPTrunc(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstFPExt(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstFPExt(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstUIToFP(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstUIToFP(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstSIToFP(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstSIToFP(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstFPToUI(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstFPToUI(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstFPToSI(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstFPToSI(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstPtrToInt(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstPtrToInt(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstIntToPtr(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstIntToPtr(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstBitCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstBitCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstAddrSpaceCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstAddrSpaceCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstZExtOrBitCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstZExtOrBitCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstSExtOrBitCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstSExtOrBitCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstTruncOrBitCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstTruncOrBitCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstPointerCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstPointerCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstIntCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType,
  LLVMBool isSigned
) { return LLVMConstIntCast(ConstantVal, ToType, isSigned); }

LLVM_API LLVMValueRef ConstFPCast(
  LLVMValueRef ConstantVal,
  LLVMTypeRef ToType
) { return LLVMConstFPCast(ConstantVal, ToType); }

LLVM_API LLVMValueRef ConstSelect(
  LLVMValueRef ConstantCondition,
  LLVMValueRef ConstantIfTrue,
  LLVMValueRef ConstantIfFalse
) { return LLVMConstSelect(ConstantCondition, ConstantIfTrue, ConstantIfFalse); }

LLVM_API LLVMValueRef ConstExtractElement(
  LLVMValueRef VectorConstant,
  LLVMValueRef IndexConstant
) { return LLVMConstExtractElement(VectorConstant, IndexConstant); }

LLVM_API LLVMValueRef ConstInsertElement(
  LLVMValueRef VectorConstant,
  LLVMValueRef ElementValueConstant,
  LLVMValueRef IndexConstant
) { return LLVMConstInsertElement(VectorConstant, ElementValueConstant, IndexConstant); }

LLVM_API LLVMValueRef ConstShuffleVector(
  LLVMValueRef VectorAConstant,
  LLVMValueRef VectorBConstant,
  LLVMValueRef MaskConstant
) { return LLVMConstShuffleVector(VectorAConstant, VectorBConstant, MaskConstant); }

LLVM_API LLVMValueRef ConstExtractValue(
  LLVMValueRef AggConstant,
  unsigned *IdxList,
  unsigned NumIdx
) { return LLVMConstExtractValue(AggConstant, IdxList, NumIdx); }

LLVM_API LLVMValueRef ConstInsertValue(
  LLVMValueRef AggConstant,
  LLVMValueRef ElementValueConstant,
  unsigned *IdxList,
  unsigned NumIdx
) { return LLVMConstInsertValue(AggConstant, ElementValueConstant, IdxList, NumIdx); }

LLVM_API LLVMValueRef BlockAddress(
  LLVMValueRef F,
  LLVMBasicBlockRef BB
) { return LLVMBlockAddress(F, BB); }

LLVM_API LLVMValueRef ConstInlineAsm(
  LLVMTypeRef Ty,
  const char *AsmString,
  const char *Constraints,
  LLVMBool HasSideEffects,
  LLVMBool IsAlignStack
) { return LLVMConstInlineAsm(Ty, AsmString, Constraints, HasSideEffects, IsAlignStack); }

LLVM_API LLVMModuleRef GetGlobalParent(
  LLVMValueRef Global
) { return LLVMGetGlobalParent(Global); }

LLVM_API LLVMBool IsDeclaration(
  LLVMValueRef Global
) { return LLVMIsDeclaration(Global); }

LLVM_API LLVMLinkage GetLinkage(
  LLVMValueRef Global
) { return LLVMGetLinkage(Global); }

LLVM_API void SetLinkage(
  LLVMValueRef Global,
  LLVMLinkage Linkage
) { return LLVMSetLinkage(Global, Linkage); }

LLVM_API void SetSection(
  LLVMValueRef Global,
  const char *Section
) { return LLVMSetSection(Global, Section); }

LLVM_API LLVMVisibility GetVisibility(
  LLVMValueRef Global
) { return LLVMGetVisibility(Global); }

LLVM_API void SetVisibility(
  LLVMValueRef Global,
  LLVMVisibility Viz
) { return LLVMSetVisibility(Global, Viz); }

LLVM_API LLVMDLLStorageClass GetDLLStorageClass(
  LLVMValueRef Global
) { return LLVMGetDLLStorageClass(Global); }

LLVM_API void SetDLLStorageClass(
  LLVMValueRef Global,
  LLVMDLLStorageClass Class
) { return LLVMSetDLLStorageClass(Global, Class); }

LLVM_API LLVMUnnamedAddr GetUnnamedAddress(
  LLVMValueRef Global
) { return LLVMGetUnnamedAddress(Global); }

LLVM_API void SetUnnamedAddress(
  LLVMValueRef Global,
  LLVMUnnamedAddr UnnamedAddr
) { return LLVMSetUnnamedAddress(Global, UnnamedAddr); }

LLVM_API LLVMTypeRef GlobalGetValueType(
  LLVMValueRef Global
) { return LLVMGlobalGetValueType(Global); }

LLVM_API LLVMBool HasUnnamedAddr(
  LLVMValueRef Global
) { return LLVMHasUnnamedAddr(Global); }

LLVM_API void SetUnnamedAddr(
  LLVMValueRef Global,
  LLVMBool HasUnnamedAddr
) { return LLVMSetUnnamedAddr(Global, HasUnnamedAddr); }

LLVM_API unsigned GetAlignment(
  LLVMValueRef V
) { return LLVMGetAlignment(V); }

LLVM_API void SetAlignment(
  LLVMValueRef V,
  unsigned Bytes
) { return LLVMSetAlignment(V, Bytes); }

LLVM_API void GlobalSetMetadata(
  LLVMValueRef Global,
  unsigned Kind,
  LLVMMetadataRef MD
) { return LLVMGlobalSetMetadata(Global, Kind, MD); }

LLVM_API void GlobalEraseMetadata(
  LLVMValueRef Global,
  unsigned Kind
) { return LLVMGlobalEraseMetadata(Global, Kind); }

LLVM_API void GlobalClearMetadata(
  LLVMValueRef Global
) { return LLVMGlobalClearMetadata(Global); }

LLVM_API LLVMValueMetadataEntry *GlobalCopyAllMetadata(
  LLVMValueRef Value,
  size_t *NumEntries
) { return LLVMGlobalCopyAllMetadata(Value, NumEntries); }

LLVM_API void DisposeValueMetadataEntries(
  LLVMValueMetadataEntry *Entries
) { return LLVMDisposeValueMetadataEntries(Entries); }

LLVM_API unsigned ValueMetadataEntriesGetKind(
  LLVMValueMetadataEntry *Entries,
  unsigned Index
) { return LLVMValueMetadataEntriesGetKind(Entries, Index); }

LLVM_API LLVMValueRef AddGlobal(
  LLVMModuleRef M,
  LLVMTypeRef Ty,
  const char *Name
) { return LLVMAddGlobal(M, Ty, Name); }

LLVM_API LLVMValueRef AddGlobalInAddressSpace(
  LLVMModuleRef M,
  LLVMTypeRef Ty,
  const char *Name,
  unsigned AddressSpace
) { return LLVMAddGlobalInAddressSpace(M, Ty, Name, AddressSpace); }

LLVM_API LLVMValueRef GetNamedGlobal(
  LLVMModuleRef M,
  const char *Name
) { return LLVMGetNamedGlobal(M, Name); }

LLVM_API LLVMValueRef GetFirstGlobal(
  LLVMModuleRef M
) { return LLVMGetFirstGlobal(M); }

LLVM_API LLVMValueRef GetLastGlobal(
  LLVMModuleRef M
) { return LLVMGetLastGlobal(M); }

LLVM_API LLVMValueRef GetNextGlobal(
  LLVMValueRef GlobalVar
) { return LLVMGetNextGlobal(GlobalVar); }

LLVM_API LLVMValueRef GetPreviousGlobal(
  LLVMValueRef GlobalVar
) { return LLVMGetPreviousGlobal(GlobalVar); }

LLVM_API void DeleteGlobal(
  LLVMValueRef GlobalVar
) { return LLVMDeleteGlobal(GlobalVar); }

LLVM_API LLVMValueRef GetInitializer(
  LLVMValueRef GlobalVar
) { return LLVMGetInitializer(GlobalVar); }

LLVM_API void SetInitializer(
  LLVMValueRef GlobalVar,
  LLVMValueRef ConstantVal
) { return LLVMSetInitializer(GlobalVar, ConstantVal); }

LLVM_API LLVMBool IsThreadLocal(
  LLVMValueRef GlobalVar
) { return LLVMIsThreadLocal(GlobalVar); }

LLVM_API void SetThreadLocal(
  LLVMValueRef GlobalVar,
  LLVMBool IsThreadLocal
) { return LLVMSetThreadLocal(GlobalVar, IsThreadLocal); }

LLVM_API LLVMBool IsGlobalConstant(
  LLVMValueRef GlobalVar
) { return LLVMIsGlobalConstant(GlobalVar); }

LLVM_API void SetGlobalConstant(
  LLVMValueRef GlobalVar,
  LLVMBool IsConstant
) { return LLVMSetGlobalConstant(GlobalVar, IsConstant); }

LLVM_API LLVMThreadLocalMode GetThreadLocalMode(
  LLVMValueRef GlobalVar
) { return LLVMGetThreadLocalMode(GlobalVar); }

LLVM_API void SetThreadLocalMode(
  LLVMValueRef GlobalVar,
  LLVMThreadLocalMode Mode
) { return LLVMSetThreadLocalMode(GlobalVar, Mode); }

LLVM_API LLVMBool IsExternallyInitialized(
  LLVMValueRef GlobalVar
) { return LLVMIsExternallyInitialized(GlobalVar); }

LLVM_API void SetExternallyInitialized(
  LLVMValueRef GlobalVar,
  LLVMBool IsExtInit
) { return LLVMSetExternallyInitialized(GlobalVar, IsExtInit); }

LLVM_API LLVMValueRef AddAlias(
  LLVMModuleRef M,
  LLVMTypeRef Ty,
  LLVMValueRef Aliasee,
  const char *Name
) { return LLVMAddAlias(M, Ty, Aliasee, Name); }

LLVM_API LLVMValueRef GetNamedGlobalAlias(
  LLVMModuleRef M,
  const char *Name,
  size_t NameLen
) { return LLVMGetNamedGlobalAlias(M, Name, NameLen); }

LLVM_API LLVMValueRef GetFirstGlobalAlias(
  LLVMModuleRef M
) { return LLVMGetFirstGlobalAlias(M); }

LLVM_API LLVMValueRef GetLastGlobalAlias(
  LLVMModuleRef M
) { return LLVMGetLastGlobalAlias(M); }

LLVM_API LLVMValueRef GetNextGlobalAlias(
  LLVMValueRef GA
) { return LLVMGetNextGlobalAlias(GA); }

LLVM_API LLVMValueRef GetPreviousGlobalAlias(
  LLVMValueRef GA
) { return LLVMGetPreviousGlobalAlias(GA); }

LLVM_API LLVMValueRef AliasGetAliasee(
  LLVMValueRef Alias
) { return LLVMAliasGetAliasee(Alias); }

LLVM_API void AliasSetAliasee(
  LLVMValueRef Alias,
  LLVMValueRef Aliasee
) { return LLVMAliasSetAliasee(Alias, Aliasee); }

LLVM_API void DeleteFunction(
  LLVMValueRef Fn
) { return LLVMDeleteFunction(Fn); }

LLVM_API LLVMBool HasPersonalityFn(
  LLVMValueRef Fn
) { return LLVMHasPersonalityFn(Fn); }

LLVM_API LLVMValueRef GetPersonalityFn(
  LLVMValueRef Fn
) { return LLVMGetPersonalityFn(Fn); }

LLVM_API void SetPersonalityFn(
  LLVMValueRef Fn,
  LLVMValueRef PersonalityFn
) { return LLVMSetPersonalityFn(Fn, PersonalityFn); }

LLVM_API unsigned LookupIntrinsicID(
  const char *Name,
  size_t NameLen
) { return LLVMLookupIntrinsicID(Name, NameLen); }

LLVM_API unsigned GetIntrinsicID(
  LLVMValueRef Fn
) { return LLVMGetIntrinsicID(Fn); }

LLVM_API LLVMValueRef GetIntrinsicDeclaration(
  LLVMModuleRef Mod,
  unsigned ID,
  LLVMTypeRef *ParamTypes,
  size_t ParamCount
) { return LLVMGetIntrinsicDeclaration(Mod, ID, ParamTypes, ParamCount); }

LLVM_API LLVMTypeRef IntrinsicGetType(
  LLVMContextRef Ctx,
  unsigned ID,
  LLVMTypeRef *ParamTypes,
  size_t ParamCount
) { return LLVMIntrinsicGetType(Ctx, ID, ParamTypes, ParamCount); }

LLVM_API LLVMBool IntrinsicIsOverloaded(
  unsigned ID
) { return LLVMIntrinsicIsOverloaded(ID); }

LLVM_API unsigned GetFunctionCallConv(
  LLVMValueRef Fn
) { return LLVMGetFunctionCallConv(Fn); }

LLVM_API void SetFunctionCallConv(
  LLVMValueRef Fn,
  unsigned CC
) { return LLVMSetFunctionCallConv(Fn, CC); }

LLVM_API void SetGC(
  LLVMValueRef Fn,
  const char *Name
) { return LLVMSetGC(Fn, Name); }

LLVM_API void AddAttributeAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx,
  LLVMAttributeRef A
) { return LLVMAddAttributeAtIndex(F, Idx, A); }

LLVM_API unsigned GetAttributeCountAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx
) { return LLVMGetAttributeCountAtIndex(F, Idx); }

LLVM_API void GetAttributesAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx,
  LLVMAttributeRef *Attrs
) { return LLVMGetAttributesAtIndex(F, Idx, Attrs); }

LLVM_API LLVMAttributeRef GetEnumAttributeAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx,
  unsigned KindID
) { return LLVMGetEnumAttributeAtIndex(F, Idx, KindID); }

LLVM_API LLVMAttributeRef GetStringAttributeAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx,
  const char *K,
  unsigned KLen
) { return LLVMGetStringAttributeAtIndex(F, Idx, K, KLen); }

LLVM_API void RemoveEnumAttributeAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx,
  unsigned KindID
) { return LLVMRemoveEnumAttributeAtIndex(F, Idx, KindID); }

LLVM_API void RemoveStringAttributeAtIndex(
  LLVMValueRef F,
  LLVMAttributeIndex Idx,
  const char *K,
  unsigned KLen
) { return LLVMRemoveStringAttributeAtIndex(F, Idx, K, KLen); }

LLVM_API void AddTargetDependentFunctionAttr(
  LLVMValueRef Fn,
  const char *A,
  const char *V
) { return LLVMAddTargetDependentFunctionAttr(Fn, A, V); }

LLVM_API unsigned CountParams(
  LLVMValueRef Fn
) { return LLVMCountParams(Fn); }

LLVM_API void GetParams(
  LLVMValueRef Fn,
  LLVMValueRef *Params
) { return LLVMGetParams(Fn, Params); }

LLVM_API LLVMValueRef GetParam(
  LLVMValueRef Fn,
  unsigned Index
) { return LLVMGetParam(Fn, Index); }

LLVM_API LLVMValueRef GetParamParent(
  LLVMValueRef Inst
) { return LLVMGetParamParent(Inst); }

LLVM_API LLVMValueRef GetFirstParam(
  LLVMValueRef Fn
) { return LLVMGetFirstParam(Fn); }

LLVM_API LLVMValueRef GetLastParam(
  LLVMValueRef Fn
) { return LLVMGetLastParam(Fn); }

LLVM_API LLVMValueRef GetNextParam(
  LLVMValueRef Arg
) { return LLVMGetNextParam(Arg); }

LLVM_API LLVMValueRef GetPreviousParam(
  LLVMValueRef Arg
) { return LLVMGetPreviousParam(Arg); }

LLVM_API void SetParamAlignment(
  LLVMValueRef Arg,
  unsigned Align
) { return LLVMSetParamAlignment(Arg, Align); }

LLVM_API LLVMValueRef AddGlobalIFunc(
  LLVMModuleRef M,
  const char *Name,
  size_t NameLen,
  LLVMTypeRef Ty,
  unsigned AddrSpace,
  LLVMValueRef Resolver
) { return LLVMAddGlobalIFunc(M, Name, NameLen, Ty, AddrSpace, Resolver); }

LLVM_API LLVMValueRef GetNamedGlobalIFunc(
  LLVMModuleRef M,
  const char *Name,
  size_t NameLen
) { return LLVMGetNamedGlobalIFunc(M, Name, NameLen); }

LLVM_API LLVMValueRef GetFirstGlobalIFunc(
  LLVMModuleRef M
) { return LLVMGetFirstGlobalIFunc(M); }

LLVM_API LLVMValueRef GetLastGlobalIFunc(
  LLVMModuleRef M
) { return LLVMGetLastGlobalIFunc(M); }

LLVM_API LLVMValueRef GetNextGlobalIFunc(
  LLVMValueRef IFunc
) { return LLVMGetNextGlobalIFunc(IFunc); }

LLVM_API LLVMValueRef GetPreviousGlobalIFunc(
  LLVMValueRef IFunc
) { return LLVMGetPreviousGlobalIFunc(IFunc); }

LLVM_API LLVMValueRef GetGlobalIFuncResolver(
  LLVMValueRef IFunc
) { return LLVMGetGlobalIFuncResolver(IFunc); }

LLVM_API void SetGlobalIFuncResolver(
  LLVMValueRef IFunc,
  LLVMValueRef Resolver
) { return LLVMSetGlobalIFuncResolver(IFunc, Resolver); }

LLVM_API void EraseGlobalIFunc(
  LLVMValueRef IFunc
) { return LLVMEraseGlobalIFunc(IFunc); }

LLVM_API void RemoveGlobalIFunc(
  LLVMValueRef IFunc
) { return LLVMRemoveGlobalIFunc(IFunc); }

LLVM_API LLVMMetadataRef MDStringInContext2(
  LLVMContextRef C,
  const char *Str,
  size_t SLen
) { return LLVMMDStringInContext2(C, Str, SLen); }

LLVM_API LLVMMetadataRef MDNodeInContext2(
  LLVMContextRef C,
  LLVMMetadataRef *MDs,
  size_t Count
) { return LLVMMDNodeInContext2(C, MDs, Count); }

LLVM_API LLVMValueRef MetadataAsValue(
  LLVMContextRef C,
  LLVMMetadataRef MD
) { return LLVMMetadataAsValue(C, MD); }

LLVM_API LLVMMetadataRef ValueAsMetadata(
  LLVMValueRef Val
) { return LLVMValueAsMetadata(Val); }

LLVM_API unsigned GetMDNodeNumOperands(
  LLVMValueRef V
) { return LLVMGetMDNodeNumOperands(V); }

LLVM_API void GetMDNodeOperands(
  LLVMValueRef V,
  LLVMValueRef *Dest
) { return LLVMGetMDNodeOperands(V, Dest); }

LLVM_API LLVMValueRef MDStringInContext(
  LLVMContextRef C,
  const char *Str,
  unsigned SLen
) { return LLVMMDStringInContext(C, Str, SLen); }

LLVM_API LLVMValueRef MDString(
  const char *Str,
  unsigned SLen
) { return LLVMMDString(Str, SLen); }

LLVM_API LLVMValueRef MDNodeInContext(
  LLVMContextRef C,
  LLVMValueRef *Vals,
  unsigned Count
) { return LLVMMDNodeInContext(C, Vals, Count); }

LLVM_API LLVMValueRef MDNode(
  LLVMValueRef *Vals,
  unsigned Count
) { return LLVMMDNode(Vals, Count); }

LLVM_API LLVMValueRef BasicBlockAsValue(
  LLVMBasicBlockRef BB
) { return LLVMBasicBlockAsValue(BB); }

LLVM_API LLVMBool ValueIsBasicBlock(
  LLVMValueRef Val
) { return LLVMValueIsBasicBlock(Val); }

LLVM_API LLVMBasicBlockRef ValueAsBasicBlock(
  LLVMValueRef Val
) { return LLVMValueAsBasicBlock(Val); }

LLVM_API LLVMValueRef GetBasicBlockParent(
  LLVMBasicBlockRef BB
) { return LLVMGetBasicBlockParent(BB); }

LLVM_API LLVMValueRef GetBasicBlockTerminator(
  LLVMBasicBlockRef BB
) { return LLVMGetBasicBlockTerminator(BB); }

LLVM_API unsigned CountBasicBlocks(
  LLVMValueRef Fn
) { return LLVMCountBasicBlocks(Fn); }

LLVM_API void GetBasicBlocks(
  LLVMValueRef Fn,
  LLVMBasicBlockRef *BasicBlocks
) { return LLVMGetBasicBlocks(Fn, BasicBlocks); }

LLVM_API LLVMBasicBlockRef GetFirstBasicBlock(
  LLVMValueRef Fn
) { return LLVMGetFirstBasicBlock(Fn); }

LLVM_API LLVMBasicBlockRef GetLastBasicBlock(
  LLVMValueRef Fn
) { return LLVMGetLastBasicBlock(Fn); }

LLVM_API LLVMBasicBlockRef GetNextBasicBlock(
  LLVMBasicBlockRef BB
) { return LLVMGetNextBasicBlock(BB); }

LLVM_API LLVMBasicBlockRef GetPreviousBasicBlock(
  LLVMBasicBlockRef BB
) { return LLVMGetPreviousBasicBlock(BB); }

LLVM_API LLVMBasicBlockRef GetEntryBasicBlock(
  LLVMValueRef Fn
) { return LLVMGetEntryBasicBlock(Fn); }

LLVM_API void InsertExistingBasicBlockAfterInsertBlock(
  LLVMBuilderRef Builder,
  LLVMBasicBlockRef BB
) { return LLVMInsertExistingBasicBlockAfterInsertBlock(Builder, BB); }

LLVM_API void AppendExistingBasicBlock(
  LLVMValueRef Fn,
  LLVMBasicBlockRef BB
) { return LLVMAppendExistingBasicBlock(Fn, BB); }

LLVM_API LLVMBasicBlockRef CreateBasicBlockInContext(
  LLVMContextRef C,
  const char *Name
) { return LLVMCreateBasicBlockInContext(C, Name); }

LLVM_API LLVMBasicBlockRef AppendBasicBlockInContext(
  LLVMContextRef C,
  LLVMValueRef Fn,
  const char *Name
) { return LLVMAppendBasicBlockInContext(C, Fn, Name); }

LLVM_API LLVMBasicBlockRef AppendBasicBlock(
  LLVMValueRef Fn,
  const char *Name
) { return LLVMAppendBasicBlock(Fn, Name); }

LLVM_API LLVMBasicBlockRef InsertBasicBlockInContext(
  LLVMContextRef C,
  LLVMBasicBlockRef BB,
  const char *Name
) { return LLVMInsertBasicBlockInContext(C, BB, Name); }

LLVM_API LLVMBasicBlockRef InsertBasicBlock(
  LLVMBasicBlockRef InsertBeforeBB,
  const char *Name
) { return LLVMInsertBasicBlock(InsertBeforeBB, Name); }

LLVM_API void DeleteBasicBlock(
  LLVMBasicBlockRef BB
) { return LLVMDeleteBasicBlock(BB); }

LLVM_API void RemoveBasicBlockFromParent(
  LLVMBasicBlockRef BB
) { return LLVMRemoveBasicBlockFromParent(BB); }

LLVM_API void MoveBasicBlockBefore(
  LLVMBasicBlockRef BB,
  LLVMBasicBlockRef MovePos
) { return LLVMMoveBasicBlockBefore(BB, MovePos); }

LLVM_API void MoveBasicBlockAfter(
  LLVMBasicBlockRef BB,
  LLVMBasicBlockRef MovePos
) { return LLVMMoveBasicBlockAfter(BB, MovePos); }

LLVM_API LLVMValueRef GetFirstInstruction(
  LLVMBasicBlockRef BB
) { return LLVMGetFirstInstruction(BB); }

LLVM_API LLVMValueRef GetLastInstruction(
  LLVMBasicBlockRef BB
) { return LLVMGetLastInstruction(BB); }

LLVM_API int HasMetadata(
  LLVMValueRef Val
) { return LLVMHasMetadata(Val); }

LLVM_API LLVMValueRef GetMetadata(
  LLVMValueRef Val,
  unsigned KindID
) { return LLVMGetMetadata(Val, KindID); }

LLVM_API void SetMetadata(
  LLVMValueRef Val,
  unsigned KindID,
  LLVMValueRef Node
) { return LLVMSetMetadata(Val, KindID, Node); }

LLVM_API LLVMBasicBlockRef GetInstructionParent(
  LLVMValueRef Inst
) { return LLVMGetInstructionParent(Inst); }

LLVM_API LLVMValueRef GetNextInstruction(
  LLVMValueRef Inst
) { return LLVMGetNextInstruction(Inst); }

LLVM_API LLVMValueRef GetPreviousInstruction(
  LLVMValueRef Inst
) { return LLVMGetPreviousInstruction(Inst); }

LLVM_API void InstructionRemoveFromParent(
  LLVMValueRef Inst
) { return LLVMInstructionRemoveFromParent(Inst); }

LLVM_API void InstructionEraseFromParent(
  LLVMValueRef Inst
) { return LLVMInstructionEraseFromParent(Inst); }

LLVM_API LLVMOpcode GetInstructionOpcode(
  LLVMValueRef Inst
) { return LLVMGetInstructionOpcode(Inst); }

LLVM_API LLVMIntPredicate GetICmpPredicate(
  LLVMValueRef Inst
) { return LLVMGetICmpPredicate(Inst); }

LLVM_API LLVMRealPredicate GetFCmpPredicate(
  LLVMValueRef Inst
) { return LLVMGetFCmpPredicate(Inst); }

LLVM_API LLVMValueRef InstructionClone(
  LLVMValueRef Inst
) { return LLVMInstructionClone(Inst); }

LLVM_API LLVMValueRef IsATerminatorInst(
  LLVMValueRef Inst
) { return LLVMIsATerminatorInst(Inst); }

LLVM_API unsigned GetNumArgOperands(
  LLVMValueRef Instr
) { return LLVMGetNumArgOperands(Instr); }

LLVM_API void SetInstructionCallConv(
  LLVMValueRef Instr,
  unsigned CC
) { return LLVMSetInstructionCallConv(Instr, CC); }

LLVM_API unsigned GetInstructionCallConv(
  LLVMValueRef Instr
) { return LLVMGetInstructionCallConv(Instr); }

LLVM_API void SetInstrParamAlignment(
  LLVMValueRef Instr,
  unsigned index,
  unsigned Align
) { return LLVMSetInstrParamAlignment(Instr, index, Align); }

LLVM_API void AddCallSiteAttribute(
  LLVMValueRef C,
  LLVMAttributeIndex Idx,
  LLVMAttributeRef A
) { return LLVMAddCallSiteAttribute(C, Idx, A); }

LLVM_API unsigned GetCallSiteAttributeCount(
  LLVMValueRef C,
  LLVMAttributeIndex Idx
) { return LLVMGetCallSiteAttributeCount(C, Idx); }

LLVM_API void GetCallSiteAttributes(
  LLVMValueRef C,
  LLVMAttributeIndex Idx,
  LLVMAttributeRef *Attrs
) { return LLVMGetCallSiteAttributes(C, Idx, Attrs); }

LLVM_API LLVMAttributeRef GetCallSiteEnumAttribute(
  LLVMValueRef C,
  LLVMAttributeIndex Idx,
  unsigned KindID
) { return LLVMGetCallSiteEnumAttribute(C, Idx, KindID); }

LLVM_API LLVMAttributeRef GetCallSiteStringAttribute(
  LLVMValueRef C,
  LLVMAttributeIndex Idx,
  const char *K,
  unsigned KLen
) { return LLVMGetCallSiteStringAttribute(C, Idx, K, KLen); }

LLVM_API void RemoveCallSiteEnumAttribute(
  LLVMValueRef C,
  LLVMAttributeIndex Idx,
  unsigned KindID
) { return LLVMRemoveCallSiteEnumAttribute(C, Idx, KindID); }

LLVM_API void RemoveCallSiteStringAttribute(
  LLVMValueRef C,
  LLVMAttributeIndex Idx,
  const char *K,
  unsigned KLen
) { return LLVMRemoveCallSiteStringAttribute(C, Idx, K, KLen); }

LLVM_API LLVMTypeRef GetCalledFunctionType(
  LLVMValueRef C
) { return LLVMGetCalledFunctionType(C); }

LLVM_API LLVMValueRef GetCalledValue(
  LLVMValueRef Instr
) { return LLVMGetCalledValue(Instr); }

LLVM_API LLVMBool IsTailCall(
  LLVMValueRef CallInst
) { return LLVMIsTailCall(CallInst); }

LLVM_API void SetTailCall(
  LLVMValueRef CallInst,
  LLVMBool IsTailCall
) { return LLVMSetTailCall(CallInst, IsTailCall); }

LLVM_API LLVMBasicBlockRef GetNormalDest(
  LLVMValueRef InvokeInst
) { return LLVMGetNormalDest(InvokeInst); }

LLVM_API LLVMBasicBlockRef GetUnwindDest(
  LLVMValueRef InvokeInst
) { return LLVMGetUnwindDest(InvokeInst); }

LLVM_API void SetNormalDest(
  LLVMValueRef InvokeInst,
  LLVMBasicBlockRef B
) { return LLVMSetNormalDest(InvokeInst, B); }

LLVM_API void SetUnwindDest(
  LLVMValueRef InvokeInst,
  LLVMBasicBlockRef B
) { return LLVMSetUnwindDest(InvokeInst, B); }

LLVM_API unsigned GetNumSuccessors(
  LLVMValueRef Term
) { return LLVMGetNumSuccessors(Term); }

LLVM_API LLVMBasicBlockRef GetSuccessor(
  LLVMValueRef Term,
  unsigned i
) { return LLVMGetSuccessor(Term, i); }

LLVM_API void SetSuccessor(
  LLVMValueRef Term,
  unsigned i,
  LLVMBasicBlockRef block
) { return LLVMSetSuccessor(Term, i, block); }

LLVM_API LLVMBool IsConditional(
  LLVMValueRef Branch
) { return LLVMIsConditional(Branch); }

LLVM_API LLVMValueRef GetCondition(
  LLVMValueRef Branch
) { return LLVMGetCondition(Branch); }

LLVM_API void SetCondition(
  LLVMValueRef Branch,
  LLVMValueRef Cond
) { return LLVMSetCondition(Branch, Cond); }

LLVM_API LLVMBasicBlockRef GetSwitchDefaultDest(
  LLVMValueRef SwitchInstr
) { return LLVMGetSwitchDefaultDest(SwitchInstr); }

LLVM_API LLVMTypeRef GetAllocatedType(
  LLVMValueRef Alloca
) { return LLVMGetAllocatedType(Alloca); }

LLVM_API LLVMBool IsInBounds(
  LLVMValueRef GEP
) { return LLVMIsInBounds(GEP); }

LLVM_API void SetIsInBounds(
  LLVMValueRef GEP,
  LLVMBool InBounds
) { return LLVMSetIsInBounds(GEP, InBounds); }

LLVM_API void AddIncoming(
  LLVMValueRef PhiNode,
  LLVMValueRef *IncomingValues,
  LLVMBasicBlockRef *IncomingBlocks,
  unsigned Count
) { return LLVMAddIncoming(PhiNode, IncomingValues, IncomingBlocks, Count); }

LLVM_API unsigned CountIncoming(
  LLVMValueRef PhiNode
) { return LLVMCountIncoming(PhiNode); }

LLVM_API LLVMValueRef GetIncomingValue(
  LLVMValueRef PhiNode,
  unsigned Index
) { return LLVMGetIncomingValue(PhiNode, Index); }

LLVM_API LLVMBasicBlockRef GetIncomingBlock(
  LLVMValueRef PhiNode,
  unsigned Index
) { return LLVMGetIncomingBlock(PhiNode, Index); }

LLVM_API unsigned GetNumIndices(
  LLVMValueRef Inst
) { return LLVMGetNumIndices(Inst); }

LLVM_API LLVMBuilderRef CreateBuilderInContext(
  LLVMContextRef C
) { return LLVMCreateBuilderInContext(C); }

LLVM_API LLVMBuilderRef CreateBuilder(void) { return LLVMCreateBuilder(); }

LLVM_API void PositionBuilder(
  LLVMBuilderRef Builder,
  LLVMBasicBlockRef Block,
  LLVMValueRef Instr
) { return LLVMPositionBuilder(Builder, Block, Instr); }

LLVM_API void PositionBuilderBefore(
  LLVMBuilderRef Builder,
  LLVMValueRef Instr
) { return LLVMPositionBuilderBefore(Builder, Instr); }

LLVM_API void PositionBuilderAtEnd(
  LLVMBuilderRef Builder,
  LLVMBasicBlockRef Block
) { return LLVMPositionBuilderAtEnd(Builder, Block); }

LLVM_API LLVMBasicBlockRef GetInsertBlock(
  LLVMBuilderRef Builder
) { return LLVMGetInsertBlock(Builder); }

LLVM_API void ClearInsertionPosition(
  LLVMBuilderRef Builder
) { return LLVMClearInsertionPosition(Builder); }

LLVM_API void InsertIntoBuilder(
  LLVMBuilderRef Builder,
  LLVMValueRef Instr
) { return LLVMInsertIntoBuilder(Builder, Instr); }

LLVM_API void InsertIntoBuilderWithName(
  LLVMBuilderRef Builder,
  LLVMValueRef Instr,
  const char *Name
) { return LLVMInsertIntoBuilderWithName(Builder, Instr, Name); }

LLVM_API void DisposeBuilder(
  LLVMBuilderRef Builder
) { return LLVMDisposeBuilder(Builder); }

LLVM_API LLVMMetadataRef GetCurrentDebugLocation2(
  LLVMBuilderRef Builder
) { return LLVMGetCurrentDebugLocation2(Builder); }

LLVM_API void SetCurrentDebugLocation2(
  LLVMBuilderRef Builder,
  LLVMMetadataRef Loc
) { return LLVMSetCurrentDebugLocation2(Builder, Loc); }

LLVM_API void SetInstDebugLocation(
  LLVMBuilderRef Builder,
  LLVMValueRef Inst
) { return LLVMSetInstDebugLocation(Builder, Inst); }

LLVM_API LLVMMetadataRef BuilderGetDefaultFPMathTag(
  LLVMBuilderRef Builder
) { return LLVMBuilderGetDefaultFPMathTag(Builder); }

LLVM_API void BuilderSetDefaultFPMathTag(
  LLVMBuilderRef Builder,
  LLVMMetadataRef FPMathTag
) { return LLVMBuilderSetDefaultFPMathTag(Builder, FPMathTag); }

LLVM_API void SetCurrentDebugLocation(
  LLVMBuilderRef Builder,
  LLVMValueRef L
) { return LLVMSetCurrentDebugLocation(Builder, L); }

LLVM_API LLVMValueRef GetCurrentDebugLocation(
  LLVMBuilderRef Builder
) { return LLVMGetCurrentDebugLocation(Builder); }

LLVM_API LLVMValueRef BuildRetVoid(
  LLVMBuilderRef $0
) { return LLVMBuildRetVoid($0); }

LLVM_API LLVMValueRef BuildRet(
  LLVMBuilderRef $0,
  LLVMValueRef V
) { return LLVMBuildRet($0, V); }

LLVM_API LLVMValueRef BuildAggregateRet(
  LLVMBuilderRef $0,
  LLVMValueRef *RetVals,
  unsigned N
) { return LLVMBuildAggregateRet($0, RetVals, N); }

LLVM_API LLVMValueRef BuildBr(
  LLVMBuilderRef $0,
  LLVMBasicBlockRef Dest
) { return LLVMBuildBr($0, Dest); }

LLVM_API LLVMValueRef BuildCondBr(
  LLVMBuilderRef $0,
  LLVMValueRef If,
  LLVMBasicBlockRef Then,
  LLVMBasicBlockRef Else
) { return LLVMBuildCondBr($0, If, Then, Else); }

LLVM_API LLVMValueRef BuildSwitch(
  LLVMBuilderRef $0,
  LLVMValueRef V,
  LLVMBasicBlockRef Else,
  unsigned NumCases
) { return LLVMBuildSwitch($0, V, Else, NumCases); }

LLVM_API LLVMValueRef BuildIndirectBr(
  LLVMBuilderRef B,
  LLVMValueRef Addr,
  unsigned NumDests
) { return LLVMBuildIndirectBr(B, Addr, NumDests); }

LLVM_API LLVMValueRef BuildInvoke(
  LLVMBuilderRef $0,
  LLVMValueRef Fn,
  LLVMValueRef *Args,
  unsigned NumArgs,
  LLVMBasicBlockRef Then,
  LLVMBasicBlockRef Catch,
  const char *Name
) { return LLVMBuildInvoke($0, Fn, Args, NumArgs, Then, Catch, Name); }

LLVM_API LLVMValueRef BuildInvoke2(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  LLVMValueRef Fn,
  LLVMValueRef *Args,
  unsigned NumArgs,
  LLVMBasicBlockRef Then,
  LLVMBasicBlockRef Catch,
  const char *Name
) { return LLVMBuildInvoke2($0, Ty, Fn, Args, NumArgs, Then, Catch, Name); }

LLVM_API LLVMValueRef BuildUnreachable(
  LLVMBuilderRef $0
) { return LLVMBuildUnreachable($0); }

LLVM_API LLVMValueRef BuildResume(
  LLVMBuilderRef B,
  LLVMValueRef Exn
) { return LLVMBuildResume(B, Exn); }

LLVM_API LLVMValueRef BuildLandingPad(
  LLVMBuilderRef B,
  LLVMTypeRef Ty,
  LLVMValueRef PersFn,
  unsigned NumClauses,
  const char *Name
) { return LLVMBuildLandingPad(B, Ty, PersFn, NumClauses, Name); }

LLVM_API LLVMValueRef BuildCleanupRet(
  LLVMBuilderRef B,
  LLVMValueRef CatchPad,
  LLVMBasicBlockRef BB
) { return LLVMBuildCleanupRet(B, CatchPad, BB); }

LLVM_API LLVMValueRef BuildCatchRet(
  LLVMBuilderRef B,
  LLVMValueRef CatchPad,
  LLVMBasicBlockRef BB
) { return LLVMBuildCatchRet(B, CatchPad, BB); }

LLVM_API LLVMValueRef BuildCatchPad(
  LLVMBuilderRef B,
  LLVMValueRef ParentPad,
  LLVMValueRef *Args,
  unsigned NumArgs,
  const char *Name
) { return LLVMBuildCatchPad(B, ParentPad, Args, NumArgs, Name); }

LLVM_API LLVMValueRef BuildCleanupPad(
  LLVMBuilderRef B,
  LLVMValueRef ParentPad,
  LLVMValueRef *Args,
  unsigned NumArgs,
  const char *Name
) { return LLVMBuildCleanupPad(B, ParentPad, Args, NumArgs, Name); }

LLVM_API LLVMValueRef BuildCatchSwitch(
  LLVMBuilderRef B,
  LLVMValueRef ParentPad,
  LLVMBasicBlockRef UnwindBB,
  unsigned NumHandlers,
  const char *Name
) { return LLVMBuildCatchSwitch(B, ParentPad, UnwindBB, NumHandlers, Name); }

LLVM_API void AddCase(
  LLVMValueRef Switch,
  LLVMValueRef OnVal,
  LLVMBasicBlockRef Dest
) { return LLVMAddCase(Switch, OnVal, Dest); }

LLVM_API void AddDestination(
  LLVMValueRef IndirectBr,
  LLVMBasicBlockRef Dest
) { return LLVMAddDestination(IndirectBr, Dest); }

LLVM_API unsigned GetNumClauses(
  LLVMValueRef LandingPad
) { return LLVMGetNumClauses(LandingPad); }

LLVM_API LLVMValueRef GetClause(
  LLVMValueRef LandingPad,
  unsigned Idx
) { return LLVMGetClause(LandingPad, Idx); }

LLVM_API void AddClause(
  LLVMValueRef LandingPad,
  LLVMValueRef ClauseVal
) { return LLVMAddClause(LandingPad, ClauseVal); }

LLVM_API LLVMBool IsCleanup(
  LLVMValueRef LandingPad
) { return LLVMIsCleanup(LandingPad); }

LLVM_API void SetCleanup(
  LLVMValueRef LandingPad,
  LLVMBool Val
) { return LLVMSetCleanup(LandingPad, Val); }

LLVM_API void AddHandler(
  LLVMValueRef CatchSwitch,
  LLVMBasicBlockRef Dest
) { return LLVMAddHandler(CatchSwitch, Dest); }

LLVM_API unsigned GetNumHandlers(
  LLVMValueRef CatchSwitch
) { return LLVMGetNumHandlers(CatchSwitch); }

LLVM_API void GetHandlers(
  LLVMValueRef CatchSwitch,
  LLVMBasicBlockRef *Handlers
) { return LLVMGetHandlers(CatchSwitch, Handlers); }

LLVM_API LLVMValueRef GetArgOperand(
  LLVMValueRef Funclet,
  unsigned i
) { return LLVMGetArgOperand(Funclet, i); }

LLVM_API void SetArgOperand(
  LLVMValueRef Funclet,
  unsigned i,
  LLVMValueRef value
) { return LLVMSetArgOperand(Funclet, i, value); }

LLVM_API LLVMValueRef GetParentCatchSwitch(
  LLVMValueRef CatchPad
) { return LLVMGetParentCatchSwitch(CatchPad); }

LLVM_API void SetParentCatchSwitch(
  LLVMValueRef CatchPad,
  LLVMValueRef CatchSwitch
) { return LLVMSetParentCatchSwitch(CatchPad, CatchSwitch); }

LLVM_API LLVMValueRef BuildAdd(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildAdd($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNSWAdd(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildNSWAdd($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNUWAdd(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildNUWAdd($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFAdd(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildFAdd($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildSub(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildSub($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNSWSub(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildNSWSub($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNUWSub(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildNUWSub($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFSub(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildFSub($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildMul(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildMul($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNSWMul(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildNSWMul($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNUWMul(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildNUWMul($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFMul(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildFMul($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildUDiv(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildUDiv($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildExactUDiv(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildExactUDiv($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildSDiv(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildSDiv($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildExactSDiv(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildExactSDiv($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFDiv(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildFDiv($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildURem(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildURem($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildSRem(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildSRem($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFRem(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildFRem($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildShl(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildShl($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildLShr(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildLShr($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildAShr(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildAShr($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildAnd(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildAnd($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildOr(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildOr($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildXor(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildXor($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildBinOp(
  LLVMBuilderRef B,
  LLVMOpcode Op,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildBinOp(B, Op, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildNeg(
  LLVMBuilderRef $0,
  LLVMValueRef V,
  const char *Name
) { return LLVMBuildNeg($0, V, Name); }

LLVM_API LLVMValueRef BuildNSWNeg(
  LLVMBuilderRef B,
  LLVMValueRef V,
  const char *Name
) { return LLVMBuildNSWNeg(B, V, Name); }

LLVM_API LLVMValueRef BuildNUWNeg(
  LLVMBuilderRef B,
  LLVMValueRef V,
  const char *Name
) { return LLVMBuildNUWNeg(B, V, Name); }

LLVM_API LLVMValueRef BuildFNeg(
  LLVMBuilderRef $0,
  LLVMValueRef V,
  const char *Name
) { return LLVMBuildFNeg($0, V, Name); }

LLVM_API LLVMValueRef BuildNot(
  LLVMBuilderRef $0,
  LLVMValueRef V,
  const char *Name
) { return LLVMBuildNot($0, V, Name); }

LLVM_API LLVMValueRef BuildMalloc(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  const char *Name
) { return LLVMBuildMalloc($0, Ty, Name); }

LLVM_API LLVMValueRef BuildArrayMalloc(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  LLVMValueRef Val,
  const char *Name
) { return LLVMBuildArrayMalloc($0, Ty, Val, Name); }

LLVM_API LLVMValueRef BuildMemSet(
  LLVMBuilderRef B,
  LLVMValueRef Ptr,
  LLVMValueRef Val,
  LLVMValueRef Len,
  unsigned Align
) { return LLVMBuildMemSet(B, Ptr, Val, Len, Align); }

LLVM_API LLVMValueRef BuildMemCpy(
  LLVMBuilderRef B,
  LLVMValueRef Dst,
  unsigned DstAlign,
  LLVMValueRef Src,
  unsigned SrcAlign,
  LLVMValueRef Size
) { return LLVMBuildMemCpy(B, Dst, DstAlign, Src, SrcAlign, Size); }

LLVM_API LLVMValueRef BuildMemMove(
  LLVMBuilderRef B,
  LLVMValueRef Dst,
  unsigned DstAlign,
  LLVMValueRef Src,
  unsigned SrcAlign,
  LLVMValueRef Size
) { return LLVMBuildMemMove(B, Dst, DstAlign, Src, SrcAlign, Size); }

LLVM_API LLVMValueRef BuildAlloca(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  const char *Name
) { return LLVMBuildAlloca($0, Ty, Name); }

LLVM_API LLVMValueRef BuildArrayAlloca(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  LLVMValueRef Val,
  const char *Name
) { return LLVMBuildArrayAlloca($0, Ty, Val, Name); }

LLVM_API LLVMValueRef BuildFree(
  LLVMBuilderRef $0,
  LLVMValueRef PointerVal
) { return LLVMBuildFree($0, PointerVal); }

LLVM_API LLVMValueRef BuildLoad(
  LLVMBuilderRef $0,
  LLVMValueRef PointerVal,
  const char *Name
) { return LLVMBuildLoad($0, PointerVal, Name); }

LLVM_API LLVMValueRef BuildLoad2(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  LLVMValueRef PointerVal,
  const char *Name
) { return LLVMBuildLoad2($0, Ty, PointerVal, Name); }

LLVM_API LLVMValueRef BuildStore(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMValueRef Ptr
) { return LLVMBuildStore($0, Val, Ptr); }

LLVM_API LLVMValueRef BuildGEP(
  LLVMBuilderRef B,
  LLVMValueRef Pointer,
  LLVMValueRef *Indices,
  unsigned NumIndices,
  const char *Name
) { return LLVMBuildGEP(B, Pointer, Indices, NumIndices, Name); }

LLVM_API LLVMValueRef BuildInBoundsGEP(
  LLVMBuilderRef B,
  LLVMValueRef Pointer,
  LLVMValueRef *Indices,
  unsigned NumIndices,
  const char *Name
) { return LLVMBuildInBoundsGEP(B, Pointer, Indices, NumIndices, Name); }

LLVM_API LLVMValueRef BuildStructGEP(
  LLVMBuilderRef B,
  LLVMValueRef Pointer,
  unsigned Idx,
  const char *Name
) { return LLVMBuildStructGEP(B, Pointer, Idx, Name); }

LLVM_API LLVMValueRef BuildGEP2(
  LLVMBuilderRef B,
  LLVMTypeRef Ty,
  LLVMValueRef Pointer,
  LLVMValueRef *Indices,
  unsigned NumIndices,
  const char *Name
) { return LLVMBuildGEP2(B, Ty, Pointer, Indices, NumIndices, Name); }

LLVM_API LLVMValueRef BuildInBoundsGEP2(
  LLVMBuilderRef B,
  LLVMTypeRef Ty,
  LLVMValueRef Pointer,
  LLVMValueRef *Indices,
  unsigned NumIndices,
  const char *Name
) { return LLVMBuildInBoundsGEP2(B, Ty, Pointer, Indices, NumIndices, Name); }

LLVM_API LLVMValueRef BuildStructGEP2(
  LLVMBuilderRef B,
  LLVMTypeRef Ty,
  LLVMValueRef Pointer,
  unsigned Idx,
  const char *Name
) { return LLVMBuildStructGEP2(B, Ty, Pointer, Idx, Name); }

LLVM_API LLVMValueRef BuildGlobalString(
  LLVMBuilderRef B,
  const char *Str,
  const char *Name
) { return LLVMBuildGlobalString(B, Str, Name); }

LLVM_API LLVMValueRef BuildGlobalStringPtr(
  LLVMBuilderRef B,
  const char *Str,
  const char *Name
) { return LLVMBuildGlobalStringPtr(B, Str, Name); }

LLVM_API LLVMBool GetVolatile(
  LLVMValueRef MemoryAccessInst
) { return LLVMGetVolatile(MemoryAccessInst); }

LLVM_API void SetVolatile(
  LLVMValueRef MemoryAccessInst,
  LLVMBool IsVolatile
) { return LLVMSetVolatile(MemoryAccessInst, IsVolatile); }

LLVM_API LLVMBool GetWeak(
  LLVMValueRef CmpXchgInst
) { return LLVMGetWeak(CmpXchgInst); }

LLVM_API void SetWeak(
  LLVMValueRef CmpXchgInst,
  LLVMBool IsWeak
) { return LLVMSetWeak(CmpXchgInst, IsWeak); }

LLVM_API LLVMAtomicOrdering GetOrdering(
  LLVMValueRef MemoryAccessInst
) { return LLVMGetOrdering(MemoryAccessInst); }

LLVM_API void SetOrdering(
  LLVMValueRef MemoryAccessInst,
  LLVMAtomicOrdering Ordering
) { return LLVMSetOrdering(MemoryAccessInst, Ordering); }

LLVM_API LLVMAtomicRMWBinOp GetAtomicRMWBinOp(
  LLVMValueRef AtomicRMWInst
) { return LLVMGetAtomicRMWBinOp(AtomicRMWInst); }

LLVM_API void SetAtomicRMWBinOp(
  LLVMValueRef AtomicRMWInst,
  LLVMAtomicRMWBinOp BinOp
) { return LLVMSetAtomicRMWBinOp(AtomicRMWInst, BinOp); }

LLVM_API LLVMValueRef BuildTrunc(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildTrunc($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildZExt(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildZExt($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildSExt(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildSExt($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildFPToUI(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildFPToUI($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildFPToSI(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildFPToSI($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildUIToFP(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildUIToFP($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildSIToFP(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildSIToFP($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildFPTrunc(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildFPTrunc($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildFPExt(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildFPExt($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildPtrToInt(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildPtrToInt($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildIntToPtr(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildIntToPtr($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildBitCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildBitCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildAddrSpaceCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildAddrSpaceCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildZExtOrBitCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildZExtOrBitCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildSExtOrBitCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildSExtOrBitCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildTruncOrBitCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildTruncOrBitCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildCast(
  LLVMBuilderRef B,
  LLVMOpcode Op,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildCast(B, Op, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildPointerCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildPointerCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildIntCast2(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  LLVMBool IsSigned,
  const char *Name
) { return LLVMBuildIntCast2($0, Val, DestTy, IsSigned, Name); }

LLVM_API LLVMValueRef BuildFPCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildFPCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildIntCast(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  /*Signed cast!*/
                              LLVMTypeRef DestTy,
  const char *Name
) { return LLVMBuildIntCast($0, Val, DestTy, Name); }

LLVM_API LLVMValueRef BuildICmp(
  LLVMBuilderRef $0,
  LLVMIntPredicate Op,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildICmp($0, Op, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFCmp(
  LLVMBuilderRef $0,
  LLVMRealPredicate Op,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildFCmp($0, Op, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildPhi(
  LLVMBuilderRef $0,
  LLVMTypeRef Ty,
  const char *Name
) { return LLVMBuildPhi($0, Ty, Name); }

LLVM_API LLVMValueRef BuildCall(
  LLVMBuilderRef $0,
  LLVMValueRef Fn,
  LLVMValueRef *Args,
  unsigned NumArgs,
  const char *Name
) { return LLVMBuildCall($0, Fn, Args, NumArgs, Name); }

LLVM_API LLVMValueRef BuildCall2(
  LLVMBuilderRef $0,
  LLVMTypeRef $1,
  LLVMValueRef Fn,
  LLVMValueRef *Args,
  unsigned NumArgs,
  const char *Name
) { return LLVMBuildCall2($0, $1, Fn, Args, NumArgs, Name); }

LLVM_API LLVMValueRef BuildSelect(
  LLVMBuilderRef $0,
  LLVMValueRef If,
  LLVMValueRef Then,
  LLVMValueRef Else,
  const char *Name
) { return LLVMBuildSelect($0, If, Then, Else, Name); }

LLVM_API LLVMValueRef BuildVAArg(
  LLVMBuilderRef $0,
  LLVMValueRef List,
  LLVMTypeRef Ty,
  const char *Name
) { return LLVMBuildVAArg($0, List, Ty, Name); }

LLVM_API LLVMValueRef BuildExtractElement(
  LLVMBuilderRef $0,
  LLVMValueRef VecVal,
  LLVMValueRef Index,
  const char *Name
) { return LLVMBuildExtractElement($0, VecVal, Index, Name); }

LLVM_API LLVMValueRef BuildInsertElement(
  LLVMBuilderRef $0,
  LLVMValueRef VecVal,
  LLVMValueRef EltVal,
  LLVMValueRef Index,
  const char *Name
) { return LLVMBuildInsertElement($0, VecVal, EltVal, Index, Name); }

LLVM_API LLVMValueRef BuildShuffleVector(
  LLVMBuilderRef $0,
  LLVMValueRef V1,
  LLVMValueRef V2,
  LLVMValueRef Mask,
  const char *Name
) { return LLVMBuildShuffleVector($0, V1, V2, Mask, Name); }

LLVM_API LLVMValueRef BuildExtractValue(
  LLVMBuilderRef $0,
  LLVMValueRef AggVal,
  unsigned Index,
  const char *Name
) { return LLVMBuildExtractValue($0, AggVal, Index, Name); }

LLVM_API LLVMValueRef BuildInsertValue(
  LLVMBuilderRef $0,
  LLVMValueRef AggVal,
  LLVMValueRef EltVal,
  unsigned Index,
  const char *Name
) { return LLVMBuildInsertValue($0, AggVal, EltVal, Index, Name); }

LLVM_API LLVMValueRef BuildFreeze(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  const char *Name
) { return LLVMBuildFreeze($0, Val, Name); }

LLVM_API LLVMValueRef BuildIsNull(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  const char *Name
) { return LLVMBuildIsNull($0, Val, Name); }

LLVM_API LLVMValueRef BuildIsNotNull(
  LLVMBuilderRef $0,
  LLVMValueRef Val,
  const char *Name
) { return LLVMBuildIsNotNull($0, Val, Name); }

LLVM_API LLVMValueRef BuildPtrDiff(
  LLVMBuilderRef $0,
  LLVMValueRef LHS,
  LLVMValueRef RHS,
  const char *Name
) { return LLVMBuildPtrDiff($0, LHS, RHS, Name); }

LLVM_API LLVMValueRef BuildFence(
  LLVMBuilderRef B,
  LLVMAtomicOrdering ordering,
  LLVMBool singleThread,
  const char *Name
) { return LLVMBuildFence(B, ordering, singleThread, Name); }

LLVM_API LLVMValueRef BuildAtomicRMW(
  LLVMBuilderRef B,
  LLVMAtomicRMWBinOp op,
  LLVMValueRef PTR,
  LLVMValueRef Val,
  LLVMAtomicOrdering ordering,
  LLVMBool singleThread
) { return LLVMBuildAtomicRMW(B, op, PTR, Val, ordering, singleThread); }

LLVM_API LLVMValueRef BuildAtomicCmpXchg(
  LLVMBuilderRef B,
  LLVMValueRef Ptr,
  LLVMValueRef Cmp,
  LLVMValueRef New,
  LLVMAtomicOrdering SuccessOrdering,
  LLVMAtomicOrdering FailureOrdering,
  LLVMBool SingleThread
) { return LLVMBuildAtomicCmpXchg(B, Ptr, Cmp, New, SuccessOrdering, FailureOrdering, SingleThread); }

LLVM_API LLVMBool IsAtomicSingleThread(
  LLVMValueRef AtomicInst
) { return LLVMIsAtomicSingleThread(AtomicInst); }

LLVM_API void SetAtomicSingleThread(
  LLVMValueRef AtomicInst,
  LLVMBool SingleThread
) { return LLVMSetAtomicSingleThread(AtomicInst, SingleThread); }

LLVM_API LLVMAtomicOrdering GetCmpXchgSuccessOrdering(
  LLVMValueRef CmpXchgInst
) { return LLVMGetCmpXchgSuccessOrdering(CmpXchgInst); }

LLVM_API void SetCmpXchgSuccessOrdering(
  LLVMValueRef CmpXchgInst,
  LLVMAtomicOrdering Ordering
) { return LLVMSetCmpXchgSuccessOrdering(CmpXchgInst, Ordering); }

LLVM_API LLVMAtomicOrdering GetCmpXchgFailureOrdering(
  LLVMValueRef CmpXchgInst
) { return LLVMGetCmpXchgFailureOrdering(CmpXchgInst); }

LLVM_API void SetCmpXchgFailureOrdering(
  LLVMValueRef CmpXchgInst,
  LLVMAtomicOrdering Ordering
) { return LLVMSetCmpXchgFailureOrdering(CmpXchgInst, Ordering); }

LLVM_API void DisposeModuleProvider(
  LLVMModuleProviderRef M
) { return LLVMDisposeModuleProvider(M); }

LLVM_API LLVMBool CreateMemoryBufferWithContentsOfFile(
  const char *Path,
  LLVMMemoryBufferRef *OutMemBuf,
  char **OutMessage
) { return LLVMCreateMemoryBufferWithContentsOfFile(Path, OutMemBuf, OutMessage); }

LLVM_API LLVMBool CreateMemoryBufferWithSTDIN(
  LLVMMemoryBufferRef *OutMemBuf,
  char **OutMessage
) { return LLVMCreateMemoryBufferWithSTDIN(OutMemBuf, OutMessage); }

LLVM_API LLVMMemoryBufferRef CreateMemoryBufferWithMemoryRange(
  const char *InputData,
  size_t InputDataLength,
  const char *BufferName,
  LLVMBool RequiresNullTerminator
) { return LLVMCreateMemoryBufferWithMemoryRange(InputData, InputDataLength, BufferName, RequiresNullTerminator); }

LLVM_API LLVMMemoryBufferRef CreateMemoryBufferWithMemoryRangeCopy(
  const char *InputData,
  size_t InputDataLength,
  const char *BufferName
) { return LLVMCreateMemoryBufferWithMemoryRangeCopy(InputData, InputDataLength, BufferName); }

LLVM_API size_t GetBufferSize(
  LLVMMemoryBufferRef MemBuf
) { return LLVMGetBufferSize(MemBuf); }

LLVM_API void DisposeMemoryBuffer(
  LLVMMemoryBufferRef MemBuf
) { return LLVMDisposeMemoryBuffer(MemBuf); }

LLVM_API LLVMPassRegistryRef GetGlobalPassRegistry(void) { return LLVMGetGlobalPassRegistry(); }

LLVM_API LLVMPassManagerRef CreatePassManager(void) { return LLVMCreatePassManager(); }

LLVM_API LLVMPassManagerRef CreateFunctionPassManagerForModule(
  LLVMModuleRef M
) { return LLVMCreateFunctionPassManagerForModule(M); }

LLVM_API LLVMPassManagerRef CreateFunctionPassManager(
  LLVMModuleProviderRef MP
) { return LLVMCreateFunctionPassManager(MP); }

LLVM_API LLVMBool RunPassManager(
  LLVMPassManagerRef PM,
  LLVMModuleRef M
) { return LLVMRunPassManager(PM, M); }

LLVM_API LLVMBool InitializeFunctionPassManager(
  LLVMPassManagerRef FPM
) { return LLVMInitializeFunctionPassManager(FPM); }

LLVM_API LLVMBool RunFunctionPassManager(
  LLVMPassManagerRef FPM,
  LLVMValueRef F
) { return LLVMRunFunctionPassManager(FPM, F); }

LLVM_API LLVMBool FinalizeFunctionPassManager(
  LLVMPassManagerRef FPM
) { return LLVMFinalizeFunctionPassManager(FPM); }

LLVM_API void DisposePassManager(
  LLVMPassManagerRef PM
) { return LLVMDisposePassManager(PM); }

LLVM_API LLVMBool StartMultithreaded(void) { return LLVMStartMultithreaded(); }

LLVM_API void StopMultithreaded(void) { return LLVMStopMultithreaded(); }

LLVM_API LLVMBool IsMultithreaded(void) { return LLVMIsMultithreaded(); }

LLVM_API unsigned DebugMetadataVersion(void) { return LLVMDebugMetadataVersion(); }

LLVM_API unsigned GetModuleDebugMetadataVersion(
  LLVMModuleRef Module
) { return LLVMGetModuleDebugMetadataVersion(Module); }

LLVM_API LLVMBool StripModuleDebugInfo(
  LLVMModuleRef Module
) { return LLVMStripModuleDebugInfo(Module); }

LLVM_API LLVMDIBuilderRef CreateDIBuilderDisallowUnresolved(
  LLVMModuleRef M
) { return LLVMCreateDIBuilderDisallowUnresolved(M); }

LLVM_API LLVMDIBuilderRef CreateDIBuilder(
  LLVMModuleRef M
) { return LLVMCreateDIBuilder(M); }

LLVM_API void DisposeDIBuilder(
  LLVMDIBuilderRef Builder
) { return LLVMDisposeDIBuilder(Builder); }

LLVM_API void DIBuilderFinalize(
  LLVMDIBuilderRef Builder
) { return LLVMDIBuilderFinalize(Builder); }

LLVM_API LLVMMetadataRef DIBuilderCreateCompileUnit(
  LLVMDIBuilderRef Builder,
  LLVMDWARFSourceLanguage Lang,
  LLVMMetadataRef FileRef,
  const char *Producer,
  size_t ProducerLen,
  LLVMBool isOptimized,
  const char *Flags,
  size_t FlagsLen,
  unsigned RuntimeVer,
  const char *SplitName,
  size_t SplitNameLen,
  LLVMDWARFEmissionKind Kind,
  unsigned DWOId,
  LLVMBool SplitDebugInlining,
  LLVMBool DebugInfoForProfiling
) { return LLVMDIBuilderCreateCompileUnit(Builder, Lang, FileRef, Producer, ProducerLen, isOptimized, Flags, FlagsLen, RuntimeVer, SplitName, SplitNameLen, Kind, DWOId, SplitDebugInlining, DebugInfoForProfiling); }

LLVM_API LLVMMetadataRef DIBuilderCreateFunction(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  const char *LinkageName,
  size_t LinkageNameLen,
  LLVMMetadataRef File,
  unsigned LineNo,
  LLVMMetadataRef Ty,
  LLVMBool IsLocalToUnit,
  LLVMBool IsDefinition,
  unsigned ScopeLine,
  LLVMDIFlags Flags,
  LLVMBool IsOptimized
) { return LLVMDIBuilderCreateFunction(Builder, Scope, Name, NameLen, LinkageName, LinkageNameLen, File, LineNo, Ty, IsLocalToUnit, IsDefinition, ScopeLine, Flags, IsOptimized); }

LLVM_API LLVMMetadataRef DIBuilderCreateLexicalBlock(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  LLVMMetadataRef File,
  unsigned Line,
  unsigned Column
) { return LLVMDIBuilderCreateLexicalBlock(Builder, Scope, File, Line, Column); }

LLVM_API unsigned DILocationGetLine(
  LLVMMetadataRef Location
) { return LLVMDILocationGetLine(Location); }

LLVM_API unsigned DILocationGetColumn(
  LLVMMetadataRef Location
) { return LLVMDILocationGetColumn(Location); }

LLVM_API LLVMMetadataRef DILocationGetScope(
  LLVMMetadataRef Location
) { return LLVMDILocationGetScope(Location); }

LLVM_API LLVMMetadataRef DILocationGetInlinedAt(
  LLVMMetadataRef Location
) { return LLVMDILocationGetInlinedAt(Location); }

LLVM_API LLVMMetadataRef DIScopeGetFile(
  LLVMMetadataRef Scope
) { return LLVMDIScopeGetFile(Scope); }

LLVM_API LLVMMetadataRef DIBuilderGetOrCreateTypeArray(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef *Data,
  size_t NumElements
) { return LLVMDIBuilderGetOrCreateTypeArray(Builder, Data, NumElements); }

LLVM_API LLVMMetadataRef DIBuilderCreateMacro(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef ParentMacroFile,
  unsigned Line,
  LLVMDWARFMacinfoRecordType RecordType,
  const char *Name,
  size_t NameLen,
  const char *Value,
  size_t ValueLen
) { return LLVMDIBuilderCreateMacro(Builder, ParentMacroFile, Line, RecordType, Name, NameLen, Value, ValueLen); }

LLVM_API LLVMMetadataRef DIBuilderCreateEnumerator(
  LLVMDIBuilderRef Builder,
  const char *Name,
  size_t NameLen,
  int64_t Value,
  LLVMBool IsUnsigned
) { return LLVMDIBuilderCreateEnumerator(Builder, Name, NameLen, Value, IsUnsigned); }

LLVM_API LLVMMetadataRef DIBuilderCreateEnumerationType(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef File,
  unsigned LineNumber,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  LLVMMetadataRef *Elements,
  unsigned NumElements,
  LLVMMetadataRef ClassTy
) { return LLVMDIBuilderCreateEnumerationType(Builder, Scope, Name, NameLen, File, LineNumber, SizeInBits, AlignInBits, Elements, NumElements, ClassTy); }

LLVM_API LLVMMetadataRef DIBuilderCreateUnionType(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef File,
  unsigned LineNumber,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  LLVMDIFlags Flags,
  LLVMMetadataRef *Elements,
  unsigned NumElements,
  unsigned RunTimeLang,
  const char *UniqueId,
  size_t UniqueIdLen
) { return LLVMDIBuilderCreateUnionType(Builder, Scope, Name, NameLen, File, LineNumber, SizeInBits, AlignInBits, Flags, Elements, NumElements, RunTimeLang, UniqueId, UniqueIdLen); }

LLVM_API LLVMMetadataRef DIBuilderCreatePointerType(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef PointeeTy,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  unsigned AddressSpace,
  const char *Name,
  size_t NameLen
) { return LLVMDIBuilderCreatePointerType(Builder, PointeeTy, SizeInBits, AlignInBits, AddressSpace, Name, NameLen); }

LLVM_API LLVMMetadataRef DIBuilderCreateStructType(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef File,
  unsigned LineNumber,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  LLVMDIFlags Flags,
  LLVMMetadataRef DerivedFrom,
  LLVMMetadataRef *Elements,
  unsigned NumElements,
  unsigned RunTimeLang,
  LLVMMetadataRef VTableHolder,
  const char *UniqueId,
  size_t UniqueIdLen
) { return LLVMDIBuilderCreateStructType(Builder, Scope, Name, NameLen, File, LineNumber, SizeInBits, AlignInBits, Flags, DerivedFrom, Elements, NumElements, RunTimeLang, VTableHolder, UniqueId, UniqueIdLen); }

LLVM_API LLVMMetadataRef DIBuilderCreateMemberType(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef File,
  unsigned LineNo,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  uint64_t OffsetInBits,
  LLVMDIFlags Flags,
  LLVMMetadataRef Ty
) { return LLVMDIBuilderCreateMemberType(Builder, Scope, Name, NameLen, File, LineNo, SizeInBits, AlignInBits, OffsetInBits, Flags, Ty); }

LLVM_API LLVMMetadataRef DIBuilderCreateForwardDecl(
  LLVMDIBuilderRef Builder,
  unsigned Tag,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef Scope,
  LLVMMetadataRef File,
  unsigned Line,
  unsigned RuntimeLang,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  const char *UniqueIdentifier,
  size_t UniqueIdentifierLen
) { return LLVMDIBuilderCreateForwardDecl(Builder, Tag, Name, NameLen, Scope, File, Line, RuntimeLang, SizeInBits, AlignInBits, UniqueIdentifier, UniqueIdentifierLen); }

LLVM_API LLVMMetadataRef DIBuilderCreateClassType(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef File,
  unsigned LineNumber,
  uint64_t SizeInBits,
  uint32_t AlignInBits,
  uint64_t OffsetInBits,
  LLVMDIFlags Flags,
  LLVMMetadataRef DerivedFrom,
  LLVMMetadataRef *Elements,
  unsigned NumElements,
  LLVMMetadataRef VTableHolder,
  LLVMMetadataRef TemplateParamsNode,
  const char *UniqueIdentifier,
  size_t UniqueIdentifierLen
) { return LLVMDIBuilderCreateClassType(Builder, Scope, Name, NameLen, File, LineNumber, SizeInBits, AlignInBits, OffsetInBits, Flags, DerivedFrom, Elements, NumElements, VTableHolder, TemplateParamsNode, UniqueIdentifier, UniqueIdentifierLen); }

LLVM_API uint64_t DITypeGetSizeInBits(
  LLVMMetadataRef DType
) { return LLVMDITypeGetSizeInBits(DType); }

LLVM_API uint64_t DITypeGetOffsetInBits(
  LLVMMetadataRef DType
) { return LLVMDITypeGetOffsetInBits(DType); }

LLVM_API uint32_t DITypeGetAlignInBits(
  LLVMMetadataRef DType
) { return LLVMDITypeGetAlignInBits(DType); }

LLVM_API unsigned DITypeGetLine(
  LLVMMetadataRef DType
) { return LLVMDITypeGetLine(DType); }

LLVM_API LLVMDIFlags DITypeGetFlags(
  LLVMMetadataRef DType
) { return LLVMDITypeGetFlags(DType); }

LLVM_API LLVMMetadataRef DIBuilderGetOrCreateSubrange(
  LLVMDIBuilderRef Builder,
  int64_t LowerBound,
  int64_t Count
) { return LLVMDIBuilderGetOrCreateSubrange(Builder, LowerBound, Count); }

LLVM_API LLVMMetadataRef DIBuilderGetOrCreateArray(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef *Data,
  size_t NumElements
) { return LLVMDIBuilderGetOrCreateArray(Builder, Data, NumElements); }

LLVM_API LLVMMetadataRef DIBuilderCreateExpression(
  LLVMDIBuilderRef Builder,
  int64_t *Addr,
  size_t Length
) { return LLVMDIBuilderCreateExpression(Builder, Addr, Length); }

LLVM_API LLVMMetadataRef DIBuilderCreateGlobalVariableExpression(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  const char *Linkage,
  size_t LinkLen,
  LLVMMetadataRef File,
  unsigned LineNo,
  LLVMMetadataRef Ty,
  LLVMBool LocalToUnit,
  LLVMMetadataRef Expr,
  LLVMMetadataRef Decl,
  uint32_t AlignInBits
) { return LLVMDIBuilderCreateGlobalVariableExpression(Builder, Scope, Name, NameLen, Linkage, LinkLen, File, LineNo, Ty, LocalToUnit, Expr, Decl, AlignInBits); }

LLVM_API LLVMMetadataRef DIGlobalVariableExpressionGetVariable(
  LLVMMetadataRef GVE
) { return LLVMDIGlobalVariableExpressionGetVariable(GVE); }

LLVM_API LLVMMetadataRef DIGlobalVariableExpressionGetExpression(
  LLVMMetadataRef GVE
) { return LLVMDIGlobalVariableExpressionGetExpression(GVE); }

LLVM_API LLVMMetadataRef DIVariableGetFile(
  LLVMMetadataRef Var
) { return LLVMDIVariableGetFile(Var); }

LLVM_API LLVMMetadataRef DIVariableGetScope(
  LLVMMetadataRef Var
) { return LLVMDIVariableGetScope(Var); }

LLVM_API unsigned DIVariableGetLine(
  LLVMMetadataRef Var
) { return LLVMDIVariableGetLine(Var); }

LLVM_API LLVMMetadataRef TemporaryMDNode(
  LLVMContextRef Ctx,
  LLVMMetadataRef *Data,
  size_t NumElements
) { return LLVMTemporaryMDNode(Ctx, Data, NumElements); }

LLVM_API void DisposeTemporaryMDNode(
  LLVMMetadataRef TempNode
) { return LLVMDisposeTemporaryMDNode(TempNode); }

LLVM_API void MetadataReplaceAllUsesWith(
  LLVMMetadataRef TempTargetMetadata,
  LLVMMetadataRef Replacement
) { return LLVMMetadataReplaceAllUsesWith(TempTargetMetadata, Replacement); }

LLVM_API LLVMMetadataRef DIBuilderCreateTempGlobalVariableFwdDecl(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  const char *Linkage,
  size_t LnkLen,
  LLVMMetadataRef File,
  unsigned LineNo,
  LLVMMetadataRef Ty,
  LLVMBool LocalToUnit,
  LLVMMetadataRef Decl,
  uint32_t AlignInBits
) { return LLVMDIBuilderCreateTempGlobalVariableFwdDecl(Builder, Scope, Name, NameLen, Linkage, LnkLen, File, LineNo, Ty, LocalToUnit, Decl, AlignInBits); }

LLVM_API LLVMValueRef DIBuilderInsertDeclareBefore(
  LLVMDIBuilderRef Builder,
  LLVMValueRef Storage,
  LLVMMetadataRef VarInfo,
  LLVMMetadataRef Expr,
  LLVMMetadataRef DebugLoc,
  LLVMValueRef Instr
) { return LLVMDIBuilderInsertDeclareBefore(Builder, Storage, VarInfo, Expr, DebugLoc, Instr); }

LLVM_API LLVMValueRef DIBuilderInsertDeclareAtEnd(
  LLVMDIBuilderRef Builder,
  LLVMValueRef Storage,
  LLVMMetadataRef VarInfo,
  LLVMMetadataRef Expr,
  LLVMMetadataRef DebugLoc,
  LLVMBasicBlockRef Block
) { return LLVMDIBuilderInsertDeclareAtEnd(Builder, Storage, VarInfo, Expr, DebugLoc, Block); }

LLVM_API LLVMValueRef DIBuilderInsertDbgValueBefore(
  LLVMDIBuilderRef Builder,
  LLVMValueRef Val,
  LLVMMetadataRef VarInfo,
  LLVMMetadataRef Expr,
  LLVMMetadataRef DebugLoc,
  LLVMValueRef Instr
) { return LLVMDIBuilderInsertDbgValueBefore(Builder, Val, VarInfo, Expr, DebugLoc, Instr); }

LLVM_API LLVMValueRef DIBuilderInsertDbgValueAtEnd(
  LLVMDIBuilderRef Builder,
  LLVMValueRef Val,
  LLVMMetadataRef VarInfo,
  LLVMMetadataRef Expr,
  LLVMMetadataRef DebugLoc,
  LLVMBasicBlockRef Block
) { return LLVMDIBuilderInsertDbgValueAtEnd(Builder, Val, VarInfo, Expr, DebugLoc, Block); }

LLVM_API LLVMMetadataRef DIBuilderCreateAutoVariable(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  LLVMMetadataRef File,
  unsigned LineNo,
  LLVMMetadataRef Ty,
  LLVMBool AlwaysPreserve,
  LLVMDIFlags Flags,
  uint32_t AlignInBits
) { return LLVMDIBuilderCreateAutoVariable(Builder, Scope, Name, NameLen, File, LineNo, Ty, AlwaysPreserve, Flags, AlignInBits); }

LLVM_API LLVMMetadataRef DIBuilderCreateParameterVariable(
  LLVMDIBuilderRef Builder,
  LLVMMetadataRef Scope,
  const char *Name,
  size_t NameLen,
  unsigned ArgNo,
  LLVMMetadataRef File,
  unsigned LineNo,
  LLVMMetadataRef Ty,
  LLVMBool AlwaysPreserve,
  LLVMDIFlags Flags
) { return LLVMDIBuilderCreateParameterVariable(Builder, Scope, Name, NameLen, ArgNo, File, LineNo, Ty, AlwaysPreserve, Flags); }

LLVM_API LLVMMetadataRef GetSubprogram(
  LLVMValueRef Func
) { return LLVMGetSubprogram(Func); }

LLVM_API void SetSubprogram(
  LLVMValueRef Func,
  LLVMMetadataRef SP
) { return LLVMSetSubprogram(Func, SP); }

LLVM_API unsigned DISubprogramGetLine(
  LLVMMetadataRef Subprogram
) { return LLVMDISubprogramGetLine(Subprogram); }

LLVM_API LLVMMetadataRef InstructionGetDebugLoc(
  LLVMValueRef Inst
) { return LLVMInstructionGetDebugLoc(Inst); }

LLVM_API void InstructionSetDebugLoc(
  LLVMValueRef Inst,
  LLVMMetadataRef Loc
) { return LLVMInstructionSetDebugLoc(Inst, Loc); }

LLVM_API LLVMMetadataKind GetMetadataKind(
  LLVMMetadataRef Metadata
) { return LLVMGetMetadataKind(Metadata); }

LLVM_API LLVMErrorTypeId GetErrorTypeId(
  LLVMErrorRef Err
) { return LLVMGetErrorTypeId(Err); }

LLVM_API void ConsumeError(
  LLVMErrorRef Err
) { return LLVMConsumeError(Err); }

LLVM_API char *GetErrorMessage(
  LLVMErrorRef Err
) { return LLVMGetErrorMessage(Err); }

LLVM_API void DisposeErrorMessage(
  char *ErrMsg
) { return LLVMDisposeErrorMessage(ErrMsg); }

LLVM_API LLVMErrorTypeId GetStringErrorTypeId(void) { return LLVMGetStringErrorTypeId(); }

LLVM_API void InstallFatalErrorHandler(
  LLVMFatalErrorHandler Handler
) { return LLVMInstallFatalErrorHandler(Handler); }

LLVM_API void ResetFatalErrorHandler(void) { return LLVMResetFatalErrorHandler(); }

LLVM_API void EnablePrettyStackTrace(void) { return LLVMEnablePrettyStackTrace(); }

LLVM_API void LinkInMCJIT(void) { return LLVMLinkInMCJIT(); }

LLVM_API void LinkInInterpreter(void) { return LLVMLinkInInterpreter(); }

LLVM_API LLVMGenericValueRef CreateGenericValueOfInt(
  LLVMTypeRef Ty,
  unsigned long long N,
  LLVMBool IsSigned
) { return LLVMCreateGenericValueOfInt(Ty, N, IsSigned); }

LLVM_API LLVMGenericValueRef CreateGenericValueOfPointer(
  void *P
) { return LLVMCreateGenericValueOfPointer(P); }

LLVM_API LLVMGenericValueRef CreateGenericValueOfFloat(
  LLVMTypeRef Ty,
  double N
) { return LLVMCreateGenericValueOfFloat(Ty, N); }

LLVM_API unsigned GenericValueIntWidth(
  LLVMGenericValueRef GenValRef
) { return LLVMGenericValueIntWidth(GenValRef); }

LLVM_API void *GenericValueToPointer(
  LLVMGenericValueRef GenVal
) { return LLVMGenericValueToPointer(GenVal); }

LLVM_API double GenericValueToFloat(
  LLVMTypeRef TyRef,
  LLVMGenericValueRef GenVal
) { return LLVMGenericValueToFloat(TyRef, GenVal); }

LLVM_API void DisposeGenericValue(
  LLVMGenericValueRef GenVal
) { return LLVMDisposeGenericValue(GenVal); }

LLVM_API LLVMBool CreateExecutionEngineForModule(
  LLVMExecutionEngineRef *OutEE,
  LLVMModuleRef M,
  char **OutError
) { return LLVMCreateExecutionEngineForModule(OutEE, M, OutError); }

LLVM_API LLVMBool CreateInterpreterForModule(
  LLVMExecutionEngineRef *OutInterp,
  LLVMModuleRef M,
  char **OutError
) { return LLVMCreateInterpreterForModule(OutInterp, M, OutError); }

LLVM_API LLVMBool CreateJITCompilerForModule(
  LLVMExecutionEngineRef *OutJIT,
  LLVMModuleRef M,
  unsigned OptLevel,
  char **OutError
) { return LLVMCreateJITCompilerForModule(OutJIT, M, OptLevel, OutError); }

LLVM_API void InitializeMCJITCompilerOptions(
  struct LLVMMCJITCompilerOptions *Options,
  size_t SizeOfOptions
) { return LLVMInitializeMCJITCompilerOptions(Options, SizeOfOptions); }

LLVM_API LLVMBool CreateMCJITCompilerForModule(
  LLVMExecutionEngineRef *OutJIT,
  LLVMModuleRef M,
  struct LLVMMCJITCompilerOptions *Options,
  size_t SizeOfOptions,
  char **OutError
) { return LLVMCreateMCJITCompilerForModule(OutJIT, M, Options, SizeOfOptions, OutError); }

LLVM_API void DisposeExecutionEngine(
  LLVMExecutionEngineRef EE
) { return LLVMDisposeExecutionEngine(EE); }

LLVM_API void RunStaticConstructors(
  LLVMExecutionEngineRef EE
) { return LLVMRunStaticConstructors(EE); }

LLVM_API void RunStaticDestructors(
  LLVMExecutionEngineRef EE
) { return LLVMRunStaticDestructors(EE); }

LLVM_API int RunFunctionAsMain(
  LLVMExecutionEngineRef EE,
  LLVMValueRef F,
  unsigned ArgC,
  const char * const *ArgV,
  const char * const *EnvP
) { return LLVMRunFunctionAsMain(EE, F, ArgC, ArgV, EnvP); }

LLVM_API LLVMGenericValueRef RunFunction(
  LLVMExecutionEngineRef EE,
  LLVMValueRef F,
  unsigned NumArgs,
  LLVMGenericValueRef *Args
) { return LLVMRunFunction(EE, F, NumArgs, Args); }

LLVM_API void FreeMachineCodeForFunction(
  LLVMExecutionEngineRef EE,
  LLVMValueRef F
) { return LLVMFreeMachineCodeForFunction(EE, F); }

LLVM_API void AddModule(
  LLVMExecutionEngineRef EE,
  LLVMModuleRef M
) { return LLVMAddModule(EE, M); }

LLVM_API LLVMBool RemoveModule(
  LLVMExecutionEngineRef EE,
  LLVMModuleRef M,
  LLVMModuleRef *OutMod,
  char **OutError
) { return LLVMRemoveModule(EE, M, OutMod, OutError); }

LLVM_API LLVMBool FindFunction(
  LLVMExecutionEngineRef EE,
  const char *Name,
  LLVMValueRef *OutFn
) { return LLVMFindFunction(EE, Name, OutFn); }

LLVM_API void *RecompileAndRelinkFunction(
  LLVMExecutionEngineRef EE,
  LLVMValueRef Fn
) { return LLVMRecompileAndRelinkFunction(EE, Fn); }

LLVM_API LLVMTargetDataRef GetExecutionEngineTargetData(
  LLVMExecutionEngineRef EE
) { return LLVMGetExecutionEngineTargetData(EE); }

LLVM_API void AddGlobalMapping(
  LLVMExecutionEngineRef EE,
  LLVMValueRef Global,
  void* Addr
) { return LLVMAddGlobalMapping(EE, Global, Addr); }

LLVM_API void *GetPointerToGlobal(
  LLVMExecutionEngineRef EE,
  LLVMValueRef Global
) { return LLVMGetPointerToGlobal(EE, Global); }

LLVM_API uint64_t GetGlobalValueAddress(
  LLVMExecutionEngineRef EE,
  const char *Name
) { return LLVMGetGlobalValueAddress(EE, Name); }

LLVM_API uint64_t GetFunctionAddress(
  LLVMExecutionEngineRef EE,
  const char *Name
) { return LLVMGetFunctionAddress(EE, Name); }

LLVM_API LLVMMCJITMemoryManagerRef CreateSimpleMCJITMemoryManager(
  void *Opaque,
  LLVMMemoryManagerAllocateCodeSectionCallback AllocateCodeSection,
  LLVMMemoryManagerAllocateDataSectionCallback AllocateDataSection,
  LLVMMemoryManagerFinalizeMemoryCallback FinalizeMemory,
  LLVMMemoryManagerDestroyCallback Destroy
) { return LLVMCreateSimpleMCJITMemoryManager(Opaque, AllocateCodeSection, AllocateDataSection, FinalizeMemory, Destroy); }

LLVM_API void DisposeMCJITMemoryManager(
  LLVMMCJITMemoryManagerRef MM
) { return LLVMDisposeMCJITMemoryManager(MM); }

LLVM_API LLVMJITEventListenerRef CreateGDBRegistrationListener(void) { return LLVMCreateGDBRegistrationListener(); }

LLVM_API LLVMJITEventListenerRef CreateIntelJITEventListener(void) { return LLVMCreateIntelJITEventListener(); }

LLVM_API LLVMJITEventListenerRef CreateOProfileJITEventListener(void) { return LLVMCreateOProfileJITEventListener(); }

LLVM_API LLVMJITEventListenerRef CreatePerfJITEventListener(void) { return LLVMCreatePerfJITEventListener(); }

LLVM_API void InitializeTransformUtils(
  LLVMPassRegistryRef R
) { return LLVMInitializeTransformUtils(R); }

LLVM_API void InitializeScalarOpts(
  LLVMPassRegistryRef R
) { return LLVMInitializeScalarOpts(R); }

LLVM_API void InitializeObjCARCOpts(
  LLVMPassRegistryRef R
) { return LLVMInitializeObjCARCOpts(R); }

LLVM_API void InitializeVectorization(
  LLVMPassRegistryRef R
) { return LLVMInitializeVectorization(R); }

LLVM_API void InitializeInstCombine(
  LLVMPassRegistryRef R
) { return LLVMInitializeInstCombine(R); }

LLVM_API void InitializeAggressiveInstCombiner(
  LLVMPassRegistryRef R
) { return LLVMInitializeAggressiveInstCombiner(R); }

LLVM_API void InitializeIPO(
  LLVMPassRegistryRef R
) { return LLVMInitializeIPO(R); }

LLVM_API void InitializeInstrumentation(
  LLVMPassRegistryRef R
) { return LLVMInitializeInstrumentation(R); }

LLVM_API void InitializeAnalysis(
  LLVMPassRegistryRef R
) { return LLVMInitializeAnalysis(R); }

LLVM_API void InitializeIPA(
  LLVMPassRegistryRef R
) { return LLVMInitializeIPA(R); }

LLVM_API void InitializeCodeGen(
  LLVMPassRegistryRef R
) { return LLVMInitializeCodeGen(R); }

LLVM_API void InitializeTarget(
  LLVMPassRegistryRef R
) { return LLVMInitializeTarget(R); }

LLVM_API LLVMBool ParseIRInContext(
  LLVMContextRef ContextRef,
  LLVMMemoryBufferRef MemBuf,
  LLVMModuleRef *OutM,
  char **OutMessage
) { return LLVMParseIRInContext(ContextRef, MemBuf, OutM, OutMessage); }

LLVM_API LLVMBool LinkModules2(
  LLVMModuleRef Dest,
  LLVMModuleRef Src
) { return LLVMLinkModules2(Dest, Src); }

LLVM_API LLVMBinaryRef CreateBinary(
  LLVMMemoryBufferRef MemBuf,
  LLVMContextRef Context,
  char **ErrorMessage
) { return LLVMCreateBinary(MemBuf, Context, ErrorMessage); }

LLVM_API void DisposeBinary(
  LLVMBinaryRef BR
) { return LLVMDisposeBinary(BR); }

LLVM_API LLVMMemoryBufferRef BinaryCopyMemoryBuffer(
  LLVMBinaryRef BR
) { return LLVMBinaryCopyMemoryBuffer(BR); }

LLVM_API LLVMBinaryType BinaryGetType(
  LLVMBinaryRef BR
) { return LLVMBinaryGetType(BR); }

LLVM_API LLVMBinaryRef MachOUniversalBinaryCopyObjectForArch(
  LLVMBinaryRef BR,
  const char *Arch,
  size_t ArchLen,
  char **ErrorMessage
) { return LLVMMachOUniversalBinaryCopyObjectForArch(BR, Arch, ArchLen, ErrorMessage); }

LLVM_API LLVMSectionIteratorRef ObjectFileCopySectionIterator(
  LLVMBinaryRef BR
) { return LLVMObjectFileCopySectionIterator(BR); }

LLVM_API LLVMBool ObjectFileIsSectionIteratorAtEnd(
  LLVMBinaryRef BR,
  LLVMSectionIteratorRef SI
) { return LLVMObjectFileIsSectionIteratorAtEnd(BR, SI); }

LLVM_API LLVMSymbolIteratorRef ObjectFileCopySymbolIterator(
  LLVMBinaryRef BR
) { return LLVMObjectFileCopySymbolIterator(BR); }

LLVM_API LLVMBool ObjectFileIsSymbolIteratorAtEnd(
  LLVMBinaryRef BR,
  LLVMSymbolIteratorRef SI
) { return LLVMObjectFileIsSymbolIteratorAtEnd(BR, SI); }

LLVM_API void DisposeSectionIterator(
  LLVMSectionIteratorRef SI
) { return LLVMDisposeSectionIterator(SI); }

LLVM_API void MoveToNextSection(
  LLVMSectionIteratorRef SI
) { return LLVMMoveToNextSection(SI); }

LLVM_API void MoveToContainingSection(
  LLVMSectionIteratorRef Sect,
  LLVMSymbolIteratorRef Sym
) { return LLVMMoveToContainingSection(Sect, Sym); }

LLVM_API void DisposeSymbolIterator(
  LLVMSymbolIteratorRef SI
) { return LLVMDisposeSymbolIterator(SI); }

LLVM_API void MoveToNextSymbol(
  LLVMSymbolIteratorRef SI
) { return LLVMMoveToNextSymbol(SI); }

LLVM_API uint64_t GetSectionSize(
  LLVMSectionIteratorRef SI
) { return LLVMGetSectionSize(SI); }

LLVM_API uint64_t GetSectionAddress(
  LLVMSectionIteratorRef SI
) { return LLVMGetSectionAddress(SI); }

LLVM_API LLVMBool GetSectionContainsSymbol(
  LLVMSectionIteratorRef SI,
  LLVMSymbolIteratorRef Sym
) { return LLVMGetSectionContainsSymbol(SI, Sym); }

LLVM_API LLVMRelocationIteratorRef GetRelocations(
  LLVMSectionIteratorRef Section
) { return LLVMGetRelocations(Section); }

LLVM_API void DisposeRelocationIterator(
  LLVMRelocationIteratorRef RI
) { return LLVMDisposeRelocationIterator(RI); }

LLVM_API LLVMBool IsRelocationIteratorAtEnd(
  LLVMSectionIteratorRef Section,
  LLVMRelocationIteratorRef RI
) { return LLVMIsRelocationIteratorAtEnd(Section, RI); }

LLVM_API void MoveToNextRelocation(
  LLVMRelocationIteratorRef RI
) { return LLVMMoveToNextRelocation(RI); }

LLVM_API uint64_t GetSymbolAddress(
  LLVMSymbolIteratorRef SI
) { return LLVMGetSymbolAddress(SI); }

LLVM_API uint64_t GetSymbolSize(
  LLVMSymbolIteratorRef SI
) { return LLVMGetSymbolSize(SI); }

LLVM_API uint64_t GetRelocationOffset(
  LLVMRelocationIteratorRef RI
) { return LLVMGetRelocationOffset(RI); }

LLVM_API LLVMSymbolIteratorRef GetRelocationSymbol(
  LLVMRelocationIteratorRef RI
) { return LLVMGetRelocationSymbol(RI); }

LLVM_API uint64_t GetRelocationType(
  LLVMRelocationIteratorRef RI
) { return LLVMGetRelocationType(RI); }

LLVM_API LLVMObjectFileRef CreateObjectFile(
  LLVMMemoryBufferRef MemBuf
) { return LLVMCreateObjectFile(MemBuf); }

LLVM_API void DisposeObjectFile(
  LLVMObjectFileRef ObjectFile
) { return LLVMDisposeObjectFile(ObjectFile); }

LLVM_API LLVMSectionIteratorRef GetSections(
  LLVMObjectFileRef ObjectFile
) { return LLVMGetSections(ObjectFile); }

LLVM_API LLVMBool IsSectionIteratorAtEnd(
  LLVMObjectFileRef ObjectFile,
  LLVMSectionIteratorRef SI
) { return LLVMIsSectionIteratorAtEnd(ObjectFile, SI); }

LLVM_API LLVMSymbolIteratorRef GetSymbols(
  LLVMObjectFileRef ObjectFile
) { return LLVMGetSymbols(ObjectFile); }

LLVM_API LLVMBool IsSymbolIteratorAtEnd(
  LLVMObjectFileRef ObjectFile,
  LLVMSymbolIteratorRef SI
) { return LLVMIsSymbolIteratorAtEnd(ObjectFile, SI); }

LLVM_API LLVMBool LoadLibraryPermanently(
  const char* Filename
) { return LLVMLoadLibraryPermanently(Filename); }

LLVM_API void ParseCommandLineOptions(
  int argc,
  const char *const *argv,
  const char *Overview
) { return LLVMParseCommandLineOptions(argc, argv, Overview); }

LLVM_API void *SearchForAddressOfSymbol(
  const char *symbolName
) { return LLVMSearchForAddressOfSymbol(symbolName); }

LLVM_API void AddSymbol(
  const char *symbolName,
  void *symbolValue
) { return LLVMAddSymbol(symbolName, symbolValue); }

LLVM_API LLVMTargetDataRef GetModuleDataLayout(
  LLVMModuleRef M
) { return LLVMGetModuleDataLayout(M); }

LLVM_API void SetModuleDataLayout(
  LLVMModuleRef M,
  LLVMTargetDataRef DL
) { return LLVMSetModuleDataLayout(M, DL); }

LLVM_API LLVMTargetDataRef CreateTargetData(
  const char *StringRep
) { return LLVMCreateTargetData(StringRep); }

LLVM_API void DisposeTargetData(
  LLVMTargetDataRef TD
) { return LLVMDisposeTargetData(TD); }

LLVM_API void AddTargetLibraryInfo(
  LLVMTargetLibraryInfoRef TLI,
  LLVMPassManagerRef PM
) { return LLVMAddTargetLibraryInfo(TLI, PM); }

LLVM_API char *CopyStringRepOfTargetData(
  LLVMTargetDataRef TD
) { return LLVMCopyStringRepOfTargetData(TD); }

LLVM_API unsigned PointerSize(
  LLVMTargetDataRef TD
) { return LLVMPointerSize(TD); }

LLVM_API unsigned PointerSizeForAS(
  LLVMTargetDataRef TD,
  unsigned AS
) { return LLVMPointerSizeForAS(TD, AS); }

LLVM_API LLVMTypeRef IntPtrType(
  LLVMTargetDataRef TD
) { return LLVMIntPtrType(TD); }

LLVM_API LLVMTypeRef IntPtrTypeForAS(
  LLVMTargetDataRef TD,
  unsigned AS
) { return LLVMIntPtrTypeForAS(TD, AS); }

LLVM_API LLVMTypeRef IntPtrTypeInContext(
  LLVMContextRef C,
  LLVMTargetDataRef TD
) { return LLVMIntPtrTypeInContext(C, TD); }

LLVM_API LLVMTypeRef IntPtrTypeForASInContext(
  LLVMContextRef C,
  LLVMTargetDataRef TD,
  unsigned AS
) { return LLVMIntPtrTypeForASInContext(C, TD, AS); }

LLVM_API unsigned ABIAlignmentOfType(
  LLVMTargetDataRef TD,
  LLVMTypeRef Ty
) { return LLVMABIAlignmentOfType(TD, Ty); }

LLVM_API unsigned CallFrameAlignmentOfType(
  LLVMTargetDataRef TD,
  LLVMTypeRef Ty
) { return LLVMCallFrameAlignmentOfType(TD, Ty); }

LLVM_API unsigned PreferredAlignmentOfType(
  LLVMTargetDataRef TD,
  LLVMTypeRef Ty
) { return LLVMPreferredAlignmentOfType(TD, Ty); }

LLVM_API unsigned PreferredAlignmentOfGlobal(
  LLVMTargetDataRef TD,
  LLVMValueRef GlobalVar
) { return LLVMPreferredAlignmentOfGlobal(TD, GlobalVar); }

LLVM_API unsigned ElementAtOffset(
  LLVMTargetDataRef TD,
  LLVMTypeRef StructTy,
  unsigned long long Offset
) { return LLVMElementAtOffset(TD, StructTy, Offset); }

LLVM_API LLVMTargetRef GetFirstTarget(void) { return LLVMGetFirstTarget(); }

LLVM_API LLVMTargetRef GetNextTarget(
  LLVMTargetRef T
) { return LLVMGetNextTarget(T); }

LLVM_API LLVMTargetRef GetTargetFromName(
  const char *Name
) { return LLVMGetTargetFromName(Name); }

LLVM_API LLVMBool GetTargetFromTriple(
  const char* Triple,
  LLVMTargetRef *T,
  char **ErrorMessage
) { return LLVMGetTargetFromTriple(Triple, T, ErrorMessage); }

LLVM_API LLVMBool TargetHasJIT(
  LLVMTargetRef T
) { return LLVMTargetHasJIT(T); }

LLVM_API LLVMBool TargetHasTargetMachine(
  LLVMTargetRef T
) { return LLVMTargetHasTargetMachine(T); }

LLVM_API LLVMBool TargetHasAsmBackend(
  LLVMTargetRef T
) { return LLVMTargetHasAsmBackend(T); }

LLVM_API LLVMTargetMachineRef CreateTargetMachine(
  LLVMTargetRef T,
  const char *Triple,
  const char *CPU,
  const char *Features,
  LLVMCodeGenOptLevel Level,
  LLVMRelocMode Reloc,
  LLVMCodeModel CodeModel
) { return LLVMCreateTargetMachine(T, Triple, CPU, Features, Level, Reloc, CodeModel); }

LLVM_API void DisposeTargetMachine(
  LLVMTargetMachineRef T
) { return LLVMDisposeTargetMachine(T); }

LLVM_API LLVMTargetRef GetTargetMachineTarget(
  LLVMTargetMachineRef T
) { return LLVMGetTargetMachineTarget(T); }

LLVM_API char *GetTargetMachineTriple(
  LLVMTargetMachineRef T
) { return LLVMGetTargetMachineTriple(T); }

LLVM_API char *GetTargetMachineCPU(
  LLVMTargetMachineRef T
) { return LLVMGetTargetMachineCPU(T); }

LLVM_API char *GetTargetMachineFeatureString(
  LLVMTargetMachineRef T
) { return LLVMGetTargetMachineFeatureString(T); }

LLVM_API LLVMTargetDataRef CreateTargetDataLayout(
  LLVMTargetMachineRef T
) { return LLVMCreateTargetDataLayout(T); }

LLVM_API void SetTargetMachineAsmVerbosity(
  LLVMTargetMachineRef T,
  LLVMBool VerboseAsm
) { return LLVMSetTargetMachineAsmVerbosity(T, VerboseAsm); }

LLVM_API LLVMBool TargetMachineEmitToFile(
  LLVMTargetMachineRef T,
  LLVMModuleRef M,
  char *Filename,
  LLVMCodeGenFileType codegen,
  char **ErrorMessage
) { return LLVMTargetMachineEmitToFile(T, M, Filename, codegen, ErrorMessage); }

LLVM_API LLVMBool TargetMachineEmitToMemoryBuffer(
  LLVMTargetMachineRef T,
  LLVMModuleRef M,
  LLVMCodeGenFileType codegen,
  char** ErrorMessage,
  LLVMMemoryBufferRef *OutMemBuf
) { return LLVMTargetMachineEmitToMemoryBuffer(T, M, codegen, ErrorMessage, OutMemBuf); }

LLVM_API void AddAnalysisPasses(
  LLVMTargetMachineRef T,
  LLVMPassManagerRef PM
) { return LLVMAddAnalysisPasses(T, PM); }

LLVM_API void AddAggressiveInstCombinerPass(
  LLVMPassManagerRef PM
) { return LLVMAddAggressiveInstCombinerPass(PM); }

LLVM_API void AddCoroEarlyPass(
  LLVMPassManagerRef PM
) { return LLVMAddCoroEarlyPass(PM); }

LLVM_API void AddCoroSplitPass(
  LLVMPassManagerRef PM
) { return LLVMAddCoroSplitPass(PM); }

LLVM_API void AddCoroElidePass(
  LLVMPassManagerRef PM
) { return LLVMAddCoroElidePass(PM); }

LLVM_API void AddCoroCleanupPass(
  LLVMPassManagerRef PM
) { return LLVMAddCoroCleanupPass(PM); }

LLVM_API void AddInstructionCombiningPass(
  LLVMPassManagerRef PM
) { return LLVMAddInstructionCombiningPass(PM); }

LLVM_API void AddArgumentPromotionPass(
  LLVMPassManagerRef PM
) { return LLVMAddArgumentPromotionPass(PM); }

LLVM_API void AddConstantMergePass(
  LLVMPassManagerRef PM
) { return LLVMAddConstantMergePass(PM); }

LLVM_API void AddMergeFunctionsPass(
  LLVMPassManagerRef PM
) { return LLVMAddMergeFunctionsPass(PM); }

LLVM_API void AddCalledValuePropagationPass(
  LLVMPassManagerRef PM
) { return LLVMAddCalledValuePropagationPass(PM); }

LLVM_API void AddDeadArgEliminationPass(
  LLVMPassManagerRef PM
) { return LLVMAddDeadArgEliminationPass(PM); }

LLVM_API void AddFunctionAttrsPass(
  LLVMPassManagerRef PM
) { return LLVMAddFunctionAttrsPass(PM); }

LLVM_API void AddFunctionInliningPass(
  LLVMPassManagerRef PM
) { return LLVMAddFunctionInliningPass(PM); }

LLVM_API void AddAlwaysInlinerPass(
  LLVMPassManagerRef PM
) { return LLVMAddAlwaysInlinerPass(PM); }

LLVM_API void AddGlobalDCEPass(
  LLVMPassManagerRef PM
) { return LLVMAddGlobalDCEPass(PM); }

LLVM_API void AddGlobalOptimizerPass(
  LLVMPassManagerRef PM
) { return LLVMAddGlobalOptimizerPass(PM); }

LLVM_API void AddIPConstantPropagationPass(
  LLVMPassManagerRef PM
) { return LLVMAddIPConstantPropagationPass(PM); }

LLVM_API void AddPruneEHPass(
  LLVMPassManagerRef PM
) { return LLVMAddPruneEHPass(PM); }

LLVM_API void AddIPSCCPPass(
  LLVMPassManagerRef PM
) { return LLVMAddIPSCCPPass(PM); }

LLVM_API void AddInternalizePass(
  LLVMPassManagerRef $0,
  unsigned AllButMain
) { return LLVMAddInternalizePass($0, AllButMain); }

LLVM_API void AddStripDeadPrototypesPass(
  LLVMPassManagerRef PM
) { return LLVMAddStripDeadPrototypesPass(PM); }

LLVM_API void AddStripSymbolsPass(
  LLVMPassManagerRef PM
) { return LLVMAddStripSymbolsPass(PM); }

LLVM_API LLVMPassManagerBuilderRef PassManagerBuilderCreate(void) { return LLVMPassManagerBuilderCreate(); }

LLVM_API void PassManagerBuilderDispose(
  LLVMPassManagerBuilderRef PMB
) { return LLVMPassManagerBuilderDispose(PMB); }

LLVM_API void PassManagerBuilderPopulateLTOPassManager(
  LLVMPassManagerBuilderRef PMB,
  LLVMPassManagerRef PM,
  LLVMBool Internalize,
  LLVMBool RunInliner
) { return LLVMPassManagerBuilderPopulateLTOPassManager(PMB, PM, Internalize, RunInliner); }

LLVM_API void AddAggressiveDCEPass(
  LLVMPassManagerRef PM
) { return LLVMAddAggressiveDCEPass(PM); }

LLVM_API void AddDCEPass(
  LLVMPassManagerRef PM
) { return LLVMAddDCEPass(PM); }

LLVM_API void AddBitTrackingDCEPass(
  LLVMPassManagerRef PM
) { return LLVMAddBitTrackingDCEPass(PM); }

LLVM_API void AddAlignmentFromAssumptionsPass(
  LLVMPassManagerRef PM
) { return LLVMAddAlignmentFromAssumptionsPass(PM); }

LLVM_API void AddCFGSimplificationPass(
  LLVMPassManagerRef PM
) { return LLVMAddCFGSimplificationPass(PM); }

LLVM_API void AddDeadStoreEliminationPass(
  LLVMPassManagerRef PM
) { return LLVMAddDeadStoreEliminationPass(PM); }

LLVM_API void AddScalarizerPass(
  LLVMPassManagerRef PM
) { return LLVMAddScalarizerPass(PM); }

LLVM_API void AddMergedLoadStoreMotionPass(
  LLVMPassManagerRef PM
) { return LLVMAddMergedLoadStoreMotionPass(PM); }

LLVM_API void AddGVNPass(
  LLVMPassManagerRef PM
) { return LLVMAddGVNPass(PM); }

LLVM_API void AddNewGVNPass(
  LLVMPassManagerRef PM
) { return LLVMAddNewGVNPass(PM); }

LLVM_API void AddIndVarSimplifyPass(
  LLVMPassManagerRef PM
) { return LLVMAddIndVarSimplifyPass(PM); }

LLVM_API void AddJumpThreadingPass(
  LLVMPassManagerRef PM
) { return LLVMAddJumpThreadingPass(PM); }

LLVM_API void AddLICMPass(
  LLVMPassManagerRef PM
) { return LLVMAddLICMPass(PM); }

LLVM_API void AddLoopDeletionPass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopDeletionPass(PM); }

LLVM_API void AddLoopIdiomPass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopIdiomPass(PM); }

LLVM_API void AddLoopRotatePass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopRotatePass(PM); }

LLVM_API void AddLoopRerollPass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopRerollPass(PM); }

LLVM_API void AddLoopUnrollPass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopUnrollPass(PM); }

LLVM_API void AddLoopUnrollAndJamPass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopUnrollAndJamPass(PM); }

LLVM_API void AddLoopUnswitchPass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopUnswitchPass(PM); }

LLVM_API void AddLowerAtomicPass(
  LLVMPassManagerRef PM
) { return LLVMAddLowerAtomicPass(PM); }

LLVM_API void AddMemCpyOptPass(
  LLVMPassManagerRef PM
) { return LLVMAddMemCpyOptPass(PM); }

LLVM_API void AddPartiallyInlineLibCallsPass(
  LLVMPassManagerRef PM
) { return LLVMAddPartiallyInlineLibCallsPass(PM); }

LLVM_API void AddReassociatePass(
  LLVMPassManagerRef PM
) { return LLVMAddReassociatePass(PM); }

LLVM_API void AddSCCPPass(
  LLVMPassManagerRef PM
) { return LLVMAddSCCPPass(PM); }

LLVM_API void AddScalarReplAggregatesPass(
  LLVMPassManagerRef PM
) { return LLVMAddScalarReplAggregatesPass(PM); }

LLVM_API void AddScalarReplAggregatesPassSSA(
  LLVMPassManagerRef PM
) { return LLVMAddScalarReplAggregatesPassSSA(PM); }

LLVM_API void AddScalarReplAggregatesPassWithThreshold(
  LLVMPassManagerRef PM,
  int Threshold
) { return LLVMAddScalarReplAggregatesPassWithThreshold(PM, Threshold); }

LLVM_API void AddSimplifyLibCallsPass(
  LLVMPassManagerRef PM
) { return LLVMAddSimplifyLibCallsPass(PM); }

LLVM_API void AddTailCallEliminationPass(
  LLVMPassManagerRef PM
) { return LLVMAddTailCallEliminationPass(PM); }

LLVM_API void AddConstantPropagationPass(
  LLVMPassManagerRef PM
) { return LLVMAddConstantPropagationPass(PM); }

LLVM_API void AddDemoteMemoryToRegisterPass(
  LLVMPassManagerRef PM
) { return LLVMAddDemoteMemoryToRegisterPass(PM); }

LLVM_API void AddVerifierPass(
  LLVMPassManagerRef PM
) { return LLVMAddVerifierPass(PM); }

LLVM_API void AddCorrelatedValuePropagationPass(
  LLVMPassManagerRef PM
) { return LLVMAddCorrelatedValuePropagationPass(PM); }

LLVM_API void AddEarlyCSEPass(
  LLVMPassManagerRef PM
) { return LLVMAddEarlyCSEPass(PM); }

LLVM_API void AddEarlyCSEMemSSAPass(
  LLVMPassManagerRef PM
) { return LLVMAddEarlyCSEMemSSAPass(PM); }

LLVM_API void AddLowerExpectIntrinsicPass(
  LLVMPassManagerRef PM
) { return LLVMAddLowerExpectIntrinsicPass(PM); }

LLVM_API void AddLowerConstantIntrinsicsPass(
  LLVMPassManagerRef PM
) { return LLVMAddLowerConstantIntrinsicsPass(PM); }

LLVM_API void AddTypeBasedAliasAnalysisPass(
  LLVMPassManagerRef PM
) { return LLVMAddTypeBasedAliasAnalysisPass(PM); }

LLVM_API void AddScopedNoAliasAAPass(
  LLVMPassManagerRef PM
) { return LLVMAddScopedNoAliasAAPass(PM); }

LLVM_API void AddBasicAliasAnalysisPass(
  LLVMPassManagerRef PM
) { return LLVMAddBasicAliasAnalysisPass(PM); }

LLVM_API void AddUnifyFunctionExitNodesPass(
  LLVMPassManagerRef PM
) { return LLVMAddUnifyFunctionExitNodesPass(PM); }

LLVM_API void AddLowerSwitchPass(
  LLVMPassManagerRef PM
) { return LLVMAddLowerSwitchPass(PM); }

LLVM_API void AddPromoteMemoryToRegisterPass(
  LLVMPassManagerRef PM
) { return LLVMAddPromoteMemoryToRegisterPass(PM); }

LLVM_API void AddAddDiscriminatorsPass(
  LLVMPassManagerRef PM
) { return LLVMAddAddDiscriminatorsPass(PM); }

LLVM_API void AddLoopVectorizePass(
  LLVMPassManagerRef PM
) { return LLVMAddLoopVectorizePass(PM); }

LLVM_API void AddSLPVectorizePass(
  LLVMPassManagerRef PM
) { return LLVMAddSLPVectorizePass(PM); }
