.. _Data-Products-DP0-1-schema_forced_photometry: 
  
############################################## 
Schema for dp01_dc2_catalogs.forced_photometry 
############################################## 
  
**coord_dec** (unit=rad, type=double): position in ra/dec 
 
**coord_ra** (unit=rad, type=double): position in ra/dec 

**objectId** (type=long): Unique id. 
 
**[f]_base_ClassificationExtendedness_flag** (type=boolean, min=0, max=1): Set to 1 for any fatal failure. 
 
**[f]_base_ClassificationExtendedness_value** (type=double, min=0.00E+00, max=1.00E+00): Set to 1 for extended sources, 0 for point sources. 
 
**[f]_base_InputCount_flag** (type=boolean, min=0, max=0): Set for any fatal failure 
 
**[f]_base_InputCount_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_InputCount_flag_noInputs** (type=boolean, min=0, max=0): No coadd inputs available 
 
**[f]_base_InputCount_value** (type=int, min=4.00E+01, max=5.20E+01): Number of images contributing at center, not including anyclipping 
 
**[f]_base_LocalBackground_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_LocalBackground_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_LocalBackground_flag_noGoodPixels** (type=boolean, min=0, max=0): no good pixels in the annulus 
 
**[f]_base_LocalBackground_flag_noPsf** (type=boolean, min=0, max=0): no PSF provided 
 
**[f]_base_LocalBackground_instFlux** (unit=count, type=double, min=-1.90E-03, max=1.56E-01): background in annulus around source 
 
**[f]_base_LocalBackground_instFluxErr** (unit=count, type=double, min=4.59E-18, max=8.22E-02): 1-sigma instFlux uncertainty 
 
**[f]_base_PixelFlags_flag** (type=boolean, min=0, max=0): General failure flag, set if anything went wrong 
 
**[f]_base_PixelFlags_flag_bad** (type=boolean, min=0, max=0): Bad pixel in the Source footprint 
 
**[f]_base_PixelFlags_flag_bright_object** (type=boolean, min=0, max=0): Source footprint includes BRIGHT_OBJECT pixels 
 
**[f]_base_PixelFlags_flag_bright_objectCenter** (type=boolean, min=0, max=0): Source center is close to BRIGHT_OBJECT pixels 
 
**[f]_base_PixelFlags_flag_clipped** (type=boolean, min=0, max=0): Source footprint includes CLIPPED pixels 
 
**[f]_base_PixelFlags_flag_clippedCenter** (type=boolean, min=0, max=0): Source center is close to CLIPPED pixels 
 
**[f]_base_PixelFlags_flag_cr** (type=boolean, min=0, max=1): Cosmic ray in the Source footprint 
 
**[f]_base_PixelFlags_flag_crCenter** (type=boolean, min=0, max=0): Cosmic ray in the Source center 
 
**[f]_base_PixelFlags_flag_edge** (type=boolean, min=0, max=1): Source is outside usable exposure region (masked EDGE or NO_DATA) 
 
**[f]_base_PixelFlags_flag_inexact_psf** (type=boolean, min=0, max=1): Source footprint includes INEXACT_PSF pixels 
 
**[f]_base_PixelFlags_flag_inexact_psfCenter** (type=boolean, min=0, max=1): Source center is close to INEXACT_PSF pixels 
 
**[f]_base_PixelFlags_flag_interpolated** (type=boolean, min=0, max=1): Interpolated pixel in the Source footprint 
 
**[f]_base_PixelFlags_flag_interpolatedCenter** (type=boolean, min=0, max=1): Interpolated pixel in the Source center 
 
**[f]_base_PixelFlags_flag_offimage** (type=boolean, min=0, max=0): Source center is off image 
 
**[f]_base_PixelFlags_flag_rejected** (type=boolean, min=0, max=1): Source footprint includes REJECTED pixels 
 
**[f]_base_PixelFlags_flag_rejectedCenter** (type=boolean, min=0, max=1): Source center is close to REJECTED pixels 
 
**[f]_base_PixelFlags_flag_saturated** (type=boolean, min=0, max=1): Saturated pixel in the Source footprint 
 
