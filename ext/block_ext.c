#include "ruby.h"

VALUE BlockExt = Qnil;
VALUE perform(VALUE self);

void Init_block_ext() {
  BlockExt = rb_define_class("BlockExt", 0);
  rb_define_singleton_method(BlockExt, "run", perform, 0);
}

VALUE perform(VALUE self) {
  while(Qtrue){  }
  return Qnil;
}
