#pragma once

class console{

    public:

        const int memory_size = 0xffff; // the size of the array in hex

        std::array <unsigned char, memory_size > memory_map //nes memory map

        // all the cpu opcodes 

        void brk_impl();

        void ora_x_ind();

        void ill_op();

        void ora_zp();

        void asl_zp();

        void php_impl();

        void ora_imd();

        void asl_ac();

        void ora_abs();

        void asl_abs();

        void bpl_rel();

        void ora_ind_y();

        void ora_zp_x();

        void asl_zp_x();

        void clc_impl();

        void ora_abs_y();

        void ora_abs_x();

        void asl_abs_x();

        void jsr_abs();

        void and_x_ind();

        void bit_zp();

        void and_zp();

        void rol_zp();

        void plp_impl();

        void and_imd();

        void rol_ac();

        void bit_abs();

        void and_abs();

        void rol_abs();

        void bmi_rel();

        void and_ind_y();

        void and_zp_x();

        void sec_imp();

        void and_abs_y();

        void and_abs_x();

        void rol_abs_x();

        void rti_impl();

        void eor_x_ind();

        void eor_zp();

        void lsr_zp();

        void pha_impl();

        void eor_imd();

        void lsr_ac();

        void jmp_abs();

        void eor_abs();

        void lsr_abs();

        void bvc_rel();

        void eor_ind_y();

        void eor_zp_x();

        void lsr_zp_x();

        void cli_impl();

        void eor_abs_y();

        void eor_abs_x();

        void lsr_abs_x();

        void rts_impl();

        void adc_x_ind();

        void adc_zp();

        void ror_zp();

        void pla_impl();

        void adc_imd();

        void ror_ac();

        void jmp_ind();

        void adc_abs();

        void ror_abs();

        void bvs_rel();

        void adc_ind_y();

        void adc_zp_x();

        void ror_zp_x();

        void ror_zp_x();

        void sei_impl();

        void adc_abs_y();

        void adc_abs_x();

        void ror_abs_x();

        void sta_x_ind();

        void sty_zp();

        void sta_zp();

        void stx_zp();

        void dey_impl();

        void txa_impl();

        void sty_abs();

        void sta_abs();

        void sta_abs();

        void stx_abs();

        void bcc_rel();

        void lda_ind_y();

        void sty_zp_x();

        void sta_zp_x();

        void stx_zp_y();

        void tya_impl();

        void sta_abs_y();

        void txs_impl();

        void sta_abs_x();

        void ldy_imd();

        void lda_x_ind(); 

        void ldx_imd();

        void ldy_zp();

        void ldx_zp();

        void lda_zp();

        void tay_impl();

        void lda_imd();

        void tax_impl();

        void ldy_abs();

        void lda_abs();

        void ldx_abs();

        void bcs_rel();

        void lda_ind_y();

        void ldy_zp_x();

        void lda_zp_x();

        void ldx_zp_y();

        void clv_impl();

        void lda_abs_y();

        void tsx_impl();

        void ldy_abs_x();

        void lda_abs_x();

        void ldx_abs_y();

        void cpy_imd();

        void cmp_x_ind();

        void cpy_zp();

        void cmp_zp();

        void dec_zp();
        
        void iny_impl();

        void cmp_imd();

        void dex_impl();

        void cpy_abs();

        void cmp_abs();

        void dec_abs();

        void bne_rel();

        void cmp_ind_y();

        void cmp_zp_x();

        void dec_zp_x();
        
        void cld_impl();

        void cmp_abs_y();

        void cmp_abs_x();

        void dec_abs_x();

        void cpx_imd();

        void sbc_x_ind();

        void cpx_zp();

        void sbc_zp();

        void inc_zp();

        void inx_impl();

        void sbc_imd();

        void nop_impl();

        void cpx_abs();

        void sbc_abs();

        void inc_abs();

        void beq_rel();

        void sbc_ind_y();

        void sbc_zp_x();

        void inc_zp_x();

        void sed_impl();

        void sbc_abs_y();

        void sbc_abs_x();

        void inc_abs_x();

        void cpu (int opcode);

};

#include "console_header_cpp.cpp"