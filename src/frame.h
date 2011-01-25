#ifndef FRAME_H
#define FRAME_H

#include "stack.h"
#include "types.h"

/**
 Frame. Modificar de void para os tipos corretos.
 */

struct frame 
{
	u4 *fields;
	void **constant_pool;
	u2 max_stack;
  u2 max_locals;
  u4 code_length;
  u1 	*code;
}

/**
 Pilha de frame.
 */
struct frame_stack
{
	struct frame value;
	struct frame_stack *next;
}

/**
	Pegar os valores do frame:
	1- via metodos get? getField(int index)
	2- via acesso struct? current_frame->fields

	ATUAL: acesso struct
	*/

struct frame current_frame;

void newFrame(u4 class_index, method_info *current_method);
void freeFrame();
 

#endif
