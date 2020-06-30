#ifndef SIREUM_H_hamr_Base_Types_Bits_Payload
#define SIREUM_H_hamr_Base_Types_Bits_Payload
#include <types.h>

// hamr.Base_Types.Bits_Payload

#define hamr_Base_Types_Bits_Payload_value_(this) ((IS_C4F575) &(this)->value)

B hamr_Base_Types_Bits_Payload__eq(hamr_Base_Types_Bits_Payload this, hamr_Base_Types_Bits_Payload other);
inline B hamr_Base_Types_Bits_Payload__ne(hamr_Base_Types_Bits_Payload this, hamr_Base_Types_Bits_Payload other) {
  return !hamr_Base_Types_Bits_Payload__eq(this, other);
};
void hamr_Base_Types_Bits_Payload_string_(STACK_FRAME String result, hamr_Base_Types_Bits_Payload this);
void hamr_Base_Types_Bits_Payload_cprint(hamr_Base_Types_Bits_Payload this, B isOut);

inline B hamr_Base_Types_Bits_Payload__is(STACK_FRAME void* this) {
  return ((hamr_Base_Types_Bits_Payload) this)->type == Thamr_Base_Types_Bits_Payload;
}

inline hamr_Base_Types_Bits_Payload hamr_Base_Types_Bits_Payload__as(STACK_FRAME void *this) {
  if (hamr_Base_Types_Bits_Payload__is(CALLER this)) return (hamr_Base_Types_Bits_Payload) this;
  fprintf(stderr, "Invalid case from %s to hamr.Base_Types.Bits_Payload.", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void hamr_Base_Types_Bits_Payload_apply(STACK_FRAME hamr_Base_Types_Bits_Payload this, IS_C4F575 value);

#endif