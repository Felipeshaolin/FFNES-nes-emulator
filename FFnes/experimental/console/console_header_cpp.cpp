
console::void brk_impl(){

    

}

console::void cpu (int opcode){

    std::array <std::array<void(*)(),16>, 16 > instruction_set = {{
        {{ brk_impl , ora_x_ind , ill_op  , ill_op , ill_op   , ora_zp    , asl_zp   , ill_op , php_impl , ora_imd   , asl_ac   , ill_op , ill_op    , ora_abs   , asl_abs   , ill_op }},
        {{ bpl_rel  , ora_ind_y , ill_op  , ill_op , ill_op   , ora_zp_x  , asl_zp_x , ill_op , clc_impl , ora_abs_y , ill_op   , ill_op , ill_op    , ora_abs_x , asl_abs_x , ill_op }},
        {{ jsr_abs  , and_x_ind , ill_op  , ill_op , bit_zp   , and_zp    , rol_zp   , ill_op , plp_impl , and_imd   , rol_ac   , ill_op , bit_abs   , and_abs   , rol_abs   , ill_op }},
        {{ bmi_rel  , and_ind_y , ill_op  , ill_op , ill_op   , and_zp_x  , rol_zp_x , ill_op , sec_imp  , and_abs_y , ill_op   , ill_op , ill_op    , and_abs_x , rol_abs_x , ill_op }},
        {{ rti_impl , eor_x_ind , ill_op  , ill_op , ill_op   , eor_zp    , lsr_zp   , ill_op , pha_impl , eor_imd   , lsr_ac   , ill_op , jmp_abs   , eor_abs   , lsr_abs   , ill_op }},
        {{ bvc_rel  , eor_ind_y , ill_op  , ill_op , ill_op   , eor_zp_x  , lsr_zp_x , ill_op , cli_impl , eor_abs_y , ill_op   , ill_op , ill_op    , eor_abs_x , lsr_abs_x , ill_op }},
        {{ rts_impl , adc_x_ind , ill_op  , ill_op , ill_op   , adc_zp    , ror_zp   , ill_op , pla_impl , adc_imd   , ror_ac   , ill_op , jmp_ind   , adc_abs   , ror_abs   , ill_op }}
        {{ bvs_rel  , adc_ind_y , ill_op  , ill_op , ill_op   , adc_zp_x  , ror_zp_x , ill_op , sei_impl , adc_abs_y , ill_op   , ill_op , ill_op    , adc_abs_x , ror_abs_x , ill_op }},
        {{ ill_op   , sta_x_ind , ill_op  , ill_op , sty_zp   , sta_zp    , stx_zp   , ill_op , dey_impl , ill_op    , txa_impl , ill_op , sty_abs   , sta_abs   , stx_abs   , ill_op }},
        {{ bcc_rel  , lda_ind_y , ill_op  , ill_op , sty_zp_x , sta_zp_x  , stx_zp_y , ill_op , tya_impl , sta_abs_y , txs_impl , ill_op , ill_op    , sta_abs_x , ill_op    , ill_op }},
        {{ ldy_imd  , lda_x_ind , ldx_imd , ill_op , ldy_zp   , lda_zp    , ldx_zp   , ill_op , tay_impl , lda_imd   , tax_impl , ill_op , ldy_abs   , lda_abs   , ldx_abs   , ill_op }}, 
        {{ bcs_rel  , lda_ind_y , ill_op  , ill_op , ldy_zp_x , lda_zp_x  , ldx_zp_y , ill_op , clv_impl , lda_abs_y , tsx_impl , ill_op , ldy_abs_x , lda_abs_x , ldx_abs_y , ill_op }},
        {{ cpy_imd  , cmp_x_ind , ill_op  , ill_op , cpy_zp   , cmp_zp    , dec_zp   , ill_op , iny_impl , cmp_imd   , dex_impl , ill_op , cpy_abs   , cmp_abs   , dec_abs   , ill_op }}, 
        {{ bne_rel  , cmp_ind_y , ill_op  , ill_op , ill_op   , cmp_zp_x  , dec_zp_x , ill_op , cld_impl , cmp_abs_y , ill_op   , ill_op , ill_op    , cmp_abs_x , dec_abs_x , ill_op }},
        {{ cpx_imd  , sbc_x_ind , ill_op  , ill_op , cpx_zp   , sbc_zp    , inc_zp   , ill_op , inx_impl , sbc_imd   , nop_impl , ill_op , cpx_abs   , sbc_abs   , inc_abs   , ill_op }},
        {{ beq_rel  , sbc_ind_y , ill_op  , ill_op , ill_op   , sbc_zp_x  , inc_zp_x , ill_op , sed_impl , sbc_abs_y , ill_op   , ill_op , ill_op    , sbc_abs_x , inc_abs_x , ill_op }},
    }};

    instruction_set[((opcode&0xF0)/16)][(opcode&0X0F)]()

}
