.. _Data-Products-DP0-1-schema_forced_photometry: 
  
############################################## 
Schema for dp01_dc2_catalogs.forced_photometry 
############################################## 
  
**coord_dec** (unit=rad, type=double): position in ra/dec 
 
**coord_ra** (unit=rad, type=double): position in ra/dec 
 
**[f]_base_ClassificationExtendedness_fla** (type=boolean): Set to 1 for any fatal failure. 
 
**[f]_base_ClassificationExtendedness_valu** (type=double): Set to 1 for extended sources, 0 for point sources. 
 
**[f]_base_InputCount_fla** (type=boolean): Set for any fatal failure 
 
**[f]_base_InputCount_flag_badCentroi** (type=boolean): General Failure Flag 
 
**[f]_base_InputCount_flag_noInput** (type=boolean): No coadd inputs available 
 
**[f]_base_InputCount_valu** (type=int): Number of images contributing at center, not including anyclipping 
 
**[f]_base_LocalBackground_fla** (type=boolean): General Failure Flag 
 
**[f]_base_LocalBackground_flag_badCentroi** (type=boolean): General Failure Flag 
 
**[f]_base_LocalBackground_flag_noGoodPixel** (type=boolean): no good pixels in the annulus 
 
**[f]_base_LocalBackground_flag_noPs** (type=boolean): no PSF provided 
 
**[f]_base_LocalBackground_instFlu** (unit=count, type=double): background in annulus around source 
 
**[f]_base_LocalBackground_instFluxEr** (unit=count, type=double): 1-sigma instFlux uncertainty 
 
**[f]_base_PixelFlags_fla** (type=boolean): General failure flag, set if anything went wrong 
 
**[f]_base_PixelFlags_flag_ba** (type=boolean): Bad pixel in the Source footprint 
 
**[f]_base_PixelFlags_flag_bright_objec** (type=boolean): Source footprint includes BRIGHT_OBJECT pixels 
 
**[f]_base_PixelFlags_flag_bright_objectCente** (type=boolean): Source center is close to BRIGHT_OBJECT pixels 
 
**[f]_base_PixelFlags_flag_clippe** (type=boolean): Source footprint includes CLIPPED pixels 
 
**[f]_base_PixelFlags_flag_clippedCente** (type=boolean): Source center is close to CLIPPED pixels 
 
**[f]_base_PixelFlags_flag_c** (type=boolean): Cosmic ray in the Source footprint 
 
**[f]_base_PixelFlags_flag_crCente** (type=boolean): Cosmic ray in the Source center 
 
**[f]_base_PixelFlags_flag_edg** (type=boolean): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**[f]_base_PixelFlags_flag_inexact_ps** (type=boolean): Source footprint includes INEXACT_PSF pixels 
 
**[f]_base_PixelFlags_flag_inexact_psfCente** (type=boolean): Source center is close to INEXACT_PSF pixels 
 
**[f]_base_PixelFlags_flag_interpolate** (type=boolean): Interpolated pixel in the Source footprint 
 
**[f]_base_PixelFlags_flag_interpolatedCente** (type=boolean): Interpolated pixel in the Source center 
 
**[f]_base_PixelFlags_flag_offimag** (type=boolean): Source center is off image 
 
**[f]_base_PixelFlags_flag_rejecte** (type=boolean): Source footprint includes REJECTED pixels 
 
**[f]_base_PixelFlags_flag_rejectedCente** (type=boolean): Source center is close to REJECTED pixels 
 
**[f]_base_PixelFlags_flag_saturate** (type=boolean): Saturated pixel in the Source footprint 
 
**[f]_base_PixelFlags_flag_saturatedCente** (type=boolean): Saturated pixel in the Source center 
 
**[f]_base_PixelFlags_flag_sensor_edg** (type=boolean): Source footprint includes SENSOR_EDGE pixels 
 
**[f]_base_PixelFlags_flag_sensor_edgeCente** (type=boolean): Source center is close to SENSOR_EDGE pixels 
 
**[f]_base_PixelFlags_flag_suspec** (type=boolean): Source''s footprint includes suspect pixels 
 
**[f]_base_PixelFlags_flag_suspectCente** (type=boolean): Source''s center is close to suspect pixels 
 
**[f]_base_PsfFlux_apCor** (type=double): aperture correction applied to base_PsfFlux 
 
**[f]_base_PsfFlux_apCorrEr** (type=double): standard deviation of aperture correction applied to base_PsfFlux 
 
**[f]_base_PsfFlux_are** (unit=pixel, type=double): effective area of PSF 
 
**[f]_base_PsfFlux_fla** (type=boolean): General Failure Flag 
 
