#pragma once

#include "AST/AST.h"
#include "Core/SExpressions.h"

#include <cstdint>

namespace WebAssemblyText
{
	using namespace AST;

	#define ENUM_WAST_DECL_SYMBOLS() \
		WAST_SYMBOL(module) \
		WAST_SYMBOL(func) \
		WAST_SYMBOL(type) \
		WAST_SYMBOL(table) \
		WAST_SYMBOL(export) \
		WAST_SYMBOL(import) \
		WAST_SYMBOL(memory) \
		WAST_SYMBOL(segment) \
		WAST_SYMBOL(start) \
		WAST_SYMBOL(param) \
		WAST_SYMBOL(result) \
		WAST_SYMBOL(local) \
		WAST_SYMBOL(case) \
		WAST_SYMBOL(fallthrough) \
		WAST_SYMBOL(assert_return) \
		WAST_SYMBOL(assert_return_nan) \
		WAST_SYMBOL(assert_invalid) \
		WAST_SYMBOL(assert_trap) \
		WAST_SYMBOL(invoke) \
		WAST_SYMBOL(align) \
		WAST_SYMBOL(offset) \
		WAST_SYMBOL(then) \
		WAST_SYMBOL(else)
	
	#define ENUM_WAST_ANY_OPCODE_SYMBOLS() \
		TYPED_WAST_SYMBOL(br_table) \
		TYPED_WAST_SYMBOL(select) \
		WAST_SYMBOL(call) \
		WAST_SYMBOL(call_import) \
		WAST_SYMBOL(call_indirect) \
		WAST_SYMBOL(if) \
		WAST_SYMBOL(loop) \
		WAST_SYMBOL(br) \
		WAST_SYMBOL(unreachable) \
		WAST_SYMBOL(return) \
		WAST_SYMBOL(block) \
		WAST_SYMBOL(get_local) \
		WAST_SYMBOL(set_local) \
		TYPED_WAST_SYMBOL(load) \
		TYPED_WAST_SYMBOL(store)

	#define ENUM_WAST_NUMERIC_OPCODE_SYMBOLS() \
		TYPED_WAST_SYMBOL(const) \
		TYPED_WAST_SYMBOL(neg) \
		TYPED_WAST_SYMBOL(abs) \
		TYPED_WAST_SYMBOL(sub) \
		TYPED_WAST_SYMBOL(add) \
		TYPED_WAST_SYMBOL(mul) \
		BITYPED_WAST_SYMBOL(wrap) \
		BITYPED_WAST_SYMBOL(trunc_s) \
		BITYPED_WAST_SYMBOL(trunc_u) \
		BITYPED_WAST_SYMBOL(extend_s) \
		BITYPED_WAST_SYMBOL(extend_u) \
		BITYPED_WAST_SYMBOL(reinterpret)

	#define ENUM_WAST_INT_OPCODE_SYMBOLS() \
		TYPED_WAST_SYMBOL(load8_s) \
		TYPED_WAST_SYMBOL(load8_u) \
		TYPED_WAST_SYMBOL(load16_s) \
		TYPED_WAST_SYMBOL(load16_u) \
		TYPED_WAST_SYMBOL(load32_s) \
		TYPED_WAST_SYMBOL(load32_u) \
		TYPED_WAST_SYMBOL(store8) \
		TYPED_WAST_SYMBOL(store16) \
		TYPED_WAST_SYMBOL(store32) \
		TYPED_WAST_SYMBOL(not) \
		TYPED_WAST_SYMBOL(clz) \
		TYPED_WAST_SYMBOL(ctz) \
		TYPED_WAST_SYMBOL(popcnt) \
		TYPED_WAST_SYMBOL(div_s) \
		TYPED_WAST_SYMBOL(div_u) \
		TYPED_WAST_SYMBOL(rem_s) \
		TYPED_WAST_SYMBOL(rem_u) \
		TYPED_WAST_SYMBOL(and) \
		TYPED_WAST_SYMBOL(or) \
		TYPED_WAST_SYMBOL(xor) \
		TYPED_WAST_SYMBOL(shl) \
		TYPED_WAST_SYMBOL(shr_s) \
		TYPED_WAST_SYMBOL(shr_u) \
		TYPED_WAST_SYMBOL(rotl) \
		TYPED_WAST_SYMBOL(rotr) \
		TYPED_WAST_SYMBOL(eqz) \
		WAST_SYMBOL(current_memory) \
		WAST_SYMBOL(page_size) \
		WAST_SYMBOL(grow_memory)

	#define ENUM_WAST_FLOAT_OPCODE_SYMBOLS() \
		TYPED_WAST_SYMBOL(ceil) \
		TYPED_WAST_SYMBOL(floor) \
		TYPED_WAST_SYMBOL(trunc) \
		TYPED_WAST_SYMBOL(nearest) \
		TYPED_WAST_SYMBOL(div) \
		TYPED_WAST_SYMBOL(rem) \
		TYPED_WAST_SYMBOL(copysign) \
		TYPED_WAST_SYMBOL(min) \
		TYPED_WAST_SYMBOL(max) \
		BITYPED_WAST_SYMBOL(promote) \
		BITYPED_WAST_SYMBOL(demote) \
		BITYPED_WAST_SYMBOL(convert_s) \
		BITYPED_WAST_SYMBOL(convert_u) \
		TYPED_WAST_SYMBOL(sqrt)

