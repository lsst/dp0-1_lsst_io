.. _Data-Products-DP0-1-schema_deepCoadd_deblendedFlux: 
  
################################################# 
Schema for Butler catalog deepCoadd_deblendedFlux 
################################################# 
  
**id** (units=None,type=int64): unique ID 
 
**coord_ra** (units=rad,type=float64): position in ra/dec 
 
**coord_dec** (units=rad,type=float64): position in ra/dec 
 
**parent** (units=None,type=int64): unique ID of parent source 
 
**merge_footprint_i** (units=None,type=bool): Detection footprint overlapped with a detection from filter i 
 
**merge_footprint_r** (units=None,type=bool): Detection footprint overlapped with a detection from filter r 
 
**merge_footprint_z** (units=None,type=bool): Detection footprint overlapped with a detection from filter z 
 
**merge_footprint_y** (units=None,type=bool): Detection footprint overlapped with a detection from filter y 
 
**merge_footprint_g** (units=None,type=bool): Detection footprint overlapped with a detection from filter g 
 
**merge_footprint_u** (units=None,type=bool): Detection footprint overlapped with a detection from filter u 
 
**merge_footprint_sky** (units=None,type=bool): Detection footprint overlapped with a detection from filter sky 
 
**merge_peak_i** (units=None,type=bool): Peak detected in filter i 
 
**merge_peak_r** (units=None,type=bool): Peak detected in filter r 
 
**merge_peak_z** (units=None,type=bool): Peak detected in filter z 
 
**merge_peak_y** (units=None,type=bool): Peak detected in filter y 
 
**merge_peak_g** (units=None,type=bool): Peak detected in filter g 
 
**merge_peak_u** (units=None,type=bool): Peak detected in filter u 
 
**merge_peak_sky** (units=None,type=bool): Peak detected in filter sky 
 
**deblend_nChild** (units=None,type=int32): Number of children this object has (defaults to 0) 
 
**deblend_deblendedAsPsf** (units=None,type=bool): Deblender thought this source looked like a PSF 
 
**deblend_psfCenter_x** (units=pix,type=float64): If deblended-as-psf, the PSF centroid 
 
**deblend_psfCenter_y** (units=pix,type=float64): If deblended-as-psf, the PSF centroid 
 
**deblend_psf_instFlux** (units=ct,type=float64): If deblended-as-psf, the instrumental PSF flux 
 
**deblend_tooManyPeaks** (units=None,type=bool): Source had too many peaks; only the brightest were included 
 
**deblend_parentTooBig** (units=None,type=bool): Parent footprint covered too many pixels 
 
**deblend_masked** (units=None,type=bool): Parent footprint was predominantly masked 
 
**deblend_skipped** (units=None,type=bool): Deblender skipped this source 
 
**deblend_rampedTemplate** (units=None,type=bool): This source was near an image edge and the deblender used "ramp" edge-handling. 
 
**deblend_patchedTemplate** (units=None,type=bool): This source was near an image edge and the deblender used "patched" edge-handling. 
 
**deblend_hasStrayFlux** (units=None,type=bool): This source was assigned some stray flux 
 