**[f]_base_PixelFlags_flag_saturatedCenter** (type=boolean, min=0, max=1): Saturated pixel in the Source center 
 
**[f]_base_PixelFlags_flag_sensor_edge** (type=boolean, min=0, max=1): Source footprint includes SENSOR_EDGE pixels 
 
**[f]_base_PixelFlags_flag_sensor_edgeCenter** (type=boolean, min=0, max=1): Source center is close to SENSOR_EDGE pixels 
 
**[f]_base_PixelFlags_flag_suspect** (type=boolean, min=0, max=0): Source''s footprint includes suspect pixels 
 
**[f]_base_PixelFlags_flag_suspectCenter** (type=boolean, min=0, max=0): Source''s center is close to suspect pixels 
 
**[f]_base_PsfFlux_apCorr** (type=double, min=9.93E-01, max=9.95E-01): aperture correction applied to base_PsfFlux 
 
**[f]_base_PsfFlux_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to base_PsfFlux 
 
**[f]_base_PsfFlux_area** (unit=pixel, type=double, min=4.97E+01, max=5.43E+01): effective area of PSF 
 
**[f]_base_PsfFlux_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_PsfFlux_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct base_PsfFlux 
 
**[f]_base_PsfFlux_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_PsfFlux_flag_edge** (type=boolean, min=0, max=0): object was too close to the edge of the image to use the full PSF model 
 
**[f]_base_PsfFlux_flag_noGoodPixels** (type=boolean, min=0, max=0): not enough non-rejected pixels in data to attempt the fit 
 
**[f]_base_PsfFlux_instFlux** (unit=count, type=double, min=-1.97E-01, max=2.25E+04): instFlux derived from linear least-squares fit of PSF model 
 
**[f]_base_PsfFlux_instFluxErr** (unit=count, type=double, min=1.80E-01, max=4.42E+00): 1-sigma instFlux uncertainty 
 
**[f]_base_SdssCentroid_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_SdssCentroid_flag_almostNoSecondDerivative** (type=boolean, min=0, max=1): Almost vanishing second derivative 
 
**[f]_base_SdssCentroid_flag_badInitialCentroid** (type=boolean, min=0, max=1): whether the reference centroid is marked as bad 
 
**[f]_base_SdssCentroid_flag_edge** (type=boolean, min=0, max=1): Object too close to edge 
 
**[f]_base_SdssCentroid_flag_noSecondDerivative** (type=boolean, min=0, max=0): Vanishing second derivative 
 
**[f]_base_SdssCentroid_flag_notAtMaximum** (type=boolean, min=0, max=1): Object is not at a maximum 
 
**[f]_base_SdssCentroid_flag_resetToPeak** (type=boolean, min=0, max=1): set if CentroidChecker reset the centroid 
 
**[f]_base_SdssCentroid_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): centroid from Sdss Centroid algorithm 
 
**[f]_base_SdssCentroid_xErr** (unit=pixel, type=double, min=6.13E-04, max=2.74E+04): 1-sigma uncertainty on x position 
 
**[f]_base_SdssCentroid_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): centroid from Sdss Centroid algorithm 
 
**[f]_base_SdssCentroid_yErr** (unit=pixel, type=double, min=5.79E-04, max=3.47E+03): 1-sigma uncertainty on y position 
 
**[f]_base_SdssShape_flag** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_SdssShape_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_SdssShape_flag_maxIter** (type=boolean, min=0, max=1): Too many iterations in adaptive moments 
 
**[f]_base_SdssShape_flag_psf** (type=boolean, min=0, max=0): Failure in measuring PSF model shape 
 
**[f]_base_SdssShape_flag_shift** (type=boolean, min=0, max=1): centroid shifted by more than the maximum allowed amount 
 
**[f]_base_SdssShape_flag_unweighted** (type=boolean, min=0, max=1): Weighted moments converged to an invalid value; using unweighted moments 
 
**[f]_base_SdssShape_flag_unweightedBad** (type=boolean, min=0, max=1): Both weighted and unweighted moments were invalid 
 
