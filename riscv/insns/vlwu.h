VL_LOOP
  WRITE_INT_VRD(MMU.load_uint32(RS1 + insn.rvv_load_imm()), UINT32);
}
