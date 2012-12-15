// Generated by llvm2cpp - DO NOT MODIFY!

#include <llvm/LLVMContext.h>
#include <llvm/Module.h>
#include <llvm/DerivedTypes.h>
#include <llvm/Constants.h>
#include <llvm/GlobalVariable.h>
#include <llvm/Function.h>
#include <llvm/CallingConv.h>
#include <llvm/BasicBlock.h>
#include <llvm/Instructions.h>
#include <llvm/InlineAsm.h>
#include <llvm/Support/FormattedStream.h>
#include <llvm/Support/MathExtras.h>
#include <llvm/Pass.h>
#include <llvm/PassManager.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/Analysis/Verifier.h>
#include <llvm/Assembly/PrintModulePass.h>
#include <algorithm>
using namespace llvm;

Module* makeLLVMModule();

int main(int argc, char**argv) {
  Module* Mod = makeLLVMModule();
  verifyModule(*Mod, PrintMessageAction);
  PassManager PM;
  PM.add(createPrintModulePass(&outs()));
  PM.run(*Mod);
  return 0;
}


Module* makeLLVMModule() {
 // Module Construction
 Module* mod = new Module("basic5.s", getGlobalContext());
 mod->setDataLayout("e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128");
 mod->setTargetTriple("x86_64-unknown-linux-gnu");
 
 // Type Definitions
 ArrayType* ArrayTy_0 = ArrayType::get(IntegerType::get(mod->getContext(), 8), 30);
 
 PointerType* PointerTy_1 = PointerType::get(ArrayTy_0, 0);
 
 std::vector<Type*>FuncTy_2_args;
 FuncTy_2_args.push_back(IntegerType::get(mod->getContext(), 32));
 FunctionType* FuncTy_2 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_2_args,
  /*isVarArg=*/false);
 
 PointerType* PointerTy_3 = PointerType::get(IntegerType::get(mod->getContext(), 32), 0);
 
 std::vector<Type*>FuncTy_4_args;
 FunctionType* FuncTy_4 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_4_args,
  /*isVarArg=*/false);
 
 PointerType* PointerTy_5 = PointerType::get(IntegerType::get(mod->getContext(), 64), 0);
 
 std::vector<Type*>FuncTy_7_args;
 FuncTy_7_args.push_back(PointerTy_5);
 FunctionType* FuncTy_7 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 64),
  /*Params=*/FuncTy_7_args,
  /*isVarArg=*/false);
 
 PointerType* PointerTy_6 = PointerType::get(FuncTy_7, 0);
 
 std::vector<Type*>FuncTy_9_args;
 FuncTy_9_args.push_back(IntegerType::get(mod->getContext(), 32));
 FunctionType* FuncTy_9 = FunctionType::get(
  /*Result=*/Type::getVoidTy(mod->getContext()),
  /*Params=*/FuncTy_9_args,
  /*isVarArg=*/false);
 
 PointerType* PointerTy_8 = PointerType::get(FuncTy_9, 0);
 
 PointerType* PointerTy_10 = PointerType::get(FuncTy_4, 0);
 
 PointerType* PointerTy_11 = PointerType::get(FuncTy_2, 0);
 
 PointerType* PointerTy_12 = PointerType::get(IntegerType::get(mod->getContext(), 8), 0);
 
 std::vector<Type*>FuncTy_14_args;
 FuncTy_14_args.push_back(PointerTy_12);
 FunctionType* FuncTy_14 = FunctionType::get(
  /*Result=*/IntegerType::get(mod->getContext(), 32),
  /*Params=*/FuncTy_14_args,
  /*isVarArg=*/true);
 
 PointerType* PointerTy_13 = PointerType::get(FuncTy_14, 0);
 
 
 // Function Declarations
 
 Function* func_doStuff = mod->getFunction("doStuff");
 if (!func_doStuff) {
 func_doStuff = Function::Create(
  /*Type=*/FuncTy_2,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"doStuff", mod); 
 func_doStuff->setCallingConv(CallingConv::C);
 }
 AttrListPtr func_doStuff_PAL;
 {
  SmallVector<AttributeWithIndex, 4> Attrs;
  AttributeWithIndex PAWI;
  PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind | Attribute::UWTable;
  Attrs.push_back(PAWI);
  func_doStuff_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
  
 }
 func_doStuff->setAttributes(func_doStuff_PAL);
 
 Function* func_main = mod->getFunction("main");
 if (!func_main) {
 func_main = Function::Create(
  /*Type=*/FuncTy_4,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"main", mod); 
 func_main->setCallingConv(CallingConv::C);
 }
 AttrListPtr func_main_PAL;
 {
  SmallVector<AttributeWithIndex, 4> Attrs;
  AttributeWithIndex PAWI;
  PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind | Attribute::UWTable;
  Attrs.push_back(PAWI);
  func_main_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
  
 }
 func_main->setAttributes(func_main_PAL);
 
 Function* func_srand = mod->getFunction("srand");
 if (!func_srand) {
 func_srand = Function::Create(
  /*Type=*/FuncTy_9,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"srand", mod); // (external, no body)
 func_srand->setCallingConv(CallingConv::C);
 }
 AttrListPtr func_srand_PAL;
 {
  SmallVector<AttributeWithIndex, 4> Attrs;
  AttributeWithIndex PAWI;
  PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind;
  Attrs.push_back(PAWI);
  func_srand_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
  
 }
 func_srand->setAttributes(func_srand_PAL);
 
 Function* func_time = mod->getFunction("time");
 if (!func_time) {
 func_time = Function::Create(
  /*Type=*/FuncTy_7,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"time", mod); // (external, no body)
 func_time->setCallingConv(CallingConv::C);
 }
 AttrListPtr func_time_PAL;
 {
  SmallVector<AttributeWithIndex, 4> Attrs;
  AttributeWithIndex PAWI;
  PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind;
  Attrs.push_back(PAWI);
  func_time_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
  
 }
 func_time->setAttributes(func_time_PAL);
 
 Function* func_rand = mod->getFunction("rand");
 if (!func_rand) {
 func_rand = Function::Create(
  /*Type=*/FuncTy_4,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"rand", mod); // (external, no body)
 func_rand->setCallingConv(CallingConv::C);
 }
 AttrListPtr func_rand_PAL;
 {
  SmallVector<AttributeWithIndex, 4> Attrs;
  AttributeWithIndex PAWI;
  PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind;
  Attrs.push_back(PAWI);
  func_rand_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
  
 }
 func_rand->setAttributes(func_rand_PAL);
 
 Function* func_printf = mod->getFunction("printf");
 if (!func_printf) {
 func_printf = Function::Create(
  /*Type=*/FuncTy_14,
  /*Linkage=*/GlobalValue::ExternalLinkage,
  /*Name=*/"printf", mod); // (external, no body)
 func_printf->setCallingConv(CallingConv::C);
 }
 AttrListPtr func_printf_PAL;
 func_printf->setAttributes(func_printf_PAL);
 
 // Global Variable Declarations

 
 GlobalVariable* gvar_array__str = new GlobalVariable(/*Module=*/*mod, 
 /*Type=*/ArrayTy_0,
 /*isConstant=*/true,
 /*Linkage=*/GlobalValue::PrivateLinkage,
 /*Initializer=*/0, // has initializer, specified below
 /*Name=*/".str");
 gvar_array__str->setAlignment(1);
 
 // Constant Definitions
 Constant *const_array_15 = ConstantDataArray::getString(mod->getContext(), "Warning: tainted data in use!", true);
 ConstantInt* const_int32_16 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("1"), 10));
 ConstantInt* const_int32_17 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("3"), 10));
 ConstantInt* const_int32_18 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("0"), 10));
 ConstantPointerNull* const_ptr_19 = ConstantPointerNull::get(PointerTy_5);
 ConstantInt* const_int32_20 = ConstantInt::get(mod->getContext(), APInt(32, StringRef("20"), 10));
 std::vector<Constant*> const_ptr_21_indices;
 const_ptr_21_indices.push_back(const_int32_18);
 const_ptr_21_indices.push_back(const_int32_18);
 Constant* const_ptr_21 = ConstantExpr::getGetElementPtr(gvar_array__str, const_ptr_21_indices);
 
 // Global Variable Definitions
 gvar_array__str->setInitializer(const_array_15);
 
 // Function Definitions
 
 // Function: doStuff (func_doStuff)
 {
  Function::arg_iterator args = func_doStuff->arg_begin();
  Value* int32_a = args++;
  int32_a->setName("a");
  
  BasicBlock* label_entry = BasicBlock::Create(mod->getContext(), "entry",func_doStuff,0);
  
  // Block entry (label_entry)
  AllocaInst* ptr_a_addr = new AllocaInst(IntegerType::get(mod->getContext(), 32), "a.addr", label_entry);
  ptr_a_addr->setAlignment(4);
  AllocaInst* ptr_c = new AllocaInst(IntegerType::get(mod->getContext(), 32), "c", label_entry);
  ptr_c->setAlignment(4);
  StoreInst* void_22 = new StoreInst(int32_a, ptr_a_addr, false, label_entry);
  void_22->setAlignment(4);
  LoadInst* int32_23 = new LoadInst(ptr_a_addr, "", false, label_entry);
  int32_23->setAlignment(4);
  BinaryOperator* int32_add = BinaryOperator::Create(Instruction::Add, int32_23, const_int32_17, "add", label_entry);
  LoadInst* int32_24 = new LoadInst(ptr_a_addr, "", false, label_entry);
  int32_24->setAlignment(4);
  BinaryOperator* int32_mul = BinaryOperator::Create(Instruction::Mul, int32_add, int32_24, "mul", label_entry);
  StoreInst* void_25 = new StoreInst(int32_mul, ptr_c, false, label_entry);
  void_25->setAlignment(4);
  LoadInst* int32_26 = new LoadInst(ptr_c, "", false, label_entry);
  int32_26->setAlignment(4);
  ReturnInst::Create(mod->getContext(), int32_26, label_entry);
  
 }
 
 // Function: main (func_main)
 {
  
  BasicBlock* label_entry_28 = BasicBlock::Create(mod->getContext(), "entry",func_main,0);
  
  // Block entry (label_entry_28)
  AllocaInst* ptr_retval = new AllocaInst(IntegerType::get(mod->getContext(), 32), "retval", label_entry_28);
  ptr_retval->setAlignment(4);
  AllocaInst* ptr_x = new AllocaInst(IntegerType::get(mod->getContext(), 32), "x", label_entry_28);
  ptr_x->setAlignment(4);
  AllocaInst* ptr_w = new AllocaInst(IntegerType::get(mod->getContext(), 32), "w", label_entry_28);
  ptr_w->setAlignment(4);
  StoreInst* void_29 = new StoreInst(const_int32_18, ptr_retval, false, label_entry_28);
  CallInst* int64_call = CallInst::Create(func_time, const_ptr_19, "call", label_entry_28);
  int64_call->setCallingConv(CallingConv::C);
  int64_call->setTailCall(false);
  AttrListPtr int64_call_PAL;
  {
   SmallVector<AttributeWithIndex, 4> Attrs;
   AttributeWithIndex PAWI;
   PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind;
   Attrs.push_back(PAWI);
   int64_call_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
   
  }
  int64_call->setAttributes(int64_call_PAL);
  
  CastInst* int32_conv = new TruncInst(int64_call, IntegerType::get(mod->getContext(), 32), "conv", label_entry_28);
  CallInst* void_30 = CallInst::Create(func_srand, int32_conv, "", label_entry_28);
  void_30->setCallingConv(CallingConv::C);
  void_30->setTailCall(false);
  AttrListPtr void_30_PAL;
  {
   SmallVector<AttributeWithIndex, 4> Attrs;
   AttributeWithIndex PAWI;
   PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind;
   Attrs.push_back(PAWI);
   void_30_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
   
  }
  void_30->setAttributes(void_30_PAL);
  
  CallInst* int32_call1 = CallInst::Create(func_rand, "call1", label_entry_28);
  int32_call1->setCallingConv(CallingConv::C);
  int32_call1->setTailCall(false);
  AttrListPtr int32_call1_PAL;
  {
   SmallVector<AttributeWithIndex, 4> Attrs;
   AttributeWithIndex PAWI;
   PAWI.Index = 4294967295U; PAWI.Attrs = Attribute::None  | Attribute::NoUnwind;
   Attrs.push_back(PAWI);
   int32_call1_PAL = AttrListPtr::get(Attrs.begin(), Attrs.end());
   
  }
  int32_call1->setAttributes(int32_call1_PAL);
  
  BinaryOperator* int32_rem = BinaryOperator::Create(Instruction::SRem, int32_call1, const_int32_20, "rem", label_entry_28);
  StoreInst* void_31 = new StoreInst(int32_rem, ptr_x, false, label_entry_28);
  void_31->setAlignment(4);
  LoadInst* int32_32 = new LoadInst(ptr_x, "", false, label_entry_28);
  int32_32->setAlignment(4);
  CallInst* int32_call2 = CallInst::Create(func_doStuff, int32_32, "call2", label_entry_28);
  int32_call2->setCallingConv(CallingConv::C);
  int32_call2->setTailCall(false);
  AttrListPtr int32_call2_PAL;
  int32_call2->setAttributes(int32_call2_PAL);
  
  StoreInst* void_33 = new StoreInst(int32_call2, ptr_w, false, label_entry_28);
  void_33->setAlignment(4);
  CallInst* int32_call3 = CallInst::Create(func_printf, const_ptr_21, "call3", label_entry_28);
  int32_call3->setCallingConv(CallingConv::C);
  int32_call3->setTailCall(false);
  AttrListPtr int32_call3_PAL;
  int32_call3->setAttributes(int32_call3_PAL);
  
  LoadInst* int32_34 = new LoadInst(ptr_w, "", false, label_entry_28);
  int32_34->setAlignment(4);
  ReturnInst::Create(mod->getContext(), int32_34, label_entry_28);
  
 }
 
 return mod;
}