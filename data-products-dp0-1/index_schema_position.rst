.. _Data-Products-DP0-1-schema_position: 
.. list-table:: Schema for dp01_dc2_catalogs.position 
   :header-rows: 1 
  
   * - Column Name 
     - Unit 
     - Data Type 
     - Description 
   * - coord_ra 
     -  
     - double 
     - RA-coordinate 
   * - coord_dec 
     -  
     - double 
     - Decl-coordinate 
   * - extinction_bv 
     - mag 
     - double 
     - Milky Way dust extinction, E(B-V) 
   * - objectId 
     -  
     - long 
     - Unique id. 
   * - parent 
     -  
     - long 
     - unique ID of parent source 
   * - deblend_nChild 
     -  
     - int 
     - Number of children this object has (defaults to 0) 
   * - detect_isPatchInner 
     -  
     - boolean 
     - true if source is in the inner region of a coadd patch 
   * - detect_isPrimary 
     -  
     - boolean 
     - true if source has no children and is in the inner region of a coadd patch and is in the inner region of a coadd tract and is not "detected" in a pseudo-filter (see config.pseudoFilterList) 
   * - detect_isTractInner 
     -  
     - boolean 
     - true if source is in the inner region of a coadd tract 
   * - merge_footprint_sky 
     -  
     - boolean 
     - Detection footprint overlapped with a detection from filter sky 
   * - merge_peak_sky 
     -  
     - boolean 
     - Peak detected in filter sky 
   * - merge_footprint_[f] 
     -  
     - boolean 
     - Detection footprint overlapped with a detection from filter f 
   * - merge_measurement_[f] 
     -  
     - boolean 
     - Flag field set if the measurements here are from the f filter 
   * - merge_peak_[f] 
     -  
     - boolean 
     - Peak detected in filter f 
