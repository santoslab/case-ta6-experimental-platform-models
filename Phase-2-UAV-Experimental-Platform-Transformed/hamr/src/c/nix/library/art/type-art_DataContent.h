#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent
#include <misc.h>

// art.DataContent

#include <type-hamr_Base_Types_Bits_Payload.h>
#include <type-art_Empty.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct hamr_Base_Types_Bits_Payload hamr_Base_Types_Bits_Payload;
  struct art_Empty art_Empty;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#endif