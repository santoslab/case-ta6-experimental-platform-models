#ifndef SIREUM_H_org_sireum_None_ED72E1
#define SIREUM_H_org_sireum_None_ED72E1
#include <types.h>

// None[art.Empty]


B None_ED72E1__eq(None_ED72E1 this, None_ED72E1 other);
inline B None_ED72E1__ne(None_ED72E1 this, None_ED72E1 other) {
  return !None_ED72E1__eq(this, other);
};
void None_ED72E1_string_(STACK_FRAME String result, None_ED72E1 this);
void None_ED72E1_cprint(None_ED72E1 this, B isOut);

inline B None_ED72E1__is(STACK_FRAME void* this) {
  return ((None_ED72E1) this)->type == TNone_ED72E1;
}

inline None_ED72E1 None_ED72E1__as(STACK_FRAME void *this) {
  if (None_ED72E1__is(CALLER this)) return (None_ED72E1) this;
  fprintf(stderr, "Invalid case from %s to None[art.Empty].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void None_ED72E1_apply(STACK_FRAME None_ED72E1 this);

#endif