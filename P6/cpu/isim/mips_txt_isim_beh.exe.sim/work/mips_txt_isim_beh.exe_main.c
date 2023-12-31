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
    work_m_00000000003635092461_3092946469_init();
    work_m_00000000000800573632_1452706411_init();
    work_m_00000000001351608373_0422751060_init();
    work_m_00000000000942551096_1795233284_init();
    work_m_00000000001788734286_3279700917_init();
    work_m_00000000001004374861_4261105830_init();
    work_m_00000000001942296842_3383627289_init();
    work_m_00000000002381612529_2398219831_init();
    work_m_00000000003897192983_0464101055_init();
    work_m_00000000002634801368_2859362486_init();
    work_m_00000000001171124491_1806506970_init();
    work_m_00000000001431638227_3766814427_init();
    work_m_00000000000258517265_0324821570_init();
    work_m_00000000001262102806_0646318997_init();
    work_m_00000000000305945223_3877310806_init();
    work_m_00000000001292392995_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001292392995_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