**[f]_base_PsfFlux_flag_apCor** (type=boolean): set if unable to aperture correct base_PsfFlux 
 
**[f]_base_PsfFlux_flag_badCentroi** (type=boolean): General Failure Flag 
 
**[f]_base_PsfFlux_flag_edg** (type=boolean): object was too close to the edge of the image to use the full PSF model 
 
**[f]_base_PsfFlux_flag_noGoodPixel** (type=boolean): not enough non-rejected pixels in data to attempt the fit 
 
**[f]_base_PsfFlux_instFlu** (unit=count, type=double): instFlux derived from linear least-squares fit of PSF model 
 
**[f]_base_PsfFlux_instFluxEr** (unit=count, type=double): 1-sigma instFlux uncertainty 
 
**[f]_base_SdssCentroid_fla** (type=boolean): General Failure Flag 
 
**[f]_base_SdssCentroid_flag_almostNoSecondDerivativ** (type=boolean): Almost vanishing second derivative 
 
**[f]_base_SdssCentroid_flag_badInitialCentroi** (type=boolean): whether the reference centroid is marked as bad 
 
**[f]_base_SdssCentroid_flag_edg** (type=boolean): Object too close to edge 
 
**[f]_base_SdssCentroid_flag_noSecondDerivativ** (type=boolean): Vanishing second derivative 
 
**[f]_base_SdssCentroid_flag_notAtMaximu** (type=boolean): Object is not at a maximum 
 
**[f]_base_SdssCentroid_flag_resetToPea** (type=boolean): set if CentroidChecker reset the centroid 
 
**[f]_base_SdssCentroid_** (unit=pixel, type=double): centroid from Sdss Centroid algorithm 
 
**[f]_base_SdssCentroid_xEr** (unit=pixel, type=double): 1-sigma uncertainty on x position 
 
**[f]_base_SdssCentroid_** (unit=pixel, type=double): centroid from Sdss Centroid algorithm 
 
**[f]_base_SdssCentroid_yEr** (unit=pixel, type=double): 1-sigma uncertainty on y position 
 
**[f]_base_SdssShape_fla** (type=boolean): General Failure Flag 
 
**[f]_base_SdssShape_flag_badCentroi** (type=boolean): General Failure Flag 
 
**[f]_base_SdssShape_flag_maxIte** (type=boolean): Too many iterations in adaptive moments 
 
**[f]_base_SdssShape_flag_ps** (type=boolean): Failure in measuring PSF model shape 
 
**[f]_base_SdssShape_flag_shif** (type=boolean): centroid shifted by more than the maximum allowed amount 
 
**[f]_base_SdssShape_flag_unweighte** (type=boolean): Weighted moments converged to an invalid value; using unweighted moments 
 
**[f]_base_SdssShape_flag_unweightedBa** (type=boolean): Both weighted and unweighted moments were invalid 
 
**[f]_base_SdssShape_instFlu** (unit=count, type=double): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_instFlux_xx_Co** (unit=count*pixel^2, type=double): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**[f]_base_SdssShape_instFlux_xy_Co** (unit=count*pixel^2, type=double): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**[f]_base_SdssShape_instFlux_yy_Co** (unit=count*pixel^2, type=double): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**[f]_base_SdssShape_instFluxEr** (unit=count, type=double): 1-sigma instFlux uncertainty 
 
**[f]_base_SdssShape_psf_x** (unit=pixel^2, type=double): adaptive moments of the PSF model at the object position 
 
**[f]_base_SdssShape_psf_x** (unit=pixel^2, type=double): adaptive moments of the PSF model at the object position 
 
**[f]_base_SdssShape_psf_y** (unit=pixel^2, type=double): adaptive moments of the PSF model at the object position 
 
**[f]_base_SdssShape_** (unit=pixel, type=double): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_x** (unit=pixel^2, type=double): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_xxEr** (unit=pixel^2, type=double): Standard deviation of xx moment 
 
**[f]_base_SdssShape_x** (unit=pixel^2, type=double): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_xyEr** (unit=pixel^2, type=double): Standard deviation of xy moment 
 
**[f]_base_SdssShape_** (unit=pixel, type=double): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_y** (unit=pixel^2, type=double): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_yyEr** (unit=pixel^2, type=double): Standard deviation of yy moment 
 
**[f]_base_Variance_fla** (type=boolean): Set for any fatal failure 
 
**[f]_base_Variance_flag_badCentroi** (type=boolean): General Failure Flag 
 
**[f]_base_Variance_flag_emptyFootprin** (type=boolean): Set to True when the footprint has no usable pixels 
 
**[f]_base_Variance_valu** (type=double): Variance at object position 
 
