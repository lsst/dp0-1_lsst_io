.. _Data-Products-DP0-1-schema_reference: 
  
###################################### 
Schema for dp01_dc2_catalogs.reference 
###################################### 
  
**base_Blendedness_abs** (unit = , data type = double): Measure of how much the flux is affected by neighbors: (1 - child_instFlux/parent_instFlux).  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_abs_child_xx** (unit = pixel^2, data type = double): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_abs_child_xy** (unit = pixel^2, data type = double): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_abs_child_yy** (unit = pixel^2, data type = double): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_abs_instFlux** (unit = , data type = double): measure of how instFlux is affected by neighbors: (1 - instFlux.child/instFlux.parent) 
**base_Blendedness_abs_instFlux_child** (unit = count, data type = double): instFlux of the child, measured with a Gaussian weight matched to the child 
**base_Blendedness_abs_instFlux_parent** (unit = count, data type = double): instFlux of the parent, measured with a Gaussian weight matched to the child 
**base_Blendedness_abs_parent_xx** (unit = pixel^2, data type = double): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_abs_parent_xy** (unit = pixel^2, data type = double): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_abs_parent_yy** (unit = pixel^2, data type = double): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the absolute value of the pixels to try to obtain a "de-noised" value.  See section 4.9.11 of Bosch et al. 2018, PASJ, 70, S5 for details. 
**base_Blendedness_flag** (unit = , data type = boolean): General Failure Flag 
**base_Blendedness_flag_noCentroid** (unit = , data type = boolean): Object has no centroid 
**base_Blendedness_flag_noShape** (unit = , data type = boolean): Object has no shape 
**base_Blendedness_old** (unit = , data type = double): Blendedness from dot products: (child.dot(parent)/child.dot(child) - 1) 
**base_Blendedness_raw_child_xx** (unit = pixel^2, data type = double): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
**base_Blendedness_raw_child_xy** (unit = pixel^2, data type = double): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
**base_Blendedness_raw_child_yy** (unit = pixel^2, data type = double): Shape of the child, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
**base_Blendedness_raw_instFlux** (unit = , data type = double): measure of how instFlux is affected by neighbors: (1 - instFlux.child/instFlux.parent) 
**base_Blendedness_raw_instFlux_child** (unit = count, data type = double): instFlux of the child, measured with a Gaussian weight matched to the child 
**base_Blendedness_raw_instFlux_parent** (unit = count, data type = double): instFlux of the parent, measured with a Gaussian weight matched to the child 
**base_Blendedness_raw_parent_xx** (unit = pixel^2, data type = double): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
**base_Blendedness_raw_parent_xy** (unit = pixel^2, data type = double): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
**base_Blendedness_raw_parent_yy** (unit = pixel^2, data type = double): Shape of the parent, measured with a Gaussian weight matched to the child.  Operates on the "raw" pixel values. 
**base_ClassificationExtendedness_flag** (unit = , data type = boolean): Set to 1 for any fatal failure. 
**base_ClassificationExtendedness_value** (unit = , data type = double): Set to 1 for extended sources, 0 for point sources. 
**base_PixelFlags_flag** (unit = , data type = boolean): General failure flag, set if anything went wrong 
**base_PixelFlags_flag_bad** (unit = , data type = boolean): Bad pixel in the Source footprint 
**base_PixelFlags_flag_bright_object** (unit = , data type = boolean): Source footprint includes BRIGHT_OBJECT pixels 
**base_PixelFlags_flag_bright_objectCenter** (unit = , data type = boolean): Source center is close to BRIGHT_OBJECT pixels 
**base_PixelFlags_flag_clipped** (unit = , data type = boolean): Source footprint includes CLIPPED pixels 
**base_PixelFlags_flag_clippedCenter** (unit = , data type = boolean): Source center is close to CLIPPED pixels 
**base_PixelFlags_flag_cr** (unit = , data type = boolean): Cosmic ray in the Source footprint 
**base_PixelFlags_flag_crCenter** (unit = , data type = boolean): Cosmic ray in the Source center 
**base_PixelFlags_flag_edge** (unit = , data type = boolean): Source is outside usable exposure region (masked EDGE or NO_DATA) 
**base_PixelFlags_flag_inexact_psf** (unit = , data type = boolean): Source footprint includes INEXACT_PSF pixels 
**base_PixelFlags_flag_inexact_psfCenter** (unit = , data type = boolean): Source center is close to INEXACT_PSF pixels 
**base_PixelFlags_flag_interpolated** (unit = , data type = boolean): Interpolated pixel in the Source footprint 
**base_PixelFlags_flag_interpolatedCenter** (unit = , data type = boolean): Interpolated pixel in the Source center 
**base_PixelFlags_flag_offimage** (unit = , data type = boolean): Source center is off image 
**base_PixelFlags_flag_saturated** (unit = , data type = boolean): Saturated pixel in the Source footprint 
**base_PixelFlags_flag_saturatedCenter** (unit = , data type = boolean): Saturated pixel in the Source center 
**base_PixelFlags_flag_sensor_edge** (unit = , data type = boolean): Source footprint includes SENSOR_EDGE pixels 
**base_PixelFlags_flag_sensor_edgeCenter** (unit = , data type = boolean): Source center is close to SENSOR_EDGE pixels 
**base_PixelFlags_flag_suspect** (unit = , data type = boolean): Source''s footprint includes suspect pixels 
**base_PixelFlags_flag_suspectCenter** (unit = , data type = boolean): Source''s center is close to suspect pixels 
**base_PsfFlux_apCorr** (unit = , data type = double): aperture correction applied to base_PsfFlux 
**base_PsfFlux_apCorrErr** (unit = , data type = double): standard deviation of aperture correction applied to base_PsfFlux 
**base_PsfFlux_area** (unit = pixel, data type = double): effective area of PSF 
**base_PsfFlux_flag** (unit = , data type = boolean): General Failure Flag 
**base_PsfFlux_flag_apCorr** (unit = , data type = boolean): set if unable to aperture correct base_PsfFlux 
**base_PsfFlux_flag_badCentroid** (unit = , data type = boolean): General Failure Flag 
**base_PsfFlux_flag_edge** (unit = , data type = boolean): object was too close to the edge of the image to use the full PSF model 
**base_PsfFlux_flag_noGoodPixels** (unit = , data type = boolean): not enough non-rejected pixels in data to attempt the fit 
**base_PsfFlux_instFlux** (unit = count, data type = double): instFlux derived from linear least-squares fit of PSF model 
**base_PsfFlux_instFluxErr** (unit = count, data type = double): 1-sigma instFlux uncertainty 
**base_SdssCentroid_flag** (unit = , data type = boolean): General Failure Flag 
**base_SdssCentroid_flag_almostNoSecondDerivative** (unit = , data type = boolean): Almost vanishing second derivative 
**base_SdssCentroid_flag_edge** (unit = , data type = boolean): Object too close to edge 
**base_SdssCentroid_flag_noSecondDerivative** (unit = , data type = boolean): Vanishing second derivative 
**base_SdssCentroid_flag_notAtMaximum** (unit = , data type = boolean): Object is not at a maximum 
**base_SdssCentroid_flag_resetToPeak** (unit = , data type = boolean): set if CentroidChecker reset the centroid 
**base_SdssCentroid_x** (unit = pixel, data type = double): centroid from Sdss Centroid algorithm 
**base_SdssCentroid_xErr** (unit = pixel, data type = double): 1-sigma uncertainty on x position 
**base_SdssCentroid_y** (unit = pixel, data type = double): centroid from Sdss Centroid algorithm 
**base_SdssCentroid_yErr** (unit = pixel, data type = double): 1-sigma uncertainty on y position 
**base_SdssShape_flag** (unit = , data type = boolean): General Failure Flag 
**base_SdssShape_flag_badCentroid** (unit = , data type = boolean): General Failure Flag 
**base_SdssShape_flag_maxIter** (unit = , data type = boolean): Too many iterations in adaptive moments 
**base_SdssShape_flag_psf** (unit = , data type = boolean): Failure in measuring PSF model shape 
**base_SdssShape_flag_shift** (unit = , data type = boolean): centroid shifted by more than the maximum allowed amount 
**base_SdssShape_flag_unweighted** (unit = , data type = boolean): Weighted moments converged to an invalid value; using unweighted moments 
**base_SdssShape_flag_unweightedBad** (unit = , data type = boolean): Both weighted and unweighted moments were invalid 
**base_SdssShape_instFlux** (unit = count, data type = double): elliptical Gaussian adaptive moments 
**base_SdssShape_instFlux_xx_Cov** (unit = count*pixel^2, data type = double): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
**base_SdssShape_instFlux_xy_Cov** (unit = count*pixel^2, data type = double): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
**base_SdssShape_instFlux_yy_Cov** (unit = count*pixel^2, data type = double): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
**base_SdssShape_instFluxErr** (unit = count, data type = double): 1-sigma instFlux uncertainty 
**base_SdssShape_psf_xx** (unit = pixel^2, data type = double): adaptive moments of the PSF model at the object position 
**base_SdssShape_psf_xy** (unit = pixel^2, data type = double): adaptive moments of the PSF model at the object position 
**base_SdssShape_psf_yy** (unit = pixel^2, data type = double): adaptive moments of the PSF model at the object position 
**base_SdssShape_x** (unit = pixel, data type = double): elliptical Gaussian adaptive moments 
**base_SdssShape_xx** (unit = pixel^2, data type = double): elliptical Gaussian adaptive moments 
**base_SdssShape_xxErr** (unit = pixel^2, data type = double): Standard deviation of xx moment 
**base_SdssShape_xy** (unit = pixel^2, data type = double): elliptical Gaussian adaptive moments 
**base_SdssShape_xyErr** (unit = pixel^2, data type = double): Standard deviation of xy moment 
**base_SdssShape_y** (unit = pixel, data type = double): elliptical Gaussian adaptive moments 
**base_SdssShape_yy** (unit = pixel^2, data type = double): elliptical Gaussian adaptive moments 
**base_SdssShape_yyErr** (unit = pixel^2, data type = double): Standard deviation of yy moment 
**coord_dec** (unit = rad, data type = double): position in ra/dec 
**coord_ra** (unit = rad, data type = double): position in ra/dec 
**deblend_deblendedAsPsf** (unit = , data type = boolean): Deblender thought this source looked like a PSF 
**deblend_hasStrayFlux** (unit = , data type = boolean): This source was assigned some stray flux 
**deblend_masked** (unit = , data type = boolean): Parent footprint was predominantly masked 
**deblend_parentTooBig** (unit = , data type = boolean): Parent footprint covered too many pixels 
**deblend_patchedTemplate** (unit = , data type = boolean): This source was near an image edge and the deblender used "patched" edge-handling. 
**deblend_psf_instFlux** (unit = count, data type = double): If deblended-as-psf, the instrumental PSF flux 
**deblend_psfCenter_x** (unit = pixel, data type = double): If deblended-as-psf, the PSF centroid 
**deblend_psfCenter_y** (unit = pixel, data type = double): If deblended-as-psf, the PSF centroid 
**deblend_psfflux** (unit = count, data type = double): If deblended-as-psf, the instrumental PSF flux 
**deblend_rampedTemplate** (unit = , data type = boolean): This source was near an image edge and the deblender used "ramp" edge-handling. 
**deblend_skipped** (unit = , data type = boolean): Deblender skipped this source 
**deblend_tooManyPeaks** (unit = , data type = boolean): Source had too many peaks; only the brightest were included 
**ext_shapeHSM_HsmPsfMoments_flag** (unit = , data type = boolean): general failure flag, set if anything went wrong 
**ext_shapeHSM_HsmPsfMoments_flag_badCentroid** (unit = , data type = boolean): General Failure Flag 
**ext_shapeHSM_HsmPsfMoments_flag_no_pixels** (unit = , data type = boolean): no pixels to measure 
**ext_shapeHSM_HsmPsfMoments_flag_not_contained** (unit = , data type = boolean): center not contained in footprint bounding box 
**ext_shapeHSM_HsmPsfMoments_flag_parent_source** (unit = , data type = boolean): parent source, ignored 
**ext_shapeHSM_HsmPsfMoments_x** (unit = pixel, data type = double): HSM Centroid 
**ext_shapeHSM_HsmPsfMoments_xx** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmPsfMoments_xy** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmPsfMoments_y** (unit = pixel, data type = double): HSM Centroid 
**ext_shapeHSM_HsmPsfMoments_yy** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmShapeRegauss_e1** (unit = , data type = double): PSF-corrected shear using Hirata & Seljak (2003) ''regaussianization 
**ext_shapeHSM_HsmShapeRegauss_e2** (unit = , data type = double): PSF-corrected shear using Hirata & Seljak (2003) ''regaussianization 
**ext_shapeHSM_HsmShapeRegauss_flag** (unit = , data type = boolean): general failure flag, set if anything went wrong 
**ext_shapeHSM_HsmShapeRegauss_flag_badCentroid** (unit = , data type = boolean): General Failure Flag 
**ext_shapeHSM_HsmShapeRegauss_flag_galsim** (unit = , data type = boolean): GalSim failure 
**ext_shapeHSM_HsmShapeRegauss_flag_no_pixels** (unit = , data type = boolean): no pixels to measure 
**ext_shapeHSM_HsmShapeRegauss_flag_not_contained** (unit = , data type = boolean): center not contained in footprint bounding box 
**ext_shapeHSM_HsmShapeRegauss_flag_parent_source** (unit = , data type = boolean): parent source, ignored 
**ext_shapeHSM_HsmShapeRegauss_resolution** (unit = , data type = double): resolution factor (0=unresolved, 1=resolved) 
**ext_shapeHSM_HsmShapeRegauss_sigma** (unit = , data type = double): PSF-corrected shear using Hirata & Seljak (2003) ''regaussianization 
**ext_shapeHSM_HsmSourceMoments_flag** (unit = , data type = boolean): general failure flag, set if anything went wrong 
**ext_shapeHSM_HsmSourceMoments_flag_badCentroid** (unit = , data type = boolean): General Failure Flag 
**ext_shapeHSM_HsmSourceMoments_flag_no_pixels** (unit = , data type = boolean): no pixels to measure 
**ext_shapeHSM_HsmSourceMoments_flag_not_contained** (unit = , data type = boolean): center not contained in footprint bounding box 
**ext_shapeHSM_HsmSourceMoments_flag_parent_source** (unit = , data type = boolean): parent source, ignored 
**ext_shapeHSM_HsmSourceMoments_x** (unit = pixel, data type = double): HSM Centroid 
**ext_shapeHSM_HsmSourceMoments_xx** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmSourceMoments_xy** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmSourceMoments_y** (unit = pixel, data type = double): HSM Centroid 
**ext_shapeHSM_HsmSourceMoments_yy** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmSourceMomentsRound_flag** (unit = , data type = boolean): general failure flag, set if anything went wrong 
**ext_shapeHSM_HsmSourceMomentsRound_flag_badCentroid** (unit = , data type = boolean): General Failure Flag 
**ext_shapeHSM_HsmSourceMomentsRound_flag_no_pixels** (unit = , data type = boolean): no pixels to measure 
**ext_shapeHSM_HsmSourceMomentsRound_flag_not_contained** (unit = , data type = boolean): center not contained in footprint bounding box 
**ext_shapeHSM_HsmSourceMomentsRound_flag_parent_source** (unit = , data type = boolean): parent source, ignored 
**ext_shapeHSM_HsmSourceMomentsRound_Flux** (unit = , data type = double): HSM flux 
**ext_shapeHSM_HsmSourceMomentsRound_x** (unit = pixel, data type = double): HSM Centroid 
**ext_shapeHSM_HsmSourceMomentsRound_xx** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmSourceMomentsRound_xy** (unit = pixel^2, data type = double): HSM moments 
**ext_shapeHSM_HsmSourceMomentsRound_y** (unit = pixel, data type = double): HSM Centroid 
**ext_shapeHSM_HsmSourceMomentsRound_yy** (unit = pixel^2, data type = double): HSM moments 
**good** (unit = , data type = boolean): True if the source has no flagged pixels. 
**modelfit_CModel_apCorr** (unit = , data type = double): aperture correction applied to modelfit_CModel 
**modelfit_CModel_apCorrErr** (unit = , data type = double): standard deviation of aperture correction applied to modelfit_CModel 
**modelfit_CModel_dev_apCorr** (unit = , data type = double): aperture correction applied to modelfit_CModel_dev 
**modelfit_CModel_dev_apCorrErr** (unit = , data type = double): standard deviation of aperture correction applied to modelfit_CModel_dev 
**modelfit_CModel_dev_ellipse_xx** (unit = pixel^2, data type = double): half-light ellipse of the de Vaucouleur fit 
**modelfit_CModel_dev_ellipse_xy** (unit = pixel^2, data type = double): half-light ellipse of the de Vaucouleur fit 
**modelfit_CModel_dev_ellipse_yy** (unit = pixel^2, data type = double): half-light ellipse of the de Vaucouleur fit 
**modelfit_CModel_dev_fixed_0** (unit = , data type = double): fixed parameters for the de Vaucouleur fit 
**modelfit_CModel_dev_fixed_1** (unit = , data type = double): fixed parameters for the de Vaucouleur fit 
**modelfit_CModel_dev_flag** (unit = , data type = boolean): flag set when the flux for the de Vaucouleur flux failed 
**modelfit_CModel_dev_flag_apCorr** (unit = , data type = boolean): set if unable to aperture correct modelfit_CModel_dev 
**modelfit_CModel_dev_flag_maxIter** (unit = , data type = boolean): the optimizer hit the maximum number of iterations and did not converge 
**modelfit_CModel_dev_flag_numericError** (unit = , data type = boolean): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
**modelfit_CModel_dev_flag_trSmall** (unit = , data type = boolean): the optimizer converged because the trust radius became too small; this is a less-secure result than when the gradient is below the threshold, but usually not a problem 
**modelfit_CModel_dev_flux_inner** (unit = count, data type = double): flux from the de Vaucouleur fit region, with no extrapolation 
**modelfit_CModel_dev_instFlux** (unit = count, data type = double): flux from the de Vaucouleur fit 
**modelfit_CModel_dev_instFluxErr** (unit = count, data type = double): flux uncertainty from the de Vaucouleur fit 
**modelfit_CModel_dev_nIter** (unit = , data type = int): Number of total iterations in stage 
**modelfit_CModel_dev_nonlinear_0** (unit = , data type = double): nonlinear parameters for the de Vaucouleur fit 
**modelfit_CModel_dev_nonlinear_1** (unit = , data type = double): nonlinear parameters for the de Vaucouleur fit 
**modelfit_CModel_dev_nonlinear_2** (unit = , data type = double): nonlinear parameters for the de Vaucouleur fit 
**modelfit_CModel_dev_objective** (unit = , data type = double): -ln(likelihood*prior) at best-fit point for the de Vaucouleur fit 
**modelfit_CModel_dev_time** (unit = second, data type = double): Time spent in stage 
**modelfit_CModel_ellipse_xx** (unit = pixel^2, data type = double): fracDev-weighted average of exp.ellipse and dev.ellipse 
**modelfit_CModel_ellipse_xy** (unit = pixel^2, data type = double): fracDev-weighted average of exp.ellipse and dev.ellipse 
**modelfit_CModel_ellipse_yy** (unit = pixel^2, data type = double): fracDev-weighted average of exp.ellipse and dev.ellipse 
**modelfit_CModel_exp_apCorr** (unit = , data type = double): aperture correction applied to modelfit_CModel_exp 
**modelfit_CModel_exp_apCorrErr** (unit = , data type = double): standard deviation of aperture correction applied to modelfit_CModel_exp 
**modelfit_CModel_exp_ellipse_xx** (unit = pixel^2, data type = double): half-light ellipse of the exponential fit 
**modelfit_CModel_exp_ellipse_xy** (unit = pixel^2, data type = double): half-light ellipse of the exponential fit 
**modelfit_CModel_exp_ellipse_yy** (unit = pixel^2, data type = double): half-light ellipse of the exponential fit 
**modelfit_CModel_exp_fixed_0** (unit = , data type = double): fixed parameters for the exponential fit 
**modelfit_CModel_exp_fixed_1** (unit = , data type = double): fixed parameters for the exponential fit 
**modelfit_CModel_exp_flag** (unit = , data type = boolean): flag set when the flux for the exponential flux failed 
**modelfit_CModel_exp_flag_apCorr** (unit = , data type = boolean): set if unable to aperture correct modelfit_CModel_exp 
**modelfit_CModel_exp_flag_maxIter** (unit = , data type = boolean): the optimizer hit the maximum number of iterations and did not converge 
**modelfit_CModel_exp_flag_numericError** (unit = , data type = boolean): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
**modelfit_CModel_exp_flag_trSmall** (unit = , data type = boolean): the optimizer converged because the trust radius became too small; this is a less-secure result than when the gradient is below the threshold, but usually not a problem 
**modelfit_CModel_exp_flux_inner** (unit = count, data type = double): flux from the exponential fit region, with no extrapolation 
**modelfit_CModel_exp_instFlux** (unit = count, data type = double): flux from the exponential fit 
**modelfit_CModel_exp_instFluxErr** (unit = count, data type = double): flux uncertainty from the exponential fit 
**modelfit_CModel_exp_nIter** (unit = , data type = int): Number of total iterations in stage 
**modelfit_CModel_exp_nonlinear_0** (unit = , data type = double): nonlinear parameters for the exponential fit 
**modelfit_CModel_exp_nonlinear_1** (unit = , data type = double): nonlinear parameters for the exponential fit 
**modelfit_CModel_exp_nonlinear_2** (unit = , data type = double): nonlinear parameters for the exponential fit 
**modelfit_CModel_exp_objective** (unit = , data type = double): -ln(likelihood*prior) at best-fit point for the exponential fit 
**modelfit_CModel_exp_time** (unit = second, data type = double): Time spent in stage 
**modelfit_CModel_flag** (unit = , data type = boolean): flag set if the final cmodel fit (or any previous fit) failed 
**modelfit_CModel_flag_apCorr** (unit = , data type = boolean): set if unable to aperture correct modelfit_CModel 
**modelfit_CModel_flag_badCentroid** (unit = , data type = boolean): input centroid was not within the fit region (probably because it''s not within the Footprint) 
**modelfit_CModel_flag_noShape** (unit = , data type = boolean): the shape slot needed to initialize the parameters failed or was not defined 
**modelfit_CModel_flag_noShapeletPsf** (unit = , data type = boolean): the multishapelet fit to the PSF model did not succeed 
**modelfit_CModel_flag_region_maxArea** (unit = , data type = boolean): number of pixels in fit region exceeded the region.maxArea value 
**modelfit_CModel_flag_region_maxBadPixelFraction** (unit = , data type = boolean): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
**modelfit_CModel_flags_region_usedFootprintArea** (unit = , data type = boolean): the pixel region for the initial fit was defined by the area of the Footprint 
**modelfit_CModel_flags_region_usedInitialEllipseMax** (unit = , data type = boolean): the pixel region for the final fit was set to the upper bound defined by the initial fit 
**modelfit_CModel_flags_region_usedInitialEllipseMin** (unit = , data type = boolean): the pixel region for the final fit was set to the lower bound defined by the initial fit 
**modelfit_CModel_flags_region_usedPsfArea** (unit = , data type = boolean): the pixel region for the initial fit was set to a fixed factor of the PSF area 
**modelfit_CModel_flags_smallShape** (unit = , data type = boolean): initial parameter guess resulted in negative radius; used minimum of 0.100000 pixels instead. 
**modelfit_CModel_fracDev** (unit = , data type = double): fraction of flux in de Vaucouleur component 
**modelfit_CModel_initial_apCorr** (unit = , data type = double): aperture correction applied to modelfit_CModel_initial 
**modelfit_CModel_initial_apCorrErr** (unit = , data type = double): standard deviation of aperture correction applied to modelfit_CModel_initial 
**modelfit_CModel_initial_ellipse_xx** (unit = pixel^2, data type = double): half-light ellipse of the initial fit 
**modelfit_CModel_initial_ellipse_xy** (unit = pixel^2, data type = double): half-light ellipse of the initial fit 
**modelfit_CModel_initial_ellipse_yy** (unit = pixel^2, data type = double): half-light ellipse of the initial fit 
**modelfit_CModel_initial_fixed_0** (unit = , data type = double): fixed parameters for the initial fit 
**modelfit_CModel_initial_fixed_1** (unit = , data type = double): fixed parameters for the initial fit 
**modelfit_CModel_initial_flag** (unit = , data type = boolean): flag set when the flux for the initial flux failed 
**modelfit_CModel_initial_flag_apCorr** (unit = , data type = boolean): set if unable to aperture correct modelfit_CModel_initial 
**modelfit_CModel_initial_flag_maxIter** (unit = , data type = boolean): the optimizer hit the maximum number of iterations and did not converge 
**modelfit_CModel_initial_flag_numericError** (unit = , data type = boolean): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
**modelfit_CModel_initial_flag_trSmall** (unit = , data type = boolean): the optimizer converged because the trust radius became too small; this is a less-secure result than when the gradient is below the threshold, but usually not a problem 
**modelfit_CModel_initial_flux_inner** (unit = count, data type = double): flux from the initial fit region, with no extrapolation 
**modelfit_CModel_initial_instFlux** (unit = count, data type = double): flux from the initial fit 
**modelfit_CModel_initial_instFluxErr** (unit = count, data type = double): flux uncertainty from the initial fit 
**modelfit_CModel_initial_nIter** (unit = , data type = int): Number of total iterations in stage 
**modelfit_CModel_initial_nonlinear_0** (unit = , data type = double): nonlinear parameters for the initial fit 
**modelfit_CModel_initial_nonlinear_1** (unit = , data type = double): nonlinear parameters for the initial fit 
**modelfit_CModel_initial_nonlinear_2** (unit = , data type = double): nonlinear parameters for the initial fit 
**modelfit_CModel_initial_objective** (unit = , data type = double): -ln(likelihood*prior) at best-fit point for the initial fit 
**modelfit_CModel_initial_time** (unit = second, data type = double): Time spent in stage 
**modelfit_CModel_instFlux** (unit = count, data type = double): flux from the final cmodel fit 
**modelfit_CModel_instFlux_inner** (unit = count, data type = double): flux within the fit region, with no extrapolation 
**modelfit_CModel_instFluxErr** (unit = count, data type = double): flux uncertainty from the final cmodel fit 
**modelfit_CModel_objective** (unit = , data type = double): -ln(likelihood) (chi^2) in cmodel fit 
**modelfit_CModel_region_final_ellipse_xx** (unit = pixel^2, data type = double): ellipse used to set the pixel region for the final fit (before applying bad pixel mask) 
**modelfit_CModel_region_final_ellipse_xy** (unit = pixel^2, data type = double): ellipse used to set the pixel region for the final fit (before applying bad pixel mask) 
**modelfit_CModel_region_final_ellipse_yy** (unit = pixel^2, data type = double): ellipse used to set the pixel region for the final fit (before applying bad pixel mask) 
**modelfit_CModel_region_initial_ellipse_xx** (unit = pixel^2, data type = double): ellipse used to set the pixel region for the initial fit (before applying bad pixel mask) 
**modelfit_CModel_region_initial_ellipse_xy** (unit = pixel^2, data type = double): ellipse used to set the pixel region for the initial fit (before applying bad pixel mask) 
**modelfit_CModel_region_initial_ellipse_yy** (unit = pixel^2, data type = double): ellipse used to set the pixel region for the initial fit (before applying bad pixel mask) 
**objectId** (unit = , data type = long): Unique id. 
