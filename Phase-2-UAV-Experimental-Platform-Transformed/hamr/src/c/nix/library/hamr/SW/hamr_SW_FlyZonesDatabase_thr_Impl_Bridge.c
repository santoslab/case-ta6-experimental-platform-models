#include <all.h>

// hamr.SW.FlyZonesDatabase_thr_Impl_Bridge

B hamr_SW_FlyZonesDatabase_thr_Impl_Bridge__eq(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge this, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_DispatchPropertyProtocol__ne((art_DispatchPropertyProtocol) &this->dispatchProtocol, (art_DispatchPropertyProtocol) &other->dispatchProtocol)) return F;
  if (Option_9AF35E__ne((Option_9AF35E) &this->dispatchTriggers, (Option_9AF35E) &other->dispatchTriggers)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->keep_in_zones, (art_Port_45E54D) &other->keep_in_zones)) return F;
  if (art_Port_45E54D__ne((art_Port_45E54D) &this->keep_out_zones, (art_Port_45E54D) &other->keep_out_zones)) return F;
  return T;
}

B hamr_SW_FlyZonesDatabase_thr_Impl_Bridge__ne(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge this, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge other);

void hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_string_(STACK_FRAME String result, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge this) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge", "string", 0);
  String_string_(SF result, string("FlyZonesDatabase_thr_Impl_Bridge("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  String_string_(SF result, (String) &this->name);
  String_string_(SF result, sep);
  art_DispatchPropertyProtocol_string_(SF result, (art_DispatchPropertyProtocol) &this->dispatchProtocol);
  String_string_(SF result, sep);
  Option_9AF35E_string_(SF result, (Option_9AF35E) &this->dispatchTriggers);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->keep_in_zones);
  String_string_(SF result, sep);
  art_Port_45E54D_string_(SF result, (art_Port_45E54D) &this->keep_out_zones);
  String_string_(SF result, string(")"));
}

void hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_cprint(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("FlyZonesDatabase_thr_Impl_Bridge("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_DispatchPropertyProtocol_cprint((art_DispatchPropertyProtocol) &this->dispatchProtocol, isOut);
  String_cprint(sep, isOut);
  Option_9AF35E_cprint((Option_9AF35E) &this->dispatchTriggers, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->keep_in_zones, isOut);
  String_cprint(sep, isOut);
  art_Port_45E54D_cprint((art_Port_45E54D) &this->keep_out_zones, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_FlyZonesDatabase_thr_Impl_Bridge__is(STACK_FRAME void* this);
hamr_SW_FlyZonesDatabase_thr_Impl_Bridge hamr_SW_FlyZonesDatabase_thr_Impl_Bridge__as(STACK_FRAME void *this);

void hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_apply(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D keep_in_zones, art_Port_45E54D keep_out_zones) {
  DeclNewStackFrame(caller, "FlyZonesDatabase_thr_Impl_Bridge.scala", "hamr.SW.FlyZonesDatabase_thr_Impl_Bridge", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  Type_assign(&this->dispatchProtocol, dispatchProtocol, sizeof(union art_DispatchPropertyProtocol));
  Type_assign(&this->dispatchTriggers, dispatchTriggers, sizeof(union Option_9AF35E));
  Type_assign(&this->keep_in_zones, keep_in_zones, sizeof(struct art_Port_45E54D));
  Type_assign(&this->keep_out_zones, keep_out_zones, sizeof(struct art_Port_45E54D));
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_1);
  t_1.size = (int8_t) 2;
  IS_820232_up(&t_1, 0, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(this));
  IS_820232_up(&t_1, 1, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(this));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_2);
  t_2.size = (int8_t) 0;
  STATIC_ASSERT(2 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_3);
  t_3.size = (int8_t) 2;
  IS_820232_up(&t_3, 0, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(this));
  IS_820232_up(&t_3, 1, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(this));
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_4);
  t_4.size = (int8_t) 0;
  STATIC_ASSERT(0 <= MaxIS_820232, "Insufficient maximum for IS[Z, art.UPort] elements.");
  DeclNewIS_820232(t_5);
  t_5.size = (int8_t) 0;
  DeclNewart_Bridge_Ports(t_0);
  art_Bridge_Ports_apply(SF &t_0, (IS_820232) (&t_1), (IS_820232) (&t_2), (IS_820232) (&t_3), (IS_820232) (&t_4), (IS_820232) (&t_5));
  Type_assign(&this->ports, (&t_0), sizeof(struct art_Bridge_Ports));
  DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api(t_6);
  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api_apply(SF &t_6, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(this)), art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(this)));
  Type_assign(&this->api, (&t_6), sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api));
  DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Impl(t_8);
  hamr_SW_FlyZonesDatabase_thr_Impl_Impl_apply(SF &t_8, (hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_Api) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_api_(this));
  DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints(t_7);
  hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints_apply(SF &t_7, hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_id_(this), art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_in_zones_(this)), art_Port_45E54D_id_(hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_keep_out_zones_(this)), (Option_9AF35E) hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_dispatchTriggers_(this), (hamr_SW_FlyZonesDatabase_thr_Impl_Impl) (&t_8));
  Type_assign(&this->entryPoints, (&t_7), sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Bridge_EntryPoints));
}