	#define ENUM_WAST_BOOL_OPCODE_SYMBOLS() \
		TYPED_WAST_SYMBOL(eq) \
		TYPED_WAST_SYMBOL(ne) \
		TYPED_WAST_SYMBOL(lt_s) \
		TYPED_WAST_SYMBOL(lt_u) \
		TYPED_WAST_SYMBOL(le_s) \
		TYPED_WAST_SYMBOL(le_u) \
		TYPED_WAST_SYMBOL(gt_s) \
		TYPED_WAST_SYMBOL(gt_u) \
		TYPED_WAST_SYMBOL(ge_s) \
		TYPED_WAST_SYMBOL(ge_u) \
		TYPED_WAST_SYMBOL(lt) \
		TYPED_WAST_SYMBOL(le) \
		TYPED_WAST_SYMBOL(gt) \
		TYPED_WAST_SYMBOL(ge)

	#define ENUM_WAST_VOID_OPCODE_SYMBOLS() \
		WAST_SYMBOL(nop) \
		WAST_SYMBOL(br_if)

	#define ENUM_WAST_TYPE_SYMBOLS() \
		WAST_SYMBOL(typeBase) \
		WAST_SYMBOL(i8) \
		WAST_SYMBOL(i16) \
		WAST_SYMBOL(i32) \
		WAST_SYMBOL(i64) \
		WAST_SYMBOL(f32) \
		WAST_SYMBOL(f64) \
		WAST_SYMBOL(bool) \
		WAST_SYMBOL(void)

	#define ENUM_OPCODE_SYMBOLS() \
		ENUM_WAST_DECL_SYMBOLS() \
		ENUM_WAST_ANY_OPCODE_SYMBOLS() \
		ENUM_WAST_NUMERIC_OPCODE_SYMBOLS() \
		ENUM_WAST_INT_OPCODE_SYMBOLS() \
		ENUM_WAST_FLOAT_OPCODE_SYMBOLS() \
		ENUM_WAST_BOOL_OPCODE_SYMBOLS() \
		ENUM_WAST_VOID_OPCODE_SYMBOLS() \
		ENUM_WAST_TYPE_SYMBOLS()

	// Declare an enum with all the symbols used by WAST.
	enum class Symbol : uintptr
	{
		#define AST_TYPE(typeName,className,symbol) _##symbol##_##typeName,
		#define AST_TYPE_PAIR(typeName1,typeName2,symbol) _##symbol##_##typeName1##_##typeName2,
		#define WAST_SYMBOL(symbol) _##symbol,
		#define TYPED_WAST_SYMBOL(symbol) _##symbol, ENUM_AST_TYPES(AST_TYPE,symbol)
		#define BITYPED_WAST_SYMBOL(symbol) _##symbol, ENUM_AST_TYPE_PAIRS(AST_TYPE_PAIR,symbol)
		ENUM_OPCODE_SYMBOLS()
		#undef AST_TYPE
		#undef AST_TYPE_PAIR
		#undef WAST_SYMBOL
		#undef TYPED_WAST_SYMBOL
		#undef BITYPED_WAST_SYMBOL
		num
	};

	// Declare an array, indexed by the symbol enum, containing the symbol string.
	extern const char* wastSymbols[(size_t)Symbol::num];
	
	// Encapsulates static initialization of the WAST symbol index map.
	const SExp::SymbolIndexMap& getWASTSymbolIndexMap();
	
	inline Symbol getTypedSymbol(TypeId type,Symbol baseSymbol)
	{
		return Symbol((uintptr)baseSymbol + (uintptr)type);
	}

	inline Symbol getBitypedSymbol(TypeId leftType,Symbol baseSymbol,TypeId rightType)
	{
		auto leftTypeIndex = (uintptr)leftType - 1;
		auto rightTypeIndex = (uintptr)rightType - 1;
		auto numEnumeratedTypes  = (uintptr)TypeId::num - 1;
		return Symbol((uintptr)baseSymbol + 1 + leftTypeIndex + rightTypeIndex * numEnumeratedTypes);
	}
	
	template<typename Class>
	Symbol getAnyOpSymbol(typename Class::Op op)
	{
		switch(op)
		{
		#define MAP_OP_SYMBOL(op,symbol) case Class::Op::op: return Symbol::_##symbol;
		MAP_OP_SYMBOL(getLocal,get_local)
		MAP_OP_SYMBOL(setLocal,set_local)
		MAP_OP_SYMBOL(load,load)
		MAP_OP_SYMBOL(store,store)
		MAP_OP_SYMBOL(callDirect,call)
		MAP_OP_SYMBOL(callImport,call_import)
		MAP_OP_SYMBOL(callIndirect,call_indirect)
		MAP_OP_SYMBOL(loop,loop)
		MAP_OP_SYMBOL(branchTable,br_table)
		MAP_OP_SYMBOL(ifElse,if)
		MAP_OP_SYMBOL(branch,br)
		MAP_OP_SYMBOL(ret,return)
		#undef MAP_OP_SYMBOL
		default: throw;
		}
	}
	
