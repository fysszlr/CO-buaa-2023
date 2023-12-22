/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000357835748_3092946469_init();
    work_m_00000000000037816922_1452706411_init();
    work_m_00000000003827289816_1402135577_init();
    work_m_00000000003963802488_0422751060_init();
    work_m_00000000000942551096_1795233284_init();
    work_m_00000000001788734286_3279700917_init();
    work_m_00000000001004374861_4261105830_init();
    work_m_00000000001942296842_3383627289_init();
    work_m_00000000002381612529_2398219831_init();
    work_m_00000000003897192983_0464101055_init();
    work_m_00000000002095837797_2859362486_init();
    work_m_00000000000532142951_3766814427_init();
    work_m_00000000000364147731_0324821570_init();
    work_m_00000000001037711174_0646318997_init();
    work_m_00000000000201388151_3877310806_init();
    work_m_00000000002047498008_0258635663_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0258635663");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
