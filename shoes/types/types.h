#include "shoes/types/button.h"
#include "shoes/types/check.h"
#include "shoes/types/color.h"
#include "shoes/types/download.h"
#include "shoes/types/edit_box.h"
#include "shoes/types/edit_line.h"
#include "shoes/types/effect.h"
#include "shoes/types/list_box.h"
#include "shoes/types/native.h"
#include "shoes/types/plot.h"
#include "shoes/types/progress.h"
#include "shoes/types/radio.h"
#include "shoes/types/shape.h"
#include "shoes/types/slider.h"
#include "shoes/types/spinner.h"
#include "shoes/types/svg.h"
#include "shoes/types/switch.h"
#include "shoes/types/text.h"
#include "shoes/types/text_link.h"
#include "shoes/types/text_view.h"
#include "shoes/types/textblock.h"
#include "shoes/types/timerbase.h"
#include "shoes/types/video.h"

#define SHOES_TYPES_INIT \
	shoes_0_native_type_init(); \
	shoes_button_init(); \
	shoes_check_init(); \
	shoes_color_init(); \
	shoes_download_init(); \
	shoes_edit_box_init(); \
	shoes_edit_line_init(); \
	shoes_effect_init(); \
	shoes_list_box_init(); \
	shoes_plot_init(); \
	shoes_progress_init(); \
	shoes_radio_init(); \
	shoes_shape_init(); \
	shoes_slider_init(); \
	shoes_spinner_init(); \
	shoes_svg_init(); \
	shoes_switch_init(); \
	shoes_text_init(); \
	shoes_text_link_init(); \
	shoes_text_view_init(); \
	shoes_textblock_init(); \
	shoes_timerbase_init(); \
	shoes_video_init();