**[f]_goo** (type=boolean): True if the source has no flagged pixels. 
 
**[f]_modelfit_CModel_apCor** (type=double): aperture correction applied to modelfit_CModel 
 
**[f]_modelfit_CModel_apCorrEr** (type=double): standard deviation of aperture correction applied to modelfit_CModel 
 
**[f]_modelfit_CModel_dev_apCor** (type=double): aperture correction applied to modelfit_CModel_dev 
 
**[f]_modelfit_CModel_dev_apCorrEr** (type=double): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**[f]_modelfit_CModel_dev_fla** (type=boolean): flag set when the flux for the de Vaucouleur flux failed 
 
**[f]_modelfit_CModel_dev_flag_apCor** (type=boolean): set if unable to aperture correct modelfit_CModel_dev 
 
**[f]_modelfit_CModel_dev_flag_badReferenc** (type=boolean): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_dev_flag_numericErro** (type=boolean): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**[f]_modelfit_CModel_dev_flux_inne** (unit=count, type=double): flux from the de Vaucouleur fit region, with no extrapolation 
 
**[f]_modelfit_CModel_dev_instFlu** (unit=count, type=double): flux from the de Vaucouleur fit 
 
**[f]_modelfit_CModel_dev_instFluxEr** (unit=count, type=double): flux uncertainty from the de Vaucouleur fit 
 
**[f]_modelfit_CModel_exp_apCor** (type=double): aperture correction applied to modelfit_CModel_exp 
 
**[f]_modelfit_CModel_exp_apCorrEr** (type=double): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**[f]_modelfit_CModel_exp_fla** (type=boolean): flag set when the flux for the exponential flux failed 
 
**[f]_modelfit_CModel_exp_flag_apCor** (type=boolean): set if unable to aperture correct modelfit_CModel_exp 
 
**[f]_modelfit_CModel_exp_flag_badReferenc** (type=boolean): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_exp_flag_numericErro** (type=boolean): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**[f]_modelfit_CModel_exp_flux_inne** (unit=count, type=double): flux from the exponential fit region, with no extrapolation 
 
**[f]_modelfit_CModel_exp_instFlu** (unit=count, type=double): flux from the exponential fit 
 
**[f]_modelfit_CModel_exp_instFluxEr** (unit=count, type=double): flux uncertainty from the exponential fit 
 
**[f]_modelfit_CModel_fla** (type=boolean): flag set if the final cmodel fit (or any previous fit) failed 
 
**[f]_modelfit_CModel_flag_apCor** (type=boolean): set if unable to aperture correct modelfit_CModel 
 
**[f]_modelfit_CModel_flag_badCentroi** (type=boolean): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**[f]_modelfit_CModel_flag_badReferenc** (type=boolean): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_flag_noShapeletPs** (type=boolean): the multishapelet fit to the PSF model did not succeed 
 
**[f]_modelfit_CModel_flag_region_maxAre** (type=boolean): number of pixels in fit region exceeded the region.maxArea value 
 
**[f]_modelfit_CModel_flag_region_maxBadPixelFractio** (type=boolean): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**[f]_modelfit_CModel_fracDe** (type=double): fraction of flux in de Vaucouleur component 
 
**[f]_modelfit_CModel_initial_apCor** (type=double): aperture correction applied to modelfit_CModel_initial 
 
**[f]_modelfit_CModel_initial_apCorrEr** (type=double): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**[f]_modelfit_CModel_initial_fla** (type=boolean): flag set when the flux for the initial flux failed 
 
**[f]_modelfit_CModel_initial_flag_apCor** (type=boolean): set if unable to aperture correct modelfit_CModel_initial 
 
**[f]_modelfit_CModel_initial_flag_badReferenc** (type=boolean): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_initial_flag_numericErro** (type=boolean): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**[f]_modelfit_CModel_initial_flux_inne** (unit=count, type=double): flux from the initial fit region, with no extrapolation 
 
**[f]_modelfit_CModel_initial_instFlu** (unit=count, type=double): flux from the initial fit 
 
**[f]_modelfit_CModel_initial_instFluxEr** (unit=count, type=double): flux uncertainty from the initial fit 
 
**[f]_modelfit_CModel_instFlu** (unit=count, type=double): flux from the final cmodel fit 
 
**[f]_modelfit_CModel_instFlux_inne** (unit=count, type=double): flux within the fit region, with no extrapolation 
 
**[f]_modelfit_CModel_instFluxEr** (unit=count, type=double): flux uncertainty from the final cmodel fit 
 
**[f]_modelfit_CModel_objectiv** (type=double): -ln(likelihood) (chi^2) in cmodel fit 
 
**objectId** (type=long): Unique id. 
 