**[f]_base_SdssShape_instFlux** (unit=count, type=double, min=3.70E-01, max=2.43E+04): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_instFlux_xx_Cov** (unit=count*pixel^2, type=double, min=-1.85E+02, max=-4.35E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xx 
 
**[f]_base_SdssShape_instFlux_xy_Cov** (unit=count*pixel^2, type=double, min=-3.39E+01, max=-9.21E-04): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_xy 
 
**[f]_base_SdssShape_instFlux_yy_Cov** (unit=count*pixel^2, type=double, min=-2.73E+01, max=6.56E+01): uncertainty covariance between base_SdssShape_instFlux and base_SdssShape_yy 
 
**[f]_base_SdssShape_instFluxErr** (unit=count, type=double, min=7.46E-02, max=1.87E+01): 1-sigma instFlux uncertainty 
 
**[f]_base_SdssShape_psf_xx** (unit=pixel^2, type=double, min=3.36E+00, max=3.64E+00): adaptive moments of the PSF model at the object position 
 
**[f]_base_SdssShape_psf_xy** (unit=pixel^2, type=double, min=-1.40E-03, max=1.63E-02): adaptive moments of the PSF model at the object position 
 
**[f]_base_SdssShape_psf_yy** (unit=pixel^2, type=double, min=3.08E+00, max=3.33E+00): adaptive moments of the PSF model at the object position 
 
**[f]_base_SdssShape_x** (unit=pixel, type=double, min=8.01E+03, max=1.20E+04): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_xx** (unit=pixel^2, type=double, min=5.14E-02, max=3.39E+05): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_xxErr** (unit=pixel^2, type=double, min=2.66E-03, max=5.18E+02): Standard deviation of xx moment 
 
**[f]_base_SdssShape_xy** (unit=pixel^2, type=double, min=-5.49E+04, max=2.40E+04): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_xyErr** (unit=pixel^2, type=double, min=2.45E-03, max=8.10E+01): Standard deviation of xy moment 
 
**[f]_base_SdssShape_y** (unit=pixel, type=double, min=2.42E+04, max=2.45E+04): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_yy** (unit=pixel^2, type=double, min=8.33E-02, max=2.78E+05): elliptical Gaussian adaptive moments 
 
**[f]_base_SdssShape_yyErr** (unit=pixel^2, type=double, min=1.81E-03, max=1.84E+02): Standard deviation of yy moment 
 
**[f]_base_Variance_flag** (type=boolean, min=0, max=1): Set for any fatal failure 
 
**[f]_base_Variance_flag_badCentroid** (type=boolean, min=0, max=1): General Failure Flag 
 
**[f]_base_Variance_flag_emptyFootprint** (type=boolean, min=0, max=1): Set to True when the footprint has no usable pixels 
 
**[f]_base_Variance_value** (type=double, min=6.33E-04, max=8.31E-04): Variance at object position 
 
**[f]_good** (type=boolean, min=0, max=1): True if the source has no flagged pixels. 
 
**[f]_modelfit_CModel_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel 
 
**[f]_modelfit_CModel_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel 
 
**[f]_modelfit_CModel_dev_apCorr** (type=double, min=9.90E-01, max=9.92E-01): aperture correction applied to modelfit_CModel_dev 
 
**[f]_modelfit_CModel_dev_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_dev 
 
**[f]_modelfit_CModel_dev_flag** (type=boolean, min=0, max=1): flag set when the flux for the de Vaucouleur flux failed 
 
**[f]_modelfit_CModel_dev_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_dev 
 
**[f]_modelfit_CModel_dev_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_dev_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**[f]_modelfit_CModel_dev_flux_inner** (unit=count, type=double, min=-2.11E-01, max=3.15E+03): flux from the de Vaucouleur fit region, with no extrapolation 
 
**[f]_modelfit_CModel_dev_instFlux** (unit=count, type=double, min=-2.62E-01, max=3.75E+03): flux from the de Vaucouleur fit 
 
**[f]_modelfit_CModel_dev_instFluxErr** (unit=count, type=double, min=1.81E-01, max=6.61E+00): flux uncertainty from the de Vaucouleur fit 
 
**[f]_modelfit_CModel_exp_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_exp 
 
**[f]_modelfit_CModel_exp_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_exp 
 
**[f]_modelfit_CModel_exp_flag** (type=boolean, min=0, max=1): flag set when the flux for the exponential flux failed 
 
**[f]_modelfit_CModel_exp_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_exp 
 
**[f]_modelfit_CModel_exp_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_exp_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**[f]_modelfit_CModel_exp_flux_inner** (unit=count, type=double, min=-2.08E-01, max=3.15E+03): flux from the exponential fit region, with no extrapolation 
 
**[f]_modelfit_CModel_exp_instFlux** (unit=count, type=double, min=-2.28E-01, max=3.75E+03): flux from the exponential fit 
 
**[f]_modelfit_CModel_exp_instFluxErr** (unit=count, type=double, min=1.82E-01, max=4.15E+00): flux uncertainty from the exponential fit 
 
**[f]_modelfit_CModel_flag** (type=boolean, min=0, max=1): flag set if the final cmodel fit (or any previous fit) failed 
 
**[f]_modelfit_CModel_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel 
 
**[f]_modelfit_CModel_flag_badCentroid** (type=boolean, min=0, max=0): input centroid was not within the fit region (probably because it''s not within the Footprint) 
 
**[f]_modelfit_CModel_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_flag_noShapeletPsf** (type=boolean, min=0, max=0): the multishapelet fit to the PSF model did not succeed 
 
**[f]_modelfit_CModel_flag_region_maxArea** (type=boolean, min=0, max=0): number of pixels in fit region exceeded the region.maxArea value 
 
**[f]_modelfit_CModel_flag_region_maxBadPixelFraction** (type=boolean, min=0, max=1): the fraction of bad/clipped pixels in the fit region exceeded region.maxBadPixelFraction 
 
**[f]_modelfit_CModel_fracDev** (type=double, min=0.00E+00, max=1.00E+00): fraction of flux in de Vaucouleur component 
 
**[f]_modelfit_CModel_initial_apCorr** (type=double, min=9.91E-01, max=9.93E-01): aperture correction applied to modelfit_CModel_initial 
 
**[f]_modelfit_CModel_initial_apCorrErr** (type=double, min=0.00E+00, max=0.00E+00): standard deviation of aperture correction applied to modelfit_CModel_initial 
 
**[f]_modelfit_CModel_initial_flag** (type=boolean, min=0, max=1): flag set when the flux for the initial flux failed 
 
**[f]_modelfit_CModel_initial_flag_apCorr** (type=boolean, min=0, max=0): set if unable to aperture correct modelfit_CModel_initial 
 
**[f]_modelfit_CModel_initial_flag_badReference** (type=boolean, min=0, max=1): The original fit in the reference catalog failed. 
 
**[f]_modelfit_CModel_initial_flag_numericError** (type=boolean, min=0, max=0): numerical underflow or overflow in model evaluation; usually this means the prior was insufficient to regularize the fit, or all pixel values were zero. 
 
**[f]_modelfit_CModel_initial_flux_inner** (unit=count, type=double, min=-2.03E-01, max=3.15E+03): flux from the initial fit region, with no extrapolation 
 
**[f]_modelfit_CModel_initial_instFlux** (unit=count, type=double, min=-2.15E-01, max=3.76E+03): flux from the initial fit 
 
**[f]_modelfit_CModel_initial_instFluxErr** (unit=count, type=double, min=1.84E-01, max=2.83E+00): flux uncertainty from the initial fit 
 
**[f]_modelfit_CModel_instFlux** (unit=count, type=double, min=-2.28E-01, max=3.75E+03): flux from the final cmodel fit 
 
**[f]_modelfit_CModel_instFlux_inner** (unit=count, type=double, min=-2.08E-01, max=3.15E+03): flux within the fit region, with no extrapolation 
 
**[f]_modelfit_CModel_instFluxErr** (unit=count, type=double, min=1.81E-01, max=4.94E+00): flux uncertainty from the final cmodel fit 
 
**[f]_modelfit_CModel_objective** (type=double, min=0.00E+00, max=1.07E+01): -ln(likelihood) (chi^2) in cmodel fit 
