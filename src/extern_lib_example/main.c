#include <flite/flite.h>
#include <string.h>
#include <memory.h>

cst_voice *register_cmu_us_kal();
cst_voice *register_cmu_us_kal16();
cst_voice *register_cmu_us_rms();
cst_voice *register_cmu_us_awb();
cst_voice *register_cmu_us_slt();

int main(int argc, char **argv)
{
    cst_voice *v;

    flite_init();

    v = register_cmu_us_awb(NULL);

	if (v == NULL){
		printf("Sorry\n");
		return 1;
	}

    for (int i = 1; i < argc; ++i)
    {		
    	flite_text_to_speech(argv[i], v, "play");
    }

	return 0;
}