	inline Symbol getOpSymbol(IntOp op)
	{
		switch(op)
		{
		#define MAP_OP_SYMBOL(op,symbol) case IntOp::op: return Symbol::_##symbol;
		MAP_OP_SYMBOL(neg,neg)
		MAP_OP_SYMBOL(abs,abs)
		MAP_OP_SYMBOL(bitwiseNot,not)
		MAP_OP_SYMBOL(clz,clz)
		MAP_OP_SYMBOL(ctz,ctz)
		MAP_OP_SYMBOL(popcnt,popcnt)
		MAP_OP_SYMBOL(add,add)
		MAP_OP_SYMBOL(sub,sub)
		MAP_OP_SYMBOL(mul,mul)
		MAP_OP_SYMBOL(divs,div_s)
		MAP_OP_SYMBOL(divu,div_u)
		MAP_OP_SYMBOL(rems,rem_s)
		MAP_OP_SYMBOL(remu,rem_u)
		MAP_OP_SYMBOL(rotl,rotl)
		MAP_OP_SYMBOL(rotr,rotr)
		MAP_OP_SYMBOL(bitwiseAnd,and)
		MAP_OP_SYMBOL(bitwiseOr,or)
		MAP_OP_SYMBOL(bitwiseXor,xor)
		MAP_OP_SYMBOL(shl,shl)
		MAP_OP_SYMBOL(shrSExt,shr_s)
		MAP_OP_SYMBOL(shrZExt,shr_u)
		MAP_OP_SYMBOL(wrap,wrap)
		MAP_OP_SYMBOL(truncSignedFloat,trunc_s)
		MAP_OP_SYMBOL(truncUnsignedFloat,trunc_u)
		MAP_OP_SYMBOL(sext,extend_s)
		MAP_OP_SYMBOL(zext,extend_u)
		MAP_OP_SYMBOL(reinterpretFloat,reinterpret)
		MAP_OP_SYMBOL(lit,const)
		MAP_OP_SYMBOL(eq,eq)
		MAP_OP_SYMBOL(ne,ne)
		MAP_OP_SYMBOL(lts,lt_s)
		MAP_OP_SYMBOL(ltu,lt_u)
		MAP_OP_SYMBOL(lt,lt)
		MAP_OP_SYMBOL(les,le_s)
		MAP_OP_SYMBOL(leu,le_u)
		MAP_OP_SYMBOL(le,le)
		MAP_OP_SYMBOL(gts,gt_s)
		MAP_OP_SYMBOL(gtu,gt_u)
		MAP_OP_SYMBOL(gt,gt)
		MAP_OP_SYMBOL(ges,ge_s)
		MAP_OP_SYMBOL(geu,ge_u)
		MAP_OP_SYMBOL(ge,ge)
		#undef MAP_OP_SYMBOL
		default: return getAnyOpSymbol<IntClass>(op);
		}
	}

	inline Symbol getOpSymbol(FloatOp op)
	{
		switch(op)
		{
		#define MAP_OP_SYMBOL(op,symbol) case FloatOp::op: return Symbol::_##symbol;
		MAP_OP_SYMBOL(neg,neg)
		MAP_OP_SYMBOL(abs,abs)
		MAP_OP_SYMBOL(ceil,ceil)
		MAP_OP_SYMBOL(floor,floor)
		MAP_OP_SYMBOL(trunc,trunc)
		MAP_OP_SYMBOL(nearestInt,nearest)
		MAP_OP_SYMBOL(add,add)
		MAP_OP_SYMBOL(sub,sub)
		MAP_OP_SYMBOL(mul,mul)
		MAP_OP_SYMBOL(div,div)
		MAP_OP_SYMBOL(rem,rem)
		MAP_OP_SYMBOL(min,min)
		MAP_OP_SYMBOL(max,max)
		MAP_OP_SYMBOL(copySign,copysign)
		MAP_OP_SYMBOL(convertSignedInt,convert_s)
		MAP_OP_SYMBOL(convertUnsignedInt,convert_u)
		MAP_OP_SYMBOL(promote,promote)
		MAP_OP_SYMBOL(demote,demote)
		MAP_OP_SYMBOL(reinterpretInt,reinterpret)
		MAP_OP_SYMBOL(lit,const)
		MAP_OP_SYMBOL(sqrt,sqrt)
		#undef MAP_OP_SYMBOL
		default: return getAnyOpSymbol<FloatClass>(op);
		}
	}

	inline Symbol getOpSymbol(VoidOp op)
	{
		switch(op)
		{
		#define MAP_OP_SYMBOL(op,symbol) case VoidOp::op: return Symbol::_##symbol;
		MAP_OP_SYMBOL(nop,nop)
		#undef MAP_OP_SYMBOL
		default: return getAnyOpSymbol<VoidClass>(op);
		}
	}
}
