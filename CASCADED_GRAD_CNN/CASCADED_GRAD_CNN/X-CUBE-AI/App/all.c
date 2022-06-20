/**
  ******************************************************************************
  * @file    all.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Tue May 31 22:34:39 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "all.h"
#include "all_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"




#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_all
 
#undef AI_ALL_MODEL_SIGNATURE
#define AI_ALL_MODEL_SIGNATURE     "f3909530d4216ad4b15bb3feb8dec938"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Tue May 31 22:34:39 2022"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_ALL_N_BATCHES
#define AI_ALL_N_BATCHES         (1)




/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_conv2d_10_input0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1392, AI_STATIC)

/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2816, AI_STATIC)

/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2816, AI_STATIC)

/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 192, AI_STATIC)

/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  dense_9_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  nl_9_nl_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  dense_10_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 6, AI_STATIC)

/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  nl_11_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 6, AI_STATIC)

/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 288, AI_STATIC)

/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_3_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_3_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 9216, AI_STATIC)

/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_7_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)

/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  dense_9_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 12288, AI_STATIC)

/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  dense_9_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)

/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  dense_10_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 384, AI_STATIC)

/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  dense_10_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 6, AI_STATIC)

/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 512, AI_STATIC)

/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_4_scratch0_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)

/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_conv2d_10_input0_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 16, 87), AI_STRIDE_INIT(4, 4, 4, 4, 64),
  1, &serving_default_conv2d_10_input0_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_output, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 4, 22), AI_STRIDE_INIT(4, 4, 4, 128, 512),
  1, &conv2d_0_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_3_output, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 4, 22), AI_STRIDE_INIT(4, 4, 4, 128, 512),
  1, &eltwise_3_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_output, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 6), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_4_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 6), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_7_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_output0, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 192, 1, 1), AI_STRIDE_INIT(4, 4, 4, 768, 768),
  1, &eltwise_7_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  dense_9_output, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &dense_9_output_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  nl_9_nl_output, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &nl_9_nl_output_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  dense_10_output, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 1, 1), AI_STRIDE_INIT(4, 4, 4, 24, 24),
  1, &dense_10_output_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  nl_11_output, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 1, 1), AI_STRIDE_INIT(4, 4, 4, 24, 24),
  1, &nl_11_output_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_weights, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 32), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_0_weights_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_bias, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_0_bias_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_3_scale, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_3_scale_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_3_bias, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_3_bias_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_weights, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 3, 32), AI_STRIDE_INIT(4, 4, 128, 384, 1152),
  1, &conv2d_4_weights_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_bias, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_4_bias_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_scale, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_7_scale_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_7_bias, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_7_bias_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  dense_9_weights, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 192, 64, 1, 1), AI_STRIDE_INIT(4, 4, 768, 49152, 49152),
  1, &dense_9_weights_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  dense_9_bias, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &dense_9_bias_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  dense_10_weights, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 64, 6, 1, 1), AI_STRIDE_INIT(4, 4, 256, 1536, 1536),
  1, &dense_10_weights_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  dense_10_bias, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 6, 1, 1), AI_STRIDE_INIT(4, 4, 4, 24, 24),
  1, &dense_10_bias_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_scratch0, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 8, 2), AI_STRIDE_INIT(4, 4, 4, 128, 1024),
  1, &conv2d_0_scratch0_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_4_scratch0, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 2, 2), AI_STRIDE_INIT(4, 4, 4, 128, 256),
  1, &conv2d_4_scratch0_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_11_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_11_layer, 11,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm,
  &nl_11_chain,
  NULL, &nl_11_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_10_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_9_nl_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_10_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_10_weights, &dense_10_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_10_layer, 10,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_10_chain,
  NULL, &nl_11_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_9_nl_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_9_nl_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_9_nl_layer, 9,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &nl_9_nl_chain,
  NULL, &dense_10_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_7_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_9_weights, &dense_9_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_9_layer, 9,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_9_chain,
  NULL, &nl_9_nl_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_7_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_7_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_7_scale, &eltwise_7_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_7_layer, 7,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_7_chain,
  NULL, &dense_9_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_4_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_4_weights, &conv2d_4_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_4_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_4_layer, 5,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d_nl_pool, forward_conv2d_nl_pool,
  &conv2d_4_chain,
  NULL, &eltwise_7_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 2, 2), 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
  .pool_func = pool_func_mp_array_f32, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_3_scale, &eltwise_3_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_3_layer, 3,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_3_chain,
  NULL, &conv2d_4_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &serving_default_conv2d_10_input0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_0_weights, &conv2d_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_scratch0)
)

AI_LAYER_OBJ_DECLARE(
  conv2d_0_layer, 1,
  OPTIMIZED_CONV2D_TYPE, 0x0, NULL,
  conv2d_nl_pool, forward_conv2d_nl_pool,
  &conv2d_0_chain,
  NULL, &eltwise_3_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 0, 1, 2), 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 1, 1), 
  .pool_func = pool_func_mp_array_f32, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 89752, 1, 1),
    89752, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13312, 1, 1),
    13312, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_ALL_IN_NUM, &serving_default_conv2d_10_input0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_ALL_OUT_NUM, &nl_11_output),
  &conv2d_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 89752, 1, 1),
      89752, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13312, 1, 1),
      13312, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_ALL_IN_NUM, &serving_default_conv2d_10_input0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_ALL_OUT_NUM, &nl_11_output),
  &conv2d_0_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool all_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  ai_ptr activations_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_activations_map(activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    conv2d_0_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_0_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_0_output_array.data = AI_PTR(activations_map[0] + 2048);
    conv2d_0_output_array.data_start = AI_PTR(activations_map[0] + 2048);
    eltwise_3_output_array.data = AI_PTR(activations_map[0] + 2048);
    eltwise_3_output_array.data_start = AI_PTR(activations_map[0] + 2048);
    conv2d_4_scratch0_array.data = AI_PTR(activations_map[0] + 0);
    conv2d_4_scratch0_array.data_start = AI_PTR(activations_map[0] + 0);
    conv2d_4_output_array.data = AI_PTR(activations_map[0] + 512);
    conv2d_4_output_array.data_start = AI_PTR(activations_map[0] + 512);
    eltwise_7_output_array.data = AI_PTR(activations_map[0] + 1280);
    eltwise_7_output_array.data_start = AI_PTR(activations_map[0] + 1280);
    dense_9_output_array.data = AI_PTR(activations_map[0] + 0);
    dense_9_output_array.data_start = AI_PTR(activations_map[0] + 0);
    nl_9_nl_output_array.data = AI_PTR(activations_map[0] + 256);
    nl_9_nl_output_array.data_start = AI_PTR(activations_map[0] + 256);
    dense_10_output_array.data = AI_PTR(activations_map[0] + 0);
    dense_10_output_array.data_start = AI_PTR(activations_map[0] + 0);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool all_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  ai_ptr weights_map[1] = AI_C_ARRAY_INIT;

  if (ai_platform_get_weights_map(weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    conv2d_0_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_0_weights_array.data = AI_PTR(weights_map[0] + 0);
    conv2d_0_weights_array.data_start = AI_PTR(weights_map[0] + 0);
    conv2d_0_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_0_bias_array.data = AI_PTR(weights_map[0] + 1152);
    conv2d_0_bias_array.data_start = AI_PTR(weights_map[0] + 1152);
    eltwise_3_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_3_scale_array.data = AI_PTR(weights_map[0] + 1280);
    eltwise_3_scale_array.data_start = AI_PTR(weights_map[0] + 1280);
    eltwise_3_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_3_bias_array.data = AI_PTR(weights_map[0] + 1408);
    eltwise_3_bias_array.data_start = AI_PTR(weights_map[0] + 1408);
    conv2d_4_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_weights_array.data = AI_PTR(weights_map[0] + 1536);
    conv2d_4_weights_array.data_start = AI_PTR(weights_map[0] + 1536);
    conv2d_4_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_4_bias_array.data = AI_PTR(weights_map[0] + 38400);
    conv2d_4_bias_array.data_start = AI_PTR(weights_map[0] + 38400);
    eltwise_7_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_7_scale_array.data = AI_PTR(weights_map[0] + 38528);
    eltwise_7_scale_array.data_start = AI_PTR(weights_map[0] + 38528);
    eltwise_7_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_7_bias_array.data = AI_PTR(weights_map[0] + 38656);
    eltwise_7_bias_array.data_start = AI_PTR(weights_map[0] + 38656);
    dense_9_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_9_weights_array.data = AI_PTR(weights_map[0] + 38784);
    dense_9_weights_array.data_start = AI_PTR(weights_map[0] + 38784);
    dense_9_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_9_bias_array.data = AI_PTR(weights_map[0] + 87936);
    dense_9_bias_array.data_start = AI_PTR(weights_map[0] + 87936);
    dense_10_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_10_weights_array.data = AI_PTR(weights_map[0] + 88192);
    dense_10_weights_array.data_start = AI_PTR(weights_map[0] + 88192);
    dense_10_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_10_bias_array.data = AI_PTR(weights_map[0] + 89728);
    dense_10_bias_array.data_start = AI_PTR(weights_map[0] + 89728);
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/

AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_all_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_ALL_MODEL_NAME,
      .model_signature   = AI_ALL_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 347104,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_all_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_ALL_MODEL_NAME,
      .model_signature   = AI_ALL_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 347104,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_all_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_all_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_all_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_all_create(network, AI_ALL_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_all_data_params_get(&params) != true) {
        err = ai_all_get_error(*network);
        return err;
    }
#if defined(AI_ALL_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_ALL_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_all_init(*network, &params) != true) {
        err = ai_all_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_all_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_all_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_all_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_all_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= all_configure_weights(net_ctx, params);
  ok &= all_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_all_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_all_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_ALL_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

